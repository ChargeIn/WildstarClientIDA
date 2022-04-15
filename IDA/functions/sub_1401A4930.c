//----- (00000001401A4930) ----------------------------------------------------
__int64 __fastcall sub_1401A4930(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rax

	v2 = *(_QWORD*)(a2 + 48);
	if (v2 < 0x140000000i64 || v2 >= (unsigned __int64)&unk_1409D068E)
		dword_140C1E45C = -1090519040;
	return (**(__int64 (***)(void))(qword_140C891F0 + 16))();
}
// 140C1E45C: using guessed type int dword_140C1E45C;
// 140C891F0: using guessed type __int64 qword_140C891F0;

