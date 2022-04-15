#include "../winhttp.h"

//----- (00000001403374C0) ----------------------------------------------------
__int64 __fastcall sub_1403374C0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(_QWORD*)(result + 32) - *(_QWORD*)(a1 + 24);
	return result;
}

