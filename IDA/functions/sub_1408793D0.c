//----- (00000001408793D0) ----------------------------------------------------
__int64 __fastcall sub_1408793D0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx

	v3 = *(_QWORD*)(a1 + 128);
	if (v3 && a2 <= 1)
	{
		sub_140881720(dword_140C10F28, v3);
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_DWORD*)(a1 + 136) = 0;
	}
	return sub_1408810F0(a1, a2);
}
// 140C10F28: using guessed type int dword_140C10F28;

