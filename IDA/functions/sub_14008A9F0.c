#include "../winhttp.h"

//----- (000000014008A9F0) ----------------------------------------------------
__int64 __fastcall sub_14008A9F0(__int64 a1, unsigned __int8* a2)
{
	__int64 v2; // r8
	unsigned __int8 v4; // dl
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	unsigned __int8 v12; // dl
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	unsigned __int8 v17; // di
	__int64 v18; // r8
	unsigned __int8 v19; // dl
	__int64 v20; // rcx
	unsigned __int64 v21; // r9
	_QWORD* v22; // rdx
	__int64 v23; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0xF) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 4ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1403360D0(a1, *((unsigned __int16**)a2 + 1), *((_QWORD*)a2 + 1) + 4i64 * *a2);
	if ((int)result >= 0)
	{
		v11 = *(_QWORD*)(a1 + 8);
		v12 = a2[16];
		if (v11
			&& (v13 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
		{
			v14 = v12;
			v15 = *(_QWORD**)(v11 + 32);
			*v15 &= (1i64 << v13) - 1;
			*v15 |= (v14 & 7) << *(_QWORD*)(a1 + 16);
			v16 = *(_QWORD*)(a1 + 16);
			if (((v16 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
			*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
		}
		else
		{
			result = sub_140336470(a1, v12, 3ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_1400A7250(a1, a2[17], 5ui64);
		if ((int)result >= 0)
		{
			v17 = 0;
			if (a2[17])
			{
				while (1)
				{
					result = sub_14008A810(a1, (unsigned int*)(*((_QWORD*)a2 + 3) + 8i64 * v17));
					if ((int)result < 0)
						break;
					if (++v17 >= a2[17])
						goto LABEL_18;
				}
			}
			else
			{
			LABEL_18:
				v18 = *(_QWORD*)(a1 + 8);
				v19 = a2[32];
				if (v18
					&& (v20 = *(_QWORD*)(a1 + 16),
						(unsigned __int64)(8i64 * (*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 32)) - v20) >= 0x40))
				{
					v21 = v19;
					v22 = *(_QWORD**)(v18 + 32);
					*v22 &= (1i64 << v20) - 1;
					*v22 |= (v21 & 0x7F) << *(_QWORD*)(a1 + 16);
					v23 = *(_QWORD*)(a1 + 16);
					if (((v23 + 14) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
						*(_BYTE*)(*(_QWORD*)(v18 + 32) + 8i64) = v21 >> (64 - (unsigned __int8)v23);
					*(_QWORD*)(v18 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 7i64) >> 3;
					*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 1) & 7;
				}
				else
				{
					result = sub_140336470(a1, v19, 7ui64);
					if ((int)result < 0)
						return result;
				}
				return sub_1403360D0(a1, *((unsigned __int16**)a2 + 5), *((_QWORD*)a2 + 5) + 2i64 * a2[32]);
			}
		}
	}
	return result;
}

