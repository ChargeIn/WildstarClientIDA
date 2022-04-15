//----- (00000001404BD280) ----------------------------------------------------
float* __fastcall sub_1404BD280(unsigned int* a1, __int64 a2, int a3)
{
	int v3; // xmm4_4
	unsigned __int64 v5; // [rsp+20h] [rbp-A8h]
	__int128 v6; // [rsp+30h] [rbp-98h]
	__m128 v7; // [rsp+40h] [rbp-88h] BYREF
	__int128 v8[6]; // [rsp+50h] [rbp-78h] BYREF

	if (a3)
		v3 = a1[7];
	else
		v3 = 1065353216;
	*(_QWORD*)&v6 = a1;
	*((_QWORD*)&v6 + 1) = &v7;
	LODWORD(v5) = v3;
	v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a1[4], (__m128)a1[6]), _mm_unpacklo_ps((__m128)a1[5], (__m128)0i64));
	v8[1] = v6;
	v8[0] = v5;
	return sub_1401B0590((int*)v8, a2);
}
// 1404BD2FF: variable 'v5' is possibly undefined

