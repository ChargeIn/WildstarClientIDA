//----- (00000001405A4800) ----------------------------------------------------
float __fastcall sub_1405A4800(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	float v4; // xmm1_4
	float v5; // xmm0_4

	v2 = a2;
	v4 = 0.0;
	if ((unsigned int)sub_140591CD0(a1, a2))
		v5 = *(float*)(a1 + 868);
	else
		v5 = 0.0;
	if ((unsigned int)v2 < 5)
		v4 = *(float*)(a1 + 4 * v2 + 792);
	return (float)(v5 + 1.0) * v4;
}

