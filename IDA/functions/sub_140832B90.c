#include "../winhttp.h"

//----- (0000000140832B90) ----------------------------------------------------
__int64 __fastcall sub_140832B90(int a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdi

	v1 = qword_140C61CC8;
	if (qword_140C61CC8 == qword_140C61CD0)
		return 0i64;
	while (1)
	{
		v3 = *(_QWORD*)v1;
		if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)v1 + 1088i64)) == a1 && *(_DWORD*)(v3 + 1096) != 2)
			break;
		v1 += 8i64;
		if (v1 == qword_140C61CD0)
			return 0i64;
	}
	return v3;
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

