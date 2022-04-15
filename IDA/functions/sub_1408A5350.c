//----- (00000001408A5350) ----------------------------------------------------
__int64 __fastcall sub_1408A5350(__int64 a1, int a2, float* a3, float a4, int a5)
{
	float v5; // xmm1_4
	int v6; // edx
	__int64 result; // rax

	v5 = a3[1] / (float)a2;
	*(float*)(a1 + 16) = v5;
	if (!*(_DWORD*)a3)
		*(float*)(a1 + 16) = v5 * 6.2831855;
	*(float*)(a1 + 4) = a4;
	*(_DWORD*)(a1 + 8) = a5;
	v6 = *(_DWORD*)(a1 + 20);
	result = *(unsigned int*)a3;
	if (v6 != (_DWORD)result)
	{
		if (!v6)
		{
			*(float*)(a1 + 12) = *(float*)(a1 + 12) * 0.15915494;
			result = *(unsigned int*)a3;
			*(_DWORD*)(a1 + 20) = result;
			return result;
		}
		if (!(_DWORD)result)
		{
			*(float*)(a1 + 12) = *(float*)(a1 + 12) * 6.2831855;
			result = *(unsigned int*)a3;
		}
	}
	*(_DWORD*)(a1 + 20) = result;
	return result;
}

