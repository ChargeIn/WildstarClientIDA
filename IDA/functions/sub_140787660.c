//----- (0000000140787660) ----------------------------------------------------
__int64 __fastcall sub_140787660(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)a1 = off_140B77DA0;
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}
// 140B77DA0: using guessed type __int64 (__fastcall *off_140B77DA0[9])();

