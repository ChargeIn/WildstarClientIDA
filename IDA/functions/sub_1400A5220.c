#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A5220) ----------------------------------------------------
__int64 __fastcall sub_1400A5220(__int64 a1, __int64 a2)
{
	unsigned __int64 i; // rdi
	__int64 v5; // r8
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

	for (i = 0i64; i < 4; ++i)
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (v5
			&& (v6 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v6) >= 0x40))
		{
			v7 = *(int*)(a2 + 8 * i);
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v6) - 1;
			*v8 |= (v7 & 0x1FF) << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 16) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 9i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
		}
		else
		{
			result = sub_140336470(a1, *(int*)(a2 + 8 * i), 9ui64);
			if ((int)result < 0)
				return result;
		}
		v11 = *(_QWORD*)(a1 + 8);
		v12 = *(unsigned int*)(a2 + 8 * i + 4);
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
	}
	return result;
}

