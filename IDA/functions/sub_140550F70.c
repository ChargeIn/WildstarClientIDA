//----- (0000000140550F70) ----------------------------------------------------
__int64 __fastcall sub_140550F70(__int64 a1, unsigned int a2, int a3)
{
	unsigned int v4; // ecx
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	int v10; // eax
	unsigned int v11; // ebx
	__int64 i; // rsi
	unsigned int v13; // eax
	__int64 j; // rsi

	v4 = *(_DWORD*)(a1 + 16);
	if (a2 > v4)
		return 0i64;
	if (a2 == v4)
	{
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 12i64) & 2) == 0)
		{
			v7 = 0i64;
			if (!v4)
				return 1i64;
			while (1)
			{
				v8 = *(_QWORD*)(a1 + 8 * v7 + 24);
				if (*(_DWORD*)(v8 + 4))
				{
					if ((*(_BYTE*)(v8 + 8) & 8) == 0 && !(unsigned int)sub_140550F70(a1, (unsigned int)v7, 1i64))
						break;
				}
				v7 = (unsigned int)(v7 + 1);
				if ((unsigned int)v7 >= *(_DWORD*)(a1 + 16))
					return 1i64;
			}
		}
		return 0i64;
	}
	v9 = *(_QWORD*)(a1 + 8i64 * a2 + 24);
	if (!v9 || !*(_DWORD*)(v9 + 4) || a3 && (*(_BYTE*)(v9 + 8) & 8) != 0)
		return 0i64;
	v10 = *(_DWORD*)(v9 + 8);
	if ((v10 & 1) != 0)
	{
		v11 = 0;
		if ((v10 & 2) != 0)
		{
			if (a2)
			{
				for (i = a1 + 24; ; i += 8i64)
				{
					v13 = *(_DWORD*)(a1 + 16);
					if (v11 != v13
						&& v11 <= v13
						&& *(_QWORD*)i
						&& (*(_DWORD*)(*(_QWORD*)i + 8i64) & 0x20) == 0
						&& !(unsigned int)sub_1405510D0(a1, v11))
					{
						break;
					}
					if (++v11 >= a2)
						return 1i64;
				}
				return 0i64;
			}
		}
		else if (a2)
		{
			for (j = a1 + 24;
				!*(_DWORD*)(*(_QWORD*)j + 4i64)
				|| (*(_BYTE*)(*(_QWORD*)j + 8i64) & 8) != 0
				|| (unsigned int)sub_140550F70(a1, v11, 1i64);
				j += 8i64)
			{
				if (++v11 >= a2)
					return 1i64;
			}
			return 0i64;
		}
	}
	return 1i64;
}

