#include "../winhttp.h"

//----- (0000000140888F70) ----------------------------------------------------
int __fastcall sub_140888F70(_QWORD* a1)
{
	__int64(__fastcall * *v1)(); // rax
	void* v3; // rcx

	v1 = off_1409A8120;
	*a1 = off_1409A8120;
	v3 = (void*)a1[1];
	if (v3)
	{
		LODWORD(v1) = CloseHandle(v3);
		a1[1] = 0i64;
	}
	return (int)v1;
}
// 1409A8120: using guessed type __int64 (__fastcall *off_1409A8120[2])();

