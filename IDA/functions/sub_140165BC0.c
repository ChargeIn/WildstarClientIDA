//----- (0000000140165BC0) ----------------------------------------------------
__int64 __fastcall sub_140165BC0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	int v4; // edi
	_DWORD* v5; // rsi
	int v6; // eax
	int v7; // ebp
	_DWORD* v8; // rax
	int v9; // ecx
	int v10; // edx
	int v11; // eax
	int v12; // ecx
	__int64 result; // rax

	v2 = sub_1401657E0(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = 0;
	v5 = (_DWORD*)v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = v6 - 1;
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v4 = sub_140056D60(a1, 3u);
	v9 = v5[290] - 1;
	if (v7 < v9)
		v9 = v7;
	v10 = -1;
	v11 = -1;
	if (v9 > -1)
		v11 = v9;
	v12 = v5[286] - 1;
	v5[258] = v11;
	v5[260] = v11;
	if (v4 - 1 < v12)
		v12 = v4 - 1;
	if (v12 > -1)
		v10 = v12;
	result = 0i64;
	v5[259] = v10;
	v5[261] = v10;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

