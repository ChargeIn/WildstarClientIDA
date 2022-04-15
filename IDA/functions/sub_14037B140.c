//----- (000000014037B140) ----------------------------------------------------
__int64 __fastcall sub_14037B140(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64* v5; // rcx
	__int64 v6; // rcx

	v2 = a1[1];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[1] = 0i64;
	}
	v4 = a1[2];
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[2] = 0i64;
	}
	v5 = (__int64*)a1[22];
	if (v5)
	{
		result = a1[23];
		*v5 = result;
	}
	v6 = a1[23];
	if (v6)
	{
		result = a1[22];
		*(_QWORD*)(v6 + 176) = result;
	}
	a1[23] = 0i64;
	a1[22] = 0i64;
	return result;
}

