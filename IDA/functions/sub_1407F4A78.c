#include "../winhttp.h"

//----- (00000001407F4A78) ----------------------------------------------------
__int64 __fastcall sub_1407F4A78(_DWORD* a1, int* a2, const WCHAR* a3, int a4, int a5, char a6)
{
	unsigned int v6; // edi
	int v7; // esi
	DWORD v9; // r14d
	char v10; // r12
	DWORD v12; // r13d
	int v13; // r15d
	int v14; // ecx
	int v15; // eax
	int v16; // edx
	int v17; // eax
	int v18; // eax
	int v19; // eax
	void* v20; // rax
	int v21; // eax
	DWORD FileType; // eax
	int LastError; // ebx
	char v24; // r12
	int v25; // ecx
	int v26; // ecx
	bool v27; // zf
	int v28; // r12d
	unsigned int v29; // eax
	int v30; // r14d
	int v31; // eax
	int v32; // eax
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rdx
	__int64 v38; // rcx
	__int64 v39; // rax
	int v40; // eax
	int v41; // [rsp+48h] [rbp-41h]
	int dwShareMode; // [rsp+4Ch] [rbp-3Dh]
	int v43; // [rsp+50h] [rbp-39h]
	char v44; // [rsp+54h] [rbp-35h]
	unsigned int v45; // [rsp+58h] [rbp-31h]
	WCHAR v46; // [rsp+5Ch] [rbp-2Dh] BYREF
	LARGE_INTEGER v47; // [rsp+60h] [rbp-29h] BYREF
	int v48; // [rsp+68h] [rbp-21h] BYREF
	HANDLE hObject; // [rsp+70h] [rbp-19h]
	struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+78h] [rbp-11h] BYREF
	char v53; // [rsp+F0h] [rbp+67h]

	v6 = 0;
	v7 = a4;
	SecurityAttributes.nLength = 24;
	v9 = 1;
	v48 = 0;
	v53 = 0;
	SecurityAttributes.lpSecurityDescriptor = 0i64;
	if ((a4 & 0x80u) == 0)
	{
		SecurityAttributes.bInheritHandle = 1;
		v10 = 0;
	}
	else
	{
		SecurityAttributes.bInheritHandle = 0;
		v10 = 16;
	}
	if ((unsigned int)sub_1407F7EE8(&v48))
	{
		sub_1407DC390();
		JUMPOUT(0x1407F5232i64);
	}
	if ((v7 & 0x8000) == 0 && ((v7 & 0x74000) != 0 || v48 != 0x8000))
		v10 |= 0x80u;
	switch (v7 & 3)
	{
	case 0:
		v12 = 0x80000000;
		goto LABEL_18;
	case 1:
		if ((v7 & 8) == 0 || (v7 & 0x70000) == 0)
		{
			v12 = 0x40000000;
			goto LABEL_18;
		}
		break;
	case 2:
		break;
	default:
	LABEL_12:
		*(_DWORD*)sub_1407DE140() = 0;
		*a2 = -1;
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	v12 = -1073741824;
LABEL_18:
	v41 = v12;
	v13 = 2;
	switch (a5)
	{
	case 16:
		v14 = 0;
		break;
	case 32:
		v14 = 1;
		break;
	case 48:
		v14 = 2;
		break;
	case 64:
		v14 = 3;
		break;
	case 128:
		v14 = v12 == 0x80000000;
		break;
	default:
		goto LABEL_12;
	}
	dwShareMode = v14;
	v15 = v7 & 0x700;
	if ((v7 & 0x700) == 0)
		goto LABEL_40;
	switch (v15)
	{
	case 256:
		v9 = 4;
		goto LABEL_41;
	case 512:
	LABEL_38:
		v9 = 5;
		goto LABEL_41;
	case 768:
		v9 = 2;
		goto LABEL_41;
	case 1024:
	LABEL_40:
		v9 = 3;
		goto LABEL_41;
	case 1280:
		goto LABEL_41;
	case 1536:
		goto LABEL_38;
	}
	if (v15 != 1792)
		goto LABEL_12;
LABEL_41:
	v16 = 128;
	v17 = 0;
	v45 = 128;
	v43 = 0;
	if ((v7 & 0x100) != 0)
	{
		if ((a6 & ~byte_140C5F520 & 0x80u) == 0)
			v16 = 1;
		v17 = 0;
		v45 = v16;
	}
	if ((v7 & 0x40) != 0)
	{
		v12 |= 0x10000u;
		v17 = 0x4000000;
		dwShareMode = v14 | 4;
		v43 = 0x4000000;
		v41 = v12;
	}
	if ((v7 & 0x1000) != 0)
		v45 = v16 | 0x100;
	if ((v7 & 0x2000) != 0)
	{
		v17 |= 0x2000000u;
		v43 = v17;
	}
	if ((v7 & 0x20) != 0)
	{
		v18 = v17 | 0x8000000;
	}
	else
	{
		if ((v7 & 0x10) == 0)
			goto LABEL_56;
		v18 = v17 | 0x10000000;
	}
	v43 = v18;
LABEL_56:
	v19 = sub_1407F5300();
	*a2 = v19;
	if (v19 == -1)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*a2 = -1;
		*(_DWORD*)sub_1407DE1B0() = 24;
		return *(unsigned int*)sub_1407DE1B0();
	}
	*a1 = 1;
	v20 = (void*)sub_1407F48A8(a3, v12, dwShareMode, &SecurityAttributes, v9, v45, v43);
	hObject = v20;
	if (v20 != (void*)-1i64
		|| (v12 & 0xC0000000) == -1073741824
		&& (v7 & 1) != 0
		&& (v41 = v12 & 0x7FFFFFFF,
			v20 = (void*)sub_1407F48A8(a3, v12 & 0x7FFFFFFF, dwShareMode, &SecurityAttributes, v9, v45, v43),
			hObject = v20,
			v20 != (void*)-1i64))
	{
		FileType = GetFileType(v20);
		switch (FileType)
		{
		case 0u:
			*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 8) &= ~1u;
			LastError = GetLastError();
			sub_1407DE160(LastError);
			CloseHandle(hObject);
			if (!LastError)
				*(_DWORD*)sub_1407DE1B0() = 13;
			return *(unsigned int*)sub_1407DE1B0();
		case 2u:
			v10 |= 0x40u;
			break;
		case 3u:
			v10 |= 8u;
			break;
		}
		sub_1407F5618(*a2, hObject);
		v24 = v10 | 1;
		*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 8) = v24;
		*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 56) &= 0x80u;
		v44 = v24 & 0x48;
		if ((v24 & 0x48) == 0)
		{
			if (v24 >= 0)
				goto LABEL_125;
			if ((v7 & 2) != 0)
			{
				v47 = sub_1407F1094(*a2, (LARGE_INTEGER)-1i64, 2u);
				if (v47.QuadPart == -1)
				{
					if (*(_DWORD*)sub_1407DE140() != 131)
					{
					LABEL_76:
						sub_1407EEE58(*a2);
						return *(unsigned int*)sub_1407DE1B0();
					}
				}
				else
				{
					v25 = *a2;
					v46 = 0;
					if (!(unsigned int)sub_1407F7684(v25, &v46, 1u) && v46 == 26 && (unsigned int)sub_1407F73D0(*a2, v47) == -1
						|| sub_1407F1094(*a2, 0i64, 0) == -1i64)
					{
						goto LABEL_76;
					}
				}
			}
		}
		if (v24 >= 0)
			goto LABEL_125;
		if ((v7 & 0x74000) == 0)
		{
			if ((v48 & 0x74000) != 0)
				v7 |= v48 & 0x74000;
			else
				v7 |= 0x4000u;
		}
		v26 = v7 & 0x74000;
		if ((v7 & 0x74000) != 0x4000)
		{
			if (((v26 - 0x10000) & 0xFFFFBFFF) != 0)
			{
				if (((v26 - 0x20000) & 0xFFFFBFFF) != 0)
				{
					if (((v26 - 0x40000) & 0xFFFFBFFF) == 0)
						v53 = 1;
				LABEL_94:
					if ((v7 & 0x70000) != 0)
					{
						v27 = (v24 & 0x40) == 0;
						v28 = v41;
						v47.LowPart = 0;
						if (!v27)
							goto LABEL_126;
						v29 = v41 & 0xC0000000;
						if ((v41 & 0xC0000000) == 0x40000000)
						{
							if (v9 > 2 && v9 <= 4 && *(_QWORD*)&sub_1407F1094(*a2, 0i64, 2u))
								goto LABEL_119;
						}
						else
						{
							if (v29 == 0x80000000)
							{
							LABEL_106:
								v31 = sub_1407F7684(*a2, (WCHAR*)&v47, 3u);
								if (v31 == -1)
									goto LABEL_76;
								if (v31 != 2)
								{
									if (v31 != 3)
										goto LABEL_119;
									if (v47.LowPart == 12565487)
									{
										v53 = 1;
										goto LABEL_126;
									}
								}
								if (LOWORD(v47.LowPart) == 65534)
								{
									sub_1407EEE58(*a2);
									*(_DWORD*)sub_1407DE1B0() = 22;
									return 22;
								}
								if (LOWORD(v47.LowPart) == 65279)
								{
									if (sub_1407F1094(*a2, (LARGE_INTEGER)2i64, 0) == -1i64)
										goto LABEL_76;
									v53 = 2;
								LABEL_126:
									v33 = *a2;
									v34 = 88 * (v33 & 0x1F);
									v35 = qword_140C60410[v33 >> 5];
									*(_BYTE*)(v35 + v34 + 56) &= 0x80u;
									*(_BYTE*)(v35 + v34 + 56) |= v53 & 0x7F;
									v36 = *a2;
									v37 = 88 * (v36 & 0x1F);
									v38 = qword_140C60410[v36 >> 5];
									*(_BYTE*)(v38 + v37 + 56) &= ~0x80u;
									*(_BYTE*)(v38 + v37 + 56) |= BYTE2(v7) << 7;
									if (!v44 && (v7 & 8) != 0)
										*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 8) |= 0x20u;
									if ((v28 & 0xC0000000) != -1073741824 || (v7 & 1) == 0)
										return v6;
									CloseHandle(hObject);
									v39 = sub_1407F48A8(a3, v28 & 0x7FFFFFFF, dwShareMode, &SecurityAttributes, 3u, v45, v43);
									if (v39 != -1)
									{
										*(_QWORD*)(88i64 * (*a2 & 0x1F) + qword_140C60410[(__int64)*a2 >> 5]) = v39;
										return v6;
									}
									v40 = GetLastError();
									sub_1407DE160(v40);
									*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 8) &= ~1u;
									sub_1407F54F8(*a2);
									return *(unsigned int*)sub_1407DE1B0();
								}
							LABEL_119:
								if (sub_1407F1094(*a2, 0i64, 0) == -1i64)
									goto LABEL_76;
								goto LABEL_126;
							}
							if (v29 != -1073741824)
								goto LABEL_126;
							if (v9 > 2 && v9 <= 4 && *(_QWORD*)&sub_1407F1094(*a2, 0i64, 2u))
							{
								if (sub_1407F1094(*a2, 0i64, 0) == -1i64)
									goto LABEL_76;
								goto LABEL_106;
							}
						}
						v30 = 0;
						if (v53 == 1)
						{
							v47.LowPart = 12565487;
							v13 = 3;
						LABEL_122:
							while (1)
							{
								v32 = sub_1407EEF4C(*a2, (_BYTE*)&v47 + v30, v13 - v30);
								if (v32 == -1)
									goto LABEL_76;
								v30 += v32;
								if (v13 <= v30)
									goto LABEL_126;
							}
						}
						if (v53 == 2)
						{
							v47.LowPart = 65279;
							goto LABEL_122;
						}
						goto LABEL_126;
					}
				LABEL_125:
					v28 = v41;
					goto LABEL_126;
				}
			}
			else if ((v7 & 0x301) != 769)
			{
				goto LABEL_94;
			}
			v53 = 2;
			goto LABEL_94;
		}
		v53 = 0;
		goto LABEL_94;
	}
	*(_BYTE*)(qword_140C60410[(__int64)*a2 >> 5] + 88i64 * (*a2 & 0x1F) + 8) &= ~1u;
	v21 = GetLastError();
	sub_1407DE160(v21);
	return *(unsigned int*)sub_1407DE1B0();
}
// 1407F522D: control flows out of bounds to 1407F5232
// 1407F4F88: conditional instruction was optimized away because r14d.4 is in (1..5)
// 1407F4F9D: conditional instruction was optimized away because r14d.4==5
// 1407F5077: conditional instruction was optimized away because r14d.4 is in (1..5)
// 140C5F520: using guessed type char byte_140C5F520;
// 140C60410: using guessed type __int64 qword_140C60410[64];

