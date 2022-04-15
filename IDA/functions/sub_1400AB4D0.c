#include "../winhttp.h"

//----- (00000001400AB4D0) ----------------------------------------------------
__int64 __fastcall sub_1400AB4D0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rbx
	unsigned int v12; // ebp
	__int64 v13; // r8
	unsigned __int64 v14; // rdx
	__int64 v15; // rcx
	unsigned __int64 v16; // r9
	_QWORD* v17; // rdx
	__int64 v18; // rcx

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
	v11 = 0i64;
	v12 = 0;
	if (*a2)
	{
		while (1)
		{
			result = sub_1400AB310(a1, *((_QWORD*)a2 + 1) + 12i64 * v12);
			if ((int)result < 0)
				break;
			if (++v12 >= *a2)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v13 = *(_QWORD*)(a1 + 8);
		v14 = a2[4];
		if (v13
			&& (v15 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v13 + 24) - *(_QWORD*)(v13 + 32)) - v15) >= 0x40))
		{
			v16 = (unsigned int)v14;
			v17 = *(_QWORD**)(v13 + 32);
			*v17 &= (1i64 << v15) - 1;
			*v17 |= (unsigned __int64)(unsigned int)v16 << *(_QWORD*)(a1 + 16);
			v18 = *(_QWORD*)(a1 + 16);
			if (((v18 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v13 + 32) + 8i64) = v16 >> (64 - (unsigned __int8)v18);
			*(_QWORD*)(v13 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, v14, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		if (a2[4])
		{
			do
			{
				result = sub_1400AB310(a1, *((_QWORD*)a2 + 3) + 12 * v11);
				if ((int)result < 0)
					break;
				v11 = (unsigned int)(v11 + 1);
			} while ((unsigned int)v11 < a2[4]);
		}
	}
	return result;
}

