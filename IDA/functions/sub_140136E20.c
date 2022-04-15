//----- (0000000140136E20) ----------------------------------------------------
LARGE_INTEGER __fastcall sub_140136E20(__int64 a1)
{
	LARGE_INTEGER result; // rax
	signed int v3; // esi
	float LowPart; // xmm0_4
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

	result.QuadPart = *(unsigned int*)(a1 + 2576);
	if (result.LowPart)
	{
		v3 = result.LowPart - 1;
		if ((int)result.LowPart >= 100)
			v3 %= -100;
		QueryPerformanceCounter(&PerformanceCount);
		if ((int)((PerformanceCount.QuadPart - *(_QWORD*)(a1 + 8i64 * v3 + 968) - ::PerformanceCount.QuadPart)
			/ (unsigned __int64)qword_140C636B0) > 1000)
			sub_140136D40(a1, 0i64);
		result = Frequency;
		LowPart = (float)(int)Frequency.LowPart;
		if (Frequency.QuadPart < 0)
			LowPart = LowPart + 1.8446744e19;
		if ((float)((float)(int)*(_QWORD*)(a1 + 2568) / LowPart) != 0.0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			return Frequency;
		}
	}
	return result;
}
// 140C636B0: using guessed type __int64 qword_140C636B0;

