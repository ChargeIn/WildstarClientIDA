//----- (00000001408638B0) ----------------------------------------------------
__int64 __fastcall sub_1408638B0(_DWORD* a1)
{
	int v1; // edx
	unsigned int v2; // r10d
	unsigned int i; // r9d
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 result; // rax
	__m128 v8; // xmm2
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	__m128 v11; // xmm0
	__m128 v12; // xmm2

	v1 = a1[192];
	v2 = 0;
	for (i = 0; v1; v1 &= v1 - 1)
		++i;
	do
	{
		v5 = v2;
		v6 = v2++;
		v5 <<= 6;
		result = (v6 + 6) << 6;
		*(_OWORD*)((char*)a1 + v5 + 416) = *(_OWORD*)((char*)a1 + v5 + 32);
		*(_OWORD*)((char*)a1 + v5 + 432) = *(_OWORD*)((char*)a1 + v5 + 48);
		*(_OWORD*)((char*)a1 + result) = *(_OWORD*)((char*)a1 + v5);
		*(_OWORD*)((char*)a1 + result + 16) = *(_OWORD*)((char*)a1 + v5 + 16);
		v8 = _mm_shuffle_ps((__m128)(unsigned int)a1[196], (__m128)(unsigned int)a1[196], 0);
		v9 = _mm_mul_ps(v8, *(__m128*)((char*)a1 + v5 + 416));
		*(__m128*)((char*)a1 + v5 + 432) = _mm_mul_ps(*(__m128*)((char*)a1 + v5 + 432), v8);
		*(__m128*)((char*)a1 + v5 + 416) = v9;
		v10 = _mm_shuffle_ps((__m128)(unsigned int)a1[195], (__m128)(unsigned int)a1[195], 0);
		v11 = _mm_mul_ps(*(__m128*)((char*)a1 + result), v10);
		v12 = _mm_mul_ps(v10, *(__m128*)((char*)a1 + result + 16));
		*(__m128*)((char*)a1 + result) = v11;
		*(__m128*)((char*)a1 + result + 16) = v12;
	} while (v2 < i);
	return result;
}

