#include "../winhttp.h"

//----- (00000001401A9A90) ----------------------------------------------------
__int64 __fastcall sub_1401A9A90(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int v4; // esi
	bool v5; // zf
	__int64 v6; // r8
	__int64 v7; // r9
	int v8; // eax
	char v9; // dl
	int v10; // eax
	char v11; // dl
	__int64 v12; // rax
	__int64 v13; // r8
	char* v14; // rdx
	int v15; // ecx
	int v16; // eax
	unsigned int v17; // r8d
	__int64 v18; // rcx
	unsigned int v19; // r8d
	__int16 v20; // r8
	__int16 v21; // r8
	__int64 v22; // rax
	unsigned int v23; // r10d
	unsigned int v24; // ecx
	unsigned int v25; // ecx
	char* v26; // rdx
	int v27; // eax
	unsigned int v28; // r8d
	unsigned int v29; // r8d
	char* v30; // rdx
	int v31; // eax
	unsigned int v32; // r8d
	unsigned int v33; // edx
	unsigned int v34; // edx
	char* v35; // rax
	int v36; // eax
	__int64 v37; // rcx
	int v38; // ebp
	unsigned int v39; // eax
	unsigned int v40; // eax
	char* v41; // rdx
	int v42; // eax
	unsigned int v43; // r8d
	unsigned int v44; // edx
	unsigned int v45; // edx
	char* v46; // rax
	int v47; // eax
	__int64 v48; // rcx
	int v49; // ebp
	unsigned int v50; // eax
	unsigned int v51; // eax
	char* v52; // rdx
	int v53; // eax
	unsigned int v54; // ecx
	int v55; // eax
	int v56; // eax
	int v57; // eax
	int v58; // ecx
	__int16 v59; // r8
	__int16 v60; // r8
	int v61; // eax

	v1 = *(_QWORD*)(a1 + 40);
	if (!v1)
		return 4294967294i64;
	if (!*(_QWORD*)(a1 + 16) || !*(_QWORD*)a1 && *(_DWORD*)(a1 + 8))
	{
		*(_QWORD*)(a1 + 32) = aStreamError;
		return 4294967294i64;
	}
	if (!*(_DWORD*)(a1 + 24))
	{
		*(_QWORD*)(a1 + 32) = aBufferError;
		return 4294967291i64;
	}
	v4 = 0;
	v5 = *(_DWORD*)(v1 + 8) == 42;
	*(_QWORD*)v1 = a1;
	*(_DWORD*)(v1 + 64) = 4;
	if (v5)
	{
		if (*(_DWORD*)(v1 + 44) == 2)
		{
			*(_DWORD*)(a1 + 76) = 0;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = 31;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = -117;
			*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = 8;
			v6 = *(_QWORD*)(v1 + 48);
			v7 = *(unsigned int*)(v1 + 40);
			if (v6)
			{
				*(_BYTE*)(v7 + *(_QWORD*)(v1 + 16)) = (*(_DWORD*)v6 != 0)
					+ (*(_QWORD*)(v6 + 16) != 0i64 ? 4 : 0)
					+ (*(_QWORD*)(v6 + 32) != 0i64 ? 8 : 0)
					+ (*(_DWORD*)(v6 + 60) != 0 ? 2 : 0)
					+ (*(_QWORD*)(v6 + 48) != 0i64 ? 0x10 : 0);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48) + 4i64);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48) + 5i64);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48) + 6i64);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48) + 7i64);
				v10 = *(_DWORD*)(v1 + 172);
				++* (_DWORD*)(v1 + 40);
				if (v10 == 9)
				{
					v11 = 2;
				}
				else if (*(int*)(v1 + 176) >= 2 || (v11 = 0, v10 < 2))
				{
					v11 = 4;
				}
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = v11;
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48)
					+ 12i64);
				v12 = *(_QWORD*)(v1 + 48);
				v13 = *(unsigned int*)(v1 + 40);
				if (*(_QWORD*)(v12 + 16))
				{
					*(_BYTE*)(v13 + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(v12 + 24);
					*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(_QWORD*)(v1 + 48)
						+ 25i64);
					LODWORD(v13) = ++ * (_DWORD*)(v1 + 40);
				}
				if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64))
				{
					v14 = *(char**)(v1 + 16);
					if (!v14)
					{
						*(_DWORD*)(a1 + 76) = 0;
						*(_DWORD*)(v1 + 56) = 0;
						*(_DWORD*)(v1 + 8) = 69;
						goto LABEL_39;
					}
					*(_DWORD*)(a1 + 76) = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v14, v13);
				}
				*(_DWORD*)(v1 + 56) = 0;
				*(_DWORD*)(v1 + 8) = 69;
			}
			else
			{
				*(_BYTE*)(v7 + *(_QWORD*)(v1 + 16)) = 0;
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = 0;
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = 0;
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = 0;
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = 0;
				v8 = *(_DWORD*)(v1 + 172);
				++* (_DWORD*)(v1 + 40);
				if (v8 == 9)
				{
					v9 = 2;
				}
				else if (*(int*)(v1 + 176) >= 2 || (v9 = 0, v8 < 2))
				{
					v9 = 4;
				}
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = v9;
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = 11;
				*(_DWORD*)(v1 + 8) = 113;
			}
		}
		else
		{
			if (*(int*)(v1 + 176) >= 2 || (v15 = *(_DWORD*)(v1 + 172), v15 < 2))
			{
				v16 = 0;
			}
			else if (v15 >= 6)
			{
				v16 = (v15 != 6) + 2;
			}
			else
			{
				v16 = 1;
			}
			v17 = (v16 << 6) | (((*(_DWORD*)(v1 + 72) - 8) << 12) + 2048);
			if (*(_DWORD*)(v1 + 148))
				v17 |= 0x20u;
			v18 = *(unsigned int*)(v1 + 40);
			*(_DWORD*)(v1 + 8) = 113;
			v19 = 31 * (v17 / 0x1F + 1);
			*(_BYTE*)(v18 + *(_QWORD*)(v1 + 16)) = BYTE1(v19);
			*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = v19;
			++* (_DWORD*)(v1 + 40);
			if (*(_DWORD*)(v1 + 148))
			{
				v20 = *(_WORD*)(a1 + 78);
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = HIBYTE(v20);
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = v20;
				v21 = *(_WORD*)(a1 + 76);
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = HIBYTE(v21);
				*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = v21;
			}
			*(_DWORD*)(a1 + 76) = 1;
		}
	}
