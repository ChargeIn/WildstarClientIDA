//----- (0000000140844690) ----------------------------------------------------
char __fastcall sub_140844690(__int64 a1, __int64* a2, int a3)
{
	*(_QWORD*)(a1 + 24) = 0i64;
	if (qword_140C61F98)
		*(_QWORD*)(qword_140C61F98 + 24) = a1;
	else
		qword_140C61F90 = a1;
	++dword_140C61F88;
	qword_140C61F98 = a1;
	sub_140860810(a1);
	return sub_140860AA0(a1, a2, a3 == 1, 0);
}
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61F98: using guessed type __int64 qword_140C61F98;

