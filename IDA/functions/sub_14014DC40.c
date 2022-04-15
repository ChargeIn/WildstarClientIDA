#include "../winhttp.h"

//----- (000000014014DC40) ----------------------------------------------------
__int64 __fastcall sub_14014DC40(_QWORD* a1)
{
	float* v2; // rsi
	char* v3; // rax
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	char v8; // r9
	const char* v9; // rdx
	double v10; // xmm0_8
	__int64 result; // rax
	float v12; // xmm1_4
	double v13; // xmm0_8
	float v14; // xmm1_4
	double v15; // xmm0_8
	float v16; // xmm1_4

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 121)
	{
		v5 = "yaw";
		v6 = 121;
		while (v6)
		{
			v6 = (v5++)[v3 - "yaw" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		v10 = sub_140056C40(a1, 3u);
		result = 0i64;
		v12 = v10;
		*v2 = v12;
	}
	else
	{
	LABEL_5:
		if (v4 == 112)
		{
			v7 = "pitch";
			v8 = 112;
			while (v8)
			{
				v8 = (v7++)[v3 - "pitch" + 1];
				if (v8 != *v7)
					goto LABEL_9;
			}
			v13 = sub_140056C40(a1, 3u);
			result = 0i64;
			v14 = v13;
			v2[1] = v14;
		}
		else
		{
		LABEL_9:
			if (v4 != 114)
				LABEL_13 :
				sub_140056570(a1, 2u, "no such index");
			v9 = "roll";
			while ((_BYTE)v4)
			{
				LOBYTE(v4) = (v9++)[v3 - "roll" + 1];
				if ((_BYTE)v4 != *v9)
					goto LABEL_13;
			}
			v15 = sub_140056C40(a1, 3u);
			result = 0i64;
			v16 = v15;
			v2[2] = v16;
		}
	}
	return result;
}

