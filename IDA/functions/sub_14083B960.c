#include "../winhttp.h"

//----- (000000014083B960) ----------------------------------------------------
void __fastcall sub_14083B960(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
	__int64 v8; // rax
	__int64 v9; // rdx
	void* v10; // rcx
	void(__fastcall * v11)(__int64, __int64*); // rbx
	__int64 v12[2]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v13; // [rsp+30h] [rbp-18h]
	int v14; // [rsp+34h] [rbp-14h]
	__int64 v15; // [rsp+38h] [rbp-10h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v8 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (!v8)
		goto LABEL_4;
	while (*(_DWORD*)(v8 + 48) != a2)
	{
		v8 = *(_QWORD*)(v8 + 80);
		if (!v8)
			goto LABEL_4;
	}
	if ((*(_BYTE*)(v8 + 72) & 2) != 0)
	{
		v9 = *(_QWORD*)(v8 + 64);
		v10 = *(void**)(a1 + 296);
		v13 = a2;
		v11 = *(void(__fastcall**)(__int64, __int64*))(v8 + 56);
		v12[0] = v9;
		v12[1] = *(_QWORD*)(v8 + 16);
		v14 = a3;
		v15 = a4;
		ResetEvent(v10);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v11(2i64, v12);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
	LABEL_4:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083B9F9: conditional instruction was optimized away because rax.8!=0

