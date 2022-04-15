//----- (00000001408C5600) ----------------------------------------------------
__int64 __fastcall sub_1408C5600(__int64 a1)
{
	float* v2; // rcx
	float* v3; // rax
	float* v4; // rax
	float* v5; // rax
	__int64 result; // rax

	v2 = *(float**)(a1 + 328);
	if (*(float*)(a1 + 344) != v2[2] || *(float*)(a1 + 348) != v2[3])
	{
		sub_1408C8580(a1);
		v2 = *(float**)(a1 + 328);
		*(_DWORD*)(a1 + 280) = (int)(float)((float)((float)(v2[24] * 0.001) + v2[2]) * (float)*(int*)(a1 + 292));
	}
	if (*(float*)(a1 + 352) != v2[4])
		sub_1408C85F0(a1);
	v3 = *(float**)(a1 + 328);
	if (*(float*)(a1 + 360) != v3[6] || *(float*)(a1 + 364) != v3[7] || *(float*)(a1 + 368) != v3[8])
		sub_1408C4920(a1);
	v4 = *(float**)(a1 + 328);
	if (*(float*)(a1 + 372) != v4[9] || *(float*)(a1 + 376) != v4[10] || *(float*)(a1 + 380) != v4[11])
		sub_1408C4A80(a1);
	v5 = *(float**)(a1 + 328);
	if (*(float*)(a1 + 384) != v5[12] || *(float*)(a1 + 388) != v5[13] || *(float*)(a1 + 392) != v5[14])
		sub_1408C4BE0(a1);
	result = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(a1 + 301))
	{
		*(_DWORD*)(result + 76) = 0;
		result = *(_QWORD*)(a1 + 328);
	}
	*(_BYTE*)(result + 88) = 0;
	return result;
}

