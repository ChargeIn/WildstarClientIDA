//----- (00000001405DDED0) ----------------------------------------------------
__int64 __fastcall sub_1405DDED0(_QWORD* a1)
{
	__int64* v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = (__int64*)a1[14];
	if (v2)
	{
		result = a1[15];
		*v2 = result;
	}
	v4 = a1[15];
	if (v4)
	{
		result = a1[14];
		*(_QWORD*)(v4 + 112) = result;
	}
	a1[14] = 0i64;
	a1[15] = 0i64;
	v5 = (__int64*)a1[12];
	if (v5)
	{
		result = a1[13];
		*v5 = result;
	}
	v6 = a1[13];
	if (v6)
	{
		result = a1[12];
		*(_QWORD*)(v6 + 96) = result;
	}
	a1[12] = 0i64;
	a1[13] = 0i64;
	v7 = a1[11];
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v8 = a1[10];
	if (v8)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return result;
}

