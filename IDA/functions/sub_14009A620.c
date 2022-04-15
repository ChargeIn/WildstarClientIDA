#include "../winhttp.h"

//----- (000000014009A620) ----------------------------------------------------
__int64 __fastcall sub_14009A620(__int64 a1, int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	unsigned __int64 v11; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 7) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 3ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *a2;
	if (v11 < 7)
		return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14009A6FF[v11])(
			a1,
			(__int64)(a2 + 2),
			funcs_14009A6FF);
	else
		return 2147500037i64;
}
// 140C1E9E0: using guessed type __int64 (__fastcall *funcs_14009A6FF[61])();

