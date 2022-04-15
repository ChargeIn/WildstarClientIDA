//----- (00000001408ECCD0) ----------------------------------------------------
__int64 __fastcall sub_1408ECCD0(unsigned __int64 a1, int a2, char a3)
{
	int v3; // r11d
	__m128* v6; // r9
	unsigned __int64 v7; // rsi
	int v8; // r10d
	__m128 v9; // xmm2
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // r8d
	__m128 v13; // xmm1
	__m128 v14; // xmm2
	__m128* v15; // rcx
	__m128 v16; // xmm1
	__int64 v17; // rcx
	__int64 result; // rax
	unsigned __int64 v19; // rcx
	__m128 v20; // xmm2

	v3 = 0;
	v6 = (__m128*)(a1 + 4 * ((__int64)a2 >> 1));
	v7 = a2 / 4;
	v8 = a2 / 8;
	do
	{
		v9 = v6[-1];
		v10 = v3;
		--v6;
		v11 = v3;
		v3 += 2;
		v12 = (byte_140C17200[v10 >> 8] | (16 * ((16 * byte_140C17200[v10 & 0xF]) | byte_140C17200[(v11 >> 4) & 0xF]))) >> a3;
		v13 = _mm_shuffle_ps(v9, *(__m128*)(a1 + 4i64 * v12), 238);
		v14 = _mm_shuffle_ps(v9, *(__m128*)(a1 + 4i64 * v12), 68);
		*(__m128*)(a1 + 4i64 * v12) = v13;
		v15 = (__m128*)(a1 + 4 * (v12 | v7));
		if (v6 > v15)
		{
			v16 = _mm_shuffle_ps(v14, *v15, 228);
			v14 = _mm_shuffle_ps(*v15, v14, 228);
			*v15 = v16;
		}
		*v6 = v14;
	} while (v3 < v8);
	do
	{
		v17 = v3;
		--v6;
		v3 += 2;
		result = ((16 * ((16 * byte_140C17200[v17 & 0xF]) | byte_140C17200[(v17 >> 4) & 0xF])) | byte_140C17200[v17 >> 8]) >> a3;
		v19 = a1 + 4 * result;
		if ((unsigned __int64)v6 > v19)
		{
			v20 = _mm_shuffle_ps(*v6, *(__m128*)(v19 - 8), 228);
			*(__m128*)(v19 - 8) = _mm_shuffle_ps(*(__m128*)(v19 - 8), *v6, 228);
			*v6 = v20;
		}
	} while ((unsigned __int64)v6 > a1);
	return result;
}
// 140C17200: using guessed type unsigned __int8 byte_140C17200[16];

