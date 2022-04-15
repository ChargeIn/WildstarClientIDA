//----- (000000014082BE40) ----------------------------------------------------
__int64 __fastcall sub_14082BE40(__int64** a1, unsigned int a2, __int64* a3)
{
	__int64* v6; // rax
	__int64* v7; // rdx
	__int64* v8; // rcx
	__int64** v10; // rax
	__int64* v11; // r8

	if (!a1[2])
	{
		if (*((_DWORD*)a1 + 8) >= *((_DWORD*)a1 + 7))
			return 2i64;
		v6 = (__int64*)sub_1408819F0(dword_140C10F20, 24i64);
		if (!v6)
			return 2i64;
		*v6 = (__int64)a1[2];
		a1[2] = v6;
	}
	*((_DWORD*)a1[2] + 2) = a2;
	a1[2][2] = *a3;
	v7 = *a1;
	if (*a1)
	{
		v10 = 0i64;
		do
		{
			if (*((_DWORD*)v7 + 2) > a2)
				break;
			v10 = (__int64**)v7;
			v7 = (__int64*)*v7;
		} while (v7);
		v11 = a1[2];
		if (!v7)
			a1[1] = v11;
		if (v10)
			*v10 = v11;
		else
			*a1 = v11;
		a1[2] = (__int64*)*a1[2];
		*v11 = (__int64)v7;
	}
	else
	{
		v8 = a1[2];
		a1[1] = v8;
		a1[2] = (__int64*)*v8;
		*v8 = 0i64;
		*a1 = a1[1];
	}
	++* ((_DWORD*)a1 + 8);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

