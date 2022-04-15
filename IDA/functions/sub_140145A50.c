#include "../winhttp.h"

//----- (0000000140145A50) ----------------------------------------------------
__int64 __fastcall sub_140145A50(_QWORD* a1)
{
	float* v2; // rsi
	char* v3; // rax
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	double v8; // xmm0_8
	__int64 result; // rax
	float v10; // xmm1_4
	double v11; // xmm0_8
	float v12; // xmm1_4

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
		v8 = sub_140056C40(a1, 3u);
		result = 0i64;
		v10 = v8;
		*v2 = v10;
	}
	else
	{
	LABEL_5:
		if (v4 != 121)
			LABEL_9 :
			sub_140056570(a1, 2u, "no such index");
		v7 = "y";
		while ((_BYTE)v4)
		{
			LOBYTE(v4) = (v7++)[v3 - "y" + 1];
			if ((_BYTE)v4 != *v7)
				goto LABEL_9;
		}
		v11 = sub_140056C40(a1, 3u);
		result = 0i64;
		v12 = v11;
		v2[1] = v12;
	}
	return result;
}