LABEL_39:
	if (*(_DWORD*)(v1 + 8) != 69)
		goto LABEL_60;
	v22 = *(_QWORD*)(v1 + 48);
	if (!*(_QWORD*)(v22 + 16))
		goto LABEL_59;
	v23 = *(_DWORD*)(v1 + 40);
	if (*(_DWORD*)(v1 + 56) < (unsigned int)*(unsigned __int16*)(v22 + 24))
	{
		do
		{
			v24 = *(_DWORD*)(v1 + 40);
			if (v24 == *(_DWORD*)(v1 + 24))
			{
				if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64) && v24 > v23)
				{
					v25 = v24 - v23;
					v26 = (char*)(*(_QWORD*)(v1 + 16) + v23);
					if (v26)
						v27 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v26, v25);
					else
						v27 = 0;
					*(_DWORD*)(a1 + 76) = v27;
				}
				sub_1401A9A10(a1);
				v24 = *(_DWORD*)(v1 + 40);
				v23 = v24;
				if (v24 == *(_DWORD*)(v1 + 24))
					break;
			}
			*(_BYTE*)(v24 + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(*(unsigned int*)(v1 + 56)
				+ *(_QWORD*)(*(_QWORD*)(v1 + 48) + 16i64));
			++* (_DWORD*)(v1 + 40);
			++* (_DWORD*)(v1 + 56);
		} while (*(_DWORD*)(v1 + 56) < (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v1 + 48) + 24i64));
	}
	if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64))
	{
		v28 = *(_DWORD*)(v1 + 40);
		if (v28 > v23)
		{
			v29 = v28 - v23;
			v30 = (char*)(*(_QWORD*)(v1 + 16) + v23);
			if (v30)
				v31 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v30, v29);
			else
				v31 = 0;
			*(_DWORD*)(a1 + 76) = v31;
		}
	}
	if (*(_DWORD*)(v1 + 56) == *(_DWORD*)(*(_QWORD*)(v1 + 48) + 24i64))
	{
		*(_DWORD*)(v1 + 56) = 0;
	LABEL_59:
		*(_DWORD*)(v1 + 8) = 73;
	}
