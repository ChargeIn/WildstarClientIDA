//----- (00000001408F94F0) ----------------------------------------------------
__int64 __fastcall sub_1408F94F0(__int64 a1, int a2)
{
	float v2; // xmm1_4
	__int64 result; // rax

	v2 = *(float*)(a1 + 80);
	*(float*)(a1 + 92) = (float)(*(float*)(*(_QWORD*)(a1 + 24) + 48i64) + *(float*)(a1 + 96)) + *(float*)(a1 + 76);
	sub_1408FA950(a1, v2);
	sub_1408FAA10(a1, *(float*)(a1 + 84));
	sub_1408FAB20(a1, *(float*)(a1 + 88));
	sub_1408F98E0(a1);
	sub_1408F9830(a1);
	sub_1408F9710(a1);
	if (*(_BYTE*)(a1 + 514))
	{
		sub_1408F9E00(a1);
		if (*(_DWORD*)a1 > 1u)
			sub_1408FA640((unsigned int*)a1);
		*(_BYTE*)(a1 + 514) = 0;
	}
	else
	{
		sub_1408FA040(a1, a2);
		if (*(_DWORD*)a1 > 1u)
			sub_1408FA750((float*)a1, a2);
	}
	result = sub_1408F9B60(a1);
	*(_DWORD*)(a1 + 476) = 0;
	return result;
}

