//----- (0000000140346630) ----------------------------------------------------
__int64 __fastcall sub_140346630(__int64 a1, int a2, float a3)
{
	float v3; // xmm6_4
	int v5; // eax
	unsigned int v6; // ecx

	v3 = a3;
	if (!(unsigned int)sub_1407DDB6C(a3))
		v3 = 0.0;
	v5 = sub_140828990(a2, v3, -1i64, 0, 4);
	v6 = 0;
	if (v5 != 1)
		return (unsigned int)-2147467259;
	return v6;
}

