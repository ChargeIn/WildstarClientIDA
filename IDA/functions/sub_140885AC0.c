#include "../winhttp.h"

//----- (0000000140885AC0) ----------------------------------------------------
__int64 __fastcall sub_140885AC0(__int64* a1, unsigned int a2)
{
	unsigned int v2; // r15d
	unsigned int v5; // ebp
	__int64 v6; // rax
	unsigned int v8[10]; // [rsp+20h] [rbp-28h] BYREF

	v2 = *((_DWORD*)a1 + 10);
	v8[1] = a2;
	v8[0] = 0;
	v8[2] = 0;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 9));
	v5 = sub_140885660((_DWORD*)a1 - 30, v8, *(_DWORD*)(*(a1 - 3) + 264));
	if (v5 == 1)
	{
		if (*((_DWORD*)a1 + 10) > v2)
			(*(void(__fastcall**)(__int64*, _QWORD))(*(a1 - 15) + 80))(a1 - 15, a2);
	}
	else
	{
		v6 = *a1;
		*((_BYTE*)a1 + 74) |= 2u;
		(*(void(__fastcall**)(__int64*))(v6 + 96))(a1);
		sub_140885F10((__int64)(a1 - 15));
		if (*((_BYTE*)a1 - 104))
			sub_140889450(*(a1 - 3), (__int64)(a1 - 15));
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 9));
	return v5;
}

