//----- (000000014087BB40) ----------------------------------------------------
__int64 __fastcall sub_14087BB40(__int64 a1, int a2, int a3)
{
	__int64 v4; // rax
	__int64 v5; // rcx

	v4 = sub_140829FD0((struct _RTL_CRITICAL_SECTION*)qword_140C61B78, a2, a3);
	if (!v4)
		return 2i64;
	v5 = *(_QWORD*)(v4 + 40);
	if (v5)
	{
		*(_QWORD*)(a1 + 8) = v5;
		*(_QWORD*)(v4 + 40) = a1;
	}
	else
	{
		*(_QWORD*)(v4 + 48) = a1;
		*(_QWORD*)(v4 + 40) = a1;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return 1i64;
}
// 140C61B78: using guessed type __int64 qword_140C61B78;

