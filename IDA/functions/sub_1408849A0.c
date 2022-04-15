#include "../winhttp.h"

//----- (00000001408849A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408849A0(__int64 a1, bool* a2)
{
	__int64 v4; // rax
	unsigned __int64 v5; // rdi

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	v4 = *(_QWORD*)(a1 + 56);
	if (v4)
		v5 = **(_QWORD**)(v4 + 8) + *(unsigned int*)(v4 + 16);
	else
		v5 = *(_QWORD*)(a1 + 8);
	if (a2)
		*a2 = v5 >= **(_QWORD**)(a1 - 80);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	return v5;
}

