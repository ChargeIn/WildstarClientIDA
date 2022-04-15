#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A06D0) ----------------------------------------------------
__int64 __fastcall sub_1400A06D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	unsigned __int8 v10; // di
	__int64 v11; // rax
	__int64 v12; // rsi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	if (a3 == -8)
		return (unsigned int)-2147467259;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
	if (v7 >= 0)
		v7 = sub_14006C120(a1, (__int64*)(a3 + 16), v8);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 32), 8ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 33), 8ui64);
					if (v7 >= 0)
					{
						v9 = sub_1403374E0(a2, 12i64 * *(unsigned __int8*)(a3 + 33));
						*(_QWORD*)(a3 + 40) = v9;
						if (!v9)
							return 2147500037i64;
						v10 = 0;
						if (*(_BYTE*)(a3 + 33))
						{
							while (1)
							{
								v11 = *(_QWORD*)(a3 + 40);
								v12 = v11 + 12i64 * v10;
								if (!v12)
									break;
								v7 = sub_14006C090(a1, (_DWORD*)(v11 + 12i64 * v10), 5ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(v12 + 4), 0x20ui64);
									if (v7 >= 0)
										v7 = sub_14006C090(a1, (_DWORD*)(v12 + 8), 0x20ui64);
								}
								if (v7 >= 0 && ++v10 < *(_BYTE*)(a3 + 33))
									continue;
								return (unsigned int)v7;
							}
							return (unsigned int)-2147467259;
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 1400A074B: variable 'v8' is possibly undefined

