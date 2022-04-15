#include "../winhttp.h"

//----- (00000001400323E0) ----------------------------------------------------
__int64 __fastcall sub_1400323E0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 result; // rax

	result = qword_140C658E8;
	if (a2 <= 0x10 && a3 <= 2)
		return *(_QWORD*)(32i64 * (int)a2 + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80i64 * (int)a3;
	return result;
}
// 140C658E8: using guessed type __int64 qword_140C658E8;

