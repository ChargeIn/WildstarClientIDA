//----- (00000001401D8BC0) ----------------------------------------------------
__int64 __fastcall sub_1401D8BC0(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		*(_QWORD*)a1 = off_140B5FE88;
		sub_14018B900(*(_QWORD*)(a1 + 24), 0);
		sub_14018B900(*(_QWORD*)(a1 + 32), 0);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();

