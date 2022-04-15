#include "../winhttp.h"

//----- (0000000140724720) ----------------------------------------------------
__int64 __fastcall sub_140724720(int a1)
{
	__int64* v1; // rax

	v1 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		return 0i64;
	while (*(_DWORD*)(*v1 + 188) != a1)
	{
		if (++v1 == *((__int64**)&xmmword_140C7DFC0 + 1))
			return 0i64;
	}
	if (!*v1)
		return 0i64;
	else
		return sub_1405AC7E0(*v1);
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

