//----- (00000001403C5C10) ----------------------------------------------------
float __fastcall sub_1403C5C10(__int64 a1, float a2, int a3, __int64 a4)
{
	unsigned int v4; // edx
	__int64 v5; // r11
	unsigned __int64 v6; // r10
	__int64 v7; // rax
	__int64 v8; // r8
	__int64 v10; // r8

	v4 = 0;
	v5 = 32i64 * a3;
	v6 = (__int64)(*(_QWORD*)(v5 + a1 + 160) - *(_QWORD*)(v5 + a1 + 152)) >> 2;
	if (!v6)
		return 1.0;
	v7 = 0i64;
	while (v7 != v6 - 1)
	{
		v8 = *(_QWORD*)(v5 + a1 + 152);
		if (a2 >= *(float*)(v8 + 4 * v7) && a2 < *(float*)(v8 + 4i64 * (v4 + 1)))
		{
			v10 = *(_QWORD*)(a4 + 8);
			return (float)((float)((float)(a2 - *(float*)(*(_QWORD*)(v5 + a1 + 152) + 4i64 * v4))
				/ (float)(*(float*)(*(_QWORD*)(v5 + a1 + 152) + 4i64 * (v4 + 1))
					- *(float*)(*(_QWORD*)(v5 + a1 + 152) + 4i64 * v4)))
				* (float)(*(float*)(v10 + 4i64 * (v4 + 1)) - *(float*)(v10 + 4i64 * v4)))
				+ *(float*)(v10 + 4i64 * v4);
		}
		v7 = ++v4;
		if (v4 >= v6)
			return 1.0;
	}
	return *(float*)(*(_QWORD*)(a4 + 8) + 4i64 * v4);
}

