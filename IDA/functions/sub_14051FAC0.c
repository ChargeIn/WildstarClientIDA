//----- (000000014051FAC0) ----------------------------------------------------
void __fastcall sub_14051FAC0(__int64 a1)
{
	char* v2; // r14
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // r15
	__int16* v6; // rax
	int* v7; // rsi
	int v8; // ecx
	__int64 v9; // rdx
	int v10; // ecx
	int v11; // ebx
	int v12; // ecx
	int* v13; // rax
	int* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rcx
	unsigned int* v17; // rdi
	void(__fastcall * **v18)(_QWORD); // rbx
	__int64 v19; // rax
	_DWORD* v20; // rax
	int v21; // edx
	int v22[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v23; // [rsp+3Ch] [rbp-C4h]
	__int64 v24[24]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v25; // [rsp+100h] [rbp+0h]
	int* v26; // [rsp+110h] [rbp+10h]
	__int64 v27; // [rsp+120h] [rbp+20h] BYREF
	int* v28; // [rsp+128h] [rbp+28h]
	int v29; // [rsp+140h] [rbp+40h]
	__int64 v30; // [rsp+420h] [rbp+320h]
	int v31; // [rsp+5B8h] [rbp+4B8h]
	int v32; // [rsp+5C0h] [rbp+4C0h]

	v2 = (char*)sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"TooltipBase",
		0i64,
		0i64,
		-2);
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v2);
	if (v2)
	{
		v3 = sub_1400D3830((__int64)(v2 + 552), L"ActionConfirm_LabelML");
		if (v3)
		{
			v5 = sub_1400D3830((__int64)(v2 + 552), L"Container");
			if (v5)
			{
				v6 = sub_14034BDD0(v4, 679980);
				sub_140514F00(v3, v5, (__int64)v6);
				v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 16), 0i64);
				if (v7)
				{
					sub_14040FAE0((__int64)&v27);
					v8 = v32;
					if (v32 > 6)
					{
						v9 = (__int64)v28;
					}
					else
					{
						v9 = (__int64)v7;
						v8 = 6;
						v28 = v7;
						v32 = 6;
					}
					if (v31)
					{
						v10 = 1;
						v11 = 7;
						if (v29 > 1)
							v10 = v29;
						if (v10 < 7)
							v11 = v10;
					}
					else if (v8 && v9)
					{
						v12 = 1;
						v11 = 7;
						if (*(int*)(v9 + 344) > 1)
							v12 = *(_DWORD*)(v9 + 344);
						if (v12 < 7)
							v11 = v12;
					}
					else
					{
						v11 = 8;
					}
					sub_1400B7210((__int64)v24, (int*)L"$1n");
					v24[0] = (__int64)off_140B69230;
					v26 = 0i64;
					v25 = 0i64;
					v13 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v25 = v13;
					*((_QWORD*)&v25 + 1) = v13;
					v26 = v13 + 4;
					if (v13)
						*(_WORD*)v13 = 0;
					v14 = sub_14018B280(96i64, 0);
					if (v14)
						v15 = (_QWORD*)sub_1404DDAF0((__int64)v14, v7[119]);
					else
						v15 = 0i64;
					sub_1400B7480((__int64)v24, v15);
					v16 = *(_QWORD*)(a1 + 8);
					v17 = (unsigned int*)(v16 + 1872 + 4i64 * v11);
					v18 = *(void(__fastcall****)(_QWORD))(v16 + 16 * (3i64 * v11 + 93));
					v19 = sub_1400B7660(v24);
					sub_140514C10(v5, *(_QWORD*)(v19 + 8), *((__m128i**)v7 + 61), v18, v17, 1u);
					LODWORD(v17) = sub_1400CD4C0(v5, 0);
					v20 = sub_1400CB3D0(v5, v22);
					LODWORD(v18) = v20[3] - v20[1];
					sub_1400CB3D0((__int64)v2, v22);
					v21 = (_DWORD)v17 + v23 - (_DWORD)v18;
					if (v21 < v23)
						v21 = v23;
					v23 = v21;
					sub_1400CC7C0((__int64)v2, v22);
					sub_1400CB690((__int64)v2);
					sub_1400CB960(v2);
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
			}
		}
	}
}
// 14051FB9D: variable 'v4' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14051FAC0: using guessed type int var_5E0[3];

