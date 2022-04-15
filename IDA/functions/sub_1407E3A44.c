#include "../winhttp.h"

//----- (00000001407E3A44) ----------------------------------------------------
__int64 __fastcall sub_1407E3A44(struct _EXCEPTION_POINTERS* ExceptionInfo)
{
	PEXCEPTION_RECORD ExceptionRecord; // rax
	int v2; // ecx

	ExceptionRecord = ExceptionInfo->ExceptionRecord;
	if (ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->NumberParameters == 4)
	{
		v2 = ExceptionRecord->ExceptionInformation[0];
		if ((unsigned int)(v2 - 429065504) <= 2 || v2 == 26820608)
			sub_1407E2DF4();
	}
	return 0i64;
}

