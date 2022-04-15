#include "../winhttp.h"

//----- (000000014077FE40) ----------------------------------------------------
__int64 __fastcall sub_14077FE40(__int64 a1)
{
	unsigned int v2; // eax
	__int64 result; // rax
	int v4; // ecx

	*(_DWORD*)(a1 + 544) = 0;
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	result = sub_14024ACC0(v2);
	if (result
		&& (result = *(unsigned int*)(result + 20), (unsigned int)result <= 7)
		&& (v4 = 164, _bittest(&v4, result))
		&& (result = sub_1405B1510(&qword_140C7DFB0)) != 0)
	{
		result = sub_1405C8EC0(a1);
		*(_DWORD*)(a1 + 544) = 1;
	}
	else
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

