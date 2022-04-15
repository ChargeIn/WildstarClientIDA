#include "../winhttp.h"

//----- (000000014072A790) ----------------------------------------------------
__int64 __fastcall sub_14072A790(__int64 a1)
{
	__int64 result; // rax

	result = a1;
	if (a1)
	{
		if (qword_140C665E0)
			return sub_1400EA3E0(
				*(_QWORD*)(qword_140C665E0 + 1424),
				"CardFlipped",
				byte_1409F8DC4,
				(unsigned int)(*(_DWORD*)(a1 + 40) + 1));
	}
	return result;
}
// 1409F8DC4: using guessed type _BYTE byte_1409F8DC4[48];
// 140C665E0: using guessed type __int64 qword_140C665E0;

