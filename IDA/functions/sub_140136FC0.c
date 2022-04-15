//----- (0000000140136FC0) ----------------------------------------------------
float __fastcall sub_140136FC0(__int64 a1)
{
	int v1; // eax
	int v4; // edi
	int v5; // esi
	int v6; // eax
	float LowPart; // xmm1_4
	float v8; // xmm0_4
	int v9; // edx
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 2576);
	if (!v1)
		return 0.0;
	v4 = 0;
	v5 = v1 - 1;
	if (v1 >= 100)
	{
		v5 %= -100;
		v4 = (v5 + 1) % 100;
	}
	QueryPerformanceCounter(&PerformanceCount);
	if ((int)((PerformanceCount.QuadPart - *(_QWORD*)(a1 + 8i64 * v5 + 968) - ::PerformanceCount.QuadPart)
		/ (unsigned __int64)qword_140C636B0) > 1000)
	{
		sub_140136D40(a1, 0i64);
		v6 = *(_DWORD*)(a1 + 2576);
		v4 = 0;
		if (v6 >= 100)
			v4 = ((v6 - 1) % 100 + 1) % 100;
	}
	LowPart = (float)(int)Frequency.LowPart;
	if (Frequency.QuadPart < 0)
		LowPart = LowPart + 1.8446744e19;
	v8 = (float)(int)*(_QWORD*)(a1 + 2568) / LowPart;
	if (v8 == 0.0)
		return 0.0;
	v9 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 48i64) - *(_DWORD*)(a1 + 4i64 * v4 + 568) + 1;
	if (v9 <= 0)
		return 0.0;
	else
		return v8 / (float)v9;
}
// 140C636B0: using guessed type __int64 qword_140C636B0;

