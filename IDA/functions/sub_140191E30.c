//----- (0000000140191E30) ----------------------------------------------------
void __fastcall sub_140191E30(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	HANDLE CurrentProcess; // rsi
	HANDLE CurrentThread; // rbp
	DWORD64 v6; // rcx
	DWORD64 v7; // rcx
	unsigned __int64 i; // rbx
	__int64 v9; // [rsp+28h] [rbp-160h]
	struct _tagSTACKFRAME64 v10; // [rsp+50h] [rbp-138h] BYREF

	if (a1)
	{
		v2 = (_QWORD*)a2[1];
		CurrentProcess = GetCurrentProcess();
		CurrentThread = GetCurrentThread();
		sub_1407E4830((int*)&v10, 0i64, 0x108ui64);
		v10.AddrPC.Mode = AddrModeFlat;
		v10.AddrPC.Offset = v2[31];
		v10.AddrFrame.Mode = AddrModeFlat;
		v6 = v2[20];
		v10.AddrStack.Mode = AddrModeFlat;
		v10.AddrFrame.Offset = v6;
		v7 = v2[19];
		v10.AddrStack.Offset = v7;
		for (i = 0i64; i < 2; ++i)
		{
			if (!sub_140190F70(v7, CurrentProcess, CurrentThread, &v10, v2, v9))
				break;
		}
		*(_QWORD*)(*a2 + 16i64) = v10.AddrPC.Offset;
	}
}
// 140191EF0: variable 'v7' is possibly undefined
// 140191EF0: variable 'v9' is possibly undefined

