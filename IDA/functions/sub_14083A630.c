//----- (000000014083A630) ----------------------------------------------------
__int64 __fastcall sub_14083A630(__int64** a1, __int64 a2)
{
	__int64* v2; // r8
	__int64* i; // rax
	__int64 v4; // rbx
	int v5; // edi

	v2 = a1[1];
	for (i = *a1; i != v2; ++i)
	{
		if (*i == a2)
			break;
	}
	if (i == v2)
		return 36i64;
	v4 = *i;
	if ((unsigned int)(v2 - *a1) > 1)
		*i = *(v2 - 1);
	--a1[1];
	sub_140867E40(v4);
	v5 = dword_140C10F20;
	if (v4)
	{
		nullsub_1(v4);
		sub_140881720(v5, v4);
	}
	return 1i64;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

