#include "../winhttp.h"

//----- (000000014089F470) ----------------------------------------------------
__m128 __fastcall sub_14089F470(__int64 a1)
{
	__int64 v1; // rax
	__int128 v2; // xmm6
	__int128 v4; // xmm0
	unsigned int v5; // eax

	v1 = *(_QWORD*)(a1 + 8);
	v2 = 0x3F800000u;
	if (v1)
	{
		v4 = 0x41200000u;
		*(double*)&v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v1 + 8) * 0.050000001);
		v2 = v4;
	}
	if (qword_140C62AF0)
	{
		v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56i64))(*(_QWORD*)(a1 + 16));
		*(float*)&v2 = *(float*)&v2 * qword_140C62AF0(v5);
	}
	return (__m128)v2;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C62AF0: using guessed type float (__fastcall *qword_140C62AF0)(_QWORD);

