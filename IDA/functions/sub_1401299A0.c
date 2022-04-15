#include "../winhttp.h"

//----- (00000001401299A0) ----------------------------------------------------
_BYTE* __fastcall sub_1401299A0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	_DWORD* i; // rcx

	if (a2 == *(_QWORD*)(a1 + 1224))
	{
		v2 = 0i64;
		for (i = &unk_140C2C750; *i; i += 4)
		{
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= 6)
			{
				sub_1400EFDD0(byte_140C8E080, 64i64, "DC_Missing_%d", 0i64);
				return byte_140C8E080;
			}
		}
		return (_BYTE*)*((_QWORD*)&unk_140C2C750 + 2 * v2 + 1);
	}
	else if (a2 == *(_QWORD*)(a1 + 1232))
	{
		return sub_1400E8DD0(1u);
	}
	else
	{
		return &unk_1409D050F;
	}
}
// 140C8E080: using guessed type _BYTE byte_140C8E080[64];

