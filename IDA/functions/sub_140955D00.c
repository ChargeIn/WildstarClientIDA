#include "../winhttp.h"

//----- (0000000140955D00) ----------------------------------------------------
__int64 sub_140955D00()
{
	__int64 v0; // rcx
	__int64 result; // rax

	sub_140195D70((__int64)aEvnt);
	v0 = xmmword_140C4EE80;
	*(_DWORD*)aEvnt = 0;
	if ((_QWORD)xmmword_140C4EE80)
	{
		*(_QWORD*)xmmword_140C4EE80 = *((_QWORD*)&xmmword_140C4EE80 + 1);
		v0 = xmmword_140C4EE80;
	}
	result = *((_QWORD*)&xmmword_140C4EE80 + 1);
	if (*((_QWORD*)&xmmword_140C4EE80 + 1))
		**((_QWORD**)&xmmword_140C4EE80 + 1) = v0;
	xmmword_140C4EE80 = 0i64;
	return result;
}
// 140C4EE80: using guessed type __int128 xmmword_140C4EE80;

