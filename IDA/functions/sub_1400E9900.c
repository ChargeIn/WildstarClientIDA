#include "../winhttp.h"

//----- (00000001400E9900) ----------------------------------------------------
void __fastcall sub_1400E9900(_QWORD* a1, __int64 a2, int* a3, __int64* a4, __m128i* a5, __int64 a6, const __m128i* a7)
{
	char v7; // al

	if (a2)
	{
		v7 = *(_BYTE*)(a2 + 29);
		if ((v7 & 8) == 0 && (v7 & 0x10) == 0 && (v7 & 0x20) == 0 && (v7 & 0x40) == 0 && !a1[361])
		{
			sub_1400E9A00(a1);
			sub_1400E1740((__int64)(a1 + 421), 1, (void(__fastcall***)(_QWORD))a2, a3, a4, a5, a6, a7);
			sub_1400E1830((__int64)(a1 + 421), (void(__fastcall***)(_QWORD))a2, 3, &qword_140C77760);
			sub_1400EAA10((__int64)a1, 26, (__int64)&unk_1409D3B2C, a2, a3, a6);
		}
	}
}
// 140C77760: using guessed type __int64 qword_140C77760;

