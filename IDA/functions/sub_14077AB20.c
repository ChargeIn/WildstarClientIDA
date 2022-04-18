#include "../winhttp.h"

//----- (000000014077AB20) ----------------------------------------------------
__int64 __fastcall sub_14077AB20(__int64 a1, int* a2, _QWORD* a3)
{
	__int64 result; // rax
	int v6; // eax
	float v7; // xmm1_4
	unsigned int v8; // eax
	float v9; // xmm8_4
	float v10; // xmm7_4
	float v11; // xmm6_4
	__int64 v12; // rcx
	unsigned int v13; // r11d
	__int64 v14; // r9
	int v15; // ecx
	int v16; // r8d
	int v17; // r10d
	unsigned int v18; // edx
	unsigned int v19; // eax
	unsigned int v20; // ecx

	result = sub_1407798C0(a1, (__int64)a2, a3);
	if ((int)result >= 0)
	{
		v6 = a2[6];
		if (v6)
			*(float*)(a1 + 180) = 1.0 / (float)v6;
		else
			*(_DWORD*)(a1 + 180) = 981668463;
		v7 = *(float*)(a1 + 180);
		v8 = (int)(float)((float)a2[3] * v7);
		if (v8 > 0x32)
			v8 = 50;
		*(_DWORD*)(a1 + 184) = v8;
		v9 = (float)((float)a2[5] * 100.0) * v7;
		v10 = (float)((float)a2[8] * 100.0) * v7;
		v11 = (float)((float)a2[9] * 100.0) * v7;
		*(float*)(a1 + 208) = (float)(v10 - (float)(v9 * 0.5)) * 0.0099999998;
		*(float*)(a1 + 212) = (float)((float)(v9 * 0.5) + v10) * 0.0099999998;
		*(float*)(a1 + 228) = (float)(v11 - (float)(v9 * 0.5)) * 0.0099999998;
		*(float*)(a1 + 232) = (float)((float)(v9 * 0.5) + v11) * 0.0099999998;
		if (v10 <= 0.0 || v10 >= 100.0)
			v10 = 0.0;
		else
			*(_DWORD*)(a1 + 216) = 1;
		if (v11 <= 0.0 || v11 >= 100.0)
			v11 = 0.0;
		else
			*(_DWORD*)(a1 + 236) = 1;
		if (qword_140C65898)
		{
			v12 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v12)
			{
				Apollo_LUAEvent(v12, "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
				v13 = 0x7FFFFFFF;
				v14 = 0x80000000i64;
				v15 = 0x7FFFFFFF;
				if (*(_DWORD*)(a1 + 184) != 0x7FFFFFFF)
					v15 = *(_DWORD*)(a1 + 184);
				v16 = 0x7FFFFFFF;
				v17 = 0x7FFFFFFF;
				v18 = 0x80000000;
				if ((int)v11 != 0x7FFFFFFF)
					v17 = (int)v11;
				if ((int)v10 != 0x7FFFFFFF)
					v16 = (int)v10;
				if ((int)v9 != 0x7FFFFFFF)
					v13 = (int)v9;
				v19 = 0x80000000;
				if (v15 != 0x80000000)
					v18 = v15;
				v20 = 0x80000000;
				if (v17 != 0x80000000)
					v20 = v17;
				if (v16 != 0x80000000)
					v19 = v16;
				if (v13 != 0x80000000)
					v14 = v13;
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SetProgressClickTimes", "iiii", v14, v19, v20, v18);
			}
		}
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65898: using guessed type __int64 qword_140C65898;

