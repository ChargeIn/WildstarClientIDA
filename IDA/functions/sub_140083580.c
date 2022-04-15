#include "../winhttp.h"

//----- (0000000140083580) ----------------------------------------------------
__int64 __fastcall sub_140083580(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64 v3; // r9
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // r8
	__int64 v11; // rcx
	unsigned __int64 v12; // r9
	_QWORD* v13; // rdx
	__int64 v14; // rcx

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
	if (v10
		&& (v11 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v10 + 24) - *(_QWORD*)(v10 + 32)) - v11) >= 0x40))
	{
		v12 = *(int*)(a2 + 8);
		v13 = *(_QWORD**)(v10 + 32);
		*v13 &= (1i64 << v11) - 1;
		*v13 |= (v12 & 7) << *(_QWORD*)(a1 + 16);
		v14 = *(_QWORD*)(a1 + 16);
		if (((v14 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = v12 >> (64 - (unsigned __int8)v14);
		*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
	}
	else
	{
		result = sub_140336470(a1, *(int*)(a2 + 8), 3ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400A7300(a1, *(_DWORD*)(a2 + 12));
	if ((int)result >= 0)
	{
		result = sub_1400A73C0(a1, *(_DWORD*)(a2 + 16));
		if ((int)result >= 0)
			return sub_1400A7420(a1, *(_DWORD*)(a2 + 20));
	}
	return result;
}