LABEL_60:
	if (*(_DWORD*)(v1 + 8) == 73)
	{
		if (!*(_QWORD*)(*(_QWORD*)(v1 + 48) + 32i64))
		{
		LABEL_82:
			*(_DWORD*)(v1 + 8) = 91;
			goto LABEL_83;
		}
		v32 = *(_DWORD*)(v1 + 40);
		while (1)
		{
			v33 = *(_DWORD*)(v1 + 40);
			if (v33 == *(_DWORD*)(v1 + 24))
			{
				if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64) && v33 > v32)
				{
					v34 = v33 - v32;
					v35 = (char*)(*(_QWORD*)(v1 + 16) + v32);
					if (v35)
						v36 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v35, v34);
					else
						v36 = 0;
					*(_DWORD*)(a1 + 76) = v36;
				}
				sub_1401A9A10(a1);
				v33 = *(_DWORD*)(v1 + 40);
				v32 = v33;
				if (v33 == *(_DWORD*)(v1 + 24))
					break;
			}
			v37 = *(unsigned int*)(v1 + 56);
			v38 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 32i64) + v37);
			*(_DWORD*)(v1 + 56) = v37 + 1;
			*(_BYTE*)(v33 + *(_QWORD*)(v1 + 16)) = v38;
			++* (_DWORD*)(v1 + 40);
			if (!v38)
				goto LABEL_74;
		}
		v38 = 1;
	LABEL_74:
		if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64))
		{
			v39 = *(_DWORD*)(v1 + 40);
			if (v39 > v32)
			{
				v40 = v39 - v32;
				v41 = (char*)(*(_QWORD*)(v1 + 16) + v32);
				if (v41)
					v42 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v41, v40);
				else
					v42 = 0;
				*(_DWORD*)(a1 + 76) = v42;
			}
		}
		if (!v38)
		{
			*(_DWORD*)(v1 + 56) = 0;
			goto LABEL_82;
		}
	}
