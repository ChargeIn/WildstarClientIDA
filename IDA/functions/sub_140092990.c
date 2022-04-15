//----- (0000000140092990) ----------------------------------------------------
__int64 __fastcall sub_140092990(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rsi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
		v7 = sub_14006C120(a1, (__int64*)(a3 + 8), v8);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
		if (v7 >= 0)
		{
			v9 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 16));
			*(_QWORD*)(a3 + 24) = v9;
			if (!v9)
				return 2147500037i64;
			v10 = 0i64;
			if (*(_DWORD*)(a3 + 16))
			{
				while (1)
				{
					v11 = *(_QWORD*)(a3 + 24);
					v12 = v11 + 8 * v10;
					if (!v12)
						break;
					v7 = sub_14006C090(a1, (_DWORD*)(v11 + 8 * v10), 0x12ui64);
					if (v7 >= 0)
						v7 = sub_14006C090(a1, (_DWORD*)(v12 + 4), 0x20ui64);
					if (v7 >= 0)
					{
						v10 = (unsigned int)(v10 + 1);
						if ((unsigned int)v10 < *(_DWORD*)(a3 + 16))
							continue;
					}
					return (unsigned int)v7;
				}
				return (unsigned int)-2147467259;
			}
		}
	}
	return (unsigned int)v7;
}
// 1400929D9: variable 'v8' is possibly undefined

