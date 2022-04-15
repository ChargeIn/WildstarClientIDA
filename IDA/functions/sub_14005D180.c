//----- (000000014005D180) ----------------------------------------------------
__int64 __fastcall sub_14005D180(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // edx
	int v3; // edx
	int v4; // edx
	int v5; // edx
	int v7; // eax

	v1 = *(_QWORD*)(a1 + 56);
	v2 = *(unsigned __int8*)(v1 + 8);
	*(_BYTE*)(v1 + 9) |= 4u;
	v3 = v2 - 5;
	if (v3)
	{
		v4 = v3 - 1;
		if (v4)
		{
			v5 = v4 - 2;
			if (v5)
			{
				if (v5 == 1)
				{
					*(_QWORD*)(a1 + 56) = *(_QWORD*)(v1 + 104);
					sub_14005CE80(a1, v1);
					return 4
						* (*(int*)(v1 + 80)
							+ *(int*)(v1 + 84)
							+ 2 * (*(int*)(v1 + 72) + *(int*)(v1 + 88) + 2 * (*(int*)(v1 + 76) + (__int64)*(int*)(v1 + 92)))
							+ 30);
				}
				else
				{
					return 0i64;
				}
			}
			else
			{
				*(_QWORD*)(a1 + 56) = *(_QWORD*)(v1 + 160);
				*(_QWORD*)(v1 + 160) = *(_QWORD*)(a1 + 64);
				*(_QWORD*)(a1 + 64) = v1;
				*(_BYTE*)(v1 + 9) &= ~4u;
				sub_14005D0D0(a1, v1);
				return 16i64 * *(int*)(v1 + 88) + 40i64 * *(int*)(v1 + 92) + 184;
			}
		}
		else
		{
			*(_QWORD*)(a1 + 56) = *(_QWORD*)(v1 + 16);
			sub_14005CF80(a1, v1);
			v7 = *(unsigned __int8*)(v1 + 11);
			if (*(_BYTE*)(v1 + 10))
				return 16 * v7 + 40;
			else
				return 8 * v7 + 40;
		}
	}
	else
	{
		*(_QWORD*)(a1 + 56) = *(_QWORD*)(v1 + 48);
		if ((unsigned int)sub_14005CCB0(a1, v1))
			*(_BYTE*)(v1 + 9) &= ~4u;
		return 16 * (*(int*)(v1 + 56) + 4i64) + 40 * (1i64 << *(_BYTE*)(v1 + 11));
	}
}

