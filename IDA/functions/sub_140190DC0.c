//----- (0000000140190DC0) ----------------------------------------------------
__int64 __fastcall sub_140190DC0(__int64 a1)
{
	__m128i* v2; // rax
	HANDLE CurrentProcess; // rax
	__m128i Filename[21]; // [rsp+20h] [rbp-168h] BYREF

	*(_QWORD*)a1 = off_140B5E620;
	*(_DWORD*)(a1 + 8) = 1;
	SymSetOptions(6u);
	GetModuleFileNameA(0i64, Filename[0].m128i_i8, 0x144u);
	v2 = sub_1407E05F0(Filename, 92);
	if (v2)
		v2->m128i_i8[0] = 0;
	CurrentProcess = GetCurrentProcess();
	SymInitialize(CurrentProcess, Filename[0].m128i_i8, 1);
	return a1;
}
// 140B5E620: using guessed type __int64 (__fastcall *off_140B5E620[4])();
// 140190DC0: using guessed type __m128i Filename[21];

