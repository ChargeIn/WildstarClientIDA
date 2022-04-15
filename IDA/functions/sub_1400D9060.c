//----- (00000001400D9060) ----------------------------------------------------
__int64 __fastcall sub_1400D9060(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdi
	__m128* v6; // rax
	float v7; // xmm0_4
	int v9; // [rsp+38h] [rbp+10h] BYREF
	int v10; // [rsp+3Ch] [rbp+14h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = sub_1400D66A0(a1, 1u);
	if (v5)
	{
		v6 = (__m128*)sub_140056AB0(a1, 2u);
		v7 = _mm_shuffle_ps(*v6, *v6, 85).m128_f32[0];
		v9 = (int)COERCE_FLOAT(*v6);
		v10 = (int)v7;
		sub_1400CC900(v5, (unsigned int*)&v9);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

