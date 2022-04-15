//----- (00000001407D3510) ----------------------------------------------------
void __fastcall sub_1407D3510(float* a1, int a2, float a3)
{
	float** v3; // r8
	__int64 v4; // rax

	if (!*((_QWORD*)a1 + 14))
	{
		v3 = (float**)(*((_QWORD*)a1 + 3) + 1256i64);
		*((_QWORD*)a1 + 14) = v3;
		*((_QWORD*)a1 + 15) = *v3;
		*v3 = a1;
		v4 = *((_QWORD*)a1 + 15);
		if (v4)
			*(_QWORD*)(v4 + 112) = a1 + 30;
	}
	if (a3 > 0.0)
		a1[a2 + 20] = a3 + a1[a2 + 20];
}

