//----- (0000000140841990) ----------------------------------------------------
__int64 __fastcall sub_140841990(struct _RTL_CRITICAL_SECTION* a1, _QWORD* a2)
{
	unsigned int v4; // edi

	EnterCriticalSection(a1 + 2);
	if (!a2[1] || (v4 = sub_14083CD40((__int64)&a1[57].LockSemaphore, a2[2]), v4 == 1))
	{
		v4 = 2 - (sub_14083E040((__int64)&a1[4], a2) != 0i64);
		if (a2[1])
		{
			if (v4 == 1)
			{
			LABEL_7:
				SetEvent(a1[1].LockSemaphore);
				goto LABEL_8;
			}
			sub_14083D0A0((__int64)&a1[57].LockSemaphore, a2[2]);
		}
		if (v4 == 1)
			goto LABEL_7;
	}
LABEL_8:
	LeaveCriticalSection(a1 + 2);
	return v4;
}

