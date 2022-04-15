//----- (0000000140867EC0) ----------------------------------------------------
__int64 __fastcall sub_140867EC0(__int64 a1, int a2)
{
	int v2; // xmm1_4
	float v4; // xmm0_4
	__int64 result; // rax
	float v6; // xmm1_4
	float v7; // xmm2_4
	float v8; // xmm0_4
	float v9; // xmm1_4
	float i; // xmm2_4
	__int64 v11; // rdx

	v2 = 1065353216;
	v4 = (float)((float)a2 * *(float*)(a1 + 88)) + *(float*)(a1 + 92);
	if (v4 >= 1.0 || (v2 = 0, v4 <= 0.0))
		v4 = *(float*)&v2;
	result = *(_QWORD*)(a1 + 48);
	v6 = v4;
	v7 = v4;
	v8 = (float)(v4 * *(float*)(a1 + 120)) + *(float*)(a1 + 108);
	v9 = (float)(v6 * *(float*)(a1 + 112)) + *(float*)(a1 + 100);
	for (i = (float)(v7 * *(float*)(a1 + 116)) + *(float*)(a1 + 104); result != *(_QWORD*)(a1 + 56); result += 8i64)
	{
		v11 = *(_QWORD*)(*(_QWORD*)result + 88i64);
		if ((*(_BYTE*)(v11 + 76) & 4) == 0)
		{
			*(float*)(v11 + 24) = v9;
			*(float*)(v11 + 28) = i;
			*(float*)(v11 + 32) = v8;
		}
	}
	if ((unsigned int)a2 >= *(_DWORD*)(a1 + 80))
		return sub_1408677F0(a1);
	return result;
}

