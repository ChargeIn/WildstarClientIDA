//----- (0000000140118750) ----------------------------------------------------
__int64 __fastcall sub_140118750(_QWORD* a1)
{
	float* v2; // rax
	__int64 v4; // [rsp+30h] [rbp-28h] BYREF
	unsigned __int64* v5; // [rsp+38h] [rbp-20h]

	v2 = (float*)sub_140056AB0(a1, 1u);
	sub_14018EE90(&v4, (__int64)"CColor(%.3f,%.3f,%.2f,%.3f)", *v2, v2[1], v2[2], v2[3]);
	sub_140058780((__int64)a1, v5);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 1i64;
}

