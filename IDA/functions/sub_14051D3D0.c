//----- (000000014051D3D0) ----------------------------------------------------
void __fastcall sub_14051D3D0(__int64 a1)
{
	unsigned int v2; // ecx
	__int64 v3; // r15
	__int64 v4; // r13
	_QWORD* v5; // rdi
	char* v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // r14
	__int16* v10; // rax
	int* v11; // rax
	int* v12; // rax
	_QWORD* v13; // rax
	int* v14; // rax
	int* v15; // rax
	_QWORD* v16; // rax
	int* v17; // rbx
	__int64 v18; // rax
	int* v19; // rax
	int* v20; // rax
	_QWORD* v21; // rax
	int* v22; // rax
	int* v23; // rax
	int* v24; // rbx
	__int64 v25; // rax
	int v26; // edi
	_DWORD* v27; // rax
	int v28; // edx
	int v29[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v30; // [rsp+3Ch] [rbp-C4h]
	__int64 v31[24]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v32; // [rsp+100h] [rbp+0h]
	int* v33; // [rsp+110h] [rbp+10h]
	__int64 v34[24]; // [rsp+120h] [rbp+20h] BYREF
	__int128 v35; // [rsp+1E0h] [rbp+E0h]
	int* v36; // [rsp+1F0h] [rbp+F0h]
	__int64 v37[24]; // [rsp+200h] [rbp+100h] BYREF
	__int128 v38; // [rsp+2C0h] [rbp+1C0h]
	int* v39; // [rsp+2D0h] [rbp+1D0h]
	__int64 v40[24]; // [rsp+2E0h] [rbp+1E0h] BYREF
	__int128 v41; // [rsp+3A0h] [rbp+2A0h]
	int* v42; // [rsp+3B0h] [rbp+2B0h]

	v2 = *(_DWORD*)(a1 + 16);
	if (v2 != -1 && *(_DWORD*)(a1 + 20) != -1)
	{
		v3 = sub_140242080(v2);
		if (v3)
		{
			v4 = sub_1402424C0(*(_DWORD*)(a1 + 20));
			if (v4)
			{
				v5 = 0i64;
				v6 = (char*)sub_1400F52E0(
					*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
					(__m128i*)L"UI\\ActionConfirmButton.xml",
					(int*)L"TooltipBase",
					0i64,
					0i64,
					-2);
				(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v6);
				if (v6)
				{
					v7 = sub_1400D3830((__int64)(v6 + 552), L"ActionConfirm_LabelML");
					if (v7)
					{
						v9 = sub_1400D3830((__int64)(v6 + 552), L"Container");
						if (v9)
						{
							v10 = sub_14034BDD0(v8, 627179);
							sub_140514F00(v7, v9, (__int64)v10);
							sub_1400B7210((__int64)v40, (int*)L"$1n");
							v40[0] = (__int64)off_140B69230;
							v41 = 0i64;
							v42 = 0i64;
							v11 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v41 = v11;
							*((_QWORD*)&v41 + 1) = v11;
							v42 = v11 + 4;
							if (v11)
								*(_WORD*)v11 = 0;
							v12 = sub_14018B280(96i64, 0);
							if (v12)
								v13 = (_QWORD*)sub_1404DDAF0((__int64)v12, 134464);
							else
								v13 = 0i64;
							sub_1400B7480((__int64)v40, v13);
							sub_1400B7210((__int64)v34, (int*)L"$1n");
							v34[0] = (__int64)off_140B69230;
							v36 = 0i64;
							v35 = 0i64;
							v14 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v35 = v14;
							*((_QWORD*)&v35 + 1) = v14;
							v36 = v14 + 4;
							if (v14)
								*(_WORD*)v14 = 0;
							v15 = sub_14018B280(96i64, 0);
							if (v15)
								v16 = (_QWORD*)sub_1404DDAF0((__int64)v15, *(_DWORD*)(v3 + 4));
							else
								v16 = 0i64;
							sub_1400B7480((__int64)v34, v16);
							v17 = *(int**)(sub_1400B7660(v34) + 8);
							v18 = sub_1400B7660(v40);
							sub_140514840(v9, *(_QWORD*)(v18 + 8), v17);
							sub_1400B7210((__int64)v31, (int*)L"$1n");
							v31[0] = (__int64)off_140B69230;
							v33 = 0i64;
							v32 = 0i64;
							v19 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v32 = v19;
							*((_QWORD*)&v32 + 1) = v19;
							v33 = v19 + 4;
							if (v19)
								*(_WORD*)v19 = 0;
							v20 = sub_14018B280(96i64, 0);
							if (v20)
								v21 = (_QWORD*)sub_1404DDAF0((__int64)v20, 448802);
							else
								v21 = 0i64;
							sub_1400B7480((__int64)v31, v21);
							sub_1400B7210((__int64)v37, (int*)L"$1n");
							v37[0] = (__int64)off_140B69230;
							v39 = 0i64;
							v38 = 0i64;
							v22 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v38 = v22;
							*((_QWORD*)&v38 + 1) = v22;
							v39 = v22 + 4;
							if (v22)
								*(_WORD*)v22 = 0;
							v23 = sub_14018B280(96i64, 0);
							if (v23)
								v5 = (_QWORD*)sub_1404DDAF0((__int64)v23, *(_DWORD*)(v4 + 8));
							sub_1400B7480((__int64)v37, v5);
							v24 = *(int**)(sub_1400B7660(v37) + 8);
							v25 = sub_1400B7660(v31);
							sub_140514840(v9, *(_QWORD*)(v25 + 8), v24);
							v26 = sub_1400CD4C0(v9, 0);
							v27 = sub_1400CB3D0(v9, v29);
							LODWORD(v24) = v27[3] - v27[1];
							sub_1400CB3D0((__int64)v6, v29);
							v28 = v26 + v30 - (_DWORD)v24;
							if (v28 < v30)
								v28 = v30;
							v30 = v28;
							sub_1400CC7C0((__int64)v6, v29);
							sub_1400CB690((__int64)v6);
							sub_1400CB960(v6);
							if ((_QWORD)v38)
								sub_14018B900(v38, 0);
							sub_1400B7390(v37);
							if ((_QWORD)v32)
								sub_14018B900(v32, 0);
							sub_1400B7390(v31);
							if ((_QWORD)v35)
								sub_14018B900(v35, 0);
							sub_1400B7390(v34);
							if ((_QWORD)v41)
								sub_14018B900(v41, 0);
							sub_1400B7390(v40);
						}
					}
				}
			}
		}
	}
}
// 14051D4EA: variable 'v8' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14051D3D0: using guessed type int var_3B0[3];

