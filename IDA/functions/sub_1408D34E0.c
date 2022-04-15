#include "../winhttp.h"

//----- (00000001408D34E0) ----------------------------------------------------
__int64 __fastcall sub_1408D34E0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = result + a2;
	return result;
}

