//----- (000000014051A7A0) ----------------------------------------------------
void __fastcall sub_14051A7A0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	_QWORD* v4; // r14
	__int64 v5; // r14
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // rax
	int v9; // ecx
	int v10; // edx
	_QWORD* v11; // rax
	int* v12; // rax
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int16* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rdi
	__int16* v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rbx
	unsigned __int64 v24; // r14
	bool v25; // zf
	char v26; // cl
	__int64 v27; // rax
	__int64 v28; // rax
	__int16* v29; // rax
	__int64 v30; // rax
	_QWORD* v31; // r15
	__int64 v32; // r15
	__int64 v33; // rdi
	int* v34; // rax
	int* v35; // rax
	int v36; // ecx
	int v37; // edx
	_QWORD* v38; // rax
	int* v39; // rax
	__int64 v40; // rcx
	_QWORD* v41; // rax
	__int64 v42; // rax
	__int64 v43; // rdi
	__int64 v44; // rcx
	int v45; // edx
	__int16* v46; // rax
	__int64 v47; // rdi
	int* v48; // rax
	int* v49; // r14
	__int64 v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // rax
	__int64 v53; // r14
	__int64 v54; // rax
	__int64 v55; // rcx
	__int16* v56; // rax
	__int64 v57; // rbx
	char v58; // cl
	__int64 v59; // rax
	__int64 v60; // rax
	int v61; // eax
	int* v62; // rax
	int* v63; // rax
	_QWORD* v64; // rax
	__int64 v65; // rax
	__int64 v66; // rbx
	unsigned __int64 v67; // rbx
	char v68; // al
	__int64 v69; // rax
	__int64 v70; // rax
	_QWORD v71[24]; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v72; // [rsp+F8h] [rbp-10h]
	int* v73; // [rsp+108h] [rbp+0h]
	__int64 v74; // [rsp+118h] [rbp+10h] BYREF
	__int64 v75; // [rsp+120h] [rbp+18h]
	__int64 v76; // [rsp+418h] [rbp+310h]
	int v77; // [rsp+5B8h] [rbp+4B0h]

	if (!*(_QWORD*)(a1 + 16))
		return;
	sub_14040FAE0((__int64)&v74);
	v2 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64), 0i64);
	sub_140412470((__int64)&v74, (__int64)v2, 0, 6);
	v3 = *(_QWORD*)(qword_140C65898 + 29504);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 44i64))
	{
		v4 = sub_1400F52E0(
			v3 + 2688,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"CommoditiesExchangeInstantTooltip",
			0i64,
			0i64,
			-2);
		(*(void(__fastcall**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v4);
		if (!v4)
			goto LABEL_103;
		v5 = (__int64)(v4 + 69);
		v6 = sub_1400D3830(v5, L"SimpleConfirmTooltipText");
		if (v6)
		{
			sub_1400B7090((__int64)v71, 538245);
			v71[0] = off_140B69230;
			v72 = 0i64;
			v73 = 0i64;
			v7 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v72 = v7;
			*((_QWORD*)&v72 + 1) = v7;
			v73 = v7 + 4;
			if (v7)
				*(_WORD*)v7 = 0;
			v8 = sub_14018B280(88i64, 0);
			if (v8)
			{
				v9 = 0x7FFFFFFF;
				if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64) != 0x7FFFFFFF)
					v9 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64);
				v10 = 0x80000000;
				if (v9 != 0x80000000)
					v10 = v9;
				v11 = (_QWORD*)sub_1404DDA70((__int64)v8, v10);
			}
			else
			{
				v11 = 0i64;
			}
			sub_1400B7480((__int64)v71, v11);
			v12 = sub_14018B280(96i64, 0);
			if (v12)
			{
				v13 = 0i64;
				if (v77)
					v13 = v75;
				v14 = (_QWORD*)sub_1404DDAF0((__int64)v12, *(_DWORD*)(v13 + 476));
			}
			else
			{
				v14 = 0i64;
			}
			sub_1400B7480((__int64)v71, v14);
			v15 = sub_1400B7660(v71);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 80i64))(v6, *(_QWORD*)(v15 + 8));
			if ((_QWORD)v72)
				sub_14018B900(v72, 0);
			sub_1400B7390(v71);
		}
		v16 = sub_1400D3830(v5, L"SimpleConfirmTooltipTitle");
		if (!v16)
			goto LABEL_103;
		v17 = *(_QWORD*)(a1 + 16);
		if (!*(_DWORD*)(v17 + 40))
		{
			v29 = sub_14034BDD0(v17, 537455);
			(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v16 + 80i64))(v16, v29);
			v30 = sub_1400D3830(v5, L"AdvancedConfirmFeeContainer");
			if (v30)
				sub_1400D42F0(v30, 0, 0, 4.0);
			goto LABEL_103;
		}
		v18 = sub_14034BDD0(v17, 537453);
		(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v16 + 80i64))(v16, v18);
		v20 = sub_1400D3830(v5, L"AdvancedConfirmFeeContainer:AdvancedConfirmSellFeeText");
		if (v20)
		{
			v21 = sub_14034BDD0(v19, 614956);
			(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v20 + 80i64))(v20, v21);
		}
		v22 = sub_1400D3830(v5, L"AdvancedConfirmFeeContainer:SimpleConfirmTooltipPrice");
		if (v22)
		{
			v23 = *(_QWORD*)(a1 + 16);
			v24 = sub_1403E0290(*(_QWORD*)(v23 + 24), *(_DWORD*)(v23 + 20))
				+ *(_QWORD*)(v23 + 24) * *(unsigned int*)(v23 + 20);
			if (v24 > *(_QWORD*)(v22 + 1088))
				v24 = *(_QWORD*)(v22 + 1088);
			v25 = v24 == *(_QWORD*)(v22 + 1080);
			v26 = 0;
			*(_QWORD*)(v22 + 1080) = v24;
			if (!v25)
				v26 = 1;
			if (v26)
			{
				v27 = *(_QWORD*)(v22 + 1096);
				*(_BYTE*)(v22 + 1076) = 0;
				*(_DWORD*)(v22 + 1072) = 0;
				*(_QWORD*)(v22 + 1104) = v27;
			}
		LABEL_33:
			v28 = *(_QWORD*)v22;
			*(_QWORD*)(v22 + 1096) = v24;
			*(_QWORD*)(v22 + 1104) = v24;
			(*(void(__fastcall**)(__int64, __int64))(v28 + 568))(v22, 1i64);
			sub_1400D4040(v22, "CashWindowAmountChanged", (char*)v22, "i", v24);
		}
	}
	else
	{
		v31 = sub_1400F52E0(
			v3 + 2688,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"CommoditiesExchangeTooltip",
			0i64,
			0i64,
			-2);
		(*(void(__fastcall**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v31);
		if (v31)
		{
			v32 = (__int64)(v31 + 69);
			v33 = sub_1400D3830(v32, L"SimpleConfirmTooltipText");
			if (v33)
			{
				sub_1400B7090((__int64)v71, 538245);
				v71[0] = off_140B69230;
				v73 = 0i64;
				v72 = 0i64;
				v34 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v72 = v34;
				*((_QWORD*)&v72 + 1) = v34;
				v73 = v34 + 4;
				if (v34)
					*(_WORD*)v34 = 0;
				v35 = sub_14018B280(88i64, 0);
				if (v35)
				{
					v36 = 0x7FFFFFFF;
					if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64) != 0x7FFFFFFF)
						v36 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 20i64);
					v37 = 0x80000000;
					if (v36 != 0x80000000)
						v37 = v36;
					v38 = (_QWORD*)sub_1404DDA70((__int64)v35, v37);
				}
				else
				{
					v38 = 0i64;
				}
				sub_1400B7480((__int64)v71, v38);
				v39 = sub_14018B280(96i64, 0);
				if (v39)
				{
					v40 = 0i64;
					if (v77)
						v40 = v75;
					v41 = (_QWORD*)sub_1404DDAF0((__int64)v39, *(_DWORD*)(v40 + 476));
				}
				else
				{
					v41 = 0i64;
				}
				sub_1400B7480((__int64)v71, v41);
				v42 = sub_1400B7660(v71);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v33 + 80i64))(v33, *(_QWORD*)(v42 + 8));
				if ((_QWORD)v72)
					sub_14018B900(v72, 0);
				sub_1400B7390(v71);
			}
			v43 = sub_1400D3830(v32, L"SimpleConfirmTooltipTitle");
			if (v43)
			{
				v44 = *(_QWORD*)(a1 + 16);
				v45 = 537456;
				if (!*(_DWORD*)(v44 + 40))
					v45 = 537457;
				v46 = sub_14034BDD0(v44, v45);
				(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v43 + 80i64))(v43, v46);
			}
			v47 = sub_1400D3830(v32, L"AdvancedConfirmDurationText");
			if (v47)
			{
				sub_1400B7090((__int64)v71, 571362);
				v71[0] = off_140B69230;
				v73 = 0i64;
				v72 = 0i64;
				v48 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v72 = v48;
				*((_QWORD*)&v72 + 1) = v48;
				v73 = v48 + 4;
				if (v48)
					*(_WORD*)v48 = 0;
				v49 = sub_14018B280(88i64, 0);
				if (v49)
				{
					v50 = sub_140200220(0x432u);
					if (v50)
						v51 = (_QWORD*)sub_1404DDAB0((__int64)v49, *(float*)(v50 + 28));
					else
						v51 = (_QWORD*)sub_1404DDAB0((__int64)v49, 7.0);
				}
				else
				{
					v51 = 0i64;
				}
				sub_1400B7480((__int64)v71, v51);
				v52 = sub_1400B7660(v71);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v47 + 80i64))(v47, *(_QWORD*)(v52 + 8));
				if ((_QWORD)v72)
					sub_14018B900(v72, 0);
				sub_1400B7390(v71);
			}
			v53 = sub_1400D3830(v32, L"AdvancedConfirmFeeContainer:AdvancedConfirmSellFeeText");
			v54 = sub_1400D3830(v32, L"AdvancedConfirmFeeContainer:SimpleConfirmTooltipPrice");
			v55 = *(_QWORD*)(a1 + 16);
			v22 = v54;
			if (!*(_DWORD*)(v55 + 40))
			{
				if ((dword_140DC32A8 & 1) == 0)
				{
					dword_140DC32A8 |= 1u;
					v60 = sub_140200220(0x433u);
					if (v60)
						v61 = *(_DWORD*)(v60 + 8);
					else
						v61 = 12;
					dword_140DC32AC = v61;
				}
				if (v53)
				{
					sub_1400B7090((__int64)v71, 592772);
					v71[0] = off_140B69230;
					v73 = 0i64;
					v72 = 0i64;
					v62 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v72 = v62;
					*((_QWORD*)&v72 + 1) = v62;
					v73 = v62 + 4;
					if (v62)
						*(_WORD*)v62 = 0;
					v63 = sub_14018B280(88i64, 0);
					if (v63)
						v64 = (_QWORD*)sub_1404DDA70((__int64)v63, -dword_140DC32AC);
					else
						v64 = 0i64;
					sub_1400B7480((__int64)v71, v64);
					v65 = sub_1400B7660(v71);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v53 + 80i64))(v53, *(_QWORD*)(v65 + 8));
					if ((_QWORD)v72)
						sub_14018B900(v72, 0);
					sub_1400B7390(v71);
				}
				if (v22)
				{
					v66 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) * *(unsigned int*)(*(_QWORD*)(a1 + 16) + 20i64);
					v67 = v66 - v66 * dword_140DC32AC / 100;
					if (v67 > *(_QWORD*)(v22 + 1088))
						v67 = *(_QWORD*)(v22 + 1088);
					v25 = v67 == *(_QWORD*)(v22 + 1080);
					v68 = 0;
					*(_QWORD*)(v22 + 1080) = v67;
					if (!v25)
						v68 = 1;
					if (v68)
					{
						v69 = *(_QWORD*)(v22 + 1096);
						*(_BYTE*)(v22 + 1076) = 0;
						*(_DWORD*)(v22 + 1072) = 0;
						*(_QWORD*)(v22 + 1104) = v69;
					}
					v70 = *(_QWORD*)v22;
					*(_QWORD*)(v22 + 1096) = v67;
					*(_QWORD*)(v22 + 1104) = v67;
					(*(void(__fastcall**)(__int64, __int64))(v70 + 568))(v22, 1i64);
					sub_1400D4040(v22, "CashWindowAmountChanged", (char*)v22, "i", v67);
				}
				goto LABEL_103;
			}
			if (v53)
			{
				v56 = sub_14034BDD0(v55, 614956);
				(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v53 + 80i64))(v53, v56);
			}
			if (v22)
			{
				v57 = *(_QWORD*)(a1 + 16);
				v24 = sub_1403E0290(*(_QWORD*)(v57 + 24), *(_DWORD*)(v57 + 20))
					+ *(_QWORD*)(v57 + 24) * *(unsigned int*)(v57 + 20);
				if (v24 > *(_QWORD*)(v22 + 1088))
					v24 = *(_QWORD*)(v22 + 1088);
				v25 = v24 == *(_QWORD*)(v22 + 1080);
				v58 = 0;
				*(_QWORD*)(v22 + 1080) = v24;
				if (!v25)
					v58 = 1;
				if (v58)
				{
					v59 = *(_QWORD*)(v22 + 1096);
					*(_BYTE*)(v22 + 1076) = 0;
					*(_DWORD*)(v22 + 1072) = 0;
					*(_QWORD*)(v22 + 1104) = v59;
				}
				goto LABEL_33;
			}
		}
	}
LABEL_103:
	if (v74)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v74 + 8i64))(v74);
		v74 = 0i64;
	}
	if (v76)
		sub_14018B900(v76, 0);
}
// 14051A9F4: variable 'v19' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6BAD0: using guessed type wchar_t aCommoditiesexc[34];
// 140B6BBC0: using guessed type wchar_t aAdvancedconfir_2[28];
// 140B6BC30: using guessed type wchar_t aAdvancedconfir_1[28];
// 140B6BC68: using guessed type wchar_t aCommoditiesexc_0[27];
// 140B6BCA0: using guessed type wchar_t aAdvancedconfir[55];
// 140B6BD10: using guessed type wchar_t aAdvancedconfir_0[54];
// 140B6BD80: using guessed type wchar_t aSimpleconfirmt[25];
// 140B6BDB8: using guessed type wchar_t aSimpleconfirmt_0[26];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC32A8: using guessed type int dword_140DC32A8;
// 140DC32AC: using guessed type int dword_140DC32AC;

