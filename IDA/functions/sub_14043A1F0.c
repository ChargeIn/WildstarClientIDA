//----- (000000014043A1F0) ----------------------------------------------------
__int64 __fastcall sub_14043A1F0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	_QWORD* v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rax
	unsigned int v9; // r10d
	int v10; // eax
	int v11; // eax
	_QWORD* v13; // rcx
	__int64 v14; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C658D8 + 8);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v14 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v14 = *(_QWORD*)(qword_140C658D8 + 8);
	if (v14 == v3)
		return 2147942487i64;
	v6 = *(_QWORD**)(v14 + 40);
	if (!v6)
		return 2147942487i64;
	v7 = v6[2];
	if (a3 >= (unsigned __int64)((v6[3] - v7) >> 3))
		return 2147942487i64;
	v8 = *(_QWORD*)(v7 + 8i64 * a3);
	if (!v8)
		return 2147500037i64;
	v9 = *(_DWORD*)(v8 + 56);
	if (!v9)
		return 2147500037i64;
	if ((*(_BYTE*)(*v6 + 4i64) & 2) == 0)
	{
		v10 = dword_140C3B390;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v10 = *(_DWORD*)qword_140C63750;
		v11 = *((_DWORD*)&qword_140C3B3A0 + v10);
		if (!_bittest(&v11, *(_DWORD*)(*v6 + 8i64)))
			return 2147500037i64;
	}
	v13 = *(_QWORD**)(qword_140C658D8 + 96);
	if (v13)
		return sub_140712A40(v13, v9, (__int64)sub_14043A2F0, qword_140C658D8);
	else
		return 2147500037i64;
}
// 140C3B390: using guessed type int dword_140C3B390;
// 140C3B3A0: using guessed type __int64 qword_140C3B3A0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C658D8: using guessed type __int64 qword_140C658D8;

