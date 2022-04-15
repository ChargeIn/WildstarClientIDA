//----- (0000000140519B20) ----------------------------------------------------
void __fastcall sub_140519B20(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	_QWORD* v4; // rbx
	char* v5; // r14
	__int64 v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // r15
	__int16* v9; // rax
	__int64 v10; // rsi
	int* v11; // rax
	int* v12; // rax
	unsigned int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rdi
	unsigned int v16; // ebp
	__int64 v17; // rax
	unsigned int* v18; // rsi
	void(__fastcall * **v19)(_QWORD); // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int16* v22; // rax
	__int64 v23; // rcx
	__int16* v24; // rax
	int v25; // edi
	_DWORD* v26; // rax
	int v27; // ebx
	int v28; // edx
	int v29[3]; // [rsp+30h] [rbp-118h] BYREF
	int v30; // [rsp+3Ch] [rbp-10Ch]
	__int64 v31[24]; // [rsp+40h] [rbp-108h] BYREF
	__int128 v32; // [rsp+100h] [rbp-48h]
	int* v33; // [rsp+110h] [rbp-38h]

	if (*(_QWORD*)(a1 + 16))
	{
		v2 = *(_QWORD*)(a1 + 64);
		if (v2)
		{
			v3 = sub_1403ACBB0(qword_140C65898 + 160, v2);
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
							v9 = sub_14034BDD0(v7, 627464);
							sub_140514F00(v6, v8, (__int64)v9);
							v10 = (int)sub_1405150D0(v3);
							sub_1400B7210((__int64)v31, (int*)L"$1n");
							v33 = 0i64;
							v32 = 0i64;
							v31[0] = (__int64)off_140B69230;
							v11 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v32 = v11;
							*((_QWORD*)&v32 + 1) = v11;
							v33 = v11 + 4;
							if (v11)
								*(_WORD*)v11 = 0;
							v12 = sub_14018B280(96i64, 0);
							if (v12)
								v4 = (_QWORD*)sub_1404DDAF0((__int64)v12, *(_DWORD*)(*(_QWORD*)(v3 + 64) + 476i64));
							sub_1400B7480((__int64)v31, v4);
							v13 = *(_DWORD*)(v3 + 120);
							v14 = *(_QWORD*)(a1 + 8);
							v15 = *(_QWORD*)(v3 + 64);
							v16 = 1;
							if (v13)
								v16 = v13;
							v17 = v10;
							v18 = (unsigned int*)(v14 + 1872 + 4 * v10);
							v19 = *(void(__fastcall****)(_QWORD))(v14 + 16 * (3 * v17 + 93));
							v20 = sub_1400B7660(v31);
							sub_140514C10(v8, *(_QWORD*)(v20 + 8), *(__m128i**)(v15 + 488), v19, v18, v16);
							v22 = sub_14034BDD0(v21, 627461);
							sub_140514AB0(v8, (__int64)v22, (__int64*)(a1 + 16));
							if (*(__int64*)(a1 + 40) > 0)
							{
								v24 = sub_14034BDD0(v23, 627463);
								sub_140514AB0(v8, (__int64)v24, (__int64*)(a1 + 40));
							}
							v25 = sub_1400CD4C0(v8, 0);
							v26 = sub_1400CB3D0(v8, v29);
							v27 = v26[3] - v26[1];
							sub_1400CB3D0((__int64)v5, v29);
							v28 = v25 + v30 - v27;
							if (v28 < v30)
								v28 = v30;
							v30 = v28;
							sub_1400CC7C0((__int64)v5, v29);
							sub_1400CB690((__int64)v5);
							sub_1400CB960(v5);
							if ((_QWORD)v32)
								sub_14018B900(v32, 0);
							sub_1400B7390(v31);
						}
					}
				}
			}
		}
	}
}
// 140519C2F: variable 'v7' is possibly undefined
// 140519D3D: variable 'v21' is possibly undefined
// 140519D65: variable 'v23' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140519B20: using guessed type int var_118[3];

