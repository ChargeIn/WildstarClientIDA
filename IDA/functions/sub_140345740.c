//----- (0000000140345740) ----------------------------------------------------
__int64 __fastcall sub_140345740(__int64 a1, __int64 a2, int a3, float a4)
{
	float v4; // xmm6_4
	int v7; // eax
	unsigned int v8; // ecx

	v4 = a4;
	if (!(unsigned int)sub_1407DDB6C(a4))
		v4 = 0.0;
	v7 = sub_140828990(a3, v4, a2, 0, 4);
	v8 = 0;
	if (v7 != 1)
		return (unsigned int)-2147467259;
	return v8;
}

