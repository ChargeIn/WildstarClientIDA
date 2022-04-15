#include "../winhttp.h"

//----- (00000001406052D0) ----------------------------------------------------
void __fastcall sub_1406052D0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+30h] [rbp-18h]

	v1 = a1[8];
	if (v1)
	{
		if (*(_QWORD*)(v1 + 96))
		{
			v2 = *(_QWORD*)(qword_140C65898 + 29272);
			if (!v2 || !*(_DWORD*)(v2 + 20))
			{
				v3 = 0i64;
				v4 = 0i64;
				v5 = 0i64;
				v3 = *(_QWORD*)(v1 + 72);
				v4 = a1[10];
				v5 = a1[11];
				sub_1403F4900(qword_140C65898, 0x439u, (__int64)&v3);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

