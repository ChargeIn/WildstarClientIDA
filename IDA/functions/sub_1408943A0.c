//----- (00000001408943A0) ----------------------------------------------------
__int64 __fastcall sub_1408943A0(__int64 a1, int a2)
{
	double v2; // xmm1_8
	double v3; // xmm0_8
	__int64 result; // rax
	__int64 v5; // rdx

	v2 = (float)((float)a2 * *(float*)&dword_140C629C8) * (double)dword_140C110B4 * 0.001;
	if (v2 <= 0.0)
		v3 = -0.5;
	else
		v3 = 0.5;
	*(_DWORD*)(a1 + 248) = (int)(v3 + v2);
	for (result = *(_QWORD*)(a1 + 168); result != *(_QWORD*)(a1 + 176); *(_DWORD*)(v5 + 40) = *(_DWORD*)(a1 + 248))
	{
		v5 = *(_QWORD*)(result + 8);
		result += 16i64;
	}
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C629C8: using guessed type int dword_140C629C8;

