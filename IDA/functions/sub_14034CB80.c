#include "../winhttp.h"

//----- (000000014034CB80) ----------------------------------------------------
__int64 __fastcall sub_14034CB80(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	int v4; // edi

	v2 = sub_14018B280(2832i64, 0);
	if (v2)
		v3 = sub_14034CBF0((__int64)v2);
	else
		v3 = 0i64;
	v4 = sub_14034DC80(v3, a1);
	if (v4 >= 0)
		return 0i64;
	if (v3)
	{
		sub_14034D010(v3);
		sub_14018B900(v3, 0);
	}
	return (unsigned int)v4;
}

