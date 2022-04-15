//----- (0000000140151E60) ----------------------------------------------------
__int64 __fastcall sub_140151E60(__int64 a1, __int64 a2, __int64 a3)
{
	void(__fastcall * **v4)(_QWORD); // rcx

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 48) = a3;
	*(_DWORD*)(a1 + 32) = 1333788672;
	*(_DWORD*)(a1 + 36) = 1065353216;
	*(_QWORD*)(a1 + 40) = a2;
	*(_QWORD*)a1 = off_140B5C6B8;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 64) = off_140B5C6E0;
	*(_DWORD*)(a1 + 72) = 0;
	*(_OWORD*)(a1 + 80) = xmmword_140B7B240;
	*(_OWORD*)(a1 + 96) = 0i64;
	*(_OWORD*)(a1 + 112) = xmmword_140B7B240;
	v4 = *(void(__fastcall****)(_QWORD))(a1 + 48);
	if (v4)
		(**v4)(v4);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C6B8: using guessed type __int64 (__fastcall *off_140B5C6B8[9])();
// 140B5C6E0: using guessed type __int64 (__fastcall *off_140B5C6E0[4])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

