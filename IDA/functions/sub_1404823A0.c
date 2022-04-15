#include "../winhttp.h"

//----- (00000001404823A0) ----------------------------------------------------
__int64 __fastcall sub_1404823A0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 176);
	if (result)
		return (*(_BYTE*)(result + 60) & 2) != 0;
	return result;
}

