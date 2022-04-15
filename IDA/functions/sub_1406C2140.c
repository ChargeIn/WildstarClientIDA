//----- (00000001406C2140) ----------------------------------------------------
__int64 __fastcall sub_1406C2140(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	float v3; // xmm1_4
	double v4; // xmm0_8

	v1 = sub_1406C01C0(a1);
	v2 = v1;
	if (v1)
	{
		v3 = fmaxf(*(float*)(v1 + 1876) - 0.25, -1.0);
		*(float*)(v1 + 1876) = v3;
		v4 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v3);
		*(_DWORD*)(v2 + 1872) = LODWORD(v4);
		sub_1406BFD00(v2);
	}
	return 0i64;
}

