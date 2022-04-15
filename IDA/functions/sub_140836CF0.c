#include "../winhttp.h"

//----- (0000000140836CF0) ----------------------------------------------------
__int64 __fastcall sub_140836CF0(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdx
	_QWORD* v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rcx
	unsigned int v10; // edi
	unsigned int v11; // edx
	_QWORD* v12; // rax

	*(_DWORD*)(a1 + 1552) = dword_140C10F20;
	v2 = (_QWORD*)(a1 + 1560);
	*(_DWORD*)(a1 + 3104) = 0;
	v3 = 24i64;
	v4 = 24i64;
	do
	{
		*v2 = 0i64;
		v2[1] = 0i64;
		v2[2] = 0i64;
		v2 += 8;
		*(v2 - 5) = 0i64;
		*(v2 - 4) = 0i64;
		*(v2 - 3) = 0i64;
		*(v2 - 2) = 0i64;
		*(v2 - 1) = 0i64;
		--v4;
	} while (v4);
	*v2 = 0i64;
	v5 = 24i64;
	*(_DWORD*)(a1 + 1544) = 0;
	v6 = (_QWORD*)a1;
	do
	{
		*v6 = 0i64;
		v6[1] = 0i64;
		v6[2] = 0i64;
		v6 += 8;
		*(v6 - 5) = 0i64;
		*(v6 - 4) = 0i64;
		*(v6 - 3) = 0i64;
		*(v6 - 2) = 0i64;
		*(v6 - 1) = 0i64;
		--v5;
	} while (v5);
	*v6 = 0i64;
	v7 = (_QWORD*)(a1 + 3112);
	*(_DWORD*)(a1 + 4656) = 0;
	do
	{
		*v7 = 0i64;
		v7[1] = 0i64;
		v7[2] = 0i64;
		v7 += 8;
		*(v7 - 5) = 0i64;
		*(v7 - 4) = 0i64;
		*(v7 - 3) = 0i64;
		*(v7 - 2) = 0i64;
		*(v7 - 1) = 0i64;
		--v3;
	} while (v3);
	*v7 = 0i64;
	*(_DWORD*)(a1 + 4696) = 0;
	*(_DWORD*)(a1 + 4692) = -1;
	*(_QWORD*)(a1 + 4680) = 0i64;
	v8 = sub_1408819F0(dword_140C10F20, 384i64);
	v9 = (_QWORD*)v8;
	*(_QWORD*)(a1 + 4704) = v8;
	if (v8)
	{
		*(_DWORD*)(a1 + 4688) = 16;
		*(_QWORD*)(a1 + 4680) = v8;
		v11 = 0;
		do
		{
			v12 = v9 + 3;
			++v11;
			*v9 = v9 + 3;
			v9 += 3;
		} while (v11 < *(_DWORD*)(a1 + 4688));
		*(v12 - 3) = 0i64;
		v10 = 1;
	}
	else
	{
		v10 = 52;
	}
	*(_QWORD*)(a1 + 4664) = 0i64;
	*(_QWORD*)(a1 + 4672) = 0i64;
	if (v10 == 1)
	{
		*(_DWORD*)(a1 + 4744) = 0;
		*(_DWORD*)(a1 + 4740) = -1;
		*(_QWORD*)(a1 + 4728) = 0i64;
		*(_QWORD*)(a1 + 4752) = 0i64;
		*(_QWORD*)(a1 + 4712) = 0i64;
		*(_QWORD*)(a1 + 4720) = 0i64;
		return 1i64;
	}
	else
	{
		sub_140838960(a1);
		return v10;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

