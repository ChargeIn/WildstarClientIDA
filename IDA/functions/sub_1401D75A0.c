//----- (00000001401D75A0) ----------------------------------------------------
__int64 __fastcall sub_1401D75A0(__int64* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rcx
	__int64* v11; // rcx
	__int64 v12; // rcx

	v2 = (_QWORD*)a1[1];
	if (v2)
		*v2 = a1[2];
	v3 = a1[2];
	if (v3)
		*(_QWORD*)(v3 + 8) = a1[1];
	v4 = (_QWORD*)a1[4];
	a1[1] = 0i64;
	a1[2] = 0i64;
	if (v4)
		*v4 = a1[5];
	v5 = a1[5];
	if (v5)
		*(_QWORD*)(v5 + 32) = a1[4];
	v6 = *a1;
	a1[4] = 0i64;
	a1[5] = 0i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v8 = a1[3];
	if (!*(_QWORD*)(v8 + 80) && *(_DWORD*)(v8 + 40) == 1)
		result = sub_1401C60B0(v8);
	v9 = (__int64*)a1[4];
	if (v9)
	{
		result = a1[5];
		*v9 = result;
	}
	v10 = a1[5];
	if (v10)
	{
		result = a1[4];
		*(_QWORD*)(v10 + 32) = result;
	}
	a1[4] = 0i64;
	a1[5] = 0i64;
	v11 = (__int64*)a1[1];
	if (v11)
	{
		result = a1[2];
		*v11 = result;
	}
	v12 = a1[2];
	if (v12)
	{
		result = a1[1];
		*(_QWORD*)(v12 + 8) = result;
	}
	a1[2] = 0i64;
	a1[1] = 0i64;
	return result;
}

