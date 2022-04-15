#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A6200) ----------------------------------------------------
__int64 __fastcall sub_1400A6200(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64 v3; // r9
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 result; // rax
	_DWORD* v10; // rdi
	unsigned __int64 i; // rsi
	__int64 v12; // r8
	bool v13; // dl
	__int64 v14; // rcx
	_BOOL8 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx

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
	v10 = (_DWORD*)(a2 + 20);
	result = sub_1403360D0(a1, (unsigned __int16*)(a2 + 8), a2 + 20);
	if ((int)result >= 0)
	{
		for (i = 0i64; i < 3; ++i)
		{
			v12 = *(_QWORD*)(a1 + 8);
			v13 = *v10 != 0;
			if (v12
				&& (v14 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v14) >= 0x40))
			{
				v15 = v13;
				v16 = *(_QWORD**)(v12 + 32);
				*v16 &= (1i64 << v14) - 1;
				*v16 |= v15 << *(_QWORD*)(a1 + 16);
				v17 = *(_QWORD*)(a1 + 16);
				if (((v17 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = (unsigned __int64)v15 >> (64 - (unsigned __int8)v17);
				*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
				result = 0i64;
			}
			else
			{
				result = sub_140336470(a1, v13, 1ui64);
				if ((int)result < 0)
					return result;
			}
			++v10;
		}
	}
	return result;
}

