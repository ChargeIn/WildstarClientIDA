//----- (000000014010D7F0) ----------------------------------------------------
char __fastcall sub_14010D7F0(__int64 a1, __int64 a2)
{
	int v5; // ebp
	__int64* v6; // r14
	__int64 v7; // rbx
	unsigned int v8; // edi
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // edi
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	if (*(_BYTE*)(a1 + 8))
		return 1;
	v5 = 0;
	v6 = (__int64*)(a1 + 80);
	do
	{
		v7 = *v6;
		if (*v6 && (*(_BYTE*)(v7 + 116) & 1) == 0)
		{
			v8 = 0;
			if ((__int64)(*(_QWORD*)(v7 + 96) - *(_QWORD*)(v7 + 88)) >> 3)
			{
				v9 = 0i64;
				do
				{
					v10 = *(_QWORD*)(v7 + 88);
					if (*(_QWORD*)(v10 + 8 * v9))
					{
						if (!sub_140100DA0(*(_QWORD*)(v10 + 8 * v9), a2))
							return 0;
					}
					v9 = ++v8;
				} while (v8 < (unsigned __int64)((__int64)(*(_QWORD*)(v7 + 96) - *(_QWORD*)(v7 + 88)) >> 3));
			}
			v11 = 0;
			if ((*(_QWORD*)(v7 + 64) - *(_QWORD*)(v7 + 56)) / 304i64)
			{
				v12 = 0i64;
				do
				{
					v13 = *(_QWORD*)(304 * v12 + *(_QWORD*)(v7 + 56));
					if (!*(_BYTE*)(v13 + 64) && !sub_1400FE1F0(v13, a2))
						return 0;
					v12 = ++v11;
				} while (v11 < (unsigned __int64)((*(_QWORD*)(v7 + 64) - *(_QWORD*)(v7 + 56)) / 304i64));
			}
			*(_BYTE*)(v7 + 116) |= 1u;
		}
		++v5;
		++v6;
	} while (v5 < 8);
	v14 = *(_QWORD*)(a1 + 160);
	if (v14 && !sub_140100DA0(v14, a2))
		return 0;
	v15 = *(_QWORD*)(a1 + 144);
	if (v15)
	{
		if (!sub_140100DA0(v15, a2))
			return 0;
	}
	*(_BYTE*)(a1 + 8) = 1;
	return 1;
}

