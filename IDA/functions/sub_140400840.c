//----- (0000000140400840) ----------------------------------------------------
__int64 __fastcall sub_140400840(__int64* a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v5; // r12
	__int64 v8; // rdi
	__int64 v9; // rsi
	int v10; // r15d
	int v11; // r14d
	int v12; // eax

	v5 = *a1;
	v8 = a4;
	v9 = a3;
	v10 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
	v11 = (*(__int64(__fastcall**)(__int64*))(*a1 + 8))(a1);
	v12 = (*(__int64(__fastcall**)(__int64*))(v5 + 16))(a1);
	return (*(__int64(__fastcall**)(__int64*, __int64, __int64, _QWORD, int, int, int, _DWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))v5)(
		a1,
		35i64,
		505i64,
		0i64,
		v12,
		v11,
		v10,
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
		v9,
		v8,
		a5,
		0i64,
		0i64);
}

