//----- (000000014042E610) ----------------------------------------------------
__int64 __fastcall sub_14042E610(_QWORD* a1)
{
	unsigned int v2; // eax
	_DWORD* v3; // rcx
	unsigned int v4; // r15d
	int v5; // edi
	int v6; // edx
	int v7; // esi
	int v8; // r14d
	__int64 v9; // rbp
	int v10; // eax
	int v11; // eax
	_DWORD* v12; // rcx

	v2 = sub_140056D60(a1, 1u);
	v3 = dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v5 = 0;
	v6 = v3[2];
	v7 = v6 && (v6 != 1 || *v3);
	v8 = 0;
	v9 = sub_1400D6530((__int64)a1, 3);
	v10 = 0;
	if (v9)
	{
		v5 = sub_140056D60(a1, 4u);
		v11 = sub_140056D60(a1, 5u);
		v12 = (_DWORD*)(a1[3] + 80i64);
		v8 = v11;
		if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 88i64) <= 0)
			v10 = 1;
		else
			v10 = sub_140056D60(a1, 6u);
	}
	sub_140437A10((_QWORD*)qword_140C658D8, v4, v7, v9, v5, v8, v10);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658D8: using guessed type __int64 qword_140C658D8;

