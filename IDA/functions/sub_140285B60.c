#include "../winhttp.h"

//----- (0000000140285B60) ----------------------------------------------------
__int64 __fastcall sub_140285B60(__int64 a1, int a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	**(_DWORD**)(result + 64) = a2;
	return result;
}

