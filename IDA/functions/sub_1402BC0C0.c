//----- (00000001402BC0C0) ----------------------------------------------------
__int64 __fastcall sub_1402BC0C0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = off_140B623E0;
	sub_14018B900(a1[4], 0);
	v2 = (_QWORD*)a1[9];
	if (v2)
		*v2 = a1[10];
	v3 = a1[10];
	if (v3)
		*(_QWORD*)(v3 + 72) = a1[9];
	result = 0i64;
	a1[9] = 0i64;
	a1[10] = 0i64;
	v5 = a1[8];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = a1[3];
	if (v6)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return result;
}
// 140B623E0: using guessed type __int64 (__fastcall *off_140B623E0[17])();

