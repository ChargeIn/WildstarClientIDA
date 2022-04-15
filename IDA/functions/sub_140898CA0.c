//----- (0000000140898CA0) ----------------------------------------------------
__int64 __fastcall sub_140898CA0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // edi
	__int64 v4; // rcx

	*(_BYTE*)(a1 + 72) &= 0xFCu;
	sub_14088B850(*(__int64(__fastcall****)(_QWORD, _QWORD))(a1 + 8));
	v2 = *(_QWORD*)(a1 + 8);
	v3 = dword_140C10F20;
	*(_QWORD*)(a1 + 8) = 0i64;
	if (v2)
		sub_14088B630(v2);
	v4 = *(_QWORD*)(a1 + 8);
	if (v4)
	{
		sub_14088B630(v4);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return sub_140881720(v3, a1);
}
// 140C10F20: using guessed type int dword_140C10F20;

