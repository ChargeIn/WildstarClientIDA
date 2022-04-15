//----- (000000014001A770) ----------------------------------------------------
__int64 __fastcall sub_14001A770(__int64 a1, int a2, int a3)
{
	unsigned __int64 v4; // rsi
	int* v5; // r9
	unsigned int v6; // r10d
	int* v7; // rdi
	unsigned __int64 i; // rcx
	int v9; // edx
	_DWORD* v10; // rdi
	void(__fastcall * v11)(_QWORD); // rdi
	int v13; // [rsp+40h] [rbp+18h] BYREF

	v13 = a3;
	v4 = a2;
	if (*(_DWORD*)(a1 + 72))
	{
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 48i64))(a1, &v13);
		a3 = v13;
	}
	v5 = (int*)qword_140C63750;
	v6 = *(_DWORD*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	if (v4 < 5)
	{
		v7 = (int*)(a1 + 32 + 4 * v4);
		for (i = 5 - v4; i; --i)
			*v7++ = a3;
	}
	*(_DWORD*)(a1 + 24) = (1 << v4) | *(_DWORD*)(a1 + 24) & ((1 << v4) - 1);
	v9 = *(_DWORD*)(a1 + 4i64 * *v5 + 32);
	if (v6 != v9)
	{
		v10 = *(_DWORD**)(a1 + 64);
		if (v10)
			*v10 = v9;
		v11 = *(void(__fastcall**)(_QWORD))(a1 + 80);
		if (v11)
			v11(v6);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

