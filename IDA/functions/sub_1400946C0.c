#include "../winhttp.h"

//----- (00000001400946C0) ----------------------------------------------------
__int64 __fastcall sub_1400946C0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int8 i; // di

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
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
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 4ui64);
									if (v7 >= 0)
									{
										v7 = sub_14006C090(a1, (_DWORD*)(a3 + 36), 3ui64);
										if (v7 >= 0)
										{
											v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 40), 8ui64);
											if (v7 >= 0)
											{
												v8 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 40));
												*(_QWORD*)(a3 + 48) = v8;
												if (!v8)
													return 2147500037i64;
												for (i = 0; i < *(_BYTE*)(a3 + 40); ++i)
												{
													v7 = sub_1400945E0(a1, v9, (_DWORD*)(*(_QWORD*)(a3 + 48) + 32i64 * i));
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
	}
	return (unsigned int)v7;
}
// 14009485F: variable 'v9' is possibly undefined

