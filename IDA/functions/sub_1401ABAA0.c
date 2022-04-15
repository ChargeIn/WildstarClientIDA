#include "../winhttp.h"

//----- (00000001401ABAA0) ----------------------------------------------------
__int64 __fastcall sub_1401ABAA0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	if (!a1)
		return 4294967294i64;
	v1 = *(_QWORD*)(a1 + 40);
	if (!v1)
		return 4294967294i64;
	*(_DWORD*)(v1 + 28) = 0;
	*(_DWORD*)(a1 + 28) = 0;
	*(_DWORD*)(a1 + 12) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	if (*(_DWORD*)(v1 + 8))
		*(_DWORD*)(a1 + 76) = *(_DWORD*)(v1 + 8) & 1;
	*(_QWORD*)v1 = 0i64;
	*(_DWORD*)(v1 + 12) = 0;
	*(_QWORD*)(v1 + 128) = v1 + 1352;
	*(_QWORD*)(v1 + 96) = v1 + 1352;
	*(_QWORD*)(v1 + 88) = v1 + 1352;
	result = 0i64;
	*(_DWORD*)(v1 + 20) = 0x8000;
	*(_QWORD*)(v1 + 32) = 0i64;
	*(_QWORD*)(v1 + 64) = 0i64;
	*(_DWORD*)(v1 + 7128) = 1;
	*(_DWORD*)(v1 + 7132) = -1;
	return result;
}

