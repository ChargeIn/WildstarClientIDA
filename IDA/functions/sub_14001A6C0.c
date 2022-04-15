//----- (000000014001A6C0) ----------------------------------------------------
__int64 __fastcall sub_14001A6C0(__int64 a1, int a2, char a3)
{
	unsigned __int64 v4; // rsi
	int* v5; // r9
	unsigned __int8 v6; // r10
	char v7; // dl
	_BYTE* v8; // rdi
	void(__fastcall * v9)(_QWORD); // rdi
	char v11; // [rsp+40h] [rbp+18h] BYREF

	v11 = a3;
	v4 = a2;
	if (*(_DWORD*)(a1 + 48))
	{
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 48i64))(a1, &v11);
		a3 = v11;
	}
	v5 = (int*)qword_140C63750;
	v6 = *(_BYTE*)(*(int*)qword_140C63750 + a1 + 32);
	if (v4 < 5)
		memset((void*)(v4 + a1 + 32), a3, 5 - v4);
	*(_DWORD*)(a1 + 24) = (1 << v4) | *(_DWORD*)(a1 + 24) & ((1 << v4) - 1);
	v7 = *(_BYTE*)(*v5 + a1 + 32);
	if (v6 != v7)
	{
		v8 = *(_BYTE**)(a1 + 40);
		if (v8)
			*v8 = v7;
		v9 = *(void(__fastcall**)(_QWORD))(a1 + 56);
		if (v9)
			v9(v6);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

