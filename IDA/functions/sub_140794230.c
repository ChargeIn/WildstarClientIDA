//----- (0000000140794230) ----------------------------------------------------
__int64 __fastcall sub_140794230(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rdi
	__int64 v4; // r9
	int v5; // esi
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rcx
	__int64 v14; // [rsp+30h] [rbp-18h] BYREF
	int v15; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v4 = a1[2];
	v5 = 0;
	v6 = v4 - a1[3];
	v15 = -1;
	v14 = v4 - 16i64 * (int)(v6 >> 4);
	v7 = sub_140061FB0(
		(__int64)a1,
		(void(__fastcall*)(__int64, __int64))sub_140058DB0,
		(__int64)&v14,
		v14 - a1[8],
		0i64);
	v8 = a1[5];
	v9 = a1[2];
	if (v9 >= *(_QWORD*)(v8 + 16))
		*(_QWORD*)(v8 + 16) = v9;
	v10 = (_DWORD*)a1[2];
	LOBYTE(v5) = v7 == 0;
	v10[2] = 1;
	*v10 = v5;
	a1[2] += 16i64;
	v11 = a1[2];
	if (a1[3] < v11)
		v3 = (_DWORD*)a1[3];
	for (; v11 > (unsigned __int64)v3; v11 -= 16i64)
	{
		*(_QWORD*)v11 = *(_QWORD*)(v11 - 16);
		*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 8);
	}
	v12 = a1[2];
	*(_QWORD*)v3 = *(_QWORD*)v12;
	v3[2] = *(_DWORD*)(v12 + 8);
	return (__int64)(a1[2] - a1[3]) >> 4;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

