#include "../winhttp.h"

//----- (00000001402ED360) ----------------------------------------------------
void __fastcall sub_1402ED360(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rsi
	__int64* v3; // rbx
	int i; // edi

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
	{
		v2 = v1 - 8;
		v3 = (__int64*)(v1 + 152i64 * *(int*)(v1 - 8));
		for (i = *(_DWORD*)(v1 - 8) - 1; i >= 0; --i)
		{
			v3 -= 19;
			sub_1402EE350(v3);
		}
		sub_14018B900(v2, 0);
	}
}

