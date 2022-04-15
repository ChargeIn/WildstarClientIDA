//----- (00000001403EBC30) ----------------------------------------------------
__int64 __fastcall sub_1403EBC30(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__m128* v5; // rdx
	__m128* v6; // r8

	if (!dword_140C89BB4)
	{
		v5 = (__m128*)a1[3637];
		v6 = v5;
		if (!v5)
		{
			v6 = (__m128*)a1[3636];
			v5 = v6;
		}
		sub_140608DF0(a1[3711], (__int64)&v5[6], v6 + 14, a4);
	}
	return sub_1403EAD20((__int64)a1);
}
// 140C89BB4: using guessed type int dword_140C89BB4;

