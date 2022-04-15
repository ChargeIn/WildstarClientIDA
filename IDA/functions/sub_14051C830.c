//----- (000000014051C830) ----------------------------------------------------
void __fastcall sub_14051C830(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int16* v6; // rax
	__int64 v7; // rcx
	int v8; // edx
	__int16* v9; // rax

	v2 = sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"TooltipBase",
		0i64,
		0i64,
		-2);
	(*(void(__fastcall**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v2);
	if (v2)
	{
		v3 = sub_1400D3830((__int64)(v2 + 69), L"ActionConfirm_LabelML");
		if (v3)
		{
			v5 = sub_1400D3830((__int64)(v2 + 69), L"Container");
			if (v5)
			{
				v6 = sub_14034BDD0(v4, 623090);
				sub_140514F00(v3, v5, (__int64)v6);
				v8 = 623091;
				if (!*(_DWORD*)(a1 + 16))
					v8 = 623092;
				v9 = sub_14034BDD0(v7, v8);
				sub_140514A30(v5, (__int64)v9);
			}
		}
	}
}
// 14051C8D2: variable 'v4' is possibly undefined
// 14051C8F5: variable 'v7' is possibly undefined
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140C65898: using guessed type __int64 qword_140C65898;

