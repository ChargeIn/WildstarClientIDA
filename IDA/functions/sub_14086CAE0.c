//----- (000000014086CAE0) ----------------------------------------------------
__int64 __fastcall sub_14086CAE0(__int64* a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned __int64 v4; // rcx
	_WORD* v5; // rdi
	_WORD* v6; // rsi
	unsigned __int64 i; // rcx

	result = *a1;
	v4 = a1[1] - 2;
	v5 = (_WORD*)(result + 2i64 * a2);
	if ((unsigned __int64)v5 < v4)
	{
		v6 = v5 + 1;
		for (i = ((v4 - (unsigned __int64)v5 - 1) >> 1) + 1; i; --i)
			*v5++ = *v6++;
	}
	a1[1] -= 2i64;
	return result;
}

