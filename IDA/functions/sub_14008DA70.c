//----- (000000014008DA70) ----------------------------------------------------
__int64 __fastcall sub_14008DA70(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned int v9; // esi
	_DWORD* v10; // rdi
	__int64 v11; // rdx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006BE30(a1, (_BYTE*)a3, 3ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 1), 2ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 6ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 6ui64);
				if (v7 >= 0)
				{
					v8 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 8));
					*(_QWORD*)(a3 + 16) = v8;
					if (!v8)
						return 2147500037i64;
					v9 = 0;
					if (*(_DWORD*)(a3 + 8))
					{
						while (1)
						{
							v10 = (_DWORD*)(*(_QWORD*)(a3 + 16) + 16i64 * v9);
							if (!v10)
								break;
							v7 = sub_14006C090(a1, v10, 4ui64);
							if (v7 >= 0)
							{
								v7 = sub_14008DA10(a1, v11, v10 + 1);
								if (v7 >= 0)
									v7 = sub_14006C090(a1, v10 + 3, 0x20ui64);
							}
							if (v7 >= 0 && ++v9 < *(_DWORD*)(a3 + 8))
								continue;
							return (unsigned int)v7;
						}
						return (unsigned int)-2147467259;
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14008DB6A: variable 'v11' is possibly undefined

