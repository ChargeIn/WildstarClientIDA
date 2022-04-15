#include "../winhttp.h"

//----- (000000014036FF20) ----------------------------------------------------
__int64 __fastcall sub_14036FF20(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rbx
	int i; // edi

	v1 = *(int*)(a1 - 16);
	v2 = a1 - 16;
	v3 = a1 + 80 * v1;
	for (i = v1 - 1; i >= 0; --i)
	{
		v3 -= 80i64;
		sub_14036F9B0(v3);
	}
	sub_14018B900(v2, 0);
	return v2;
}
// 14036F9B0: using guessed type __int64 __fastcall sub_14036F9B0(_QWORD);

