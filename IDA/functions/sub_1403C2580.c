#include "../winhttp.h"

//----- (00000001403C2580) ----------------------------------------------------
__int64 __fastcall sub_1403C2580(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // r10
	unsigned int v5; // ecx
	_QWORD* v6; // rax
	__int64 i; // r8
	unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v9 = a1;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
	{
		v5 = 0;
		v6 = (_QWORD*)(v4 + 728);
		for (i = qword_140C65A08 + 40; !*v6 || (*(_BYTE*)(*(_QWORD*)i + 16i64) & 4) == 0; i += 8i64)
		{
			++v5;
			v6 += 2;
			if (v5 >= 0x1C)
			{
				if (!*(_DWORD*)(v4 + 592) && *(_DWORD*)(qword_140C65898 + 26180) == 49)
				{
					v9 = __PAIR64__(a3, a2);
					sub_1403F4900(qword_140C65898, 0xBEu, (__int64)&v9);
					return 0i64;
				}
				return 2147500037i64;
			}
		}
	}
	return 2147500037i64;
}
// 1403C25BC: conditional instruction was optimized away because ecx.4<1Cu
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;

