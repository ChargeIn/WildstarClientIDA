#include "../winhttp.h"

//----- (00000001403FA680) ----------------------------------------------------
__int64 __fastcall sub_1403FA680(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64 result; // rax
	unsigned __int64 v4; // r8
	__int64 v5; // rcx
	unsigned int* v6; // rbx

	v2 = qword_140C65898;
	result = 0i64;
	v4 = *(_QWORD*)(qword_140C65908 + 384);
	if (v4)
	{
		v5 = 0i64;
		while (1)
		{
			v6 = *(unsigned int**)(*(_QWORD*)(qword_140C65908 + 376) + 8 * v5);
			if (*v6 == a2)
				break;
			result = (unsigned int)(result + 1);
			v5 = (unsigned int)result;
			if ((unsigned int)result >= v4)
				return result;
		}
		sub_1403FA490(qword_140C65898, 0);
		Apollo_LUAEvent(*(_QWORD*)(*(_QWORD*)(v2 + 32736) + 96i64), "OpenStoreFromBanner", byte_1409EFCA4, *v6);
		return sub_140400840((__int64*)(v2 + 72), *(_QWORD*)(qword_140C635F0 + 5792), 1, v6[1], v6[2]);
	}
	return result;
}
// 1409EFCA4: using guessed type _BYTE byte_1409EFCA4[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;

