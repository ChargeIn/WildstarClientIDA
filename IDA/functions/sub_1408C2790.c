//----- (00000001408C2790) ----------------------------------------------------
__int64 __fastcall sub_1408C2790(__int64 a1, __int64 a2)
{
	__m128* v4; // rsi
	__int64 v5; // rdx
	unsigned int v6; // ecx
	char v7; // al
	unsigned int i; // edi
	__int64 result; // rax
	__int64 v10; // rax
	char v11; // al
	int v12; // edx

	sub_1408C34A0(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 480));
	v4 = 0i64;
	if (*(_BYTE*)(a1 + 580))
		*(_DWORD*)(a1 + 504) = 0;
	v5 = *(_QWORD*)(a1 + 8);
	v6 = 0;
	while (!*(_BYTE*)(v6 + v5 + 8))
	{
		if (++v6 >= 2)
			goto LABEL_30;
	}
	v7 = *(_BYTE*)(v5 + 8);
	if ((v7 & 0x20) == 0 && (v7 & 1) == 0 && (v7 & 2) == 0)
	{
	LABEL_19:
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 8i64) & 4) != 0)
		{
			sub_1408C2D00(a1);
			result = sub_1408C2C80(a1);
			if ((_DWORD)result != 1)
				return result;
			sub_1408C2D60(a1);
		}
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 8i64) & 0x40) != 0)
			sub_1408C3770(a1 + 24, *(float*)(a1 + 496));
		v10 = *(_QWORD*)(a1 + 8);
		if (*(char*)(v10 + 8) < 0 || (v11 = *(_BYTE*)(v10 + 9), (v11 & 2) != 0) || (v11 & 1) != 0 || (v11 & 4) != 0)
		{
			v12 = *(_DWORD*)(a1 + 480);
			if (v12)
				sub_1408ADE90(
					(float*)(a1 + 208),
					v12 - 1,
					*(_DWORD*)(a1 + 572),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 488)),
					*(float*)(a1 + 484),
					*(float*)(a1 + 492));
		}
	LABEL_30:
		*(_WORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0;
		if (!*(_DWORD*)(a1 + 560)
			|| (result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
				*(_QWORD*)(a1 + 16),
				4i64 * *(unsigned __int16*)(a2 + 16)),
				(v4 = (__m128*)result) != 0i64))
		{
			result = sub_1408C3BE0(a2, a1 + 24, v4);
			if (v4)
				return (*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v4);
		}
		return result;
	}
	if (*(_DWORD*)(a1 + 560))
		sub_1408C3610(a1 + 24, *(_QWORD*)(a1 + 16));
	for (i = 0; i < *(_DWORD*)(a1 + 568); ++i)
		sub_1408ADC30(a1 + 8 * (i + 2i64 * i + 41), *(_QWORD*)(a1 + 16));
	*(_DWORD*)(a1 + 576) = (int)(float)((float)(*(float*)(a1 + 512) * 0.001) * (float)*(int*)(a1 + 572));
	sub_1408C29E0(a1, *(_DWORD*)(a2 + 8));
	result = sub_1408C2B60(a1);
	if ((_DWORD)result == 1)
	{
		result = sub_1408C2C80(a1);
		if ((_DWORD)result == 1)
		{
			if (*(_DWORD*)(a1 + 560))
			{
				sub_1408C36D0(a1 + 24);
				sub_1408AE720(a1 + 208);
			}
			sub_1408C2D60(a1);
			goto LABEL_19;
		}
	}
	return result;
}

