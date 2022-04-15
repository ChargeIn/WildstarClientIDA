//----- (0000000140345B80) ----------------------------------------------------
__int64 __fastcall sub_140345B80(__int64 a1, __int64 a2, float a3, float a4)
{
	float v5; // xmm7_4
	float v6; // xmm6_4
	int v7; // eax
	unsigned int v8; // ecx

	v5 = a4;
	v6 = a3;
	if (!(unsigned int)sub_1407DDB6C(a4))
		v5 = 0.0;
	if (!(unsigned int)sub_1407DDB6C(a3))
		v6 = 0.0;
	v7 = sub_1408288E0(a2, 0, v6, v5);
	v8 = 0;
	if (v7 != 1)
		return (unsigned int)-2147467259;
	return v8;
}

