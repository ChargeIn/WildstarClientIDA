#include "../winhttp.h"

//----- (000000014009FB50) ----------------------------------------------------
__int64 __fastcall sub_14009FB50(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // r9
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // r8
	bool v11; // dl
	__int64 v12; // rcx
	_BOOL8 v13; // r9
	_QWORD* v14; // rdx
	__int64 v15; // rcx

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(_QWORD*)(a2 + 16);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v7) - 1;
			*v8 |= v6 << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v6 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v6, 0x40ui64);
			if ((int)result < 0)
				return result;
		}
		v10 = *(_QWORD*)(a1 + 8);
		v11 = *(_DWORD*)(a2 + 24) != 0;
		if (v10
			&& (v12 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v10 + 24) - *(_QWORD*)(v10 + 32)) - v12) >= 0x40))
		{
			v13 = v11;
			v14 = *(_QWORD**)(v10 + 32);
			*v14 &= (1i64 << v12) - 1;
			*v14 |= v13 << *(_QWORD*)(a1 + 16);
			v15 = *(_QWORD*)(a1 + 16);
			if (((v15 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = (unsigned __int64)v13 >> (64 - (unsigned __int8)v15);
			*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
			return 0i64;
		}
		else
		{
			return sub_140336470(a1, v11, 1ui64);
		}
	}
	return result;
}

