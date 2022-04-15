//----- (0000000140091240) ----------------------------------------------------
__int64 __fastcall sub_140091240(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 i; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 >= 0)
	{
		v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if (v7 >= 0)
		{
			v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
			if (v7 >= 0)
			{
				v7 = sub_14006BF60(a1, (_WORD*)(a3 + 24), 0x10ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006BF60(a1, (_WORD*)(a3 + 26), 0x10ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 28), 3ui64);
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
							if (v7 >= 0)
							{
								v8 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 32));
								*(_QWORD*)(a3 + 40) = v8;
								if (!v8)
									return 2147500037i64;
								for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 32); i = (unsigned int)(i + 1))
								{
									v7 = sub_140336A40(a1, a2, (_QWORD*)(*(_QWORD*)(a3 + 40) + 8 * i));
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
	return (unsigned int)v7;
}

