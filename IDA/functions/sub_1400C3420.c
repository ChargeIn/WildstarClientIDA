//----- (00000001400C3420) ----------------------------------------------------
bool __fastcall sub_1400C3420(_QWORD* a1)
{
	__int64* v2; // rcx
	__int64 v3; // rcx
	bool result; // al

	result = 1;
	if (!(*(unsigned __int8(__fastcall**)(_QWORD*))(*a1 + 136i64))(a1)
		&& !(*(__int64(__fastcall**)(_QWORD*))(*a1 + 152i64))(a1))
	{
		v2 = (__int64*)a1[85];
		if (!v2)
			return 0;
		v3 = *v2;
		if ((!v3
			|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 64i64))(v3)
			|| !*(_WORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)a1[85] + 64i64))(*(_QWORD*)a1[85]))
			&& !*(_QWORD*)(a1[85] + 24i64))
		{
			return 0;
		}
	}
	return result;
}

