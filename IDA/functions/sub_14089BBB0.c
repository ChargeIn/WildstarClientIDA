//----- (000000014089BBB0) ----------------------------------------------------
__int64 __fastcall sub_14089BBB0(__int64 a1, int a2)
{
	__int16 v2; // r10
	float v3; // xmm1_4
	unsigned int v4; // r9d

	v2 = *(_WORD*)(a1 + 24);
	if (v2)
	{
		v3 = *(float*)(*(_QWORD*)(a1 + 32) + 8i64) + *(float*)(a1 + 20);
		if (v3 < 0.001)
			v3 = 0.001;
		v4 = a2 * *(_DWORD*)(a1 + 12);
		if (v4 >= *(_DWORD*)(a1 + 12) * v2 * (int)(float)((float)*(int*)(a1 + 8) * v3))
			return 2i64;
		*(_DWORD*)(a1 + 16) = v4;
	}
	return 1i64;
}

