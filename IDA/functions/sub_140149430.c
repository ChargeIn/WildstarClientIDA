//----- (0000000140149430) ----------------------------------------------------
__int64 __fastcall sub_140149430(_QWORD* a1)
{
	float* v2; // rax
	__int64 v3; // rdx
	float v4; // xmm0_4
	__int64 result; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = a1[2];
	v4 = v2[4] - *v2;
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(double*)v3 = v4;
	a1[2] += 16i64;
	return result;
}

