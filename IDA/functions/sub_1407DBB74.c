#include "../winhttp.h"

//----- (00000001407DBB74) ----------------------------------------------------
int __fastcall sub_1407DBB74(unsigned int a1)
{
	FARPROC CorExitProcess; // rax
	HMODULE phModule; // [rsp+38h] [rbp+10h] BYREF

	LODWORD(CorExitProcess) = GetModuleHandleExW(0, L"mscoree.dll", &phModule);
	if ((_DWORD)CorExitProcess)
	{
		CorExitProcess = GetProcAddress(phModule, "CorExitProcess");
		if (CorExitProcess)
			LODWORD(CorExitProcess) = ((__int64(__fastcall*)(_QWORD))CorExitProcess)(a1);
	}
	return (int)CorExitProcess;
}

