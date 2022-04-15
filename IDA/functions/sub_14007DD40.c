//----- (000000014007DD40) ----------------------------------------------------
__int64 __fastcall sub_14007DD40(__int64 a1, int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	unsigned __int64 v12; // r9
	__int64 v13; // rcx
	_QWORD* v14; // rdx
	__int64 v15; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
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
	v12 = *((_QWORD*)a2 + 1);
	if (v11
		&& (v13 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
	{
		v14 = *(_QWORD**)(v11 + 32);
		*v14 &= (1i64 << v13) - 1;
		*v14 |= v12 << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v12 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, *((_QWORD*)a2 + 1), 0x40ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400C2F70(a1, (_WORD*)a2 + 8, 0xFBui64);
	if ((int)result >= 0)
	{
		result = sub_1400A8780(a1, (_WORD*)a2 + 260);
		if ((int)result >= 0)
		{
			result = sub_1400A8780(a1, (_WORD*)a2 + 268);
			if ((int)result >= 0)
			{
				result = sub_1400A7110(a1, a2[138], 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, a2[139], 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400A7110(a1, a2[140], 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_1400A7110(a1, a2[141], 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14007DC80(a1, (__int64)(a2 + 142));
								if ((int)result >= 0)
									return sub_1400A7110(a1, a2[168], 0x20ui64);
							}
						}
					}
				}
			}
		}
	}
	return result;
}

