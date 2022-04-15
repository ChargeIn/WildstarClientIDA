#include "../winhttp.h"

//----- (00000001403C9740) ----------------------------------------------------
__int64 sub_1403C9740()
{
	__int64 v0; // rbx
	__int64 result; // rax
	struct _FILETIME v2; // [rsp+20h] [rbp-38h] BYREF
	struct _FILETIME FileTime; // [rsp+28h] [rbp-30h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+30h] [rbp-28h] BYREF

	v0 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 6992))
		return 0i64;
	GetLocalTime(&SystemTime);
	SystemTimeToFileTime(&SystemTime, &FileTime);
	LocalFileTimeToFileTime(&FileTime, &v2);
	if ((__int64)(*(_QWORD*)(v0 + 6992) - *(_QWORD*)&v2) > 0)
		return (unsigned int)((*(_QWORD*)(v0 + 6992) - *(_QWORD*)&v2) / 0x2710ui64);
	result = 0i64;
	*(_QWORD*)(v0 + 6992) = 0i64;
	*(_QWORD*)(v0 + 6984) = 0i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

