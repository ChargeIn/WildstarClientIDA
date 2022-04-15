#include "../winhttp.h"

//----- (0000000140901864) ----------------------------------------------------
__int64 sub_140901864()
{
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	return (unsigned int)((SystemTimeAsFileTime.dwLowDateTime
		+ ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32)
		- qword_140C63468)
		/ 0x2710);
}
// 140C63468: using guessed type __int64 qword_140C63468;

