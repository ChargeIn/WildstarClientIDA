//----- (0000000140645850) ----------------------------------------------------
__int64 __fastcall sub_140645850(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	bool v4; // zf
	_QWORD* v6; // r11
	__int64 v7; // r8
	const wchar_t* v8; // rcx
	unsigned __int16 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rax
	_QWORD* v12; // r11
	__int64 v13; // r8
	const wchar_t* v14; // rcx
	unsigned __int16 v15; // r9
	__int64 v16; // rax
	__int64 v17; // rax
	_QWORD* v18; // r11
	__int64 v19; // r8
	const wchar_t* v20; // rcx
	unsigned __int16 v21; // r9
	__int64 v22; // rax
	__int64 v23; // rax
	_QWORD* v24; // r11
	__int64 v25; // r8
	unsigned __int16 v26; // r9
	const wchar_t* v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rsi
	wchar_t v30; // r10
	_QWORD* v31; // r11
	const wchar_t* v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rbx
	__int16* v36; // rax

	v1 = qword_140C65C30;
	v2 = 0i64;
	v4 = qword_140C65C30 == a1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (v4)
		v1 = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	qword_140C65C30 = v1;
	if (!qword_140C65898)
		return 2147500037i64;
	v6 = sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ChatControl.xml",
		(int*)L"ChatForm",
		0i64,
		0i64,
		-2);
	*(_QWORD*)(a1 + 16) = v6;
	if (!v6)
		return 2147500037i64;
	v7 = 0i64;
	v8 = L"EditBox";
	v9 = 69;
	do
	{
		v10 = v9;
		v9 = v8[1];
		++v8;
		v7 = v10 + 2860486313i64 * v7;
	} while (v9);
	v11 = sub_1400D3940(v6, L"EditBox", v7);
	*(_QWORD*)(a1 + 32) = v11;
	if (!v11)
		return 2147500037i64;
	if ((*(_BYTE*)(v11 + 432) & 4) == 0)
		return 2147500037i64;
	v13 = 0i64;
	v14 = L"Display";
	v15 = 68;
	do
	{
		v16 = v15;
		v15 = v14[1];
		++v14;
		v13 = v16 + 2860486313i64 * v13;
	} while (v15);
	v17 = sub_1400D3940(v12, L"Display", v13);
	*(_QWORD*)(a1 + 24) = v17;
	if (!v17)
		return 2147500037i64;
	if ((*(_DWORD*)(v17 + 432) & 0x100000i64) == 0)
		return 2147500037i64;
	v19 = 0i64;
	v20 = L"CloseBtn";
	v21 = 67;
	do
	{
		v22 = v21;
		v21 = v20[1];
		++v20;
		v19 = v22 + 2860486313i64 * v19;
	} while (v21);
	v23 = sub_1400D3940(v18, L"CloseBtn", v19);
	*(_QWORD*)(a1 + 40) = v23;
	if (!v23 || (*(_BYTE*)(v23 + 432) & 2) == 0)
		return 2147500037i64;
	v25 = 0i64;
	v26 = 66;
	v27 = L"BGTitle";
	do
	{
		v28 = v26;
		v26 = v27[1];
		++v27;
		v25 = v28 + 2860486313i64 * v25;
	} while (v26);
	v29 = sub_1400D3940(v24, L"BGTitle", v25);
	if (!v29)
		return 2147500037i64;
	v32 = L"BGIcon";
	do
	{
		v33 = v30;
		v30 = v32[1];
		++v32;
		v2 = v33 + 2860486313i64 * v2;
	} while (v30);
	v35 = sub_1400D3940(v31, L"BGIcon", v2);
	if (!v35)
		return 2147500037i64;
	v36 = sub_14034BDD0(v34, 569396);
	(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v29 + 80i64))(v29, v36);
	sub_1400D2D60(v35, (__m128i*)L"Icon_Windows_UI_GMIcon");
	sub_1400D42F0(*(_QWORD*)(a1 + 16), *(_BYTE*)(a1 + 700), 1, 4.0);
	if (*(_BYTE*)(a1 + 700))
		sub_140116200(*(_QWORD*)(a1 + 24), a1 + 48);
	sub_1400D3410(*(_QWORD*)(a1 + 32), (int*)off_140C2C610[0], (int*)"OnGmChatControlReturn");
	sub_1400F2390(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"OnGmChatControlReturn", (__int64)sub_140646EE0);
	sub_1400D3410(*(_QWORD*)(a1 + 40), (int*)off_140C2C5E0[0], (int*)"OnGmChatControlClose");
	sub_1400F2390(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"OnGmChatControlClose", (__int64)sub_140646F80);
	qword_140C65C30 = a1;
	return 0i64;
}
// 140645984: variable 'v12' is possibly undefined
// 1406459E4: variable 'v18' is possibly undefined
// 140645A44: variable 'v24' is possibly undefined
// 140645A64: variable 'v30' is possibly undefined
// 140645A87: variable 'v31' is possibly undefined
// 140645AB3: variable 'v34' is possibly undefined
// 140B29EA0: using guessed type wchar_t aBgicon[7];
// 140B29EC8: using guessed type wchar_t aClosebtn[9];
// 140B29EE0: using guessed type wchar_t aBgtitle[8];
// 140B29EF0: using guessed type wchar_t aEditbox_0[8];
// 140B29F00: using guessed type wchar_t aDisplay_0[8];
// 140B29F10: using guessed type wchar_t aChatform[9];
// 140B29F28: using guessed type wchar_t aUiChatcontrolX[19];
// 140B29F50: using guessed type wchar_t aIconWindowsUiG[23];
// 140C2C5E0: using guessed type char *off_140C2C5E0[46];
// 140C2C610: using guessed type char *off_140C2C610[40];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C30: using guessed type __int64 qword_140C65C30;

