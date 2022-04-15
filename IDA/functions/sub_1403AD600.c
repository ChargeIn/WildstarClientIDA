#include "../winhttp.h"

//----- (00000001403AD600) ----------------------------------------------------
__int64 __fastcall sub_1403AD600(__int64 a1)
{
	unsigned int v2; // ecx
	_QWORD* v3; // rax
	__int64 i; // rdx
	__int64 v5; // rax

	if (a1)
	{
		v2 = 0;
		v3 = (_QWORD*)(a1 + 728);
		for (i = qword_140C65A08 + 40; !*v3 || (*(_BYTE*)(*(_QWORD*)i + 16i64) & 4) == 0; i += 8i64)
		{
			++v2;
			v3 += 2;
			if (v2 >= 0x1C)
			{
				if (!*(_DWORD*)(a1 + 592))
				{
					v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
					if (!v5 || *(_DWORD*)(v5 + 128) != 9)
						return 1i64;
				}
				return 0i64;
			}
		}
	}
	return 0i64;
}
// 1403AD629: conditional instruction was optimized away because ecx.4<1Cu
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;

