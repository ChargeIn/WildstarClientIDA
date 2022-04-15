#include "../winhttp.h"

//----- (00000001403EBE80) ----------------------------------------------------
_BOOL8 __fastcall sub_1403EBE80(__int64 a1, __m128* a2, float a3, float* a4, float* a5, unsigned int a6)
{
	unsigned int v6; // edi
	float v10; // xmm6_4
	float v11; // xmm7_4

	v6 = a6;
	v10 = a3;
	v11 = 0.0;
	if (a6 || (v6 = sub_14046C580((__int64)a2, *(_QWORD*)(a1 + 120))) != 0)
	{
		if (!sub_1403ACD90(qword_140C65B70, v6, *(_QWORD*)(a1 + 25744)))
		{
			if (a4)
				*a4 = 0.0;
			if (a5)
				*a5 = a3;
			return 0i64;
		}
		v11 = sub_1403AD860(qword_140C65B70, v6, (__int64)a2);
		v10 = sub_1403AD8F0(qword_140C65B70, v6, (__int64)a2);
	}
	if (a4)
		*a4 = v11;
	if (a5)
		*a5 = v10;
	return sub_1403AD690(*(__m128**)(a1 + 25744), a2, v11, v10, 0.0);
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

