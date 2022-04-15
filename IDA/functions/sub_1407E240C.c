//----- (00000001407E240C) ----------------------------------------------------
__int64 __fastcall sub_1407E240C(int a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdx
	__int64 v4; // rcx
	struct _RTL_CRITICAL_SECTION* v5; // rdi
	__int64 v6; // r8

	if (!hHeap)
	{
		sub_1407E1CF4();
		sub_1407E1D68(30);
		sub_1407DBBB8(0xFFu);
	}
	v1 = 2i64 * a1;
	if (qword_140C0F7D0[2 * a1])
		return 1i64;
	v5 = (struct _RTL_CRITICAL_SECTION*)sub_1407E2C30(0x28ui64);
	if (v5)
	{
		sub_1407E2340(10i64);
		if (qword_140C0F7D0[v1])
		{
			sub_1407E14C0(v5);
		}
		else
		{
			InitializeCriticalSectionAndSpinCount(v5, 0xFA0u);
			qword_140C0F7D0[v1] = v5;
		}
		LeaveCriticalSection(lpCriticalSection);
		return 1i64;
	}
	*(_DWORD*)sub_1407DE1B0(v4, v3, v6) = 12;
	return 0i64;
}
// 1407E246C: variable 'v4' is possibly undefined
// 1407E246C: variable 'v3' is possibly undefined
// 1407E246C: variable 'v6' is possibly undefined
// 1407DE1B0: using guessed type __int64 __fastcall sub_1407DE1B0(_QWORD, _QWORD, _QWORD);
// 1407E2340: using guessed type __int64 __fastcall sub_1407E2340(_QWORD);
// 140C0F7D0: using guessed type _QWORD qword_140C0F7D0[1];

