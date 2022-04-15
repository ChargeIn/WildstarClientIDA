//----- (0000000140876CB0) ----------------------------------------------------
__int64 __fastcall sub_140876CB0(__int64 a1, __int16 a2, int a3)
{
	__int64 result; // rax

	sub_1408768F0(a1, a2, a3);
	*(_QWORD*)a1 = off_1409A6AE0;
	result = a1;
	*(_BYTE*)(a1 + 88) = 0;
	return result;
}
// 1409A6AE0: using guessed type __int64 (__fastcall *off_1409A6AE0[6])();

