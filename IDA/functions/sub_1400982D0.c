//----- (00000001400982D0) ----------------------------------------------------
__int64 __fastcall sub_1400982D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int i; // edi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 5ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 2ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x12ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x11ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0xFui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
								if (v7 >= 0)
								{
									v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
									if (v7 >= 0)
									{
										v8 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 32));
										*(_QWORD*)(a3 + 40) = v8;
										if (!v8)
											return 2147500037i64;
										for (i = 0; i < *(_DWORD*)(a3 + 32); ++i)
										{
											v7 = sub_1400AB890(a1, v9, (_DWORD*)(*(_QWORD*)(a3 + 40) + 16i64 * i));
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
	return (unsigned int)v7;
}
// 14009842E: variable 'v9' is possibly undefined

