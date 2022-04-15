#include "../winhttp.h"

//----- (0000000140876AB0) ----------------------------------------------------
__int64 __fastcall sub_140876AB0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(a1 + 72) = result;
	return result;
}

