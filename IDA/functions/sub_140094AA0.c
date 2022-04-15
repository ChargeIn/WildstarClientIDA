//----- (0000000140094AA0) ----------------------------------------------------
__int64 __fastcall sub_140094AA0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	unsigned __int8 i; // bl

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 4), 8ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 5), 8ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006BF60(a1, (_WORD*)(a3 + 6), 0x10ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 4ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 12), 8ui64);
						if (v7 >= 0)
						{
							v8 = sub_1403374E0(a2, 80i64 * *(unsigned __int8*)(a3 + 12));
							*(_QWORD*)(a3 + 16) = v8;
							if (!v8)
								return 2147500037i64;
							for (i = 0; i < *(_BYTE*)(a3 + 12); ++i)
							{
								v7 = sub_140094890(a1, (__int64)a2, (_DWORD*)(*(_QWORD*)(a3 + 16) + 80i64 * i));
								if (v7 < 0)
									break;
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}

