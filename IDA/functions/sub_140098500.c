//----- (0000000140098500) ----------------------------------------------------
__int64 __fastcall sub_140098500(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rdx
	unsigned int v10; // edi
	__int64 v11; // r15
	unsigned __int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // rdx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
		v7 = sub_14006C120(a1, (__int64*)(a3 + 8), v8);
	if (v7 >= 0)
	{
		v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0xEui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0xEui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0xEui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 36), 2ui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 44), 3ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
									if (v7 >= 0)
									{
										v7 = sub_14006C090(a1, (_DWORD*)(a3 + 52), 1ui64);
										if (v7 >= 0)
										{
											v7 = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
											if (v7 >= 0)
											{
												v7 = sub_14006C1C0(a1, (_DWORD*)(a3 + 60));
												if (v7 >= 0)
												{
													v10 = 0;
													v11 = a3 + 64;
													v12 = 0i64;
													while (1)
													{
														v7 = sub_1400823C0(a1, v9, v11);
														if (v7 < 0)
															break;
														++v12;
														v11 += 4i64;
														if (v12 >= 5)
														{
															v7 = sub_14006C090(a1, (_DWORD*)(a3 + 84), 0x20ui64);
															if (v7 < 0)
																return (unsigned int)v7;
															v13 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 84));
															*(_QWORD*)(a3 + 88) = v13;
															if (!v13)
																return 2147500037i64;
															if (*(_DWORD*)(a3 + 84))
															{
																do
																{
																	v7 = sub_1400AD150(a1, v14, *(_QWORD*)(a3 + 88) + 8i64 * v10);
																	if (v7 < 0)
																		break;
																	++v10;
																} while (v10 < *(_DWORD*)(a3 + 84));
															}
															return (unsigned int)v7;
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
// 140098545: variable 'v8' is possibly undefined
// 1400986A6: variable 'v9' is possibly undefined
// 14009870D: variable 'v14' is possibly undefined

