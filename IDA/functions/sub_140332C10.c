#include "../winhttp.h"

//----- (0000000140332C10) ----------------------------------------------------
__int64 __fastcall sub_140332C10(LARGE_INTEGER a1, unsigned __int16 a2)
{
	__int64 v2; // rbx
	__int64 v3; // r8
	__int64 v4; // rdx
	float v5; // xmm1_4
	__int64 v6; // rdx
	float v7; // xmm0_4
	float LowPart; // xmm2_4

	if ((unsigned __int64)a2 >= *(_QWORD*)(a1.QuadPart + 176))
		return 0i64;
	v2 = *(_QWORD*)(*(_QWORD*)(a1.QuadPart + 168) + 8i64 * a2);
	if (!v2)
		return 0i64;
	sub_140332AE0(a1, v2);
	v3 = *(unsigned int*)(v2 + 752);
	v4 = *(_QWORD*)(v2 + 16i64 * (((int)v3 + 9) % 0xAu) + 440) - *(_QWORD*)(16 * v3 + v2 + 440);
	v5 = (float)(int)v4;
	if (v4 < 0)
		v5 = v5 + 1.8446744e19;
	v6 = *(_QWORD*)(v2 + 16 * (((int)v3 + 9) % 0xAu + 27i64)) - *(_QWORD*)(16 * (v3 + 27) + v2);
	v7 = (float)(int)v6;
	if (v6 < 0)
		v7 = v7 + 1.8446744e19;
	LowPart = (float)(int)Frequency.LowPart;
	if (Frequency.QuadPart < 0)
		LowPart = LowPart + 1.8446744e19;
	return (unsigned int)(int)(float)(v5 / (float)(v7 / LowPart));
}

