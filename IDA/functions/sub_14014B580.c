//----- (000000014014B580) ----------------------------------------------------
__int64 __fastcall sub_14014B580(_QWORD* a1)
{
	float* v2; // rsi
	char* v3; // rax
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	char v8; // r9
	const char* v9; // rdx
	char v10; // r9
	const char* v11; // rdx
	double v12; // xmm0_8
	__int64 result; // rax
	float v14; // xmm1_4
	double v15; // xmm0_8
	float v16; // xmm1_4
	double v17; // xmm0_8
	float v18; // xmm1_4
	double v19; // xmm0_8
	float v20; // xmm1_4

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 120)
	{
		v5 = "x";
		v6 = 120;
		while (v6)
		{
			v6 = (v5++)[v3 - "x" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		v12 = sub_140056C40(a1, 3u);
		result = 0i64;
		v14 = v12;
		*v2 = v14;
	}
	else
	{
	LABEL_5:
		if (v4 == 121)
		{
			v7 = "y";
			v8 = 121;
			while (v8)
			{
				v8 = (v7++)[v3 - "y" + 1];
				if (v8 != *v7)
					goto LABEL_9;
			}
			v15 = sub_140056C40(a1, 3u);
			result = 0i64;
			v16 = v15;
			v2[1] = v16;
		}
		else
		{
		LABEL_9:
			if (v4 == 122)
			{
				v9 = "z";
				v10 = 122;
				while (v10)
				{
					v10 = (v9++)[v3 - "z" + 1];
					if (v10 != *v9)
						goto LABEL_13;
				}
				v17 = sub_140056C40(a1, 3u);
				result = 0i64;
				v18 = v17;
				v2[2] = v18;
			}
			else
			{
			LABEL_13:
				if (v4 != 119)
					LABEL_17 :
					sub_140056570(a1, 2u, "no such index");
				v11 = "w";
				while ((_BYTE)v4)
				{
					LOBYTE(v4) = (v11++)[v3 - "w" + 1];
					if ((_BYTE)v4 != *v11)
						goto LABEL_17;
				}
				v19 = sub_140056C40(a1, 3u);
				result = 0i64;
				v20 = v19;
				v2[3] = v20;
			}
		}
	}
	return result;
}

