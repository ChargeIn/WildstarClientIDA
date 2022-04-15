#include "../winhttp.h"

//----- (00000001400E8DD0) ----------------------------------------------------
_BYTE* __fastcall sub_1400E8DD0(unsigned int a1)
{
	__int64 v1; // rax
	_DWORD* i; // rdx

	v1 = 0i64;
	for (i = &unk_140C2C750; *i != a1; i += 4)
	{
		v1 = (unsigned int)(v1 + 1);
		if ((unsigned int)v1 >= 6)
		{
			sub_1400EFDD0(byte_140C8E080, 64i64, "DC_Missing_%d", a1);
			return byte_140C8E080;
		}
	}
	return (_BYTE*)*((_QWORD*)&unk_140C2C750 + 2 * v1 + 1);
}
// 140C8E080: using guessed type _BYTE byte_140C8E080[64];

