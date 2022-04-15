#include "../winhttp.h"

//----- (00000001401D1BB0) ----------------------------------------------------
signed int __fastcall sub_1401D1BB0(__int64 a1, FILETIME a2)
{
	void* v2; // rcx
	signed int result; // eax
	FILETIME LastWriteTime; // [rsp+38h] [rbp+10h] BYREF

	LastWriteTime = a2;
	v2 = *(void**)(a1 + 696);
	if (v2 == (void*)-1i64)
		return -1610416122;
	if (SetFileTime(v2, 0i64, 0i64, &LastWriteTime))
		return 0;
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

