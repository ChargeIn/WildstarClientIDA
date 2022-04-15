#include "../winhttp.h"

//----- (00000001406D02A0) ----------------------------------------------------
__int64 __fastcall sub_1406D02A0(_QWORD* a1)
{
	__int64 result; // rax

	result = sub_1406CFB40(a1);
	if (result)
	{
		*(_DWORD*)(result + 2248) = sub_140056D60(a1, 2u);
		return 1i64;
	}
	return result;
}

