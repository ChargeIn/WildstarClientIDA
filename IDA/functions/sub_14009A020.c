#include "../winhttp.h"

//----- (000000014009A020) ----------------------------------------------------
__int64 __fastcall sub_14009A020(__int64 a1, __int64 a2)
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
	bool v17; // dl
	__int64 v18; // rcx
	_BOOL8 v19; // r9
	_QWORD* v20; // rdx
	__int64 v21; // rcx

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
	v16 = *(_QWORD*)(a1 + 8);
	v17 = *(_DWORD*)(a2 + 12) != 0;
	if (!v16)
		return sub_140336470(a1, v17, 1ui64);
	v18 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)(8i64 * (*(_QWORD*)(v16 + 24) - *(_QWORD*)(v16 + 32)) - v18) < 0x40)
		return sub_140336470(a1, v17, 1ui64);
	v19 = v17;
	v20 = *(_QWORD**)(v16 + 32);
	*v20 &= (1i64 << v18) - 1;
	*v20 |= v19 << *(_QWORD*)(a1 + 16);
	v21 = *(_QWORD*)(a1 + 16);
	if (((v21 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)(v16 + 32) + 8i64) = (unsigned __int64)v19 >> (64 - (unsigned __int8)v21);
	*(_QWORD*)(v16 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
	*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	return 0i64;
}

