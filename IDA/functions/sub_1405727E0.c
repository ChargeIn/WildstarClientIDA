#include "../winhttp.h"

//----- (00000001405727E0) ----------------------------------------------------
void __fastcall sub_1405727E0(__int64 a1)
{
	__m128* v1; // rbp
	unsigned __int64 v2; // rsi
	__int64 v4; // rdi
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v7)(); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	v1 = *(__m128**)(qword_140C65898 + 25744);
	v2 = 0i64;
	if (*(_QWORD*)(a1 + 208))
	{
		v4 = 0i64;
		do
		{
			sub_14056BA10(*(_QWORD*)(v4 + *(_QWORD*)(a1 + 200) + 8), v1 + 286);
			++v2;
			v4 += 16i64;
		} while (v2 < *(_QWORD*)(a1 + 208));
	}
	if (*(_QWORD*)(a1 + 208))
	{
		v5 = 0;
		v7 = sub_1405727E0;
		v6 = a1;
		v8 = 0i64;
		sub_140195960(a1 + 216, 1000, (__int64)&v5, 4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

