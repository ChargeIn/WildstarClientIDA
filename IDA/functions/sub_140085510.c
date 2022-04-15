#include "../winhttp.h"

//----- (0000000140085510) ----------------------------------------------------
__int64 __fastcall sub_140085510(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64 v3; // r9
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // r8
	unsigned __int64 v11; // rdx
	__int64 v12; // rcx
	unsigned __int64 v13; // r9
	_QWORD* v14; // rdx
	__int64 v15; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = *(_QWORD**)(v2 + 32);
		*v7 &= (1i64 << v6) - 1;
		*v7 |= v3 << *(_QWORD*)(a1 + 16);
		v8 = *(_QWORD*)(a1 + 16);
		if (((v8 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v3 >> (64 - (unsigned __int8)v8);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, *(_QWORD*)a2, 0x40ui64);
		if ((int)result < 0)
			return result;
	}
	v10 = *(_QWORD*)(a1 + 8);
	v11 = *(unsigned int*)(a2 + 8);
	if (v10
		&& (v12 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v10 + 24) - *(_QWORD*)(v10 + 32)) - v12) >= 0x40))
	{
		v13 = (unsigned int)v11;
		v14 = *(_QWORD**)(v10 + 32);
		*v14 &= (1i64 << v12) - 1;
		*v14 |= (v13 & 0x3FFFF) << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 25) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 18i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, v11, 0x12ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400A7160(a1, *(_QWORD*)(a2 + 16));
	if ((int)result >= 0)
	{
		result = sub_1400A7160(a1, *(_QWORD*)(a2 + 24));
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *(_DWORD*)(a2 + 32), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A7160(a1, *(_QWORD*)(a2 + 40));
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, *(_DWORD*)(a2 + 48), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400A7110(a1, *(_DWORD*)(a2 + 52), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_1400A7250(a1, *(_BYTE*)(a2 + 56), 8ui64);
							if ((int)result >= 0)
							{
								result = sub_1400A7110(a1, *(_DWORD*)(a2 + 60), 0x12ui64);
								if ((int)result >= 0)
								{
									result = sub_1400A7250(a1, *(_BYTE*)(a2 + 64), 3ui64);
									if ((int)result >= 0)
									{
										result = sub_1403360D0(
											a1,
											*(unsigned __int16**)(a2 + 72),
											*(_QWORD*)(a2 + 72) + 4i64 * *(unsigned __int8*)(a2 + 64));
										if ((int)result >= 0)
										{
											result = sub_1400A7250(a1, *(_BYTE*)(a2 + 80), 4ui64);
											if ((int)result >= 0)
												return sub_1403360D0(
													a1,
													*(unsigned __int16**)(a2 + 88),
													*(_QWORD*)(a2 + 88) + 4i64 * *(unsigned __int8*)(a2 + 80));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}

