//----- (000000014019C170) ----------------------------------------------------
void __fastcall sub_14019C170(__m128* a1, __m128* a2)
{
	*a2 = _mm_max_ps(a1[7], _mm_min_ps(*a2, a1[8]));
}

