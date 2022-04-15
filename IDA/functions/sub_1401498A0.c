//----- (00000001401498A0) ----------------------------------------------------
__int64 __fastcall sub_1401498A0(_QWORD* a1)
{
	float* v2; // rbx
	float* v3; // rax
	int v4; // edx
	float v5; // xmm0_4
	int v6; // eax
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (float*)sub_140056AB0(a1, 2u);
	v4 = 0;
	if (*v3 < *v2 || *v3 >= v2[4] || (v5 = v3[1], v5 < v2[1]) || (v6 = 1, v5 >= v2[5]))
		v6 = 0;
	v7 = (_DWORD*)a1[2];
	LOBYTE(v4) = v6 != 0;
	v7[2] = 1;
	result = 1i64;
	*v7 = v4;
	a1[2] += 16i64;
	return result;
}

