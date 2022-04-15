#include "../winhttp.h"

//----- (00000001407DF2C0) ----------------------------------------------------
__int64 __fastcall sub_1407DF2C0(ULONG_PTR a1, __int64 a2)
{
	struct _EXCEPTION_RECORD* HistoryTable; // r10
	EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-508h] BYREF

	if (!a2)
		a2 = 1i64;
	HistoryTable = 0i64;
	if (*(_QWORD*)a1)
	{
		while (1)
		{
			ExceptionRecord.ExceptionCode = -2147483610;
			ExceptionRecord.ExceptionFlags = (unsigned int)HistoryTable;
			ExceptionRecord.ExceptionRecord = HistoryTable;
			ExceptionRecord.ExceptionAddress = HistoryTable;
			ExceptionRecord.NumberParameters = (_DWORD)HistoryTable + 1;
			ExceptionRecord.ExceptionInformation[0] = a1;
			RtlUnwindEx(
				*(PVOID*)a1,
				*(PVOID*)(a1 + 80),
				&ExceptionRecord,
				(PVOID)a2,
				(PCONTEXT)&ExceptionRecord.ExceptionInformation[2],
				(PUNWIND_HISTORY_TABLE)HistoryTable);
		}
	}
	_mm_setcsr(*(_DWORD*)(a1 + 88));
	__asm { fnclex }
	return (*(__int64 (**)(void))(a1 + 80))();
}
// 1407DF36B: variable 'HistoryTable' is possibly undefined
// 1407DF387: variable 'a1' is possibly undefined
// 1407DF3A5: variable 'a2' is possibly undefined

