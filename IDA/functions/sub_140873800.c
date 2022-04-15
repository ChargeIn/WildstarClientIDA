//----- (0000000140873800) ----------------------------------------------------
__int64 __fastcall sub_140873800(__int64 a1)
{
	__int64* v2; // rdi

	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	sub_140872D40(a1);
	v2 = (__int64*)(a1 + 128);
	if (*(_QWORD*)(a1 + 128))
	{
		sub_1408683D0(a1 + 128);
		sub_140881720(dword_140C10F28, *v2);
		*v2 = 0i64;
		*(_DWORD*)(a1 + 144) = 0;
	}
	return sub_1408683D0(a1 + 72);
}
// 140C10F28: using guessed type int dword_140C10F28;

