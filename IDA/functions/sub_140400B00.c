//----- (0000000140400B00) ----------------------------------------------------
__int64 __fastcall sub_140400B00(__int64* a1, __int64 a2)
{
	__int64 v2; // rbp
	int v5; // esi
	int v6; // edi
	int v7; // eax

	v2 = *a1;
	v5 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
	v6 = (*(__int64(__fastcall**)(__int64*))(*a1 + 8))(a1);
	v7 = (*(__int64(__fastcall**)(__int64*))(v2 + 16))(a1);
	return (*(__int64(__fastcall**)(__int64*, __int64, __int64, _QWORD, int, int, int, _DWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2)(
		a1,
		35i64,
		510i64,
		0i64,
		v7,
		v6,
		v5,
		0,
		0i64,
		0,
		0,
		0,
		0,
		0,
		0,
		a2,
		0i64,
		0i64,
		0i64,
		0i64,
		0i64,
		0i64);
}

