#include "../winhttp.h"

//----- (0000000140834A70) ----------------------------------------------------
__int64 __fastcall sub_140834A70(__int64 a1, unsigned int* a2, int a3, __int64 a4, int a5, __int64 a6)
{
	__int64 v6; // rbx
	_DWORD* v9; // rdx
	__int64 v10; // r9
	unsigned int v11; // eax
	int v12; // r10d
	__int64 v13; // r8
	unsigned int v14; // edx
	__int64 v15; // rax
	__int64 v17; // rcx
	unsigned int v18; // eax
	unsigned int v19; // edx
	unsigned int v20; // r8d
	__int64 v21; // r10
	unsigned int v22; // eax
	int v23; // edx
	__int64 v26; // [rsp+30h] [rbp-38h] BYREF
	__int64 v27; // [rsp+38h] [rbp-30h]
	int v28; // [rsp+40h] [rbp-28h]
	__int64 v29; // [rsp+48h] [rbp-20h]
	unsigned int v30; // [rsp+50h] [rbp-18h]

	v6 = 0i64;
	v9 = *(_DWORD**)(a1 + 8);
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0;
	v29 = 0i64;
	v30 = 0;
	sub_140834DA0(a1, v9, a2, a3, (__int64)&v26);
	v10 = v26;
	if (v27 == v26)
	{
		*(_BYTE*)a6 = 4;
		goto LABEL_24;
	}
	if ((_DWORD)v29)
	{
		v11 = sub_1407DDB28();
		v10 = v26;
		v12 = v29;
		v13 = v27;
		v14 = v11 % (unsigned int)v29;
		v15 = v26;
		if (v26 == v27)
			goto LABEL_24;
		while (*(_WORD*)(*(_QWORD*)v15 + 8i64) != 100 || v14--)
		{
			v15 += 8i64;
			if (v15 == v27)
				goto LABEL_24;
		}
		v17 = a6;
		*(_BYTE*)a6 = 1;
	}
	else
	{
		if ((unsigned int)((v27 - v26) >> 3) > HIDWORD(v29))
		{
			v18 = sub_1407DDB28();
			v10 = v26;
			v19 = v18 % v30;
			v15 = v26;
			if (v26 == v27)
				goto LABEL_24;
			while (1)
			{
				v20 = *(unsigned __int16*)(*(_QWORD*)v15 + 8i64);
				if (v19 < v20)
					break;
				v15 += 8i64;
				v19 -= v20;
				if (v15 == v27)
					goto LABEL_24;
			}
			v21 = (v27 - v26) >> 3;
			*(_BYTE*)a6 = 2;
			*(_DWORD*)(a6 + 8) = v21;
			*(_DWORD*)(a6 + 4) = v21 - HIDWORD(v29);
			goto LABEL_23;
		}
		v22 = sub_1407DDB28();
		v10 = v26;
		v12 = HIDWORD(v29);
		v13 = v27;
		v23 = v22 % HIDWORD(v29);
		v15 = v26;
		if (v26 == v27)
			goto LABEL_24;
		while (*(_WORD*)(*(_QWORD*)v15 + 8i64) || v23--)
		{
			v15 += 8i64;
			if (v15 == v27)
				goto LABEL_24;
		}
		v17 = a6;
		*(_BYTE*)a6 = 3;
	}
	*(_DWORD*)(v17 + 4) = v12;
	*(_DWORD*)(v17 + 8) = (v13 - v10) >> 3;
LABEL_23:
	v6 = *(_QWORD*)v15;
LABEL_24:
	if (v10)
	{
		v27 = v10;
		sub_140881720(dword_140C10F20, v10);
	}
	return v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

