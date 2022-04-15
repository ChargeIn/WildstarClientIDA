//----- (0000000140879420) ----------------------------------------------------
__int64 __fastcall sub_140879420(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	sub_1408611A0(a1, a2);
	*(_DWORD*)(a1 + 40) = -1;
	*(_QWORD*)a1 = off_1409A6E80;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_WORD*)(a1 + 88) = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 76) = 43i64;
	result = a1;
	*(_DWORD*)(a1 + 104) = -1;
	*(_DWORD*)(a1 + 108) = 1065353216;
	*(_DWORD*)(a1 + 112) = -1;
	*(_DWORD*)(a1 + 116) = 1;
	return result;
}
// 1409A6E80: using guessed type __int64 (__fastcall *off_1409A6E80[20])();

