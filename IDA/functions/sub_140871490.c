#include "../winhttp.h"

//----- (0000000140871490) ----------------------------------------------------
unsigned __int64 __fastcall sub_140871490(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 result; // rax
	__int64* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v1 = 0i64;
	result = (unsigned __int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
	if ((unsigned int)((a1[1] - *a1) / 24i64))
	{
		do
		{
			v4 = (__int64*)(*a1 + 24 * v1);
			if (*v4)
				sub_140863400(*v4);
			v5 = v4[1];
			if (v5)
				sub_140863400(v5);
			v1 = (unsigned int)(v1 + 1);
			v6 = a1[1] - *a1;
			result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
		} while ((unsigned int)v1 < (unsigned int)(v6 / 24));
	}
	return result;
}

