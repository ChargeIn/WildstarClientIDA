//----- (00000001400AB910) ----------------------------------------------------
__int64 __fastcall sub_1400AB910(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned __int16 v9; // di
	__int64 v10; // rax
	__int64 v11; // rsi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
	{
		v7 = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if (v7 >= 0)
		{
			v8 = sub_1403374E0(a2, 8i64 * *(unsigned __int16*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v8;
			if (!v8)
				return 2147500037i64;
			v9 = 0;
			if (*(_WORD*)(a3 + 4))
			{
				while (1)
				{
					v10 = *(_QWORD*)(a3 + 8);
					v11 = v10 + 8i64 * v9;
					if (!v11)
						break;
					v7 = sub_14006C090(a1, (_DWORD*)(v10 + 8i64 * v9), 0xEui64);
					if (v7 >= 0)
						v7 = sub_14006C1C0(a1, (_DWORD*)(v11 + 4));
					if (v7 >= 0 && ++v9 < *(_WORD*)(a3 + 4))
						continue;
					return (unsigned int)v7;
				}
				return (unsigned int)-2147467259;
			}
		}
	}
	return (unsigned int)v7;
}

