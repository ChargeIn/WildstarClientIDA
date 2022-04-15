//----- (000000014011C1D0) ----------------------------------------------------
__int64 __fastcall sub_14011C1D0(__int64 a1)
{
	unsigned int v1; // edx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	double v8; // xmm0_8

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 760);
	v4 = 0i64;
	while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
	{
		v4 = ++v1;
		if (v1 >= v2)
			return 0i64;
	}
	v6 = *(_QWORD*)(v3 + 8i64 * v1);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 16);
	v8 = (double)*(int*)(v6 + 60);
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

