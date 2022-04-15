#include "../winhttp.h"

//----- (0000000140736B00) ----------------------------------------------------
__int64 __fastcall sub_140736B00(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rax

	v1 = 0;
	if (qword_140C4DF28)
		v1 = *(unsigned __int16*)(qword_140C4DF28 + 102);
	v2 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v2 + 8) = 3;
	*(double*)v2 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C4DF28: using guessed type __int64 qword_140C4DF28;

