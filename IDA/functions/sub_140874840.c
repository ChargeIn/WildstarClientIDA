//----- (0000000140874840) ----------------------------------------------------
__int64 __fastcall sub_140874840(__int64 a1, __int16 a2, int a3)
{
	__int64 result; // rax

	sub_1408555E0(a1, a2, a3);
	*(_QWORD*)a1 = off_1409A6450;
	result = a1;
	*(_DWORD*)(a1 + 64) = -1;
	return result;
}
// 1409A6450: using guessed type __int64 (__fastcall *off_1409A6450[6])();

