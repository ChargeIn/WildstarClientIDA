//----- (0000000140519560) ----------------------------------------------------
void __fastcall sub_140519560(__int64 a1)
{
	char* v2; // rbp
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rsi
	__int16* v6; // rax
	__int64 v7; // rcx
	int v8; // edx
	__int16* v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rdx
	__int16* v13; // rax
	__int64* v14; // r8
	int v15; // edi
	_DWORD* v16; // rax
	int v17; // ebx
	int v18; // edx
	__int64 v19; // [rsp+30h] [rbp-28h] BYREF
	int v20; // [rsp+38h] [rbp-20h]
	int v21; // [rsp+3Ch] [rbp-1Ch]
	int v22; // [rsp+40h] [rbp-18h]
	int v23; // [rsp+44h] [rbp-14h]
	unsigned int v24; // [rsp+68h] [rbp+10h] BYREF

	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
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
					v6 = sub_14034BDD0(v4, 612141);
					sub_140514F00(v3, v5, (__int64)v6);
					if (*(_DWORD*)(a1 + 16))
					{
						if (*(_DWORD*)(a1 + 20))
							v8 = 456092;
						else
							v8 = 595005;
					}
					else
					{
						v8 = 456104;
						if (!*(_DWORD*)(a1 + 20))
							v8 = 595006;
					}
					v9 = sub_14034BDD0(v7, v8);
					v24 = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
					sub_140514C10(v5, (__int64)v9, (__m128i*)L"IconSprites:Icon_ItemMisc_UI_Item_CREDD", 0i64, &v24, 1u);
					sub_1401429A0(qword_140C63678, v24);
					if (*(_DWORD*)(a1 + 16))
					{
						v11 = *(_QWORD*)(a1 + 24);
						v21 = 0;
						v23 = 0;
						v12 = ((unsigned __int64)(5 * v11) * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
						v20 = *(_DWORD*)(a1 + 32);
						v22 = *(_DWORD*)(a1 + 36);
						v19 = v11 + ((v12 + ((unsigned __int64)(5 * v11 - v12) >> 1)) >> 6);
						v13 = sub_14034BDD0(v19, 612142);
						v14 = &v19;
					}
					else
					{
						v13 = sub_14034BDD0(v10, 612142);
						v14 = (__int64*)(a1 + 24);
					}
					sub_140514AB0(v5, (__int64)v13, v14);
					v15 = sub_1400CD4C0(v5, 0);
					v16 = sub_1400CB3D0(v5, &v19);
					v17 = v16[3] - v16[1];
					sub_1400CB3D0((__int64)v2, &v19);
					v18 = v15 + v21 - v17;
					if (v18 < v21)
						v18 = v21;
					v21 = v18;
					sub_1400CC7C0((__int64)v2, (int*)&v19);
					sub_1400CB690((__int64)v2);
					sub_1400CB960(v2);
				}
			}
		}
	}
}
// 140519651: conditional instruction was optimized away because eax.4!=0
// 140519662: conditional instruction was optimized away because eax.4!=0
// 140519628: variable 'v4' is possibly undefined
// 140519674: variable 'v7' is possibly undefined
// 14051972E: variable 'v10' is possibly undefined
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B9A0: using guessed type wchar_t aIconspritesIco[40];
// 140B6BA40: using guessed type wchar_t aUiTextholobody[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

