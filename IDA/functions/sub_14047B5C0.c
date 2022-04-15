//----- (000000014047B5C0) ----------------------------------------------------
__int64 __fastcall sub_14047B5C0(_QWORD* a1)
{
	_DWORD* v1; // r11
	__int64 v4; // r8
	unsigned int v5; // r10d
	unsigned int v6; // ecx
	_DWORD* v7; // rax
	__int64 v8; // rdx
	unsigned int v9; // ecx
	_DWORD* v10; // rax
	__int64 v11; // rdx
	unsigned int v12; // edx
	_DWORD* v13; // rcx

	v1 = (_DWORD*)a1[23];
	if (!v1)
		return 0i64;
	v4 = a1[51];
	v5 = 0;
	v6 = 0;
	if (v4)
	{
		v7 = (_DWORD*)a1[50];
		v8 = a1[51];
		do
		{
			if (!*v7)
				++v6;
			v7 += 3;
			--v8;
		} while (v8);
	}
	if (v6 < v1[2])
		return 1i64;
	v9 = 0;
	if (v4)
	{
		v10 = (_DWORD*)a1[50];
		v11 = a1[51];
		do
		{
			if (*v10 == 1)
				++v9;
			v10 += 3;
			--v11;
		} while (v11);
	}
	if (v9 < v1[5])
		return 1i64;
	v12 = 0;
	if (v4)
	{
		v13 = (_DWORD*)a1[50];
		do
		{
			if (*v13 == 2)
				++v12;
			v13 += 3;
			--v4;
		} while (v4);
	}
	LOBYTE(v5) = v12 < v1[12];
	return v5;
}

