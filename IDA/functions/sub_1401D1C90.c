#include "../winhttp.h"

//----- (00000001401D1C90) ----------------------------------------------------
signed int __fastcall sub_1401D1C90(__int64 a1, __int64 a2, void* a3, DWORD a4, __int64 a5)
{
	signed int result; // eax
	struct _OVERLAPPED* lpOverlapped; // r9

	if (*(_QWORD*)(a1 + 696) == -1i64)
		return -1610416122;
	lpOverlapped = (struct _OVERLAPPED*)(a1 + 704);
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 720) = a2;
	*(_QWORD*)(a1 + 744) = a2;
	*(_QWORD*)(a1 + 752) = a3;
	*(_QWORD*)(a1 + 736) = a5;
	*(_DWORD*)(a1 + 760) = a4;
	if (a4)
	{
		if (!ReadFile(*(HANDLE*)(a1 + 696), a3, a4, 0i64, lpOverlapped))
		{
			result = GetLastError();
			if (result != 997)
				goto LABEL_6;
		}
		return 0;
	}
	if (PostQueuedCompletionStatus(**(HANDLE**)(a1 + 16), 0, 1ui64, lpOverlapped))
		return 0;
	result = GetLastError();
LABEL_6:
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

