#include "../winhttp.h"

//----- (0000000140501C00) ----------------------------------------------------
__int64 __fastcall sub_140501C00(_QWORD* a1)
{
	unsigned int* v2; // rax
	__int64 v4; // rcx
	unsigned int v5; // edx
	int* v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int16* v11; // rax
	unsigned int v12; // edx
	int v13; // eax
	__int64 v14; // rcx
	__int16* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int16* v18; // rax
	__int64 v19; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+28h] [rbp-20h]

	v2 = (unsigned int*)sub_140056AB0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = v2[2];
	if ((_DWORD)v4 != 15)
	{
	LABEL_23:
		v16 = sub_1401FA4A0(v4);
		if (v16)
		{
			v18 = sub_14034BDD0(v17, *(_DWORD*)(v16 + 16));
			v9 = (unsigned __int64*)sub_14018F0E0(&v19, (unsigned __int16*)v18)[1];
			if (!v9)
				goto LABEL_7;
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			goto LABEL_10;
		}
	LABEL_28:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = v2[4];
	if (!v5)
	{
		if (v2[3] == 1)
		{
			v11 = sub_14034BDD0(v4, 525647);
			v9 = (unsigned __int64*)sub_14018F0E0(&v19, (unsigned __int16*)v11)[1];
			if (!v9)
				goto LABEL_7;
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			goto LABEL_10;
		}
		v12 = v2[5];
		if (v12)
		{
			v13 = sub_1405057D0(v12);
			v15 = sub_14034BDD0(v14, v13);
			v9 = (unsigned __int64*)sub_14018F0E0(&v19, (unsigned __int16*)v15)[1];
			if (!v9)
				goto LABEL_7;
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			goto LABEL_10;
		}
		goto LABEL_23;
	}
	v6 = sub_1400B5DF0(qword_140C658F0, v5, 0i64);
	if (!v6)
		goto LABEL_28;
	v8 = sub_14034BDD0(v7, v6[119]);
	v9 = (unsigned __int64*)sub_14018F0E0(&v19, (unsigned __int16*)v8)[1];
	if (!v9)
	{
	LABEL_7:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_11;
	}
	v10 = -1i64;
	do
		++v10;
	while (*((_BYTE*)v9 + v10));
LABEL_10:
	sub_140058710((__int64)a1, v9, v10);
LABEL_11:
	if (v20)
	{
		sub_14018B900(v20, 0);
		return 1i64;
	}
	return 1i64;
}
// 140501CD5: conditional instruction was optimized away because ecx.4==F
// 140501D10: conditional instruction was optimized away because ecx.4==F
// 140501C6B: variable 'v7' is possibly undefined
// 140501D22: variable 'v14' is possibly undefined
// 140501D61: variable 'v17' is possibly undefined
// 140C658F0: using guessed type __int64 qword_140C658F0;

