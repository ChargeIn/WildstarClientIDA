//----- (00000001408F7920) ----------------------------------------------------
__int64 __fastcall sub_1408F7920(__int64 a1)
{
	__int64 v1; // rdx
	float v2; // xmm0_4
	int v3; // eax
	float v4; // xmm1_4
	__int64 result; // rax
	float v6; // xmm1_4
	float v7; // xmm1_4

	v1 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(v1 + 72);
	v2 = *(float*)(v1 + 76);
	v3 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
	*(_DWORD*)(a1 + 248) = v3;
	v4 = (float)v3;
	result = *(_QWORD*)(a1 + 24);
	v6 = (float)((float)((float)(v4 * 2.3283064e-10) * 2.0) - 1.0) * v2;
	*(float*)(a1 + 76) = v6;
	v7 = v6 + *(float*)(result + 72);
	*(float*)(a1 + 112) = v7;
	if (v7 <= 0.1)
		*(_DWORD*)(a1 + 112) = 1036831949;
	else
		*(float*)(a1 + 112) = v7;
	return result;
}

