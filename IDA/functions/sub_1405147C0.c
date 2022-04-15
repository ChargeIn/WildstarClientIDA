//----- (00000001405147C0) ----------------------------------------------------
void __fastcall sub_1405147C0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rax
	__int64 v4; // rax

	if (a1)
	{
		v3 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"HeaderLine",
			0i64,
			a1,
			-2);
		if (v3)
		{
			v4 = sub_1400D3830((__int64)(v3 + 69), L"Header");
			if (v4)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 80i64))(v4, a2);
		}
	}
}
// 140B12510: using guessed type wchar_t aHeader[7];
// 140B125D8: using guessed type wchar_t aUiActionconfir[27];
// 140B12610: using guessed type wchar_t aHeaderline[11];
// 140C65898: using guessed type __int64 qword_140C65898;

