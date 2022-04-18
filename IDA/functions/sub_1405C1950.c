#include "../winhttp.h"

//----- (00000001405C1950) ----------------------------------------------------
__int64 __fastcall sub_1405C1950(__int64* a1, int** a2)
{
	__int64 v4; // rsi
	_DWORD* v5; // r14
	__int64 v6; // rbp
	__int64 v7; // rdx
	__int64 v8; // rcx
	int* v9; // rdx
	__int64 v10; // rax

	sub_1405C4A60((__int64)(a1 + 11), a1[12], a1[13]);
	v4 = 0i64;
	v5 = a2 + 2;
	v6 = 2i64;
	do
	{
		v7 = a1[13];
		if (v7 == a1[14])
		{
			sub_1405C4EC0(a1 + 11, v7);
		}
		else
		{
			if (v7)
				sub_1405BECB0((_QWORD*)a1[13]);
			a1[13] += 40i64;
		}
		v8 = v4 + a1[12];
		*(_DWORD*)(v8 + 32) = *v5;
		v9 = *a2;
		v10 = 0i64;
		if (*(_WORD*)*a2)
		{
			do
				++v10;
			while (*((_WORD*)v9 + v10));
		}
		sub_14001C480(v8, v9, (int*)((char*)v9 + 2 * v10));
		++v5;
		v4 += 40i64;
		++a2;
		--v6;
	} while (v6);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PVPMatchTeamInfoUpdated", byte_1409D128F);
	return 0i64;
}
// 1409D128F: using guessed type _BYTE byte_1409D128F[18];
// 140C65898: using guessed type __int64 qword_140C65898;

