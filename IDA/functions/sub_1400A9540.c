#include "../winhttp.h"

//----- (00000001400A9540) ----------------------------------------------------
__int64 __fastcall sub_1400A9540(__int64 a1, __int64 a2)
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
	__int64 v16; // r8
	unsigned __int64 v17; // rdx
	__int64 v18; // rcx
	unsigned __int64 v19; // r9
	_QWORD* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // r8
	__int64 v23; // rcx
	unsigned __int64 v24; // r9
	_QWORD* v25; // rdx
	__int64 v26; // rcx
	__int64 i; // rsi

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
		*v14 |= (unsigned __int64)(unsigned int)v13 << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v11, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	v16 = *(_QWORD*)(a1 + 8);
	v17 = *(unsigned int*)(a2 + 12);
	if (v16
		&& (v18 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v16 + 24) - *(_QWORD*)(v16 + 32)) - v18) >= 0x40))
	{
		v19 = (unsigned int)v17;
		v20 = *(_QWORD**)(v16 + 32);
		*v20 &= (1i64 << v18) - 1;
		*v20 |= (v19 & 0x3FFF) << *(_QWORD*)(a1 + 16);
		v21 = *(_QWORD*)(a1 + 16);
		if (((v21 + 21) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v16 + 32) + 8i64) = v19 >> (64 - (unsigned __int8)v21);
		*(_QWORD*)(v16 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 14i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, v17, 0xEui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_140336040(a1, *(unsigned __int16**)(a2 + 16));
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 24));
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *(_DWORD*)(a2 + 32), 0x15ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A7110(a1, *(_DWORD*)(a2 + 36), 0x15ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, *(_DWORD*)(a2 + 40), 0x12ui64);
					if ((int)result >= 0)
					{
						v22 = *(_QWORD*)(a1 + 8);
						if (v22
							&& (v23 = *(_QWORD*)(a1 + 16),
								(unsigned __int64)(8i64 * (*(_QWORD*)(v22 + 24) - *(_QWORD*)(v22 + 32)) - v23) >= 0x40))
						{
							v24 = *(int*)(a2 + 44);
							v25 = *(_QWORD**)(v22 + 32);
							*v25 &= (1i64 << v23) - 1;
							*v25 |= (v24 & 0xF) << *(_QWORD*)(a1 + 16);
							v26 = *(_QWORD*)(a1 + 16);
							if (((v26 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
								*(_BYTE*)(*(_QWORD*)(v22 + 32) + 8i64) = v24 >> (64 - (unsigned __int8)v26);
							*(_QWORD*)(v22 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
							*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
						}
						else
						{
							result = sub_140336470(a1, *(int*)(a2 + 44), 4ui64);
							if ((int)result < 0)
								return result;
						}
						result = sub_1400A7160(a1, *(_QWORD*)(a2 + 48));
						if ((int)result >= 0)
						{
							result = sub_1400A7160(a1, *(_QWORD*)(a2 + 56));
							if ((int)result >= 0)
							{
								result = sub_14006BD80(a1, *(float*)(a2 + 64));
								if ((int)result >= 0)
								{
									result = sub_1400A7110(a1, *(_DWORD*)(a2 + 68), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_140085170(a1, (unsigned int*)(a2 + 72));
										if ((int)result >= 0)
										{
											result = sub_1400A7110(a1, *(_DWORD*)(a2 + 88), 0x20ui64);
											if ((int)result >= 0)
											{
												for (i = 0i64; (unsigned int)i < *(_DWORD*)(a2 + 88); i = (unsigned int)(i + 1))
												{
													result = sub_1400A9260(a1, (unsigned int*)(*(_QWORD*)(a2 + 96) + 96 * i));
													if ((int)result < 0)
														break;
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
		}
	}
	return result;
}

