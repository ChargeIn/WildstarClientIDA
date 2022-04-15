#include "../winhttp.h"

//----- (00000001405E1F20) ----------------------------------------------------
__int64 __fastcall sub_1405E1F20(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	unsigned int** v6; // rbx
	unsigned int* v7; // rbx

	v2 = a2 + 8;
	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 584))(a2 + 8);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 576) + 8 * (v4 % *(_QWORD*)(a1 + 568)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 592))(v2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = (unsigned int**)(v5 + 3);
		if (v6)
		{
			v7 = *v6;
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountInviteRemoved", byte_1409EAB64, *v7);
			sub_1400B6120(a1 + 520, (__int64)v7);
			sub_1400B6120(a1 + 560, (__int64)(v7 + 2));
			sub_1405DDE60(v7);
		}
	}
	return 0i64;
}
// 1409EAB64: using guessed type _BYTE byte_1409EAB64[80];
// 140C65898: using guessed type __int64 qword_140C65898;

