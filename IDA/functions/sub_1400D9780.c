//----- (00000001400D9780) ----------------------------------------------------
__int64 __fastcall sub_1400D9780(_QWORD* a1)
{
	__int64 v2; // rax
	float* v3; // rbx
	float v4; // xmm1_4

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = *(float**)(v2 + 448);
		if (v3)
		{
			v4 = sub_140056C40(a1, 2u);
			v3[6] = v4;
			v3[5] = v4 * v3[9];
		}
	}
	return 0i64;
}

