#include "../winhttp.h"

//----- (000000014050FA60) ----------------------------------------------------
__int64 __fastcall sub_14050FA60(__int64 a1)
{
	__int64 v3; // rax
	int* v4; // rcx
	int v5; // eax

	if (!HIDWORD(qword_140C7DC60))
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, SHIDWORD(qword_140C7DC60));
	if (!v3)
		return 0i64;
	v4 = *(int**)(a1 + 16);
	v5 = *(_DWORD*)(v3 + 40) >> 9;
	v4[2] = 1;
	*v4 = v5 & 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

