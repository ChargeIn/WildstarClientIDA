#include "../winhttp.h"

//----- (0000000140736270) ----------------------------------------------------
__int64 __fastcall sub_140736270(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = (unsigned int)sub_1400F26A0(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, 1) - 1;
	result = sub_1405B1510(&qword_140C7DFB0);
	if (result)
	{
		v4 = *(_QWORD*)(result + 232);
		if (v4 && (unsigned int)v2 < *(_DWORD*)(result + 272))
			return sub_1406A5110(a1, v4 + 192 * v2);
		else
			return sub_1406A5110(a1, 0i64);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

