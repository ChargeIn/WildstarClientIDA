#include "../winhttp.h"

//----- (00000001400AC770) ----------------------------------------------------
__int64 __fastcall sub_1400AC770(__int64 a1, __int64 a2)
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
	unsigned int v16; // edi
	unsigned int v17; // ebp
	__int64 v18; // r8
	unsigned __int64 v19; // rdx
	__int64 v20; // rcx
	unsigned __int64 v21; // r9
	_QWORD* v22; // rdx
	__int64 v23; // rcx

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
	v16 = 0;
	v17 = 0;
	if (*(_DWORD*)(a2 + 8))
	{
		while (1)
		{
			result = sub_1400ABD30(a1, (unsigned int*)(*(_QWORD*)(a2 + 16) + 88i64 * v17));
			if ((int)result < 0)
				break;
			if (++v17 >= *(_DWORD*)(a2 + 8))
				goto LABEL_16;
		}
	}
	else
	{
	LABEL_16:
		v18 = *(_QWORD*)(a1 + 8);
		v19 = *(unsigned int*)(a2 + 24);
		if (v18
			&& (v20 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 32)) - v20) >= 0x40))
		{
			v21 = (unsigned int)v19;
			v22 = *(_QWORD**)(v18 + 32);
			*v22 &= (1i64 << v20) - 1;
			*v22 |= (unsigned __int64)(unsigned int)v21 << *(_QWORD*)(a1 + 16);
			v23 = *(_QWORD*)(a1 + 16);
			if (((v23 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v18 + 32) + 8i64) = v21 >> (64 - (unsigned __int8)v23);
			*(_QWORD*)(v18 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, v19, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		if (*(_DWORD*)(a2 + 24))
		{
			do
			{
				result = sub_1400AC410(a1, (unsigned int*)(*(_QWORD*)(a2 + 32) + 16i64 * v16));
				if ((int)result < 0)
					break;
				++v16;
			} while (v16 < *(_DWORD*)(a2 + 24));
		}
	}
	return result;
}

