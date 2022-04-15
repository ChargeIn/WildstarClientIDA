#include "../winhttp.h"

//----- (00000001401D4650) ----------------------------------------------------
__int64 __fastcall sub_1401D4650(__int64 a1, unsigned __int64* a2)
{
	unsigned __int64 v2; // rsi
	unsigned __int64 v3; // rdi
	__int64 v5; // r14
	unsigned __int64 v6; // rbx
	int v7; // eax

	v2 = *(_QWORD*)(a1 + 16);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 8);
	while (1)
	{
		v6 = v3 + ((v2 - v3) >> 1);
		v7 = sub_1407E6AF0(a2, v5 + 20 * v6, 0x14ui64);
		if (v7 >= 0)
			break;
		v2 = v3 + ((v2 - v3) >> 1);
	LABEL_7:
		if (v3 >= v2)
			return 0i64;
	}
	if (v7 > 0)
	{
		v3 = v6 + 1;
		goto LABEL_7;
	}
	return 1i64;
}

