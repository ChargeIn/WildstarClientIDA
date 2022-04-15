#include "../winhttp.h"

//----- (00000001404B95D0) ----------------------------------------------------
void __fastcall sub_1404B95D0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int i; // edi
	unsigned __int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+30h] [rbp-18h]

	v1 = a1 + 672;
	for (i = 0; i < 5; ++i)
	{
		if (*(_QWORD*)v1)
		{
			v3 = 0i64;
			v4 = 0i64;
			v5 = 0i64;
			v3 = __PAIR64__(*(_DWORD*)v1, i);
			v4 = *(_QWORD*)(v1 - 8);
			v5 = *(_QWORD*)(v1 + 72);
			sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)&v3);
			*(_QWORD*)v1 = 0i64;
			*(_QWORD*)(v1 + 80) = 0i64;
		}
		v1 += 16i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

