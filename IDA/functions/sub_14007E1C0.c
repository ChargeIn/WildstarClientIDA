#include "../winhttp.h"

//----- (000000014007E1C0) ----------------------------------------------------
__int64 __fastcall sub_14007E1C0(__int64 a1, int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	int* v11; // rdx
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0x1F) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 12) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 5i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 3) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 5ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = (int*)*((_QWORD*)a2 + 1);
	if (v11)
		return sub_1403365E0(a1, v11, (int*)((char*)v11 + (unsigned int)*v11));
	v12 = 0i64;
	return sub_1403365E0(a1, (int*)&v12, (int*)&v12 + 1);
}

