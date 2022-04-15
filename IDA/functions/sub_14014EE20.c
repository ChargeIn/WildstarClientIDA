//----- (000000014014EE20) ----------------------------------------------------
__int64 __fastcall sub_14014EE20(_QWORD* a1)
{
	float* v2; // rdi
	float v3; // xmm8_4
	float v4; // xmm7_4
	float v5; // xmm6_4
	float v6; // xmm1_4

	v2 = (float*)sub_14014EBC0((__int64)a1, 1);
	if (v2)
	{
		v3 = sub_140056C40(a1, 2u);
		v4 = sub_140056C40(a1, 3u);
		v5 = sub_140056C40(a1, 4u);
		v6 = sub_140056C40(a1, 5u);
		v2[12] = v3;
		v2[13] = v4;
		v2[14] = v5;
		v2[15] = v6;
	}
	return 0i64;
}

