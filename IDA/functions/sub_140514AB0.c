//----- (0000000140514AB0) ----------------------------------------------------
__int64 __fastcall sub_140514AB0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rdi
	bool v10; // zf
	char v11; // al
	__int64 v12; // rax
	__int64 v13; // rax

	result = (__int64)sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"MoneyLine",
		0i64,
		a1,
		-2);
	if (result)
	{
		v6 = result + 552;
		v7 = sub_1400D3830(result + 552, L"CashWindow");
		v8 = v7;
		if (v7)
		{
			sub_140505BB0(v7, *((_DWORD*)a3 + 2), *((_DWORD*)a3 + 3), *((_DWORD*)a3 + 4), *((_DWORD*)a3 + 5), 0);
			v9 = *a3;
			if (v9 > *(_QWORD*)(v8 + 1088))
				v9 = *(_QWORD*)(v8 + 1088);
			v10 = v9 == *(_QWORD*)(v8 + 1080);
			v11 = 0;
			*(_QWORD*)(v8 + 1080) = v9;
			if (!v10)
				v11 = 1;
			if (v11)
			{
				v12 = *(_QWORD*)(v8 + 1096);
				*(_BYTE*)(v8 + 1076) = 0;
				*(_DWORD*)(v8 + 1072) = 0;
				*(_QWORD*)(v8 + 1104) = v12;
			}
			v13 = *(_QWORD*)v8;
			*(_QWORD*)(v8 + 1096) = v9;
			*(_QWORD*)(v8 + 1104) = v9;
			(*(void(__fastcall**)(__int64))(v13 + 568))(v8);
			sub_1400D4040(v8, "CashWindowAmountChanged", (char*)v8, "i", v9);
		}
		result = sub_1400D3830(v6, L"Label");
		if (result)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)result + 80i64))(result, a2);
	}
	return result;
}
// 140B12400: using guessed type wchar_t aUiActionconfir_2[27];
// 140B12438: using guessed type wchar_t aMoneyline[10];
// 140B12450: using guessed type wchar_t aLabel_1[6];
// 140B12460: using guessed type wchar_t aCashwindow_0[11];
// 140C65898: using guessed type __int64 qword_140C65898;

