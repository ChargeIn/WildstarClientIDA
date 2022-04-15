//----- (000000014089C570) ----------------------------------------------------
__int64 __fastcall sub_14089C570(__int64 a1)
{
	__int64 v2; // rbx
	int i; // esi

	v2 = a1 + 212;
	*(_QWORD*)a1 = off_1409A9AC0;
	for (i = 2; i >= 0; --i)
	{
		sub_14089D3C0(v2);
		v2 += 36i64;
	}
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_DWORD*)(a1 + 8) = 0;
	sub_1407E4830((int*)(a1 + 152), 0i64, 0x3Cui64);
	sub_1407E4830((int*)(a1 + 212), 0i64, 0x6Cui64);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 40) = 1065353216i64;
	*(_WORD*)(a1 + 12) = 1;
	*(_BYTE*)(a1 + 60) = 1;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 96) = 0;
	*(_WORD*)(a1 + 100) = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	return a1;
}
// 1409A9AC0: using guessed type __int64 (__fastcall *off_1409A9AC0[6])();

