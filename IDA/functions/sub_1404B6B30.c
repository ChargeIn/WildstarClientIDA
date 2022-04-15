#include "../winhttp.h"

//----- (00000001404B6B30) ----------------------------------------------------
void __fastcall sub_1404B6B30(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+30h] [rbp-18h]

	if (a2)
	{
		if (*(_DWORD*)(a2 + 48) == 2)
		{
			v3 = 0i64;
			v4 = 0i64;
			v5 = 0i64;
			v2 = *(_QWORD*)(a2 + 8);
			LODWORD(v5) = 1;
			v3 = v2;
			v4 = *(_QWORD*)(a2 + 16);
			sub_1403F4900(qword_140C65898, 0x525u, (__int64)&v3);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

