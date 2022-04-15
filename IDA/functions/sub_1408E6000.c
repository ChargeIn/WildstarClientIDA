//----- (00000001408E6000) ----------------------------------------------------
char __fastcall sub_1408E6000(__int64 a1)
{
	int v2; // eax
	int v3; // ecx
	int v4; // eax
	int v5; // ecx
	unsigned int i; // r8d
	int v8; // ecx
	unsigned int j; // edx
	__int64 v10; // rdi
	__int64 v11; // rsi
	int v12; // ecx
	unsigned int k; // edx
	__int64 v14; // rdi
	__int64 v15; // rsi

	sub_1408E7100(*(_DWORD**)(a1 + 480), (_DWORD*)(a1 + 160));
	v2 = *(_DWORD*)(a1 + 204);
	if (*(_DWORD*)(a1 + 252) != v2)
	{
		v3 = *(_DWORD*)(a1 + 460);
		if (v2 == 1)
		{
			*(_DWORD*)(a1 + 464) = v3;
		}
		else
		{
			*(_DWORD*)(a1 + 464) = 3;
			if (((v3 - 4) & 0xFFFFFFF3) == 0)
			{
				v4 = *(_DWORD*)(a1 + 464);
				if (v3 != 16)
					v4 = 4;
				*(_DWORD*)(a1 + 464) = v4;
			}
		}
		v5 = *(_DWORD*)(a1 + 464);
		for (i = 0; v5; v5 &= v5 - 1)
			++i;
		if ((unsigned int)sub_1408E74F0(a1 + 16, *(_QWORD*)(a1 + 488), i) != 1)
			return 0;
		sub_1408E7420(a1 + 16);
	}
	if (*(float*)(a1 + 160) != *(float*)(a1 + 208) || *(_DWORD*)(a1 + 252) != *(_DWORD*)(a1 + 204))
	{
		v8 = *(_DWORD*)(a1 + 464);
		for (j = 0; v8; v8 &= v8 - 1)
			++j;
		if (j)
		{
			v10 = a1 + 256;
			v11 = j;
			do
			{
				sub_1408ADC30(v10, *(_QWORD*)(a1 + 488));
				v10 += 24i64;
				--v11;
			} while (v11);
		}
		if ((unsigned int)sub_1408E69E0(a1) != 1)
			return 0;
		v12 = *(_DWORD*)(a1 + 464);
		for (k = 0; v12; v12 &= v12 - 1)
			++k;
		if (k)
		{
			v14 = a1 + 256;
			v15 = k;
			do
			{
				sub_1408ADC70(v14);
				v14 += 24i64;
				--v15;
			} while (v15);
		}
		*(_DWORD*)(a1 + 456) = *(_DWORD*)(a1 + 96) * *(_DWORD*)(a1 + 124)
			+ (int)(float)((float)((float)(*(float*)(a1 + 164) + *(float*)(a1 + 160)) * 0.001)
				* (float)*(int*)(a1 + 468));
	}
	if (*(float*)(a1 + 164) != *(float*)(a1 + 212))
	{
		sub_1408ADC30(a1 + 400, *(_QWORD*)(a1 + 488));
		sub_1408ADC30(a1 + 424, *(_QWORD*)(a1 + 488));
		if ((unsigned int)sub_1408E6940(a1) != 1)
			return 0;
		sub_1408ADC70(a1 + 400);
		sub_1408ADC70(a1 + 424);
		*(_DWORD*)(a1 + 456) = *(_DWORD*)(a1 + 96) * *(_DWORD*)(a1 + 124)
			+ (int)(float)((float)((float)(*(float*)(a1 + 164) + *(float*)(a1 + 160)) * 0.001)
				* (float)*(int*)(a1 + 468));
	}
	if (*(_BYTE*)(a1 + 478))
	{
		*(_DWORD*)(a1 + 244) = 0;
		*(_DWORD*)(a1 + 196) = 0;
	}
	return 1;
}

