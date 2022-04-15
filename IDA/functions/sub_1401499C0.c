//----- (00000001401499C0) ----------------------------------------------------
__int64 __fastcall sub_1401499C0(_QWORD* a1)
{
	float* v2; // rdi
	float* v3; // rsi
	float* v4; // rax
	int v5; // edx
	float v6; // xmm2_4
	float v7; // xmm0_4
	float v8; // xmm3_4
	float v9; // xmm1_4
	float v10; // xmm0_4
	int v11; // eax
	_DWORD* v12; // rcx
	__int64 result; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (float*)sub_140056AB0(a1, 2u);
	v4 = (float*)sub_140056AB0(a1, 3u);
	v5 = 0;
	if (*v3 < *v2
		|| (v6 = v2[4], *v3 >= v6)
		|| (v7 = v3[1], v8 = v2[1], v7 < v8)
		|| (v9 = v2[5], v7 >= v9)
		|| *v4 < *v2
		|| *v4 >= v6
		|| (v10 = v4[1], v10 < v8)
		|| (v11 = 1, v10 >= v9))
	{
		v11 = 0;
	}
	v12 = (_DWORD*)a1[2];
	LOBYTE(v5) = v11 != 0;
	v12[2] = 1;
	result = 1i64;
	*v12 = v5;
	a1[2] += 16i64;
	return result;
}

