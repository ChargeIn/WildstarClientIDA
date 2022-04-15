#include "../winhttp.h"

//----- (00000001403C2850) ----------------------------------------------------
__int64 __fastcall sub_1403C2850(__int64 a1, int a2)
{
	__int64 v3; // r10
	unsigned int v4; // ecx
	_QWORD* v5; // rax
	__int64 i; // rdx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = a1;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
	{
		v4 = 0;
		v5 = (_QWORD*)(v3 + 728);
		for (i = qword_140C65A08 + 40; !*v5 || (*(_BYTE*)(*(_QWORD*)i + 16i64) & 4) == 0; i += 8i64)
		{
			++v4;
			v5 += 2;
			if (v4 >= 0x1C)
			{
				if (!*(_DWORD*)(v3 + 592) && *(_DWORD*)(qword_140C65898 + 26180) == 49)
				{
					LODWORD(v8) = a2;
					sub_1403F4900(qword_140C65898, 0xBBu, (__int64)&v8);
					return 0i64;
				}
				return 2147500037i64;
			}
		}
	}
	return 2147500037i64;
}
// 1403C2889: conditional instruction was optimized away because ecx.4<1Cu
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;

