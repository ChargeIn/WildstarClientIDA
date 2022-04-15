//----- (00000001402AE0A0) ----------------------------------------------------
__int64 __fastcall sub_1402AE0A0(_QWORD* a1, char a2)
{
	int v3; // ecx
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // r8

	v3 = *((_DWORD*)a1 + 2);
	if (v3)
	{
		v5 = v3 - 1;
		if (v5)
		{
			v6 = v5 - 1;
			if (v6)
			{
				if (v6 == 1)
				{
					v7 = a1[2];
					if (v7)
					{
						result = *(unsigned int*)(*a1 + 240i64);
						*(_DWORD*)(*(_QWORD*)(v7 + 168)
							+ 4i64 * (unsigned int)(*((_DWORD*)a1 + 7) + *((_DWORD*)a1 + 6) * *(_DWORD*)(v7 + 44))) = result;
					}
				}
			}
			else
			{
				v9 = a1[2];
				if (v9)
				{
					result = *(unsigned int*)(*a1 + 240i64);
					*(_DWORD*)(*(_QWORD*)(v9 + 504)
						+ 4i64 * (unsigned int)(*((_DWORD*)a1 + 7) + *((_DWORD*)a1 + 6) * *(_DWORD*)(v9 + 44))) = result;
				}
			}
		}
		else
		{
			v10 = a1[2];
			if (v10)
			{
				result = *(unsigned int*)(*a1 + 240i64);
				*(_DWORD*)(*(_QWORD*)(v10 + 224) + 4i64 * *((unsigned int*)a1 + 7)) = result;
			}
		}
	}
	else
	{
		v11 = a1[2];
		if (!v11)
			v11 = *(_QWORD*)(*a1 + 8584i64);
		result = *a1;
		*(_DWORD*)(v11 + 144) = *(_DWORD*)(*a1 + 240i64);
	}
	v12 = a1[4];
	if (v12)
	{
		v13 = (a2 & 2) != 0;
		if ((a2 & 4) != 0)
			v13 = (unsigned int)v13 | 2;
		return (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(*a1 + 6352i64) + 424i64))(
			*(_QWORD*)(*a1 + 6352i64),
			v12,
			v13);
	}
	return result;
}

