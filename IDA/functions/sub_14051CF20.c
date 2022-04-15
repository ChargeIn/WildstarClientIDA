//----- (000000014051CF20) ----------------------------------------------------
void __fastcall sub_14051CF20(__int64 a1)
{
	unsigned int v2; // ecx
	__int64 v3; // r14
	_QWORD* v4; // rbx
	char* v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // r15
	__int16* v9; // rax
	int* v10; // rax
	int* v11; // rax
	_QWORD* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	int v17; // edi
	_DWORD* v18; // rax
	int v19; // edx
	int v20[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v21; // [rsp+3Ch] [rbp-C4h]
	__int64 v22[24]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v23; // [rsp+100h] [rbp+0h]
	int* v24; // [rsp+110h] [rbp+10h]
	__int64 v25[24]; // [rsp+120h] [rbp+20h] BYREF
	__int128 v26; // [rsp+1E0h] [rbp+E0h]
	int* v27; // [rsp+1F0h] [rbp+F0h]

	v2 = *(_DWORD*)(a1 + 16);
	if (v2)
	{
		v3 = sub_140200AA0(v2);
		if (v3)
		{
			v4 = 0i64;
			v5 = (char*)sub_1400F52E0(
				*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
				(__m128i*)L"UI\\ActionConfirmButton.xml",
				(int*)L"TooltipBase",
				0i64,
				0i64,
				-2);
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v5);
			if (v5)
			{
				v6 = sub_1400D3830((__int64)(v5 + 552), L"ActionConfirm_LabelML");
				if (v6)
				{
					v8 = sub_1400D3830((__int64)(v5 + 552), L"Container");
					if (v8)
					{
						v9 = sub_14034BDD0(v7, 626995);
						sub_140514F00(v6, v8, (__int64)v9);
						sub_1400B7210((__int64)v25, (int*)L"$1n");
						v25[0] = (__int64)off_140B69230;
						v26 = 0i64;
						v27 = 0i64;
						v10 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v26 = v10;
						*((_QWORD*)&v26 + 1) = v10;
						v27 = v10 + 4;
						if (v10)
							*(_WORD*)v10 = 0;
						v11 = sub_14018B280(96i64, 0);
						if (v11)
							v12 = (_QWORD*)sub_1404DDAF0((__int64)v11, 627256);
						else
							v12 = 0i64;
						sub_1400B7480((__int64)v25, v12);
						sub_1400B7210((__int64)v22, (int*)L"$1n");
						v22[0] = (__int64)off_140B69230;
						v24 = 0i64;
						v23 = 0i64;
						v13 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v23 = v13;
						*((_QWORD*)&v23 + 1) = v13;
						v24 = v13 + 4;
						if (v13)
							*(_WORD*)v13 = 0;
						v14 = sub_14018B280(96i64, 0);
						if (v14)
							v4 = (_QWORD*)sub_1404DDAF0((__int64)v14, *(_DWORD*)(v3 + 12));
						sub_1400B7480((__int64)v22, v4);
						v15 = *(int**)(sub_1400B7660(v22) + 8);
						v16 = sub_1400B7660(v25);
						sub_140514840(v8, *(_QWORD*)(v16 + 8), v15);
						v17 = sub_1400CD4C0(v8, 0);
						v18 = sub_1400CB3D0(v8, v20);
						LODWORD(v15) = v18[3] - v18[1];
						sub_1400CB3D0((__int64)v5, v20);
						v19 = v17 + v21 - (_DWORD)v15;
						if (v19 < v21)
							v19 = v21;
						v21 = v19;
						sub_1400CC7C0((__int64)v5, v20);
						sub_1400CB690((__int64)v5);
						sub_1400CB960(v5);
						if ((_QWORD)v23)
							sub_14018B900(v23, 0);
						sub_1400B7390(v22);
						if ((_QWORD)v26)
							sub_14018B900(v26, 0);
						sub_1400B7390(v25);
					}
				}
			}
		}
	}
}
// 14051D00B: variable 'v7' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14051CF20: using guessed type int var_1E0[3];

