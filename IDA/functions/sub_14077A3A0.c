//----- (000000014077A3A0) ----------------------------------------------------
__int64 __fastcall sub_14077A3A0(__int64 a1, _DWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	int v6; // eax
	float v7; // xmm0_4
	float v8; // xmm8_4
	float v9; // xmm7_4
	float v10; // xmm6_4
	__int64 v11; // rcx

	result = sub_1407798C0(a1, (__int64)a2, a3);
	if ((int)result >= 0)
	{
		v6 = a2[3];
		if (v6)
			*(float*)(a1 + 184) = 1.0 / (float)v6;
		else
			*(_DWORD*)(a1 + 184) = 981668463;
		v7 = *(float*)(a1 + 184);
		v8 = (float)((float)(int)a2[5] * 100.0) * v7;
		v9 = (float)((float)(int)a2[8] * 100.0) * v7;
		v10 = (float)((float)(int)a2[9] * 100.0) * v7;
		*(float*)(a1 + 192) = (float)(v9 - (float)(v8 * 0.5)) * 0.0099999998;
		*(float*)(a1 + 196) = (float)((float)(v8 * 0.5) + v9) * 0.0099999998;
		*(float*)(a1 + 216) = (float)(v10 - (float)(v8 * 0.5)) * 0.0099999998;
		*(float*)(a1 + 220) = (float)((float)(v8 * 0.5) + v10) * 0.0099999998;
		if (v9 > 0.0 && v9 < 100.0)
			*(_DWORD*)(a1 + 200) = 1;
		if (v10 > 0.0 && v10 < 100.0)
			*(_DWORD*)(a1 + 224) = 1;
		if (qword_140C65898)
		{
			v11 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v11)
			{
				sub_1400EA3E0(v11, "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SetProgressClickTimes", "iiii");
			}
		}
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65898: using guessed type __int64 qword_140C65898;

