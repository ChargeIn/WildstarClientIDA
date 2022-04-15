//----- (00000001408AA9A0) ----------------------------------------------------
__int64 __fastcall sub_1408AA9A0(__int64 a1, float a2, char a3)
{
	__int64 result; // rax
	float v4; // xmm3_4
	float v5; // xmm1_4
	float v6; // xmm0_4

	result = 0i64;
	if (a2 != 0.0)
	{
		LOBYTE(result) = a2 > 50.0;
		result = (unsigned int)(result + 1);
	}
	*(_DWORD*)(a1 + 16) = result;
	if (a2 >= 50.0)
		v4 = 50.0;
	else
		v4 = a2;
	v5 = (float)(a2 - 50.0) * 0.02;
	v6 = (float)(50.0 - v4) * -0.02;
	*(float*)(a1 + 8) = v5;
	*(float*)a1 = v6;
	if (a3)
	{
		*(float*)(a1 + 4) = v6;
		*(float*)(a1 + 12) = v5;
	}
	return result;
}

