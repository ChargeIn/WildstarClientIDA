//----- (0000000140146140) ----------------------------------------------------
__int64 __fastcall sub_140146140(_QWORD* a1)
{
	float* v2; // rbx
	float* v3; // rax
	__int64 v4; // rcx
	float v5; // xmm1_4
	float v6; // xmm0_4
	__int64 result; // rax
	float v8; // xmm1_4

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (float*)sub_140056AB0(a1, 2u);
	v4 = a1[2];
	v5 = v3[1];
	v6 = v2[1] * *v3;
	result = 1i64;
	v8 = v5 * *v2;
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (float)(v8 - v6);
	a1[2] += 16i64;
	return result;
}

