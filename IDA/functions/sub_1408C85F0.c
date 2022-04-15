//----- (00000001408C85F0) ----------------------------------------------------
__int64 __fastcall sub_1408C85F0(__int64 a1)
{
	__int64 result; // rax
	float v2; // xmm1_4
	float v3; // xmm1_4
	float v4; // xmm1_4
	float v5; // xmm2_4

	result = *(_QWORD*)(a1 + 328);
	v2 = (float)((float)((float)(*(float*)(result + 16) * 0.0099999998) * 0.61803001) * 4.0) - 1.85409;
	if (v2 <= 0.0)
	{
		v2 = 0.0;
	}
	else if (v2 >= 0.61803001)
	{
		v2 = 0.61803001;
	}
	*(float*)(a1 + 28) = v2;
	v3 = (float)((float)((float)(*(float*)(result + 16) * 0.0099999998) * 0.61803001) * 4.0) - 1.23606;
	if (v3 <= 0.0)
	{
		v3 = 0.0;
	}
	else if (v3 >= 0.61803001)
	{
		v3 = 0.61803001;
	}
	*(float*)(a1 + 52) = v3;
	v4 = (float)((float)((float)(*(float*)(result + 16) * 0.0099999998) * 0.61803001) * 4.0) - 0.61803001;
	if (v4 <= 0.0)
	{
		v4 = 0.0;
	}
	else if (v4 >= 0.61803001)
	{
		v4 = 0.61803001;
	}
	*(float*)(a1 + 76) = v4;
	v5 = (float)((float)(*(float*)(result + 16) * 0.0099999998) * 0.61803001) * 4.0;
	if (v5 <= 0.0)
	{
		*(_DWORD*)(a1 + 100) = 0;
	}
	else if (v5 < 0.61803001)
	{
		*(float*)(a1 + 100) = v5;
	}
	else
	{
		*(_DWORD*)(a1 + 100) = 1058944823;
	}
	return result;
}

