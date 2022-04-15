#include "../winhttp.h"

//----- (000000014004F700) ----------------------------------------------------
__int64 __fastcall sub_14004F700(__int64 a1)
{
	_QWORD* v2; // rax
	int v3; // ecx
	_QWORD* v4; // rax
	int v5; // ecx
	__int64 result; // rax

	sub_1400BA130(a1 + 16);
	sub_1400522F0((_QWORD*)(a1 + 640));
	sub_1400522F0((_QWORD*)(a1 + 680));
	v2 = (_QWORD*)(a1 + 816);
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_QWORD*)(a1 + 800) = 0i64;
	v3 = 22;
	do
	{
		--v3;
		v2[1] = 0i64;
		*v2 = 0i64;
		v2 += 2;
	} while (v3 >= 0);
	v4 = (_QWORD*)(a1 + 1184);
	v5 = 16;
	do
	{
		--v5;
		v4[1] = 0i64;
		*v4 = 0i64;
		v4 += 2;
	} while (v5 >= 0);
	*(_QWORD*)(a1 + 1464) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	sub_140052250((_QWORD*)(a1 + 1480));
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_QWORD*)(a1 + 1524) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	result = a1;
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 1520) = 0;
	*(_DWORD*)(a1 + 1472) = 0;
	*(_QWORD*)(a1 + 752) = 0i64;
	return result;
}

