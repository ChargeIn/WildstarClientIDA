//----- (0000000140147BB0) ----------------------------------------------------
__int64 __fastcall sub_140147BB0(_QWORD* a1)
{
	__m128* v2; // rsi
	int v3; // edi
	__m128 v4; // xmm0
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!(unsigned int)sub_1401470F0((__int64)a1, 2)
		|| (v4 = _mm_cmpneq_ps(*(__m128*)sub_140056AB0(a1, 2u), *v2), v5 = 1, (_mm_movemask_ps(v4) & 7) != 0))
	{
		v5 = 0;
	}
	v6 = (_DWORD*)a1[2];
	LOBYTE(v3) = v5 != 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}

