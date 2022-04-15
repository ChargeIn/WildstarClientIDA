#include "../winhttp.h"

//----- (00000001403AE8C0) ----------------------------------------------------
__int64 __fastcall sub_1403AE8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
	unsigned __int64 v6; // rbx
	int v10; // r14d
	__int64 v11; // rax
	__m128* v12; // rbp
	unsigned __int64 v13; // rdx
	int* v14; // rcx
	__int64 result; // rax
	__int64 v16; // r13
	unsigned __int64 v17; // rdx
	int* v18; // rcx
	__m128* v19; // r12
	BOOL v20; // ecx
	__int64 v21; // rcx
	__int64 v22; // rax
	unsigned int v23; // eax
	int v24; // edx
	unsigned __int64 v25; // rdx
	int* v26; // rcx
	unsigned __int64 v27; // rdx
	int* v28; // rax
	int v29; // esi
	unsigned __int64 v30; // r8
	unsigned __int64 v31; // rdx
	int* v32; // rax
	__int64 v33; // rsi
	bool v34; // zf
	int v36; // [rsp+A8h] [rbp+10h] BYREF
	__int64 v37; // [rsp+B0h] [rbp+18h]
	__int64 v38; // [rsp+B8h] [rbp+20h]

	v37 = a3;
	v6 = 0i64;
	if (!a4 || (v10 = 0, !*(_DWORD*)(a4 + 20)))
		v10 = 1;
	v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 28));
	v12 = (__m128*)v11;
	if (!v11)
	{
		if (a4)
		{
			v13 = *(_QWORD*)(a4 + 8);
			v36 = 30;
			*(_DWORD*)(a4 + 16) = 30;
			*(_DWORD*)(a4 + 24) = 1;
			if (v13)
			{
				v14 = *(int**)a4;
				while (*v14 != 30)
				{
					if (*v14 <= 30)
					{
						++v6;
						++v14;
						if (v6 < v13)
							continue;
					}
					goto LABEL_11;
				}
			}
			else
			{
			LABEL_11:
				sub_1401C2E70((__int64*)a4, v6, &v36);
			}
		}
		return 30i64;
	}
	v16 = sub_1403ACD90(a1, *(_DWORD*)a2, v11);
	if (v16)
	{
		v19 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 36));
		v20 = *(__m128**)(qword_140C65898 + 120) == v12 || *(_QWORD*)(qword_140C65898 + 25744) == (_QWORD)v12;
		v34 = !v20;
		v21 = *(_QWORD*)(v16 + 112);
		v22 = 0i64;
		if (!v34)
			v22 = qword_140C65898;
		v38 = v22;
		v23 = *(_DWORD*)(v21 + 124);
		if (v23 <= 8)
		{
			v24 = 298;
			if (_bittest(&v24, v23))
			{
				if (*(_DWORD*)(v21 + 24) != 3 || v19)
				{
					if (!*(_DWORD*)(a2 + 36))
					{
						if (a4)
						{
							v27 = *(_QWORD*)(a4 + 8);
							v36 = 91;
							*(_DWORD*)(a4 + 16) = 91;
							*(_DWORD*)(a4 + 24) = 1;
							if (v27)
							{
								v28 = *(int**)a4;
								while (*v28 != 91)
								{
									if (*v28 <= 91)
									{
										++v6;
										++v28;
										if (v6 < v27)
											continue;
									}
									goto LABEL_46;
								}
							}
							else
							{
							LABEL_46:
								sub_1401C2E70((__int64*)a4, v6, &v36);
							}
						}
						return 91i64;
					}
				}
				else if (!sub_1403D90D0(qword_140C65898, v12[16].m128_i32[2]))
				{
					if (a4)
					{
						v25 = *(_QWORD*)(a4 + 8);
						v36 = 91;
						*(_DWORD*)(a4 + 16) = 91;
						*(_DWORD*)(a4 + 24) = 1;
						if (!v25)
						{
						LABEL_38:
							sub_1401C2E70((__int64*)a4, v6, &v36);
							return 91i64;
						}
						v26 = *(int**)a4;
						while (*v26 != 91)
						{
							if (*v26 <= 91)
							{
								++v6;
								++v26;
								if (v6 < v25)
									continue;
							}
							goto LABEL_38;
						}
					}
					return 91i64;
				}
			}
		}
		v29 = sub_1403AFA70(v16, (__int64)v12, (__int64)v19);
		if (v29 && v29 != 317)
		{
			if (a4)
			{
				v30 = *(_QWORD*)(a4 + 8);
				v36 = v29;
				*(_DWORD*)(a4 + 16) = v29;
				*(_DWORD*)(a4 + 24) = 1;
				v31 = 0i64;
				if (v30)
				{
					v32 = *(int**)a4;
					while (*v32 != v29)
					{
						if (*v32 <= v29)
						{
							++v31;
							++v32;
							if (v31 < v30)
								continue;
						}
						goto LABEL_56;
					}
				}
				else
				{
				LABEL_56:
					sub_1401C2E70((__int64*)a4, v31, &v36);
				}
			}
			if (v10)
				return (unsigned int)v29;
		}
		if ((unsigned int)(*(_DWORD*)(*(_QWORD*)(v16 + 112) + 124i64) - 7) <= 1
			&& (float)((float)((float)(*(float*)(a2 + 52) * *(float*)(a2 + 52))
				+ (float)(*(float*)(a2 + 56) * *(float*)(a2 + 56)))
				+ (float)(*(float*)(a2 + 60) * *(float*)(a2 + 60))) == 0.0)
		{
			if (a4)
				sub_1403B51F0(a4, 0xAEu);
			if (v10)
				return 174i64;
		}
		v33 = v38;
		result = sub_1403AFB10(a1, (_DWORD*)a2, v16, (__int64)v12, v38, v37, (__int64)v19, a4, a5, a6);
		if ((_DWORD)result)
		{
			v34 = (_DWORD)result == 317;
			if ((_DWORD)result == 317)
			{
			LABEL_69:
				LOBYTE(v6) = v34;
				result = sub_1403B0880(a1, (unsigned int*)a2, v16, v12, v33, v19, a4);
				if (!(_DWORD)result || (_DWORD)result == 317 || !v10)
				{
					if ((_DWORD)v6)
						return 317i64;
				}
				return result;
			}
			if (v10)
				return result;
		}
		v34 = (_DWORD)result == 317;
		goto LABEL_69;
	}
	if (a4)
	{
		v17 = *(_QWORD*)(a4 + 8);
		v36 = 4;
		*(_DWORD*)(a4 + 16) = 4;
		*(_DWORD*)(a4 + 24) = 1;
		if (v17)
		{
			v18 = *(int**)a4;
			while (*v18 != 4)
			{
				if (*v18 <= 4)
				{
					++v6;
					++v18;
					if (v6 < v17)
						continue;
				}
				goto LABEL_20;
			}
		}
		else
		{
		LABEL_20:
			sub_1401C2E70((__int64*)a4, v6, &v36);
		}
	}
	return 4i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

