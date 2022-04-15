//----- (0000000140434460) ----------------------------------------------------
__int64 __fastcall sub_140434460(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r15
	int v9; // r14d
	int v10; // ebp
	int v11; // eax

	v4 = *a1;
	v9 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
	v10 = (*(__int64(__fastcall**)(__int64*))(*a1 + 8))(a1);
	v11 = (*(__int64(__fastcall**)(__int64*))(v4 + 16))(a1);
	return (*(__int64(__fastcall**)(__int64*, __int64, __int64, _QWORD, int, int, int, _DWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))v4)(
		a1,
		35i64,
		512i64,
		0i64,
		v11,
		v10,
		v9,
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
		a3,
		0i64,
		0i64,
		0i64,
		a4);
}

