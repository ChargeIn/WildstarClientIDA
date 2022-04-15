//----- (0000000140379E40) ----------------------------------------------------
__m128* __fastcall sub_140379E40(__m128* a1, __m128* a2)
{
	__m128* result; // rax

	result = (__m128*)(unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(a1[10], *a2));
	if ((_DWORD)result)
	{
		a1[10] = *a2;
		return sub_140378E70(a1);
	}
	return result;
}

