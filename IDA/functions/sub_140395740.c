#include "../winhttp.h"

//----- (0000000140395740) ----------------------------------------------------
__int64 __fastcall sub_140395740(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // r14
	__int64 v4; // rbx
	int i; // edi

	result = *(_QWORD*)(a1 + 32);
	if (result)
	{
		v3 = result - 16;
		v4 = result + 336i64 * *(int*)(result - 16);
		for (i = *(_DWORD*)(result - 16) - 1; i >= 0; --i)
		{
			v4 -= 336i64;
			sub_1403904C0(v4);
		}
		sub_14018B900(v3, 0);
		result = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	return result;
}

