#include "../winhttp.h"

//----- (0000000140492E40) ----------------------------------------------------
__int64 __fastcall sub_140492E40(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // r14
	__int64 i; // rdi
	__int64 result; // rax

	v6 = a2;
	v7 = (*(_QWORD*)(a1 + 16) - a3) >> 5;
	if (v7 > 0)
	{
		v8 = a3 - a2;
		do
		{
			sub_1404956E0(v6, v8 + v6);
			--v7;
			v6 += 32i64;
		} while (v7 > 0);
	}
	for (i = *(_QWORD*)(a1 + 16); v6 != i; v6 += 32i64)
	{
		sub_140008410(v6);
		sub_14018B900(*(_QWORD*)(v6 + 8), 0);
	}
	result = a2;
	*(_QWORD*)(a1 + 16) += -32 * ((a3 - a2) >> 5);
	return result;
}

