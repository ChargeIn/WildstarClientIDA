//----- (000000014052B810) ----------------------------------------------------
_DWORD* __fastcall sub_14052B810(__int64 a1, _DWORD* a2)
{
	int* v4; // rax
	__m128 v5; // xmm6
	float v6; // xmm1_4
	float v7; // xmm0_4
	int v8; // edx
	_DWORD* result; // rax
	__m128 v10[2]; // [rsp+20h] [rbp-38h] BYREF

	v4 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
	sub_14044A3B0((__int64)v10, v4);
	v5 = _mm_sub_ps(v10[1], v10[0]);
	v10[0] = v5;
	v6 = 1.0 / sub_14052B130(a1).m128_f32[0];
	v7 = (float)(2048.0 - (float)(v5.m128_f32[0] * v6)) * 0.5;
	v8 = (int)(float)((float)(2048.0 - (float)(v10[0].m128_f32[2] * v6)) * 0.5);
	*a2 = (int)v7;
	a2[2] = 2048 - (int)v7;
	a2[3] = 2048 - v8;
	result = a2;
	a2[1] = v8;
	return result;
}

