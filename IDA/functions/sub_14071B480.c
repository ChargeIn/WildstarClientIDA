//----- (000000014071B480) ----------------------------------------------------
void __fastcall sub_14071B480(__int64 a1)
{
	unsigned int v1; // r9d
	int v2; // edx
	float v3; // xmm1_4
	float v4; // xmm2_4
	int v5; // r8d
	__int64 v6; // rax

	if (*(_QWORD*)(a1 + 72) || !*(_DWORD*)(a1 + 232) || *(_DWORD*)(a1 + 228) != 4)
		return;
	v1 = *(_DWORD*)(a1 + 244);
	v2 = dword_140C636A8 - *(_DWORD*)(a1 + 224);
	if (v2 >= v1)
		goto LABEL_12;
	v3 = *(float*)(a1 + 400);
	if ((float)v2 >= v3 || v3 == 0.0)
	{
		v5 = *(_DWORD*)(a1 + 404);
		if (v2 < v1 - v5)
		{
			v4 = *(float*)(a1 + 396);
			goto LABEL_13;
		}
		if ((float)v5 != 0.0)
		{
			v4 = (float)((float)((float)(int)(v2 + v5 - v1) * (float)(0.1 - *(float*)(a1 + 396))) / (float)v5)
				+ *(float*)(a1 + 396);
			goto LABEL_13;
		}
	LABEL_12:
		v4 = 0.1;
		goto LABEL_13;
	}
	v4 = (float)((float)((float)(*(float*)(a1 + 396) - 0.1) * (float)v2) / v3) + 0.1;
LABEL_13:
	v6 = *(_QWORD*)(qword_140C65898 + 29096);
	if (!v6)
		v6 = *(_QWORD*)(qword_140C65898 + 29088);
	*(float*)(v6 + 48) = v4;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

