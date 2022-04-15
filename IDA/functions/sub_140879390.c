//----- (0000000140879390) ----------------------------------------------------
__int64 __fastcall sub_140879390(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 128);
	if (v1)
	{
		sub_140881720(dword_140C10F28, v1);
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_DWORD*)(a1 + 136) = 0;
	}
	return sub_140880F80(a1);
}
// 140C10F28: using guessed type int dword_140C10F28;

