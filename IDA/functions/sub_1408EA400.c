//----- (00000001408EA400) ----------------------------------------------------
__int64 __fastcall sub_1408EA400(_QWORD* a1)
{
	__int64 v2; // rdx

	sub_1408EB870((__int64)(a1 + 13));
	(*(void(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
	v2 = a1[42];
	if (v2)
	{
		sub_140881720(dword_140C10F28, v2);
		a1[42] = 0i64;
	}
	return sub_1408803D0((__int64)a1);
}
// 140C10F28: using guessed type int dword_140C10F28;

