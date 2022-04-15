//----- (0000000140367440) ----------------------------------------------------
__int64 __fastcall sub_140367440(__int64 a1, __int64 a2)
{
	int i; // r14d
	int j; // esi
	int v6; // r9d
	__int64 v7; // rdi
	unsigned int v8; // ecx
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64 v11; // rax

	for (i = *(_DWORD*)(a1 + 2500); i < *(_DWORD*)(a1 + 2508); ++i)
	{
		for (j = *(_DWORD*)(a1 + 2496); j < *(_DWORD*)(a1 + 2504); ++j)
		{
			v6 = *(_DWORD*)(a1 + 2204);
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
				+ 8i64
				* (j % v6
					+ v6 * (i % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (i % *(_DWORD*)(a1 + 2208) < 0))
					+ v6 * (unsigned int)(j % v6 < 0)));
			if (v7)
			{
				v8 = 0;
				v9 = (_QWORD*)(v7 + 512);
				while (*v9 != a2)
				{
					if (v9[1] == a2)
					{
						++v8;
						break;
					}
					if (v9[2] == a2)
					{
						v8 += 2;
						break;
					}
					if (v9[3] == a2)
					{
						v8 += 3;
						break;
					}
					v8 += 4;
					v9 += 4;
					if (v8 >= 0x10)
						break;
				}
				if (v8 != 16)
				{
					if (*(_DWORD*)(v7 + 784))
					{
						sub_140383760((_QWORD*)v7);
						*(_DWORD*)(v7 + 44) &= 0xFFFFFFF5;
						if (!*(_QWORD*)(v7 + 1480))
						{
							v10 = (_QWORD*)(*(_QWORD*)v7 + 2312i64);
							*(_QWORD*)(v7 + 1480) = v10;
							*(_QWORD*)(v7 + 1488) = *v10;
							*v10 = v7;
							v11 = *(_QWORD*)(v7 + 1488);
							if (v11)
								*(_QWORD*)(v11 + 1480) = v7 + 1488;
							++* (_DWORD*)(*(_QWORD*)v7 + 2172i64);
						}
					}
				}
			}
		}
	}
	return 0i64;
}

