#include "../winhttp.h"

//----- (000000014009D760) ----------------------------------------------------
__int64 __fastcall sub_14009D760(__int64 a1, int* a2)
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
	unsigned int v17; // esi
	__int64 i; // rsi
	__int64 v19; // r8
	bool v20; // dl
	__int64 v21; // rcx
	_BOOL8 v22; // r9
	_QWORD* v23; // rdx
	__int64 v24; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 7) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 3ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = (unsigned int)a2[1];
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
		result = 0i64;
	}
	else
	{
		result = sub_140336470(a1, v12, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	v17 = 0;
	if (a2[1])
	{
		while (1)
		{
			result = sub_14009D0A0(a1, *((_QWORD*)a2 + 1) + 104i64 * v17);
			if ((int)result < 0)
				break;
			if (++v17 >= a2[1])
				goto LABEL_16;
		}
	}
	else
	{
	LABEL_16:
		for (i = 0i64; (unsigned int)i < a2[1]; i = (unsigned int)(i + 1))
		{
			v19 = *(_QWORD*)(a1 + 8);
			v20 = *(_DWORD*)(*((_QWORD*)a2 + 2) + 4 * i) != 0;
			if (v19
				&& (v21 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v19 + 24) - *(_QWORD*)(v19 + 32)) - v21) >= 0x40))
			{
				v22 = v20;
				v23 = *(_QWORD**)(v19 + 32);
				*v23 &= (1i64 << v21) - 1;
				*v23 |= v22 << *(_QWORD*)(a1 + 16);
				v24 = *(_QWORD*)(a1 + 16);
				if (((v24 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v19 + 32) + 8i64) = (unsigned __int64)v22 >> (64 - (unsigned __int8)v24);
				*(_QWORD*)(v19 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
				result = 0i64;
			}
			else
			{
				result = sub_140336470(a1, v20, 1ui64);
				if ((int)result < 0)
					return result;
			}
		}
	}
	return result;
}

