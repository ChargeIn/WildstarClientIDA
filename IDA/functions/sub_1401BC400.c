#include "../winhttp.h"

//----- (00000001401BC400) ----------------------------------------------------
signed int __fastcall sub_1401BC400(__int64 a1, void* a2, DWORD a3, __int64 lpOverlapped)
{
	void* v7; // rcx
	signed int result; // eax
	void* v9; // rcx

	if (!a2 || !lpOverlapped)
		return -2147024809;
	v7 = *(void**)(a1 + 40);
	if (v7 != (void*)-1i64)
	{
		if (!ReadFile(v7, a2, a3, 0i64, (LPOVERLAPPED)lpOverlapped))
		{
			result = GetLastError();
			if (result != 997)
				goto LABEL_6;
		}
		return 0;
	}
	if (!a3 || (result = sub_1401BC1A0(a1, *(LARGE_INTEGER*)(lpOverlapped + 16), (int*)a2, a3), result >= 0))
	{
		v9 = *(void**)(a1 + 24);
		if (v9 && !PostQueuedCompletionStatus(v9, a3, 1ui64, (LPOVERLAPPED)lpOverlapped))
		{
			result = GetLastError();
		LABEL_6:
			if (result > 0)
				return (unsigned __int16)result | 0x80070000;
			return result;
		}
		return 0;
	}
	return result;
}

