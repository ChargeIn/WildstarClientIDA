#include "../winhttp.h"

//----- (00000001405E08F0) ----------------------------------------------------
__int64 __fastcall sub_1405E08F0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	unsigned int** v6; // rbx
	unsigned int* v7; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 264))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 256) + 8 * (v4 % *(_QWORD*)(a1 + 248)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 272))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = (unsigned int**)(v5 + 3);
		if (v6)
		{
			v7 = *v6;
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipInviteRemoved", byte_1409EAB1C, *v7);
			sub_1400B6120(a1 + 200, (__int64)v7);
			sub_1400B6120(a1 + 240, (__int64)(v7 + 4));
			sub_1405DDED0(v7);
			sub_14018B900((__int64)v7, 0);
		}
	}
	return 0i64;
}
// 1409EAB1C: using guessed type _BYTE byte_1409EAB1C[16];
// 140C65898: using guessed type __int64 qword_140C65898;

