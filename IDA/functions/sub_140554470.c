#include "../winhttp.h"

//----- (0000000140554470) ----------------------------------------------------
_BOOL8 sub_140554470()
{
	__int64 v0; // rax
	__m128* v1; // rdx
	__int64 v2; // rax
	float v3; // xmm3_4
	__int64 v4; // rcx

	if (HIDWORD(qword_140C7DC60))
	{
		v0 = sub_1403D90D0(qword_140C65898, SHIDWORD(qword_140C7DC60));
		v1 = (__m128*)v0;
		if (!v0)
			return 0i64;
		if (*(_DWORD*)(v0 + 684))
			return 0i64;
		v2 = *(_QWORD*)(v0 + 6408);
		if (!*(_BYTE*)(v2 + 4))
			return 0i64;
		v3 = *(float*)(v2 + 16);
		if (v3 <= 0.0)
			v3 = 5.0;
		if (!sub_1403AD690(*(__m128**)(qword_140C65898 + 25744), v1, 0.0, v3, 0.0))
			return 0i64;
	}
	return *(_QWORD*)(qword_140C65898 + 25744)
		&& (v4 = *(_QWORD*)(qword_140C65898 + 120)) != 0
		&& *(_DWORD*)(v4 + 592) == 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

