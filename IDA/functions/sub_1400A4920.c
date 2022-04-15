//----- (00000001400A4920) ----------------------------------------------------
__int64 __fastcall sub_1400A4920(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int i; // edi

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
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 1ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 20), 1ui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 1ui64);
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
									if (v7 >= 0)
									{
										v7 = sub_14006C120(a1, (__int64*)(a3 + 40), v8);
										if (v7 >= 0)
										{
											v7 = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
											if (v7 >= 0)
											{
												v7 = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
												if (v7 >= 0)
												{
													v7 = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
													if (v7 >= 0)
													{
														v9 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 56));
														*(_QWORD*)(a3 + 64) = v9;
														if (!v9)
															return 2147500037i64;
														for (i = 0; i < *(_DWORD*)(a3 + 56); ++i)
														{
															v7 = sub_1400852F0(a1, v10, *(_QWORD*)(a3 + 64) + 16i64 * i);
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
	return (unsigned int)v7;
}
// 1400A4A5B: variable 'v8' is possibly undefined
// 1400A4AEE: variable 'v10' is possibly undefined

