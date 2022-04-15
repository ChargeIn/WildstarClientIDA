#include "../winhttp.h"

//----- (000000014071DFA0) ----------------------------------------------------
void __fastcall sub_14071DFA0(__m128* a1)
{
	__int64 v2; // rsi
	__int64* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // r9
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 128))(a1);
	v3 = (__int64*)(*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 144))(a1);
	v4 = (__int64)v3;
	if (v2)
	{
		if (v3)
		{
			v5 = *v3;
			v6[0] = 0;
			if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v5 + 16))(v3, v6, 0i64))
			{
				if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 848i64))(v4, a1[35].m128_u32[3]))
					sub_14071CFE0(a1, v2, v4);
			}
		}
	}
}
// 14071DFA0: using guessed type int var_18[6];

