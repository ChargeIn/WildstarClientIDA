//----- (0000000140608480) ----------------------------------------------------
__int64 __fastcall sub_140608480(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	int v14; // esi
	_QWORD* v15; // rdi
	int i; // ebp
	__int64 v17; // rcx
	_QWORD* v18; // rbx
	__int64 v19; // rcx

	v2 = (_QWORD*)a1[54];
	if (v2)
		*v2 = a1[55];
	v3 = a1[55];
	if (v3)
		*(_QWORD*)(v3 + 432) = a1[54];
	result = 0i64;
	a1[54] = 0i64;
	a1[55] = 0i64;
	v5 = a1[46];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = a1[45];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v7 = a1[44];
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	v8 = a1[39];
	if (v8)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = a1[38];
	if (v9)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	v10 = a1[37];
	if (v10)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	v11 = a1[32];
	if (v11)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = a1[31];
	if (v12)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = a1[30];
	if (v13)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	v14 = 12;
	v15 = a1 + 28;
	for (i = 12; i >= 0; --i)
	{
		v17 = *--v15;
		if (v17)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	}
	v18 = a1 + 14;
	do
	{
		v19 = *--v18;
		if (v19)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		--v14;
	} while (v14 >= 0);
	return result;
}

