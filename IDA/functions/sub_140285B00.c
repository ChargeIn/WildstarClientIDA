#include "../winhttp.h"

//----- (0000000140285B00) ----------------------------------------------------
__int64 __fastcall sub_140285B00(__int64 a1, float a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	*(float*)(*(_QWORD*)(result + 48) + 12i64) = a2 * *(float*)(*(_QWORD*)(result + 48) + 12i64);
	return result;
}

