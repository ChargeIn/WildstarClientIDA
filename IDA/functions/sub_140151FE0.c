#include "../winhttp.h"

//----- (0000000140151FE0) ----------------------------------------------------
void __fastcall sub_140151FE0(__int64 a1, float a2)
{
	float v3; // xmm2_4
	float v4; // xmm0_4
	float v5; // xmm7_4
	float v6; // xmm6_4
	float v7; // xmm1_4
	float v8; // xmm1_4
	__int64 v9; // rax

	if (*(_QWORD*)(a1 + 48))
	{
		v3 = *(float*)(a1 + 20);
		v4 = *(float*)(a1 + 28);
		v5 = 0.0;
		v6 = 0.0;
		if (v3 > v4)
			v5 = v3 - v4;
		if (*(_DWORD*)(a1 + 16))
		{
			v7 = a2 + *(float*)(a1 + 24);
			*(float*)(a1 + 24) = v7;
			*(float*)(a1 + 20) = v7 * *(float*)(a1 + 36);
		}
		v8 = *(float*)(a1 + 20);
		if (v8 > v4)
			v6 = v8 - v4;
		if (v6 != *(float*)(a1 + 32))
		{
			v9 = *(_QWORD*)(a1 + 64);
			*(float*)(a1 + 32) = v6;
			(*(void(__fastcall**)(__int64))(v9 + 8))(a1 + 64);
			if ((unsigned int)sub_1401885A0(*(_DWORD**)(a1 + 40), a1 + 64, v5, v6))
				sub_1400D4070(*(_QWORD*)(a1 + 48), 0x4Du, *(char**)(a1 + 48), "s", *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64));
		}
	}
}

