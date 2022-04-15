//----- (00000001403D2E10) ----------------------------------------------------
__int64 __fastcall sub_1403D2E10(__int64 a1, int* a2, __int64 a3)
{
	int v3; // eax
	unsigned int v6; // r8d
	int v7; // eax
	unsigned int v8; // edx
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned __int8 v11; // al
	unsigned int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rax
	unsigned __int8 v16; // al

	v3 = *a2;
	if (*a2)
	{
		switch (v3)
		{
		case 1:
			return sub_1403D6640(a1 + 24, a2[1], a3);
		case 2:
			return sub_1403D6640(a1 + 48, a2[1], a3);
		case 10:
			return sub_1403D6640(a1 + 72, a2[1], a3);
		case 5:
			return sub_1403D6640(a1 + 96, a2[1], a3);
		case 8:
			return sub_1403D6640(a1 + 120, a2[1], a3);
		case 9:
			return sub_1403D6640(a1 + 144, a2[1], a3);
		}
		return 2147500037i64;
	}
	v6 = sub_1403D6640(a1, a2[1], a3);
	if ((v6 & 0x80000000) != 0 || *a2)
		return v6;
	v7 = a2[1];
	if ((unsigned int)(v7 - 17) > 3)
	{
		if ((unsigned int)(v7 - 21) <= 9)
		{
			v13 = 21;
			*(_DWORD*)(a1 + 60) = *(_DWORD*)(a1 + 56);
			do
			{
				if (v13 < *(_DWORD*)(a1 + 4))
				{
					v14 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * v13);
					if (v14)
					{
						v15 = *(_QWORD*)(v14 + 64);
						if ((*(_DWORD*)(v15 + 340) & 0x100) != 0)
							v16 = *(_BYTE*)(v15 + 416);
						else
							v16 = 0;
						*(_DWORD*)(a1 + 60) += v16;
					}
				}
				++v13;
			} while (v13 <= 0x1E);
		}
		return v6;
	}
	v8 = 17;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 32);
	do
	{
		if (v8 < *(_DWORD*)(a1 + 4))
		{
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * v8);
			if (v9)
			{
				v10 = *(_QWORD*)(v9 + 64);
				if ((*(_DWORD*)(v10 + 340) & 0x100) != 0)
					v11 = *(_BYTE*)(v10 + 416);
				else
					v11 = 0;
				*(_DWORD*)(a1 + 36) += v11;
			}
		}
		++v8;
	} while (v8 <= 0x14);
	return v6;
}

