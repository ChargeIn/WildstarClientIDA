//----- (00000001405C7960) ----------------------------------------------------
__int64 __fastcall sub_1405C7960(__int64* a1, unsigned int a2)
{
	__int64 v3; // rax

	if (a2
		&& (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v3 = sub_1405A5B90(qword_140C65898, a2)) != 0
			|| (v3 = sub_1407A0FD0(qword_140C65B70, a2)) != 0))
	{
		return sub_1405C7620(a1, v3);
	}
	else
	{
		return 2147500037i64;
	}
}
// 1405C7991: variable 'a2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

