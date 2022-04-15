//----- (0000000140877050) ----------------------------------------------------
__int64 __fastcall sub_140877050(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		sub_14083B060(qword_140C61B70, v1, a1);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return 1i64;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

