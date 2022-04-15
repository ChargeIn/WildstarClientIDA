//----- (00000001408B3760) ----------------------------------------------------
__int64 __fastcall sub_1408B3760(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // r15
	unsigned int v6; // r8d
	__int64 v7; // rdx
	__int64 v8; // r8
	int v9; // ecx
	int i; // edx
	int v11; // eax
	int v12; // edi
	int v13; // edi
	int v14; // edi
	void* v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rax
	unsigned int j; // r11d
	int v20; // eax
	__m128d v21; // xmm0
	int v22; // r8d
	int v23; // ecx
	unsigned int v24; // r9d
	unsigned int v25; // esi
	int v26; // edi
	__int64 v27; // rbp
	__int64 v28; // rax
	__int64 v29; // rdx
	int v30; // edi
	__int64 v31; // rax

	sub_1408B3BA0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = 0i64;
	if (!*(_DWORD*)(v4 + 36))
	{
		v6 = 0;
		if (*(_DWORD*)(v4 + 24))
		{
			do
			{
				v7 = v6++;
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v7 + 40) = dword_1409AA090[v7];
			} while (v6 < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64));
		}
	}
	v8 = *(_QWORD*)(a1 + 16);
	if (!*(_DWORD*)(v8 + 32))
		a2 &= ~8u;
	v9 = a2;
	for (i = 0; v9; v9 &= v9 - 1)
		++i;
	*(_DWORD*)(a1 + 596) = i;
	v11 = *(_DWORD*)(v8 + 24);
	v12 = a2 - 3;
	if (v12)
	{
		v13 = v12 - 1;
		if (v13)
		{
			v14 = v13 - 51;
			if (v14)
			{
				if (v14 == 8)
				{
					switch (v11)
					{
					case 4:
						v15 = sub_1408B95D0;
						break;
					case 8:
						v15 = sub_1408B9BB0;
						break;
					case 12:
						v15 = sub_1408BA400;
						break;
					case 16:
						v15 = sub_1408BAEE0;
						break;
					default:
						goto LABEL_53;
					}
				}
				else
				{
					switch (v11)
					{
					case 4:
						v15 = sub_1408BBC00;
						break;
					case 8:
						v15 = sub_1408BC080;
						break;
					case 12:
						v15 = sub_1408BC700;
						break;
					case 16:
						v15 = sub_1408BCF90;
						break;
					default:
						goto LABEL_53;
					}
				}
			}
			else
			{
				switch (v11)
				{
				case 4:
					v15 = sub_1408B71F0;
					break;
				case 8:
					v15 = sub_1408B7770;
					break;
				case 12:
					v15 = sub_1408B7F20;
					break;
				case 16:
					v15 = sub_1408B8960;
					break;
				default:
					goto LABEL_53;
				}
			}
		}
		else
		{
			switch (v11)
			{
			case 4:
				v15 = sub_1408B3C20;
				break;
			case 8:
				v15 = sub_1408B3FB0;
				break;
			case 12:
				v15 = sub_1408B4500;
				break;
			case 16:
				v15 = sub_1408B4C70;
				break;
			default:
				goto LABEL_53;
			}
		}
	}
	else
	{
		switch (v11)
		{
		case 4:
			v15 = sub_1408B5610;
			break;
		case 8:
			v15 = sub_1408B5A20;
			break;
		case 12:
			v15 = sub_1408B5FF0;
			break;
		case 16:
			v15 = sub_1408B67E0;
			break;
		default:
			goto LABEL_53;
		}
	}
	*(_QWORD*)(a1 + 8) = v15;
LABEL_53:
	v16 = (int)(float)((float)*(int*)(a1 + 588) * *(float*)(v8 + 28));
	*(_DWORD*)(a1 + 64) = v16;
	if (v16)
	{
		v17 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 8i64))(*(_QWORD*)(a1 + 24), 4i64 * v16);
		*(_QWORD*)(a1 + 40) = v17;
		if (!v17)
			return 52i64;
		*(_QWORD*)(a1 + 48) = v17;
		*(_QWORD*)(a1 + 56) = v17 + 4i64 * *(unsigned int*)(a1 + 64);
	}
	for (j = 0; j < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64); ++j)
	{
		v20 = (int)(float)((float)(*(float*)(*(_QWORD*)(a1 + 16) + 4i64 * j + 40) * 0.001) * (float)*(int*)(a1 + 588));
		*(_DWORD*)(a1 + 4i64 * j + 80) = v20;
		if ((v20 & 1) == 0)
			*(_DWORD*)(a1 + 4i64 * j + 80) = v20 + 1;
		v21 = 0i64;
		v21.m128d_f64[0] = (double)*(int*)(a1 + 4i64 * j + 80);
		v22 = (int)_mm_sqrt_pd(v21).m128d_f64[0] + 1;
		while (1)
		{
			v23 = 3;
			if (v22 <= 3)
				break;
			v24 = *(_DWORD*)(a1 + 4i64 * j + 80);
			while (v24 % v23)
			{
				v23 += 2;
				if (v23 >= v22)
					goto LABEL_65;
			}
			*(_DWORD*)(a1 + 4i64 * j + 80) = v24 + 2;
		}
	LABEL_65:
		;
	}
	sub_1408FF070(
		a1 + 80,
		*(unsigned int*)(*(_QWORD*)(a1 + 16) + 24i64),
		4ui64,
		(int(__fastcall*)(unsigned __int64, char*))sub_1408BDA80);
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64) & 0xFFFFFFFC) != 0)
	{
		v25 = 2;
		while (1)
		{
			v26 = *(_DWORD*)(a1 + 4i64 * (v25 + 1) + 80);
			v27 = v25 + 1;
			v28 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 8i64))(
				*(_QWORD*)(a1 + 24),
				4i64 * (unsigned int)(4 * v26));
			*(_QWORD*)(a1 + 8 * v5 + 272) = v28;
			if (!v28)
				return 52i64;
			*(_QWORD*)(a1 + 8 * v5 + 304) = v28;
			*(_QWORD*)(a1 + 8 * v5 + 336) = 4i64 * (unsigned int)(4 * v26) + v28;
			*(_QWORD*)(a1 + 8i64 * (v25 - 2) + 144) = v28
				+ 4i64
				* (unsigned int)(4 * (v26 - *(_DWORD*)(a1 + 4i64 * (v25 - 2) + 80)));
			*(_QWORD*)(a1 + 8i64 * (v25 - 1) + 144) = *(_QWORD*)(a1 + 8 * v5 + 272)
				+ 4i64
				* (unsigned int)(4 * (v26 - *(_DWORD*)(a1 + 4i64 * (v25 - 1) + 80)) + 1);
			v29 = v25;
			v30 = v26 - *(_DWORD*)(a1 + 4i64 * v25 + 80);
			v25 += 4;
			*(_QWORD*)(a1 + 8 * v29 + 144) = *(_QWORD*)(a1 + 8 * v5 + 272) + 4i64 * (unsigned int)(4 * v30 + 2);
			v31 = *(_QWORD*)(a1 + 8 * v5 + 272);
			v5 = (unsigned int)(v5 + 1);
			*(_QWORD*)(a1 + 8 * v27 + 144) = v31 + 12;
			if ((unsigned int)v5 >= *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64) >> 2)
				goto LABEL_70;
		}
	}
	else
	{
	LABEL_70:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		*(_BYTE*)(*(_QWORD*)(a1 + 16) + 104i64) = 0;
		return 1i64;
	}
}
// 1409AA090: using guessed type _DWORD dword_1409AA090[20];

