//----- (00000001404483B0) ----------------------------------------------------
__int64 __fastcall sub_1404483B0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rdi

	v2 = qword_140C658F8;
	if (*(_QWORD*)(qword_140C658F8 + 8)
		&& a2 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		/ 0x30ui64)
	{
		return *(_QWORD*)(v2 + 8) + 80 * a2;
	}
	else
	{
		return 0i64;
	}
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

