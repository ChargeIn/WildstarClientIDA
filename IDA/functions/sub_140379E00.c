//----- (0000000140379E00) ----------------------------------------------------
__int64 __fastcall sub_140379E00(__int64 a1, __m128* a2)
{
	__int64 result; // rax

	result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 144), *a2));
	if ((_DWORD)result)
	{
		*(__m128*)(a1 + 144) = *a2;
		return sub_140378CC0(a1);
	}
	return result;
}

