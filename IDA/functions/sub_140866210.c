#include "../winhttp.h"

//----- (0000000140866210) ----------------------------------------------------
__int64 __fastcall sub_140866210(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	_DWORD* a7,
	char a8,
	int a9,
	__int64 a10,
	_DWORD* a11,
	char a12,
	__int64 a13,
	__int64 a14)
{
	__int64 v15; // rcx
	char v16; // dl
	int v17; // ecx
	char v18; // al
	char v19; // al

	sub_14085CFE0(a1, a2, a3, a4, a6, a7, a9, a11, a12, 0, a13, a14);
	*(_QWORD*)a1 = off_1409A4810;
	*(_QWORD*)(a1 + 16) = &off_1409A48A0;
	v15 = *(_QWORD*)(a5 + 32);
	*(_QWORD*)(a1 + 544) = v15;
	if (v15)
		sub_140865FB0(v15);
	*(_DWORD*)(a1 + 620) = 0;
	v16 = *(_BYTE*)(a1 + 644);
	*(_DWORD*)(a1 + 640) &= 0xFFFFFFF0;
	*(_QWORD*)(a1 + 624) = a10;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_BYTE*)(a1 + 644) = a8 & 1 | v16 & 0xF8;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a10 + 8i64))(a10);
	if (!*(_DWORD*)(a1 + 152))
	{
		v17 = dword_140C110FC++;
		*(_DWORD*)(a1 + 152) = v17;
	}
	*(_DWORD*)(a1 + 404) = *(_DWORD*)(a5 + 40);
	if (!*(_QWORD*)(a1 + 128))
	{
		*(_QWORD*)(a1 + 128) = *(_QWORD*)a5;
		v18 = *(_BYTE*)(a5 + 24);
		*(_QWORD*)a5 = 0i64;
		*(_BYTE*)(a1 + 144) ^= (*(_BYTE*)(a1 + 144) ^ v18) & 1;
	}
	if (!*(_QWORD*)(a1 + 136))
	{
		*(_QWORD*)(a1 + 136) = *(_QWORD*)(a5 + 8);
		v19 = *(_BYTE*)(a5 + 25);
		*(_QWORD*)(a5 + 8) = 0i64;
		*(_BYTE*)(a1 + 144) ^= (*(_BYTE*)(a1 + 144) ^ (2 * v19)) & 2;
	}
	*(_DWORD*)(a1 + 552) = 0;
	sub_1408668E0((_DWORD*)a1, a7);
	return a1;
}
// 1409A4810: using guessed type __int64 (__fastcall *off_1409A4810[19])();
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();
// 140C110FC: using guessed type int dword_140C110FC;

