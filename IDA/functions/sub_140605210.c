#include "../winhttp.h"

//----- (0000000140605210) ----------------------------------------------------
void __fastcall sub_140605210(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // [rsp+30h] [rbp+8h] BYREF
	unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 64);
	if (v1 && *(_QWORD*)(v1 + 96))
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v3 && *(_DWORD*)(v3 + 20))
		{
			sub_140604E20(a1, a1 + 80, 23);
		}
		else if (sub_14079EE60(v1, a1 + 80, &v5))
		{
			if (*(_QWORD*)(*(_QWORD*)(v1 + 88) + 8 * v5))
			{
				v4 = 0i64;
				v4 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 72i64);
				sub_1403F4900(qword_140C65898, 0x43Bu, (__int64)&v4);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

