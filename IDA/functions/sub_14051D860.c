#include "../winhttp.h"

//----- (000000014051D860) ----------------------------------------------------
__int64 __fastcall sub_14051D860(__int64 a1, _QWORD* a2)
{
	unsigned int v4; // r8d
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbp
	unsigned int v10; // eax
	unsigned int v11; // r14d
	_DWORD* v12; // rsi
	unsigned int v13; // eax
	unsigned int v14; // r15d
	__int64 v15; // rcx
	__int64 v16; // rcx
	_QWORD* v17; // rsi
	char* v18; // rdx
	_DWORD* v19; // rax
	__int64 v20; // rcx
	_QWORD* v21; // rsi
	char* v22; // rdx
	_DWORD* v23; // rax
	__int64 v24; // rcx
	__int64 v26; // [rsp+20h] [rbp-68h] BYREF
	__int64 v27; // [rsp+28h] [rbp-60h]
	__int64 v28; // [rsp+30h] [rbp-58h]
	__int64 v29; // [rsp+38h] [rbp-50h]
	__int64 v30; // [rsp+40h] [rbp-48h] BYREF
	__int64 v31; // [rsp+48h] [rbp-40h]

	*(_QWORD*)(a1 + 16) = -1i64;
	v4 = 0;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	if (v5)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a2)
		{
			v7 = ++v4;
			if (v4 >= v5)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = v8 + 384;
	v10 = sub_1400F26A0(v8 + 384, 3);
	v11 = v10;
	if (v10 == -1)
		sub_140056570(a2, 3u, "must be a valid type");
	v12 = (_DWORD*)sub_140242080(v10);
	if (!v12)
		sub_140056570(a2, 3u, "must be a valid type");
	v13 = sub_1400F26A0(v9, 4);
	v14 = v13;
	if (v13 == -1 || (v15 = sub_1402424C0(v13)) == 0)
		sub_140056570(a2, 4u, "must be a valid subtype");
	if (*(_DWORD*)(v15 + 4) != *v12)
		sub_140056570(a2, 4u, "subtype is not valid for type");
	v16 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v16 || !*(_DWORD*)(v16 + 3408))
		sub_140056830(a2, (unsigned __int64*)"no player unit exists");
	v17 = *(_QWORD**)(v9 + 16);
	v18 = (char*)sub_14018F0E0(&v30, 0i64)[1];
	v19 = (_DWORD*)(v17[3] + 64i64);
	if ((unsigned __int64)v19 < v17[2] && v19 != dword_140A12138 && *(int*)(v17[3] + 72i64) > 0)
		v18 = (char*)sub_140056BB0(v17, 5u, 0i64);
	sub_14018F2D0(&v26, v18);
	if (v31)
		sub_14018B900(v31, 0);
	v20 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 32) = v27;
	*(_QWORD*)(a1 + 40) = v28;
	*(_QWORD*)(a1 + 48) = v29;
	if (v20)
		sub_14018B900(v20, 0);
	if ((unsigned __int64)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 1) > 0x64)
		*(_WORD*)(*(_QWORD*)(a1 + 32) + 200i64) = 0;
	if (!*(_QWORD*)(a1 + 32))
		sub_140056570(a2, 5u, "valid text subject required");
	v21 = *(_QWORD**)(v9 + 16);
	v22 = (char*)sub_14018F0E0(&v30, 0i64)[1];
	v23 = (_DWORD*)(v21[3] + 80i64);
	if ((unsigned __int64)v23 < v21[2] && v23 != dword_140A12138 && *(int*)(v21[3] + 88i64) > 0)
		v22 = (char*)sub_140056BB0(v21, 6u, 0i64);
	sub_14018F2D0(&v26, v22);
	if (v31)
		sub_14018B900(v31, 0);
	v24 = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(a1 + 64) = v27;
	*(_QWORD*)(a1 + 72) = v28;
	*(_QWORD*)(a1 + 80) = v29;
	if (v24)
		sub_14018B900(v24, 0);
	if ((unsigned __int64)((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 1) > 0x1F4)
		*(_WORD*)(*(_QWORD*)(a1 + 64) + 1000i64) = 0;
	if (!*(_QWORD*)(a1 + 64))
		sub_140056570(a2, 6u, "valid text body required");
	*(_DWORD*)(a1 + 16) = v11;
	*(_DWORD*)(a1 + 20) = v14;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

