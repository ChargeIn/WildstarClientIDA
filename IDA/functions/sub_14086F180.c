//----- (000000014086F180) ----------------------------------------------------
__int64 sub_14086F180()
{
	struct _RTL_CRITICAL_SECTION* v0; // rbx
	__int64 v1; // rdi

	v0 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
	EnterCriticalSection(v0);
	v1 = qword_140C628A0;
	if (qword_140C628A0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C628A0 + 8i64))(qword_140C628A0);
		v1 = qword_140C628A0;
	}
	LeaveCriticalSection(v0);
	return v1;
}
// 140C628A0: using guessed type __int64 qword_140C628A0;

