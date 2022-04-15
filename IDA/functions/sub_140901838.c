#include "../winhttp.h"

//----- (0000000140901838) ----------------------------------------------------
__int64 sub_140901838()
{
	__int64 result; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	result = 0i64;
	qword_140C63468 = SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
	return result;
}
// 140C63468: using guessed type __int64 qword_140C63468;

