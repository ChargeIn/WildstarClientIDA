#include "../winhttp.h"

//----- (0000000140955C60) ----------------------------------------------------
__int64 sub_140955C60()
{
	__int64 v0; // rcx
	__int64 result; // rax

	sub_140195D70((__int64)aEvnt_0);
	v0 = xmmword_140C4EE30;
	*(_DWORD*)aEvnt_0 = 0;
	if ((_QWORD)xmmword_140C4EE30)
	{
		*(_QWORD*)xmmword_140C4EE30 = *((_QWORD*)&xmmword_140C4EE30 + 1);
		v0 = xmmword_140C4EE30;
	}
	result = *((_QWORD*)&xmmword_140C4EE30 + 1);
	if (*((_QWORD*)&xmmword_140C4EE30 + 1))
		**((_QWORD**)&xmmword_140C4EE30 + 1) = v0;
	xmmword_140C4EE30 = 0i64;
	return result;
}
// 140C4EE30: using guessed type __int128 xmmword_140C4EE30;

