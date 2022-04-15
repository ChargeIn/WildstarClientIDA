//----- (00000001401497E0) ----------------------------------------------------
__int64 __fastcall sub_1401497E0(_QWORD* a1)
{
	float* v2; // rax
	int v3; // edx
	bool v4; // cc
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2[4] <= *v2 || (v4 = v2[5] <= v2[1], v5 = 0, v4))
		v5 = 1;
	v6 = (_DWORD*)a1[2];
	v7 = v5 == 0;
	result = 1i64;
	LOBYTE(v3) = !v7;
	v6[2] = 1;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}

