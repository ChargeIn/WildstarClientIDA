//----- (00000001400A8E10) ----------------------------------------------------
__int64 __fastcall sub_1400A8E10(__int64 a1, unsigned int* a2)
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
	unsigned __int64 v18; // rdx
	__int64 v19; // rcx
	unsigned __int64 v20; // r9
	_QWORD* v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // r8
	__int64 v24; // rcx
	unsigned __int64 v25; // r9
	_QWORD* v26; // rdx
	__int64 v27; // rcx

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
	v11 = *(_QWORD*)(a1 + 8);
	v12 = a2[1];
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
	v17 = *(_QWORD*)(a1 + 8);
	v18 = a2[2];
	if (v17
		&& (v19 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v17 + 24) - *(_QWORD*)(v17 + 32)) - v19) >= 0x40))
	{
		v20 = (unsigned int)v18;
		v21 = *(_QWORD**)(v17 + 32);
		*v21 &= (1i64 << v19) - 1;
		*v21 |= (unsigned __int64)(unsigned int)v20 << *(_QWORD*)(a1 + 16);
		v22 = *(_QWORD*)(a1 + 16);
		if (((v22 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v17 + 32) + 8i64) = v20 >> (64 - (unsigned __int8)v22);
		*(_QWORD*)(v17 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v18, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400A7110(a1, a2[3], 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_1400A7160(a1, *((_QWORD*)a2 + 2));
		if ((int)result >= 0)
		{
			result = sub_1400A7360(a1, *((_WORD*)a2 + 12));
			if ((int)result >= 0)
			{
				v23 = *(_QWORD*)(a1 + 8);
				if (v23
					&& (v24 = *(_QWORD*)(a1 + 16),
						(unsigned __int64)(8i64 * (*(_QWORD*)(v23 + 24) - *(_QWORD*)(v23 + 32)) - v24) >= 0x40))
				{
					v25 = (int)a2[7];
					v26 = *(_QWORD**)(v23 + 32);
					*v26 &= (1i64 << v24) - 1;
					*v26 |= (v25 & 0x1F) << *(_QWORD*)(a1 + 16);
					v27 = *(_QWORD*)(a1 + 16);
					if (((v27 + 12) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
						*(_BYTE*)(*(_QWORD*)(v23 + 32) + 8i64) = v25 >> (64 - (unsigned __int8)v27);
					*(_QWORD*)(v23 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 5i64) >> 3;
					*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 3) & 7;
				}
				else
				{
					result = sub_140336470(a1, (int)a2[7], 5ui64);
					if ((int)result < 0)
						return result;
				}
				result = sub_1400A7110(a1, a2[8], 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, a2[9], 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400A7160(a1, *((_QWORD*)a2 + 5));
						if ((int)result >= 0)
							return sub_1400A7110(a1, a2[12], 0x20ui64);
					}
				}
			}
		}
	}
	return result;
}

