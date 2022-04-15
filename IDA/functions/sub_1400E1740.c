#include "../winhttp.h"

//----- (00000001400E1740) ----------------------------------------------------
void __fastcall sub_1400E1740(
	__int64 a1,
	char a2,
	void(__fastcall*** a3)(_QWORD),
	int* a4,
	__int64* a5,
	__m128i* a6,
	__int64 a7,
	const __m128i* a8)
{
	__int64 v12; // rcx
	int* v13; // rdx
	__int64 v14; // r8
	__int64 v15; // rdx

	if (*(_QWORD*)(a1 + 16))
		sub_1400E1580(a1);
	*(_BYTE*)(a1 + 8) = a2;
	if (a3 != *(void(__fastcall****)(_QWORD))(a1 + 16))
	{
		if (a3)
			(**a3)(a3);
		v12 = *(_QWORD*)(a1 + 16);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 16) = a3;
	}
	v13 = (int*)&byte_140B7B700;
	if (a4)
		v13 = a4;
	v14 = -1i64;
	do
		++v14;
	while (*((_BYTE*)v13 + v14));
	sub_14001B1A0(a1 + 64, v13, (int*)((char*)v13 + v14));
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64);
	if (v15)
		sub_140109710((__int64*)(a1 + 136), v15 + 240, a6, 0);
	*(_QWORD*)(a1 + 120) = a7;
	sub_1400E16B0((__int64*)a1, a5, a6, a8);
}
// 140B7B700: using guessed type char byte_140B7B700;

