#include "../winhttp.h"

//----- (00000001400163B0) ----------------------------------------------------
__int64 sub_1400163B0()
{
	__int64 result; // rax

	result = qword_140C635F0;
	if (qword_140C635F0)
	{
		*(_DWORD*)(qword_140C635F0 + 5804) = 1;
		return sub_14000AAE0();
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

