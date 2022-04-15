//----- (0000000140181600) ----------------------------------------------------
__int64 __fastcall sub_140181600(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v4; // r11d
	int v5; // esi
	int v6; // r10d
	int v7; // eax
	int v8; // edi
	int v11; // r9d
	int v12; // ecx
	float v13; // xmm3_4
	float v14; // xmm1_4
	float v15; // xmm0_4
	float v16; // xmm3_4
	int v17; // eax
	wchar_t* v18; // r9
	int v20; // r10d
	int v21; // eax
	int v22; // r9d
	int v23; // eax
	int v24; // eax

	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 716);
	v6 = *(_DWORD*)(a1 + 728);
	v7 = *(_DWORD*)(a1 + 724);
	v8 = *a3;
	v11 = *(_DWORD*)(a1 + 1100);
	v12 = v7 - *(_DWORD*)(a1 + 1104) - v11;
	if (*a3 >= v5 && v8 < v12 && a3[1] >= v4 && a3[1] < v6)
	{
		*(_DWORD*)(a1 + 1192) = 1;
		*(_DWORD*)(a1 + 1160) = *a3 - v5;
		*(_DWORD*)(a1 + 1164) = a3[1] - v4;
		v13 = (float)*(int*)(a1 + 1164);
		v14 = (float)((float)*(int*)(a1 + 1160) / (float)(v12 - v5)) * 360.0;
		v15 = *(float*)(a1 + 1084);
		*(float*)(a1 + 1168) = v14;
		v16 = (float)(v13 / (float)(v6 - v4)) * 360.0;
		*(float*)(a1 + 1172) = 360.0 - v16;
		v17 = sub_1401280F0(v15, v14 * 0.0027777778, (float)(360.0 - v16) * 0.0027777778);
		v18 = L"c";
		*(_DWORD*)(a1 + 1024) = v17;
	LABEL_6:
		sub_1400D4070(a1, 0x4Au, (char*)a1, v18, v17);
		return 0i64;
	}
	v20 = v6 - v4;
	v21 = v7 - v11 - v5;
	v22 = v21 + v11;
	if (v8 >= v21 && v8 < v22)
	{
		v23 = a3[1];
		if (v23 >= 0 && v23 < v20)
		{
			*(_DWORD*)(a1 + 1096) = 1;
			v24 = a3[1];
			*(_DWORD*)(a1 + 1080) = v24;
			*(float*)(a1 + 1084) = (float)((float)v24 / (float)v20) * 360.0;
			sub_1401810E0(a1);
			v17 = *(_DWORD*)(a1 + 1024);
			v18 = L"c";
			goto LABEL_6;
		}
	}
	return sub_1400D2120(a1, a2, a3, a4);
}
// 1409DEC64: using guessed type wchar_t aC_13[2];
// 1409DEE9C: using guessed type wchar_t aC_15[2];

