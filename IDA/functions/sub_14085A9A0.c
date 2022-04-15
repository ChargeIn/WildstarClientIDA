//----- (000000014085A9A0) ----------------------------------------------------
__int64 sub_14085A9A0()
{
	struct _RTL_CRITICAL_SECTION* v0; // rbx
	__int64 v1; // rdi

	v0 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
	EnterCriticalSection(v0);
	v1 = qword_140C62458;
	if (qword_140C62458)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C62458 + 8i64))(qword_140C62458);
	LeaveCriticalSection(v0);
	return v1;
}
// 140C62458: using guessed type __int64 qword_140C62458;

