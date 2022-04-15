//----- (00000001402EFBC0) ----------------------------------------------------
__int64 __fastcall sub_1402EFBC0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	*a1 = off_140B63F88;
	sub_14018B900(a1[4], 0);
	sub_14018B900(a1[5], 0);
	sub_14018B900(a1[6], 0);
	*a1 = &off_140B64078;
	v2 = (_QWORD*)a1[2];
	if (v2)
		*v2 = a1[3];
	v3 = a1[3];
	if (v3)
		*(_QWORD*)(v3 + 16) = a1[2];
	result = 0i64;
	a1[3] = 0i64;
	a1[2] = 0i64;
	return result;
}
// 140B63F88: using guessed type __int64 (__fastcall *off_140B63F88[31])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

