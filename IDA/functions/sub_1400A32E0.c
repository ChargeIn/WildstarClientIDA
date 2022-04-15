#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A32E0) ----------------------------------------------------
__int64 __fastcall sub_1400A32E0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned int i; // edi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 5ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
								if (v7 >= 0)
								{
									v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 40));
									if (v7 >= 0)
									{
										v7 = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
										if (v7 >= 0)
										{
											v8 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 48));
											*(_QWORD*)(a3 + 56) = v8;
											if (!v8)
												return 2147500037i64;
											for (i = 0; i < *(_DWORD*)(a3 + 48); ++i)
											{
												v7 = sub_1400A3050(a1, a2, *(_QWORD*)(a3 + 56) + 16i64 * i);
												if (v7 < 0)
													break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}

