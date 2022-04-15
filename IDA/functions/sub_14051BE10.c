//----- (000000014051BE10) ----------------------------------------------------
void __fastcall sub_14051BE10(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int16* v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	int v14; // ecx
	int v15; // edi
	int v16; // eax
	int v17; // ecx
	int* v18; // rax
	int* v19; // rax
	__int64 v20; // rsi
	int v21; // ebx
	void(__fastcall * **v22)(_QWORD); // rbx
	__int64 v23; // rax
	__int64 v24[24]; // [rsp+30h] [rbp-5E8h] BYREF
	__int128 v25; // [rsp+F0h] [rbp-528h]
	int* v26; // [rsp+100h] [rbp-518h]
	__int64 v27; // [rsp+110h] [rbp-508h] BYREF
	__int64 v28; // [rsp+118h] [rbp-500h]
	int v29; // [rsp+130h] [rbp-4E8h]
	__int64 v30; // [rsp+410h] [rbp-208h]
	int v31; // [rsp+5A8h] [rbp-70h]
	int v32; // [rsp+5B0h] [rbp-68h]

	if (!*a1)
	{
		v8 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"HeaderLine",
			0i64,
			a3,
			-2);
		if (!v8)
			return;
		v10 = sub_1400D3830((__int64)(v8 + 69), L"Header");
		if (v10)
		{
			v11 = sub_14034BDD0(v9, 618165);
			(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v10 + 80i64))(v10, v11);
		}
		*a1 = 1;
	}
	sub_14040FAE0((__int64)&v27);
	v12 = v32;
	if (v32 > 6)
		goto LABEL_11;
	if (!a4)
	{
		if (v32)
		{
			v13 = 0i64;
			v12 = 0;
			v28 = 0i64;
			v32 = 0;
			goto LABEL_12;
		}
	LABEL_11:
		v13 = v28;
		goto LABEL_12;
	}
	v13 = a4;
	v12 = 6;
	v28 = a4;
	v32 = 6;
LABEL_12:
	if (v31)
	{
		v14 = 1;
		v15 = 7;
		if (v29 > 1)
			v14 = v29;
		if (v14 < 7)
			v15 = v14;
	}
	else if (v12 && v13)
	{
		v16 = *(_DWORD*)(v13 + 344);
		v17 = 1;
		v15 = 7;
		if (v16 > 1)
			v17 = v16;
		if (v17 < 7)
			v15 = v17;
	}
	else
	{
		v15 = 8;
	}
	sub_1400B7210((__int64)v24, (int*)L"$1n");
	v24[0] = (__int64)off_140B69230;
	v26 = 0i64;
	v25 = 0i64;
	v18 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v25 = v18;
	*((_QWORD*)&v25 + 1) = v18;
	v26 = v18 + 4;
	if (v18)
		*(_WORD*)v18 = 0;
	v19 = sub_14018B280(96i64, 0);
	v20 = (__int64)v19;
	if (v19)
	{
		v21 = *(_DWORD*)(a4 + 476);
		sub_1400B6390(v19);
		*(_QWORD*)v20 = off_140B69170;
		*(_DWORD*)(v20 + 88) = 1;
		sub_1400B6D70(v20, (__int64)L"name", v21);
	}
	else
	{
		v20 = 0i64;
	}
	sub_1400B7480((__int64)v24, (_QWORD*)v20);
	v22 = *(void(__fastcall****)(_QWORD))(a2 + 48 * (v15 + 31i64));
	v23 = sub_1400B7660(v24);
	sub_140514C10(a3, *(_QWORD*)(v23 + 8), *(__m128i**)(a4 + 488), v22, (unsigned int*)(a2 + 1872 + 4i64 * v15), 1u);
	if ((_QWORD)v25)
		sub_14018B900(v25, 0);
	sub_1400B7390(v24);
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		v27 = 0i64;
	}
	if (v30)
		sub_14018B900(v30, 0);
}
// 14051BEA3: variable 'v9' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140B6BA90: using guessed type wchar_t aHeaderline_0[11];
// 140B6BAA8: using guessed type wchar_t aHeader_1[7];
// 140C65898: using guessed type __int64 qword_140C65898;

