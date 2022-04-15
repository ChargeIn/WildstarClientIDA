#include "../winhttp.h"

//----- (00000001400AD8A0) ----------------------------------------------------
__int64 __fastcall sub_1400AD8A0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rdi
	__int64 v12; // r14
	__int64 v13; // r8
	__int64 v14; // rcx
	unsigned __int64 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // rcx
	unsigned __int64 v20; // r9
	_QWORD* v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // r8
	unsigned __int64 v24; // rdx
	__int64 v25; // rcx
	unsigned __int64 v26; // r9
	_QWORD* v27; // rdx
	__int64 v28; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0x3FF) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 17) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 10i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 0xAui64);
		if ((int)result < 0)
			return result;
	}
	v11 = 0i64;
	if (*a2)
	{
		while (1)
		{
			v12 = *((_QWORD*)a2 + 1);
			result = sub_14006BD80(a1, *(float*)(v12 + 12 * v11));
			if ((int)result < 0)
				break;
			result = sub_14006BD80(a1, *(float*)(v12 + 12 * v11 + 4));
			if ((int)result < 0)
				break;
			result = sub_14006BD80(a1, *(float*)(v12 + 12 * v11 + 8));
			if ((int)result < 0)
				break;
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= *a2)
				goto LABEL_12;
		}
	}
	else
	{
	LABEL_12:
		result = sub_1400A8A90(a1, (unsigned __int16*)a2 + 8);
		if ((int)result < 0)
			return result;
		v13 = *(_QWORD*)(a1 + 8);
		if (v13
			&& (v14 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v13 + 24) - *(_QWORD*)(v13 + 32)) - v14) >= 0x40))
		{
			v15 = (int)a2[5];
			v16 = *(_QWORD**)(v13 + 32);
			*v16 &= (1i64 << v14) - 1;
			*v16 |= (v15 & 3) << *(_QWORD*)(a1 + 16);
			v17 = *(_QWORD*)(a1 + 16);
			if (((v17 + 9) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v13 + 32) + 8i64) = v15 >> (64 - (unsigned __int8)v17);
			*(_QWORD*)(v13 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 2i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
		}
		else
		{
			result = sub_140336470(a1, (int)a2[5], 2ui64);
			if ((int)result < 0)
				return result;
		}
		v18 = *(_QWORD*)(a1 + 8);
		if (v18
			&& (v19 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 32)) - v19) >= 0x40))
		{
			v20 = (int)a2[6];
			v21 = *(_QWORD**)(v18 + 32);
			*v21 &= (1i64 << v19) - 1;
			*v21 |= (v20 & 0xF) << *(_QWORD*)(a1 + 16);
			v22 = *(_QWORD*)(a1 + 16);
			if (((v22 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v18 + 32) + 8i64) = v20 >> (64 - (unsigned __int8)v22);
			*(_QWORD*)(v18 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
		}
		else
		{
			result = sub_140336470(a1, (int)a2[6], 4ui64);
			if ((int)result < 0)
				return result;
		}
		v23 = *(_QWORD*)(a1 + 8);
		v24 = a2[7];
		if (v23
			&& (v25 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v23 + 24) - *(_QWORD*)(v23 + 32)) - v25) >= 0x40))
		{
			v26 = (unsigned int)v24;
			v27 = *(_QWORD**)(v23 + 32);
			*v27 &= (1i64 << v25) - 1;
			*v27 |= (unsigned __int64)(unsigned int)v26 << *(_QWORD*)(a1 + 16);
			v28 = *(_QWORD*)(a1 + 16);
			if (((v28 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v23 + 32) + 8i64) = v26 >> (64 - (unsigned __int8)v28);
			*(_QWORD*)(v23 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v24, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		return sub_1400A7250(a1, a2[8] != 0, 1ui64);
	}
	return result;
}

