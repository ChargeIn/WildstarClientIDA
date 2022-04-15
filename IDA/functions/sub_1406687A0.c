//----- (00000001406687A0) ----------------------------------------------------
__int64 __fastcall sub_1406687A0(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	signed int v4; // r10d
	int v5; // edi
	unsigned int v6; // r10d
	__int64 v7; // r11
	unsigned int v8; // r10d
	__int64 v9; // r11
	__int64 v10; // rcx
	__int64 v11; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && v4 < *(_DWORD*)(*v2 + 16))
	{
		v5 = sub_140551840(*v2, v4);
		if (v6 < *(_DWORD*)(v7 + 16)
			&& (unsigned int)sub_140551840(v7, v6) > 1
			&& (*(_DWORD*)(*(_QWORD*)(v9 + 8i64 * v8 + 24) + 8i64) & 0x400) == 0)
		{
			v5 = 100;
		}
		v10 = a1[2];
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v5;
	}
	else
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0i64;
		*(_DWORD*)(v11 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14066881B: variable 'v6' is possibly undefined
// 140668817: variable 'v7' is possibly undefined
// 140668830: variable 'v9' is possibly undefined
// 14066882D: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

