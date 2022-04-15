#include "../winhttp.h"

//----- (000000014085AD70) ----------------------------------------------------
__int64 __fastcall sub_14085AD70(__int64 a1)
{
	unsigned int v2; // eax
	int v3; // ecx
	bool v4; // al

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
	v4 = 0;
	if (v2 <= 0xC)
	{
		v3 = 5121;
		if (_bittest(&v3, v2))
			v4 = 1;
	}
	*(_BYTE*)(a1 + 91) &= ~2u;
	*(_BYTE*)(a1 + 91) |= 2 * v4;
	sub_140851A00(a1);
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 204) = 100i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 252) = 100i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 300) = 100i64;
	return 1i64;
}

