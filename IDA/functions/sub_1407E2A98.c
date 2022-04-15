#include "../winhttp.h"

//----- (00000001407E2A98) ----------------------------------------------------
BOOL __fastcall sub_1407E2A98(UINT a1)
{
	HANDLE CurrentProcess; // rax

	CurrentProcess = GetCurrentProcess();
	return TerminateProcess(CurrentProcess, a1);
}

