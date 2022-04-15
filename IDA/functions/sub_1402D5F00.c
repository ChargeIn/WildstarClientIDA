//----- (00000001402D5F00) ----------------------------------------------------
__int64 __fastcall sub_1402D5F00(
	__int64 a1,
	__int64 a2,
	unsigned __int64 a3,
	int a4,
	__int64 a5,
	__int64 a6,
	__int64 a7)
{
	int v9; // eax
	int v10; // edx
	__int64 v11; // rcx

	*(_QWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a5;
	*(_DWORD*)(a1 + 48) = 1;
	*(_QWORD*)(a1 + 32) = a6;
	*(_QWORD*)(a1 + 40) = a7;
	v9 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 736i64))(
		qword_140C65670,
		16i64,
		5i64);
	v10 = 2;
	if (v9)
		v10 = 16;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670
		+ 88i64))(
			qword_140C65670,
			64i64,
			64i64,
			1i64,
			v10,
			3,
			1,
			63,
			0,
			a1 + 304);
	sub_1402D6030(a1, a3);
	v11 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 312) = a1 + 112;
	*(_QWORD*)(a1 + 320) = a1 + 240;
	*(_QWORD*)(a1 + 328) = v11 + 64;
	*(_QWORD*)(a1 + 336) = v11 + 80;
	*(_QWORD*)(a1 + 344) = v11 + 96;
	*(_QWORD*)(a1 + 352) = v11 + 128;
	*(_QWORD*)(a1 + 360) = *(_QWORD*)(a1 + 304);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

