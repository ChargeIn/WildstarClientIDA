//----- (00000001404AE170) ----------------------------------------------------
__int64 __fastcall sub_1404AE170(__int64 a1)
{
	__int64 v2; // rax
	float v3; // xmm2_4
	__int64 v4; // rax
	int v5; // ecx
	float v6; // xmm1_4
	unsigned int v7; // ecx
	__int64 result; // rax

	v2 = sub_140200220(0x3B8u);
	if (v2)
		v3 = *(float*)(v2 + 24);
	else
		v3 = 132.75;
	v4 = *(_QWORD*)(a1 + 16);
	if (!v4)
		return 0i64;
	v5 = *(_DWORD*)(*(_QWORD*)v4 + 28i64);
	if (!v5)
		return 0i64;
	v6 = (float)((float)v5 * v3) * (float)v5;
	if (v6 <= 0.0)
		return 0i64;
	v7 = -1;
	if ((int)v6 != -1)
		v7 = (int)v6;
	result = 0i64;
	if (v7)
		return v7;
	return result;
}

