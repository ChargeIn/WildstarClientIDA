//----- (0000000140127EC0) ----------------------------------------------------
__int64 __fastcall sub_140127EC0(__int64 a1)
{
	int v1; // r11d
	int v2; // r10d
	int v3; // r9d
	unsigned __int8 v4; // di
	float v6; // xmm8_4
	unsigned __int8 v7; // dl
	unsigned __int8 v8; // r8
	unsigned __int8 v9; // cl
	float v10; // xmm6_4
	bool v11; // cf
	unsigned __int8 v12; // al
	unsigned __int8 v13; // dl
	float v14; // xmm9_4
	float v15; // xmm4_4
	float v16; // xmm10_4
	float v17; // xmm3_4
	float v18; // xmm2_4
	float v19; // xmm7_4
	float v20; // xmm1_4

	v1 = *(unsigned __int8*)(a1 + 1042);
	v3 = *(unsigned __int8*)(a1 + 1040);
	v4 = *(_BYTE*)(a1 + 1043);
	v6 = 0.0;
	v7 = *(_BYTE*)(a1 + 1041);
	v8 = *(_BYTE*)(a1 + 1042);
	v9 = v7;
	v2 = v7;
	v10 = 0.0;
	if (v7 < (unsigned __int8)v3)
		v7 = v3;
	v11 = (unsigned __int8)v1 < v7;
	v12 = v7;
	v13 = v1;
	if (v11)
		v8 = v12;
	if ((unsigned __int8)v3 < (unsigned __int8)v2)
		v9 = v3;
	if (v9 < (unsigned __int8)v1)
		v13 = v9;
	v14 = (float)v2;
	v15 = (float)v1 * 0.0039215689;
	v16 = (float)v3;
	v17 = (float)v2 * 0.0039215689;
	v18 = (float)v3 * 0.0039215689;
	v19 = (float)v8 * 0.0039215689;
	v20 = (float)v13 * 0.0039215689;
	if (v8 != v13)
	{
		if (v8 == (_BYTE)v1)
		{
			v10 = (float)((float)(v17 - v18) * 60.0) / (float)(v19 - v20);
			if ((unsigned __int8)v2 < (unsigned __int8)v3)
				v10 = v10 + 360.0;
		}
		else if (v8 == (_BYTE)v2)
		{
			v10 = (float)((float)((float)(v18 - v15) * 60.0) / (float)(v19 - v20)) + 120.0;
		}
		else if (v8 == (_BYTE)v3)
		{
			v10 = (float)((float)((float)(v15 - v17) * 60.0) / (float)(v19 - v20)) + 240.0;
		}
	}
	if (v8)
		v6 = 1.0 - (float)(v20 / v19);
	sub_140173980(*(_QWORD*)(a1 + 1240), (float)v1);
	sub_140173980(*(_QWORD*)(a1 + 1248), v14);
	sub_140173980(*(_QWORD*)(a1 + 1256), v16);
	sub_140173980(*(_QWORD*)(a1 + 1264), v10);
	sub_140173980(*(_QWORD*)(a1 + 1272), v6 * 100.0);
	sub_140173980(*(_QWORD*)(a1 + 1280), v19 * 100.0);
	return sub_140173980(*(_QWORD*)(a1 + 1288), (float)v4);
}

