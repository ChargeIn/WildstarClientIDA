//----- (00000001400ABD30) ----------------------------------------------------
__int64 __fastcall sub_1400ABD30(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rcx
	unsigned __int64 v19; // r9
	_QWORD* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // r8
	__int64 v23; // rcx
	unsigned __int64 v24; // r9
	_QWORD* v25; // rdx
	__int64 v26; // rcx
	__int64 v27; // r8
	__int64 v28; // rcx
	unsigned __int64 v29; // r9
	_QWORD* v30; // rdx
	__int64 v31; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (unsigned __int64)(unsigned int)v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v4, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_140336040(a1, *((unsigned __int16**)a2 + 1));
	if ((int)result >= 0)
	{
		v11 = *(_QWORD*)(a1 + 8);
		v12 = a2[4];
		if (v11
			&& (v13 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
		{
			v14 = (unsigned int)v12;
			v15 = *(_QWORD**)(v11 + 32);
			*v15 &= (1i64 << v13) - 1;
			*v15 |= (unsigned __int64)(unsigned int)v14 << *(_QWORD*)(a1 + 16);
			v16 = *(_QWORD*)(a1 + 16);
			if (((v16 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
			*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v12, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_1400A7110(a1, a2[5], 0x20ui64);
		if ((int)result >= 0)
		{
			v17 = *(_QWORD*)(a1 + 8);
			if (v17
				&& (v18 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v17 + 24) - *(_QWORD*)(v17 + 32)) - v18) >= 0x40))
			{
				v19 = (int)a2[6];
				v20 = *(_QWORD**)(v17 + 32);
				*v20 &= (1i64 << v18) - 1;
				*v20 |= (v19 & 3) << *(_QWORD*)(a1 + 16);
				v21 = *(_QWORD*)(a1 + 16);
				if (((v21 + 9) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v17 + 32) + 8i64) = v19 >> (64 - (unsigned __int8)v21);
				*(_QWORD*)(v17 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 2i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
			}
			else
			{
				result = sub_140336470(a1, (int)a2[6], 2ui64);
				if ((int)result < 0)
					return result;
			}
			v22 = *(_QWORD*)(a1 + 8);
			if (v22
				&& (v23 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v22 + 24) - *(_QWORD*)(v22 + 32)) - v23) >= 0x40))
			{
				v24 = (int)a2[7];
				v25 = *(_QWORD**)(v22 + 32);
				*v25 &= (1i64 << v23) - 1;
				*v25 |= (v24 & 7) << *(_QWORD*)(a1 + 16);
				v26 = *(_QWORD*)(a1 + 16);
				if (((v26 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v22 + 32) + 8i64) = v24 >> (64 - (unsigned __int8)v26);
				*(_QWORD*)(v22 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
			}
			else
			{
				result = sub_140336470(a1, (int)a2[7], 3ui64);
				if ((int)result < 0)
					return result;
			}
			v27 = *(_QWORD*)(a1 + 8);
			if (v27
				&& (v28 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v27 + 24) - *(_QWORD*)(v27 + 32)) - v28) >= 0x40))
			{
				v29 = (int)a2[8];
				v30 = *(_QWORD**)(v27 + 32);
				*v30 &= (1i64 << v28) - 1;
				*v30 |= (v29 & 7) << *(_QWORD*)(a1 + 16);
				v31 = *(_QWORD*)(a1 + 16);
				if (((v31 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v27 + 32) + 8i64) = v29 >> (64 - (unsigned __int8)v31);
				*(_QWORD*)(v27 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
			}
			else
			{
				result = sub_140336470(a1, (int)a2[8], 3ui64);
				if ((int)result < 0)
					return result;
			}
			result = sub_1400A7110(a1, a2[9], 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_1403360D0(a1, (unsigned __int16*)a2 + 20, (__int64)(a2 + 14));
				if ((int)result >= 0)
				{
					result = sub_1400ABA70(a1, a2 + 14);
					if ((int)result >= 0)
					{
						result = sub_1400A7360(a1, *((_WORD*)a2 + 40));
						if ((int)result >= 0)
						{
							result = sub_1400A7360(a1, *((_WORD*)a2 + 41));
							if ((int)result >= 0)
							{
								result = sub_1400A7360(a1, *((_WORD*)a2 + 42));
								if ((int)result >= 0)
									return sub_1400A7360(a1, *((_WORD*)a2 + 43));
							}
						}
					}
				}
			}
		}
	}
	return result;
}

