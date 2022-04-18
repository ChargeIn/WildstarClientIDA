#include "../winhttp.h"

//----- (00000001405A9920) ----------------------------------------------------
__int64 __fastcall sub_1405A9920(_DWORD* a1)
{
	__int64 result; // rax

	result = (unsigned int)a1[46];
	if ((_DWORD)result == 5)
	{
		result = Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"HousingBuildComplete",
			byte_1409F327C,
			(unsigned int)(*a1 + 1));
		a1[46] = 1;
	}
	else if ((unsigned int)result <= 1)
	{
		a1[46] = 2;
	}
	return result;
}
// 1409F327C: using guessed type _BYTE byte_1409F327C[272];
// 140C65898: using guessed type __int64 qword_140C65898;

