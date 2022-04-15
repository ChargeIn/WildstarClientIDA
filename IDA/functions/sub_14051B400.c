//----- (000000014051B400) ----------------------------------------------------
__int64 __fastcall sub_14051B400(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rax

	result = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(a1 + 24) != result)
	{
		v3 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"CopyToClipboardTooltip",
			0i64,
			0i64,
			-2);
		return (*(__int64(__fastcall**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v3);
	}
	return result;
}
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6BEB8: using guessed type wchar_t aCopytoclipboar_0[23];
// 140C65898: using guessed type __int64 qword_140C65898;