LABEL_83:
	if (*(_DWORD*)(v1 + 8) == 91)
	{
		if (!*(_QWORD*)(*(_QWORD*)(v1 + 48) + 48i64))
			goto LABEL_104;
		v43 = *(_DWORD*)(v1 + 40);
		while (1)
		{
			v44 = *(_DWORD*)(v1 + 40);
			if (v44 == *(_DWORD*)(v1 + 24))
			{
				if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64) && v44 > v43)
				{
					v45 = v44 - v43;
					v46 = (char*)(*(_QWORD*)(v1 + 16) + v43);
					if (v46)
						v47 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v46, v45);
					else
						v47 = 0;
					*(_DWORD*)(a1 + 76) = v47;
				}
				sub_1401A9A10(a1);
				v44 = *(_DWORD*)(v1 + 40);
				v43 = v44;
				if (v44 == *(_DWORD*)(v1 + 24))
					break;
			}
			v48 = *(unsigned int*)(v1 + 56);
			v49 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 48i64) + v48);
			*(_DWORD*)(v1 + 56) = v48 + 1;
			*(_BYTE*)(v44 + *(_QWORD*)(v1 + 16)) = v49;
			++* (_DWORD*)(v1 + 40);
			if (!v49)
				goto LABEL_97;
		}
		v49 = 1;
	LABEL_97:
		if (*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64))
		{
			v50 = *(_DWORD*)(v1 + 40);
			if (v50 > v43)
			{
				v51 = v50 - v43;
				v52 = (char*)(*(_QWORD*)(v1 + 16) + v43);
				if (v52)
					v53 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), v52, v51);
				else
					v53 = 0;
				*(_DWORD*)(a1 + 76) = v53;
			}
		}
		if (!v49)
			LABEL_104:
		*(_DWORD*)(v1 + 8) = 103;
	}
	if (*(_DWORD*)(v1 + 8) == 103)
	{
		if (!*(_DWORD*)(*(_QWORD*)(v1 + 48) + 60i64))
		{
		LABEL_111:
			*(_DWORD*)(v1 + 8) = 113;
			goto LABEL_112;
		}
		if ((unsigned int)(*(_DWORD*)(v1 + 40) + 2) > *(_DWORD*)(v1 + 24))
			sub_1401A9A10(a1);
		v54 = *(_DWORD*)(v1 + 40);
		if (v54 + 2 <= *(_DWORD*)(v1 + 24))
		{
			*(_BYTE*)(v54 + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 76);
			*(_BYTE*)((unsigned int)++ * (_DWORD*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 77);
			++* (_DWORD*)(v1 + 40);
			*(_DWORD*)(a1 + 76) = 0;
			goto LABEL_111;
		}
	}
LABEL_112:
	if (*(_DWORD*)(v1 + 40))
	{
		sub_1401A9A10(a1);
		if (!*(_DWORD*)(a1 + 24))
			goto LABEL_139;
	}
	v55 = *(_DWORD*)(v1 + 8);
	if (v55 == 666)
	{
		if (*(_DWORD*)(a1 + 8))
		{
			*(_QWORD*)(a1 + 32) = aBufferError;
			return 4294967291i64;
		}
	}
	else if (*(_DWORD*)(a1 + 8))
	{
	LABEL_120:
		v56 = *(_DWORD*)(v1 + 176);
		if (v56 == 2)
		{
			v57 = sub_1401AB8E0((__int64*)v1);
		}
		else if (v56 == 3)
		{
			v57 = sub_1401AB5B0((__int64*)v1);
		}
		else
		{
			v57 = ((__int64(__fastcall*)(__int64, int)) * (&funcs_1401AA19E + 2 * *(int*)(v1 + 172)))(v1, 4);
		}
		if ((unsigned int)(v57 - 2) <= 1)
			*(_DWORD*)(v1 + 8) = 666;
		if ((v57 & 0xFFFFFFFD) != 0)
		{
			if (v57 != 1)
				goto LABEL_130;
			sub_1401CCAA0(v1, 0i64, 0, 0);
			sub_1401A9A10(a1);
			if (*(_DWORD*)(a1 + 24))
				goto LABEL_130;
		}
		else if (*(_DWORD*)(a1 + 24))
		{
			return 0i64;
		}
	LABEL_139:
		*(_DWORD*)(v1 + 64) = -1;
		return 0i64;
	}
	if (*(_DWORD*)(v1 + 156) || v55 != 666)
		goto LABEL_120;
LABEL_130:
	v58 = *(_DWORD*)(v1 + 44);
	if (v58 <= 0)
		return 1i64;
	if (v58 == 2)
	{
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 76);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 77);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 78);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 79);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 12);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 13);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 14);
		*(_BYTE*)(*(unsigned int*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = *(_BYTE*)(a1 + 15);
	}
	else
	{
		v59 = *(_WORD*)(a1 + 78);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = HIBYTE(v59);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = v59;
		v60 = *(_WORD*)(a1 + 76);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(v1 + 40))++ + *(_QWORD*)(v1 + 16)) = HIBYTE(v60);
		*(_BYTE*)(*(unsigned int*)(v1 + 40) + *(_QWORD*)(v1 + 16)) = v60;
	}
	++* (_DWORD*)(v1 + 40);
	sub_1401A9A10(a1);
	v61 = *(_DWORD*)(v1 + 44);
	if (v61 > 0)
		*(_DWORD*)(v1 + 44) = -v61;
	LOBYTE(v4) = *(_DWORD*)(v1 + 40) == 0;
	return v4;
}
// 140A454A8: using guessed type __int64 (__fastcall *funcs_1401AA19E)();

