//----- (0000000140175BB0) ----------------------------------------------------
__int64 __fastcall sub_140175BB0(_BYTE* a1, int* a2)
{
	int v5; // edx
	int v6; // ecx
	float v7; // xmm0_4
	float v8; // xmm1_4
	int v9[4]; // [rsp+20h] [rbp-38h] BYREF
	int v10[2]; // [rsp+30h] [rbp-28h] BYREF
	int v11; // [rsp+38h] [rbp-20h]
	int v12; // [rsp+3Ch] [rbp-1Ch]
	int v13[6]; // [rsp+40h] [rbp-18h] BYREF

	if ((a1[664] & 8) != 0)
	{
		if ((a1[1468] & 0x20) != 0 && (unsigned int)sub_1400C3F20((__int64)(a1 + 1056), a2) == 2)
			(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 576i64))(a1);
		if ((a1[1884] & 0x20) != 0 && (unsigned int)sub_1400C3F20((__int64)(a1 + 1472), a2) == 2)
			(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 568i64))(a1);
	}
	if (!a1[1040])
		return sub_1400D23B0((__int64)a1, a2);
	sub_140174CE0((__int64)a1, v13);
	sub_140174F70((__int64)a1, (__int64)v9);
	sub_140175130((__int64)a1, (__int64)v10);
	if (a1[1041])
	{
		v5 = a2[1] - *((_DWORD*)a1 + 261) - v12;
		v6 = v12 + v9[3] - v10[1] - v9[1];
	}
	else
	{
		v5 = *a2 - *((_DWORD*)a1 + 261) - v11;
		v6 = v11 + v9[2] - v9[0] - v10[0];
	}
	if (v6 > 0)
	{
		v7 = *((float*)a1 + 257) - *((float*)a1 + 256);
		if (v7 > 0.0)
		{
			v8 = (float)((float)v5 * v7) / (float)v6;
			if (v8 != 0.0)
				sub_1401749F0((__int64)a1, v8 + *((float*)a1 + 258));
		}
	}
	return 0i64;
}
// 140175BB0: using guessed type int var_18[6];

