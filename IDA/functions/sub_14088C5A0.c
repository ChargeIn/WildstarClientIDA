#include "../winhttp.h"

//----- (000000014088C5A0) ----------------------------------------------------
__int64 __fastcall sub_14088C5A0(__int64 a1, DWORD a2)
{
	LARGE_INTEGER* v4; // rax
	LARGE_INTEGER* v5; // r8
	LARGE_INTEGER* v6; // rdi
	LARGE_INTEGER* v7; // rax
	unsigned int v8; // edi

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v4 = *(LARGE_INTEGER**)a1;
	v5 = *(LARGE_INTEGER**)(a1 + 8);
	if (*(LARGE_INTEGER**)a1 != v5)
	{
		do
		{
			if (v4->LowPart == a2)
				break;
			v4 += 5;
		} while (v4 != v5);
	}
	if (v4 == v5)
	{
		v6 = 0i64;
	}
	else
	{
		v6 = v4 + 1;
		if (v4 != (LARGE_INTEGER*)-8i64)
			goto LABEL_11;
	}
	v7 = (LARGE_INTEGER*)sub_14088C520(a1);
	if (v7)
	{
		v7->LowPart = a2;
		v6 = v7 + 1;
	}
	if (!v6)
	{
		v8 = 2;
		goto LABEL_13;
	}
LABEL_11:
	v6->QuadPart = 0i64;
	v6[1].QuadPart = 0i64;
	v6[2].LowPart = 0;
	QueryPerformanceCounter(v6 + 3);
	v8 = 1;
LABEL_13:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	return v8;
}

