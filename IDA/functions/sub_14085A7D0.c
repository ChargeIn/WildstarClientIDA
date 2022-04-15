//----- (000000014085A7D0) ----------------------------------------------------
float __fastcall sub_14085A7D0(__int64 a1, int a2)
{
	float** v2; // rax
	float* v3; // rax
	float result; // xmm0_4

	v2 = 0i64;
	if (a2)
	{
		if (a2 == 4)
			v2 = (float**)(a1 + 272);
	}
	else
	{
		v2 = (float**)(a1 + 224);
	}
	v3 = *v2;
	for (result = 0.0; v3; v3 = *(float**)v3)
		result = result + v3[10];
	if (result < *(float*)(a1 + 168))
		return *(float*)(a1 + 168);
	return result;
}

