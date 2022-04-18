#include "../winhttp.h"

//----- (00000001405E04B0) ----------------------------------------------------
__int64 __fastcall sub_1405E04B0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 v6; // rdi

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v4 % *(_QWORD*)(a1 + 128)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 152))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		if (v5 != (_QWORD*)-24i64)
		{
			v6 = v5[3];
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipRemove", byte_1409EABDC, *(unsigned int*)(v6 + 8));
			sub_1400B6120(a1 + 80, v6 + 8);
			sub_1400B6120(a1 + 120, v6);
			sub_1400B6120(a1 + 160, v6 + 184);
			sub_1405DDD80((_QWORD*)v6);
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipPostRemove", &unk_1409D0EEE);
		}
	}
	return 0i64;
}
// 1409EABDC: using guessed type _BYTE byte_1409EABDC[32];
// 140C65898: using guessed type __int64 qword_140C65898;

