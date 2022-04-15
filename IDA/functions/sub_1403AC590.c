//----- (00000001403AC590) ----------------------------------------------------
__int64 __fastcall sub_1403AC590(__int64 a1, __int16 a2, unsigned int a3)
{
	int v3; // edi
	unsigned int v7; // r8d
	unsigned int v8; // r9d
	__int64 v9; // r10
	unsigned int v10; // r8d
	unsigned int v11; // ecx
	__int64 v12; // rdx
	int* v13; // rax
	__int64 v14; // rax
	unsigned int v15; // r8d
	unsigned int v16; // ecx
	__int64 v17; // rdx
	unsigned int v18; // r8d
	unsigned int v19; // ecx
	__int64 v20; // rdx
	unsigned int v21; // r8d
	unsigned int v22; // ecx
	__int64 v23; // rdx
	unsigned int v24; // r8d
	unsigned int v25; // ecx
	__int64 v26; // rdx
	unsigned int v27; // edx
	__int64 i; // rcx

	v3 = 0;
	if ((a2 & 1) != 0 && (v7 = *(_DWORD*)(a1 + 4), v8 = 0, v7))
	{
		v9 = *(_QWORD*)(a1 + 16);
		while (!*(_QWORD*)v9 || **(_DWORD**)(*(_QWORD*)v9 + 64i64) != a3)
		{
			++v8;
			v9 += 8i64;
			if (v8 >= v7)
				goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		if ((a2 & 2) != 0 && (v10 = *(_DWORD*)(a1 + 28), v11 = 0, v10))
		{
			v12 = *(_QWORD*)(a1 + 40);
			while (!*(_QWORD*)v12 || **(_DWORD**)(*(_QWORD*)v12 + 64i64) != a3)
			{
				++v11;
				v12 += 8i64;
				if (v11 >= v10)
					goto LABEL_13;
			}
		}
		else
		{
		LABEL_13:
			if ((a2 & 6) == 0
				|| (v13 = sub_1400B5DF0(qword_140C658F0, a3, 0i64)) == 0i64
				|| (v14 = (unsigned int)v13[114], !(_DWORD)v14)
				|| !*(_WORD*)(a1 + 2 * v14 + 168))
			{
				if ((a2 & 4) != 0 && (v15 = *(_DWORD*)(a1 + 52), v16 = 0, v15))
				{
					v17 = *(_QWORD*)(a1 + 64);
					while (!*(_QWORD*)v17 || **(_DWORD**)(*(_QWORD*)v17 + 64i64) != a3)
					{
						++v16;
						v17 += 8i64;
						if (v16 >= v15)
							goto LABEL_23;
					}
				}
				else
				{
				LABEL_23:
					if ((a2 & 0x400) != 0 && (v18 = *(_DWORD*)(a1 + 76), v19 = 0, v18))
					{
						v20 = *(_QWORD*)(a1 + 88);
						while (!*(_QWORD*)v20 || **(_DWORD**)(*(_QWORD*)v20 + 64i64) != a3)
						{
							++v19;
							v20 += 8i64;
							if (v19 >= v18)
								goto LABEL_29;
						}
					}
					else
					{
					LABEL_29:
						if ((a2 & 0x20) != 0 && (v21 = *(_DWORD*)(a1 + 100), v22 = 0, v21))
						{
							v23 = *(_QWORD*)(a1 + 112);
							while (!*(_QWORD*)v23 || **(_DWORD**)(*(_QWORD*)v23 + 64i64) != a3)
							{
								++v22;
								v23 += 8i64;
								if (v22 >= v21)
									goto LABEL_35;
							}
						}
						else
						{
						LABEL_35:
							if ((a2 & 0x100) != 0 && (v24 = *(_DWORD*)(a1 + 124), v25 = 0, v24))
							{
								v26 = *(_QWORD*)(a1 + 136);
								while (!*(_QWORD*)v26 || **(_DWORD**)(*(_QWORD*)v26 + 64i64) != a3)
								{
									++v25;
									v26 += 8i64;
									if (v25 >= v24)
										goto LABEL_41;
								}
							}
							else
							{
							LABEL_41:
								if ((a2 & 0x200) == 0)
									return 0i64;
								v27 = *(_DWORD*)(a1 + 148);
								if (!v27)
									return 0i64;
								for (i = *(_QWORD*)(a1 + 160); !*(_QWORD*)i || **(_DWORD**)(*(_QWORD*)i + 64i64) != a3; i += 8i64)
								{
									if (++v3 >= v27)
										return 0i64;
								}
							}
						}
					}
				}
			}
		}
	}
	return 1i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

