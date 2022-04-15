//----- (00000001402AE2F0) ----------------------------------------------------
__int64 __fastcall sub_1402AE2F0(__int64* a1)
{
	int v1; // edx
	int v2; // edx
	int v3; // edx
	__int64 v4; // r9
	__int64 result; // rax
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 v8; // rdx

	v1 = *((_DWORD*)a1 + 2);
	if (v1)
	{
		v2 = v1 - 1;
		if (v2)
		{
			v3 = v2 - 1;
			if (v3)
			{
				if (v3 == 1)
				{
					v4 = a1[2];
					if (v4)
					{
						if (*(_DWORD*)(v4 + 52) == 5)
						{
							result = *(unsigned int*)(*a1 + 240);
							*(_DWORD*)(*(_QWORD*)(v4 + 168)
								+ 4i64 * (unsigned int)(*((_DWORD*)a1 + 7) + *((_DWORD*)a1 + 6) * *(_DWORD*)(v4 + 44))) = result;
						}
					}
				}
			}
			else
			{
				v6 = a1[2];
				if (v6 && *(_DWORD*)(v6 + 52) == 5)
				{
					result = *(unsigned int*)(*a1 + 240);
					*(_DWORD*)(*(_QWORD*)(v6 + 504)
						+ 4i64 * (unsigned int)(*((_DWORD*)a1 + 7) + *((_DWORD*)a1 + 6) * *(_DWORD*)(v6 + 44))) = result;
				}
			}
		}
		else
		{
			v7 = a1[2];
			if (v7 && *(_DWORD*)(v7 + 52) == 5)
			{
				result = *(unsigned int*)(*a1 + 240);
				*(_DWORD*)(*(_QWORD*)(v7 + 224) + 4i64 * *((unsigned int*)a1 + 7)) = result;
			}
		}
	}
	else
	{
		v8 = a1[2];
		if (!v8)
			v8 = *(_QWORD*)(*a1 + 8584);
		result = *a1;
		*(_DWORD*)(v8 + 144) = *(_DWORD*)(*a1 + 240);
	}
	return result;
}

