//----- (0000000140400940) ----------------------------------------------------
__int64 __fastcall sub_140400940(__int64* a1, __int64 a2, int a3)
{
	__int64 v3; // r14
	__int64 v6; // rbx
	int v7; // ebp
	int v8; // esi
	int v9; // eax

	v3 = *a1;
	v6 = a3;
	v7 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
	v8 = (*(__int64(__fastcall**)(__int64*))(*a1 + 8))(a1);
	v9 = (*(__int64(__fastcall**)(__int64*))(v3 + 16))(a1);
	return (*(__int64(__fastcall**)(__int64*, __int64, __int64, _QWORD, int, int, int, _DWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v3)(
		a1,
		35i64,
		506i64,
		0i64,
		v9,
		v8,
		v7,
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
		v6,
		0i64,
		0i64,
		0i64,
		0i64);
}

