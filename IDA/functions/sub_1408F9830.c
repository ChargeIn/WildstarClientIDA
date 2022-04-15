//----- (00000001408F9830) ----------------------------------------------------
__int64 __fastcall sub_1408F9830(__int64 a1)
{
	__int64 result; // rax
	float v3; // xmm0_4

	result = *(_QWORD*)(a1 + 24);
	if (*(_BYTE*)(result + 80))
	{
		if (*(_BYTE*)(a1 + 512))
		{
			*(_BYTE*)(a1 + 512) = 0;
		}
		else
		{
			v3 = (float)(sub_1408F95F0(*(float*)(a1 + 480), *(float*)(a1 + 484), *(float*)(a1 + 12), *(float*)(a1 + 76))
				/ *(float*)(a1 + 496))
				+ *(float*)(a1 + 492);
			*(float*)(a1 + 492) = v3;
			*(float*)(a1 + 488) = v3 * *(float*)(a1 + 500);
		}
		*(_DWORD*)(a1 + 480) = *(_DWORD*)(a1 + 12);
		result = *(unsigned int*)(a1 + 76);
		*(_DWORD*)(a1 + 484) = result;
	}
	else
	{
		*(float*)(a1 + 488) = (float)(*(float*)(a1 + 12) / *(float*)(a1 + 16)) * *(float*)(a1 + 500);
	}
	return result;
}

