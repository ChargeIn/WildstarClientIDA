//----- (000000014018EB80) ----------------------------------------------------
__int64 __fastcall sub_14018EB80(
	unsigned __int16* a1,
	__int64 a2,
	__int64 a3,
	unsigned __int64 a4,
	unsigned __int64* a5)
{
	__int64 v6; // rbx
	unsigned __int16* v7; // r10
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int16 v12; // cx

	v6 = a2;
	v7 = a1;
	if (!a3 && a4 || !a1 && a2)
		return 2147942487i64;
	v9 = 0i64;
	if (a2)
	{
		v10 = 2i64;
		v11 = 1i64;
		while (1)
		{
			v12 = *v7;
			if (*v7 >= 0x80u)
			{
				if (v12 >= 0x1000u)
				{
					if (a4)
					{
						if (v10 >= a4)
							return 2147942522i64;
						*(_BYTE*)(v9 + a3) = (v12 >> 12) | 0xE0;
						*(_BYTE*)(v9 + a3 + 1) = (*v7 >> 6) & 0x3F | 0x80;
						*(_BYTE*)(v9 + a3 + 2) = *(_BYTE*)v7 & 0x3F | 0x80;
					}
					v9 += 3i64;
					v11 += 3i64;
					v10 += 3i64;
				}
				else
				{
					if (a4)
					{
						if (v11 >= a4)
							return 2147942522i64;
						*(_BYTE*)(v9 + a3) = (v12 >> 6) | 0xC0;
						*(_BYTE*)(v9 + a3 + 1) = *(_BYTE*)v7 & 0x3F | 0x80;
					}
					v9 += 2i64;
					v11 += 2i64;
					v10 += 2i64;
				}
			}
			else
			{
				if (a4)
				{
					if (v9 >= a4)
						return 2147942522i64;
					*(_BYTE*)(v9 + a3) = v12;
				}
				++v9;
				++v11;
				++v10;
			}
			if (*v7)
			{
				++v7;
				if (--v6)
					continue;
			}
			break;
		}
	}
	if (a5)
		*a5 = v9;
	return 0i64;
}

