#include "../winhttp.h"

//----- (000000014009BA00) ----------------------------------------------------
__int64 __fastcall sub_14009BA00(__int64 a1, char* a2)
{
	__int64 v2; // r8
	unsigned __int8 v4; // dl
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	unsigned __int8 v11; // bl
	__int64 v12; // r8
	unsigned __int8 v13; // dl
	__int64 v14; // rcx
	unsigned __int64 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx

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
		if (((v9 + 15) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 8i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v4, 8ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = 0;
	if (*a2)
	{
		while (1)
		{
			result = sub_140085170(a1, (unsigned int*)(*((_QWORD*)a2 + 1) + 16i64 * v11));
			if ((int)result < 0)
				break;
			if (++v11 >= (unsigned __int8)*a2)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v12 = *(_QWORD*)(a1 + 8);
		v13 = a2[16];
		if (v12
			&& (v14 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v14) >= 0x40))
		{
			v15 = v13;
			v16 = *(_QWORD**)(v12 + 32);
			*v16 &= (1i64 << v14) - 1;
			*v16 |= (unsigned __int64)(unsigned int)v15 << *(_QWORD*)(a1 + 16);
			v17 = *(_QWORD*)(a1 + 16);
			if (((v17 + 15) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = v15 >> (64 - (unsigned __int8)v17);
			*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 8i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v13, 8ui64);
			if ((int)result < 0)
				return result;
		}
		return sub_1403360D0(a1, *((unsigned __int16**)a2 + 3), *((_QWORD*)a2 + 3) + 8i64 * (unsigned __int8)a2[16]);
	}
	return result;
}

