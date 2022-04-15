//----- (00000001405F80E0) ----------------------------------------------------
__int64 __fastcall sub_1405F80E0(_QWORD* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax

	*a1 = off_140B6EA30;
	v2 = a1[15];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_140008410((__int64)(a1 + 11));
	sub_14018B900(a1[12], 0);
	sub_140008410((__int64)(a1 + 7));
	sub_14018B900(a1[8], 0);
	v3 = (_QWORD*)a1[1];
	if (v3)
		*v3 = a1[2];
	v4 = a1[2];
	if (v4)
		*(_QWORD*)(v4 + 8) = a1[1];
	result = 0i64;
	a1[2] = 0i64;
	a1[1] = 0i64;
	return result;
}
// 140B6EA30: using guessed type __int64 (__fastcall *off_140B6EA30[27])();

