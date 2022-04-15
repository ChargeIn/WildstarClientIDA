#include "../winhttp.h"

//----- (00000001400A9900) ----------------------------------------------------
__int64 __fastcall sub_1400A9900(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 i; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0xEui64);
			if (v7 >= 0)
			{
				v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
				if (v7 >= 0)
				{
					v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x15ui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x15ui64);
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x12ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(a3 + 44), 4ui64);
									if (v7 >= 0)
									{
										v7 = sub_14006C120(a1, (__int64*)(a3 + 48), v8);
										if (v7 >= 0)
										{
											v7 = sub_14006C120(a1, (__int64*)(a3 + 56), v9);
											if (v7 >= 0)
											{
												v7 = sub_14006C1C0(a1, (_DWORD*)(a3 + 64));
												if (v7 >= 0)
												{
													v7 = sub_14006C090(a1, (_DWORD*)(a3 + 68), 0x20ui64);
													if (v7 >= 0)
													{
														v7 = sub_1400852F0(a1, v10, a3 + 72);
														if (v7 >= 0)
														{
															v7 = sub_14006C090(a1, (_DWORD*)(a3 + 88), 0x20ui64);
															if (v7 >= 0)
															{
																v11 = sub_1403374E0(a2, 96i64 * *(unsigned int*)(a3 + 88));
																*(_QWORD*)(a3 + 96) = v11;
																if (!v11)
																	return 2147500037i64;
																for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 88); i = (unsigned int)(i + 1))
																{
																	v7 = sub_1400A9450(a1, v12, *(_QWORD*)(a3 + 96) + 96 * i);
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
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 1400A9A2F: variable 'v8' is possibly undefined
// 1400A9A45: variable 'v9' is possibly undefined
// 1400A9A89: variable 'v10' is possibly undefined
// 1400A9AEF: variable 'v12' is possibly undefined

