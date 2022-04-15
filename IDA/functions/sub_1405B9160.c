//----- (00000001405B9160) ----------------------------------------------------
__int64 __fastcall sub_1405B9160(__int64 a1, float a2, int a3)
{
	float v3; // xmm1_4
	__int64 result; // rax

	if (a2 > 0.0)
	{
		v3 = a2 * *(float*)(a1 + 3732);
		if (!a3)
			a3 = 1;
		*(_DWORD*)(a1 + 3728) = *(_DWORD*)(a1 + 3724);
		*(float*)(a1 + 3732) = v3;
		*(float*)(a1 + 3736) = v3;
		if (v3 > 10.0)
			*(_DWORD*)(a1 + 3736) = 1092616192;
		if (*(float*)(a1 + 3736) < 0.1)
			*(_DWORD*)(a1 + 3736) = 1036831949;
		if (fabs(1.0 - *(float*)(a1 + 3736)) < *(float*)&dword_140C4A5A8)
			*(_DWORD*)(a1 + 3736) = 1065353216;
		result = (unsigned int)dword_140C636A8;
		*(_DWORD*)(a1 + 3744) = a3;
		*(_DWORD*)(a1 + 3740) = result;
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C4A5A8: using guessed type int dword_140C4A5A8;
// 140C636A8: using guessed type int dword_140C636A8;

