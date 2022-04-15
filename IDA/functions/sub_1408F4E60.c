//----- (00000001408F4E60) ----------------------------------------------------
__int64 __fastcall sub_1408F4E60(__int64 a1, float a2)
{
	__int64 result; // rax
	float v3; // xmm0_4

	result = *(_QWORD*)(a1 + 8);
	v3 = (float)(*(float*)(result + 40) + *(float*)(a1 + 92)) + a2;
	if (v3 < 1.0)
	{
		if (v3 > 0.0)
			*(float*)(a1 + 76) = v3;
		else
			*(_DWORD*)(a1 + 76) = 0;
	}
	else
	{
		*(_DWORD*)(a1 + 76) = 1065353216;
	}
	return result;
}

