#include "../winhttp.h"

//----- (0000000140093180) ----------------------------------------------------
__int64 __fastcall sub_140093180(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int8 i; // bl

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006BF60(a1, (_WORD*)(a3 + 6), 0x10ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 8), 8ui64);
				if (v7 >= 0)
				{
					v8 = sub_1403374E0(a2, 16i64 * *(unsigned __int8*)(a3 + 8));
					*(_QWORD*)(a3 + 16) = v8;
					if (!v8)
						return 2147500037i64;
					for (i = 0; i < *(_BYTE*)(a3 + 8); ++i)
					{
						v7 = sub_1400911C0(a1, v9, *(_QWORD*)(a3 + 16) + 16i64 * i);
						if (v7 < 0)
							break;
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14009325F: variable 'v9' is possibly undefined

