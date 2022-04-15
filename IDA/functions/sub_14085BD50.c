//----- (000000014085BD50) ----------------------------------------------------
__int64* __fastcall sub_14085BD50(__int64** a1, int a2)
{
	__int64* v2; // rax
	__int64* v5; // rdi
	__int64* v6; // rax
	__int64* v7; // rcx
	__int64* v8; // rax
	__int64* v10; // rcx
	__int64* v11; // rax
	_DWORD* v12; // rax

	v2 = *a1;
	if (*a1)
	{
		while (*((_DWORD*)v2 + 2) != a2)
		{
			v2 = (__int64*)*v2;
			if (!v2)
				goto LABEL_4;
		}
		v5 = v2 + 2;
		if (v2 != (__int64*)-16i64)
			return v5;
	}
	else
	{
	LABEL_4:
		v5 = 0i64;
	}
	if (!a1[2])
	{
		if (*((_DWORD*)a1 + 8) >= *((_DWORD*)a1 + 7))
			return v5;
		v6 = (__int64*)sub_1408819F0(dword_140C10F20, 48i64);
		if (!v6)
			return v5;
		if (v6 != (__int64*)-8i64)
			v6[2] = (__int64)&off_1409A3CF0;
		*v6 = (__int64)a1[2];
		a1[2] = v6;
	}
	v7 = a1[1];
	v8 = a1[2];
	if (v7)
		*v7 = (__int64)v8;
	else
		*a1 = v8;
	v10 = a1[2];
	a1[1] = v10;
	a1[2] = (__int64*)*v10;
	*v10 = 0i64;
	v11 = a1[1];
	++* ((_DWORD*)a1 + 8);
	v12 = v11 + 1;
	if (!v12)
		return v5;
	*v12 = a2;
	return (__int64*)(v12 + 2);
}
// 1409A3CF0: using guessed type __int64 (__fastcall *off_1409A3CF0)();
// 140C10F20: using guessed type int dword_140C10F20;

