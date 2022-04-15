#include "../winhttp.h"

//----- (000000014083C0E0) ----------------------------------------------------
void __fastcall sub_14083C0E0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rdx
	void(__fastcall * v8)(__int64, __int64); // rbx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v6 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (!v6)
		goto LABEL_4;
	while (*(_DWORD*)(v6 + 48) != a2)
	{
		v6 = *(_QWORD*)(v6 + 80);
		if (!v6)
			goto LABEL_4;
	}
	if ((*(_BYTE*)(v6 + 72) & 0x10) != 0)
	{
		*(_QWORD*)a3 = *(_QWORD*)(v6 + 64);
		v7 = *(_QWORD*)(v6 + 16);
		*(_DWORD*)(a3 + 16) = a2;
		*(_QWORD*)(a3 + 8) = v7;
		*(_DWORD*)(a3 + 20) = *(_DWORD*)(v6 + 8);
		v8 = *(void(__fastcall**)(__int64, __int64))(v6 + 56);
		ResetEvent(*(HANDLE*)(a1 + 296));
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v8(16i64, a3);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
	LABEL_4:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083C167: conditional instruction was optimized away because rax.8!=0

