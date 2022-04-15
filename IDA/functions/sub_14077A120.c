#include "../winhttp.h"

//----- (000000014077A120) ----------------------------------------------------
void __fastcall sub_14077A120(__int64 a1)
{
	float v2; // xmm1_4
	float v3; // xmm0_4
	float v4; // xmm1_4
	float v5; // xmm0_4

	v2 = *(float*)(a1 + 180) - (float)((float)*(int*)(a1 + 164) * *(float*)(a1 + 188));
	*(float*)(a1 + 180) = v2;
	if (v2 < 0.0)
		*(_DWORD*)(a1 + 180) = 0;
	if (*(_DWORD*)(a1 + 176))
		sub_1407797A0(a1, 1, 0);
	v3 = (float)*(int*)(a1 + 176) * *(float*)(a1 + 184);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4i64) == 7)
	{
		v4 = *(float*)(a1 + 180) - v3;
		*(float*)(a1 + 180) = v4;
		if (v4 <= 0.0)
			goto LABEL_9;
	}
	else
	{
		v5 = v3 + *(float*)(a1 + 180);
		*(float*)(a1 + 180) = v5;
		if (v5 >= 1.0)
			LABEL_9:
		sub_140779660(a1, 1i64);
	}
	*(_DWORD*)(a1 + 176) = 0;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

