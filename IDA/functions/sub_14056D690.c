#include "../winhttp.h"

//----- (000000014056D690) ----------------------------------------------------
__int64 __fastcall sub_14056D690(__int64 a1)
{
	__int64 result; // rax

	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionComplete", byte_1409ECDCC, *(_QWORD*)(a1 + 48));
	sub_14056F210(qword_140C65970, (_QWORD*)a1, 6);
	result = sub_140437A10((_QWORD*)qword_140C658D8, 0x4Bu, 0, 0i64, 0, 0, 1);
	*(_DWORD*)(a1 + 56) = 1;
	return result;
}
// 1409ECDCC: using guessed type _BYTE byte_1409ECDCC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65970: using guessed type __int64 qword_140C65970;

