//----- (000000014038F2E0) ----------------------------------------------------
__int64 __fastcall sub_14038F2E0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx

	if (a1[63])
	{
		v4 = a1[42];
		if (v4 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
			return 0i64;
		v6 = a1[43];
		if (v6)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
				return 0i64;
		}
		v7 = (_QWORD*)a1[63];
		if (v7)
			*v7 = a1[64];
		v8 = a1[64];
		if (v8)
			*(_QWORD*)(v8 + 504) = a1[63];
		a1[63] = 0i64;
		a1[64] = 0i64;
	}
	return 1i64;
}

