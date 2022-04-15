//----- (00000001408771E0) ----------------------------------------------------
__int64* sub_1408771E0()
{
	if ((dword_140C628B0 & 1) == 0)
	{
		qword_140C628A8 = 0i64;
		dword_140C628B0 |= 1u;
		sub_1407DD89C(nullsub_15);
	}
	return &qword_140C628A8;
}
// 140957B20: using guessed type __int64 __fastcall nullsub_15();
// 140C628A8: using guessed type __int64 qword_140C628A8;
// 140C628B0: using guessed type int dword_140C628B0;

