//----- (00000001408D8210) ----------------------------------------------------
__int64 __fastcall sub_1408D8210(__int64 a1, double a2, char a3)
{
	double v3; // xmm2_8
	double v5; // xmm1_8
	__int64 result; // rax
	unsigned int i; // ebx
	double v8[7]; // [rsp+20h] [rbp-38h] BYREF

	v3 = 20000.0;
	if (!a3)
	{
		v5 = a2 * 0.01;
		if (v5 > 0.0)
			v5 = sqrt(v5);
		v3 = 20000.0 - v5 * 19000.0;
	}
	result = sub_1408D95B0(*(_DWORD*)a1, 20.0, v3, (__int64)v8);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8E70(a1, v8, *(_QWORD*)(a1 + 8) + 100i64 * i, 4);
	return result;
}
// 1408D8210: using guessed type double var_38[7];

