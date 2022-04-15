#include "../winhttp.h"

//----- (00000001408894E0) ----------------------------------------------------
BOOL __fastcall sub_1408894E0(__int64 a1)
{
	void* v2; // rcx
	void* v3; // rcx
	BOOL result; // eax
	void* v5; // rcx
	void* v6; // rcx
	void* v7; // rcx
	void* v8; // rcx

	v2 = *(void**)(a1 + 64);
	if (v2)
	{
		SetEvent(v2);
		v3 = *(void**)(a1 + 16);
		if (v3)
		{
			WaitForSingleObject(v3, 0xFFFFFFFF);
			CloseHandle(*(HANDLE*)(a1 + 16));
			*(_QWORD*)(a1 + 16) = 0i64;
		}
		result = CloseHandle(*(HANDLE*)(a1 + 64));
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	v5 = *(void**)(a1 + 16);
	if (v5)
	{
		result = CloseHandle(v5);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v6 = *(void**)(a1 + 80);
	if (v6)
	{
		result = CloseHandle(v6);
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	v7 = *(void**)(a1 + 88);
	*(_DWORD*)(a1 + 96) = 0;
	if (v7)
	{
		result = CloseHandle(v7);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	v8 = *(void**)(a1 + 72);
	*(_DWORD*)(a1 + 100) = 0;
	if (v8)
	{
		result = CloseHandle(v8);
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	return result;
}

