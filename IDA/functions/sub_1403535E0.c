//----- (00000001403535E0) ----------------------------------------------------
__int64 __fastcall sub_1403535E0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	int v6; // esi
	__int64 v7; // rdi
	__int64 result; // rax
	_QWORD* v9; // rdi
	int i; // esi
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx

	v2 = (_QWORD*)a1[164];
	if (v2)
		*v2 = a1[165];
	v3 = a1[165];
	if (v3)
		*(_QWORD*)(v3 + 1312) = a1[164];
	a1[164] = 0i64;
	a1[165] = 0i64;
	v4 = (_QWORD*)a1[162];
	if (v4)
		*v4 = a1[163];
	v5 = a1[163];
	if (v5)
		*(_QWORD*)(v5 + 1296) = a1[162];
	a1[162] = 0i64;
	a1[163] = 0i64;
	v6 = 15;
	v7 = (__int64)(a1 + 164);
	do
	{
		v7 -= 64i64;
		result = sub_140003810(v7, 8i64, 6, (__int64(__fastcall*)(__int64))sub_14036F920);
		--v6;
	} while (v6 >= 0);
	v9 = a1 + 34;
	for (i = 3; i >= 0; --i)
	{
		v11 = *(v9 - 2);
		v9 -= 2;
		if (v11)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
	v12 = a1[13];
	if (v12)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	v13 = a1[2];
	if (v13)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
	return result;
}

