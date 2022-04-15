#include "../winhttp.h"

//----- (0000000140517AC0) ----------------------------------------------------
void __fastcall sub_140517AC0(__int64 a1)
{
	char* v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // r13
	__int16* v6; // rax
	int* v7; // rbx
	__int64 v8; // rcx
	__int16* v9; // rax
	int* v10; // rbx
	__int64 v11; // rcx
	__int16* v12; // rax
	int* v13; // rbx
	__int64 v14; // rcx
	__int16* v15; // rax
	__int64 v16; // rcx
	_QWORD* v17; // rax
	__int64 v18; // rbx
	__int16* v19; // rax
	unsigned int v20; // r12d
	__int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // r15
	__int64 v24; // rdi
	int* v25; // rax
	int* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // rcx
	unsigned int v29; // esi
	__int64 v30; // rax
	unsigned int* v31; // rdi
	void(__fastcall * **v32)(_QWORD); // rbx
	__int64 v33; // rax
	__int64 v34; // rax
	int v35; // edx
	__int16* v36; // rax
	int v37; // edi
	_DWORD* v38; // rax
	int v39; // ebx
	int v40; // edx
	__int64 v41; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v42; // [rsp+38h] [rbp-C8h]
	__int64 v43; // [rsp+40h] [rbp-C0h]
	__int64 v44[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v45; // [rsp+110h] [rbp+10h]
	int* v46; // [rsp+120h] [rbp+20h]
	char* v47; // [rsp+160h] [rbp+60h]

	v2 = (char*)sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"TooltipBase",
		0i64,
		0i64,
		-2);
	v47 = v2;
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v2);
	if (!v2)
		return;
	v3 = sub_1400D3830((__int64)(v2 + 552), L"ActionConfirm_LabelML");
	if (!v3)
		return;
	v5 = sub_1400D3830((__int64)(v2 + 552), L"Container");
	if (!v5)
		return;
	v6 = sub_14034BDD0(v4, 627550);
	sub_140514F00(v3, v5, (__int64)v6);
	v7 = *(int**)(a1 + 24);
	v9 = sub_14034BDD0(v8, 134860);
	sub_140514840(v5, (__int64)v9, v7);
	v10 = *(int**)(a1 + 88);
	v12 = sub_14034BDD0(v11, 134816);
	sub_140514840(v5, (__int64)v12, v10);
	v13 = *(int**)(a1 + 120);
	v15 = sub_14034BDD0(v14, 134631);
	sub_140514840(v5, (__int64)v15, v13);
	if (*(_QWORD*)(a1 + 152))
	{
		v17 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"HeaderLine",
			0i64,
			v5,
			-2);
		if (!v17)
			return;
		v18 = sub_1400D3830((__int64)(v17 + 69), L"Header");
		if (v18)
		{
			v19 = sub_14034BDD0(v16, 134437);
			(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)v18 + 80i64))(v18, v19);
		}
		v20 = 0;
		if (*(_QWORD*)(a1 + 152))
		{
			v16 = 0i64;
			do
			{
				v21 = sub_1403AC780(qword_140C65898 + 160, (int*)(*(_QWORD*)(a1 + 144) + 8 * v16));
				v22 = v21;
				if (v21)
				{
					v23 = *(_QWORD*)(v21 + 64);
					if (v23)
					{
						v24 = (int)sub_1405150D0(v21);
						sub_1400B7210((__int64)v44, (int*)L"$1n");
						v45 = 0i64;
						v44[0] = (__int64)off_140B69230;
						v46 = 0i64;
						v25 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v45 = v25;
						*((_QWORD*)&v45 + 1) = v25;
						v46 = v25 + 4;
						if (v25)
							*(_WORD*)v25 = 0;
						v26 = sub_14018B280(96i64, 0);
						if (v26)
							v27 = (_QWORD*)sub_1404DDAF0((__int64)v26, *(_DWORD*)(v23 + 476));
						else
							v27 = 0i64;
						sub_1400B7480((__int64)v44, v27);
						v28 = *(_QWORD*)(a1 + 8);
						v29 = 1;
						if (*(_DWORD*)(v22 + 120))
							v29 = *(_DWORD*)(v22 + 120);
						v30 = v24;
						v31 = (unsigned int*)(v28 + 1872 + 4 * v24);
						v32 = *(void(__fastcall****)(_QWORD))(v28 + 16 * (3 * v30 + 93));
						v33 = sub_1400B7660(v44);
						sub_140514C10(v5, *(_QWORD*)(v33 + 8), *(__m128i**)(v23 + 488), v32, v31, v29);
						if ((_QWORD)v45)
							sub_14018B900(v45, 0);
						sub_1400B7390(v44);
					}
				}
				v16 = ++v20;
			} while ((unsigned __int64)v20 < *(_QWORD*)(a1 + 152));
			v2 = v47;
		}
	}
	v34 = *(_QWORD*)(a1 + 176);
	if (v34)
	{
		v35 = 408234;
	LABEL_28:
		v43 = 0i64;
		v42 = 1i64;
		v41 = v34;
		v36 = sub_14034BDD0(v16, v35);
		sub_140514AB0(v5, (__int64)v36, &v41);
		goto LABEL_29;
	}
	v34 = *(_QWORD*)(a1 + 168);
	if (v34)
	{
		v35 = 134769;
		goto LABEL_28;
	}
LABEL_29:
	v37 = sub_1400CD4C0(v5, 0);
	v38 = sub_1400CB3D0(v5, &v41);
	v39 = v38[3] - v38[1];
	sub_1400CB3D0((__int64)v2, &v41);
	v40 = v37 + HIDWORD(v42) - v39;
	if (v40 < SHIDWORD(v42))
		v40 = HIDWORD(v42);
	HIDWORD(v42) = v40;
	sub_1400CC7C0((__int64)v2, (int*)&v41);
	sub_1400CB690((__int64)v2);
	sub_1400CB960(v2);
}
// 140517B83: variable 'v4' is possibly undefined
// 140517B9F: variable 'v8' is possibly undefined
// 140517BBB: variable 'v11' is possibly undefined
// 140517BD7: variable 'v14' is possibly undefined
// 140517C60: variable 'v16' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140B6BA90: using guessed type wchar_t aHeaderline_0[11];
// 140B6BAA8: using guessed type wchar_t aHeader_1[7];
// 140C65898: using guessed type __int64 qword_140C65898;

