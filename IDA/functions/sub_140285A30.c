#include "../winhttp.h"

//----- (0000000140285A30) ----------------------------------------------------
__int64 __fastcall sub_140285A30(__int64 a1, int a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(*(_QWORD*)(result + 32) + 8i64) += a2;
	return result;
}

