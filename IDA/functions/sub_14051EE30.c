#include "../winhttp.h"

//----- (000000014051EE30) ----------------------------------------------------
void __fastcall sub_14051EE30(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // r13
	int v4; // r15d
	char* v5; // rax
	__int64* v6; // rcx
	char* v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rsi
	__int64 v10; // rcx
	__int64 v11; // r12
	__int16* v12; // rax
	__int64 v13; // rdi
	int* v14; // rax
	int* v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rbx
	unsigned int* v19; // rsi
	unsigned int v20; // r14d
	void(__fastcall * **v21)(_QWORD); // rdi
	__int64 v22; // rax
	__int64 v23; // rcx
	__int16* v24; // rax
	int* v25; // rax
	int* v26; // rax
	__int64 v27; // rdi
	int v28; // eax
	__int64 v29; // r8
	_QWORD* v30; // rax
	unsigned int v31; // ebx
	__m128i* v32; // rax
	__int64 v33; // r10
	int* v34; // rax
	unsigned int* v35; // rcx
	__int64 v36; // rax
	__int64 v37; // rax
	int v38; // edi
	_DWORD* v39; // rax
	char* v40; // rsi
	int v41; // ebx
	int v42; // edx
	__int64 v43; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v44; // [rsp+38h] [rbp-C8h]
	__int64 v45; // [rsp+40h] [rbp-C0h]
	__int64 v46[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v47; // [rsp+110h] [rbp+10h]
	int* v48; // [rsp+120h] [rbp+20h]
	__int64 v49[24]; // [rsp+130h] [rbp+30h] BYREF
	__int128 v50; // [rsp+1F0h] [rbp+F0h]
	int* v51; // [rsp+200h] [rbp+100h]
	__int64 v52; // [rsp+250h] [rbp+150h] BYREF
	char* v53; // [rsp+258h] [rbp+158h]

	v52 = a1;
	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v3)
		{
			v4 = 0;
			v5 = (char*)sub_1400F52E0(
				*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
				(__m128i*)L"UI\\ActionConfirmButton.xml",
				(int*)L"TooltipBase",
				0i64,
				0i64,
				-2);
			v6 = *(__int64**)(a1 + 8);
			v7 = v5;
			v8 = *v6;
			v53 = v5;
			(*(void(__fastcall**)(__int64*, char*))(v8 + 520))(v6, v5);
			if (v7)
			{
				v9 = sub_1400D3830((__int64)(v7 + 552), L"ActionConfirm_LabelML");
				if (v9)
				{
					v11 = sub_1400D3830((__int64)(v7 + 552), L"Container");
					if (v11)
					{
						v12 = sub_14034BDD0(v10, 719801);
						sub_140514F00(v9, v11, (__int64)v12);
						v13 = (int)sub_1405150D0(v3);
						sub_1400B7210((__int64)v46, (int*)L"$1n");
						v47 = 0i64;
						v46[0] = (__int64)off_140B69230;
						v48 = 0i64;
						v14 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v47 = v14;
						*((_QWORD*)&v47 + 1) = v14;
						v48 = v14 + 4;
						if (v14)
							*(_WORD*)v14 = 0;
						v15 = sub_14018B280(96i64, 0);
						if (v15)
							v16 = (_QWORD*)sub_1404DDAF0((__int64)v15, *(_DWORD*)(*(_QWORD*)(v3 + 64) + 476i64));
						else
							v16 = 0i64;
						sub_1400B7480((__int64)v46, v16);
						v17 = *(_QWORD*)(a1 + 8);
						v18 = *(_QWORD*)(v3 + 64);
						v19 = (unsigned int*)(v17 + 1872 + 4 * v13);
						v20 = 1;
						if (*(_DWORD*)(v3 + 120))
							v20 = *(_DWORD*)(v3 + 120);
						v21 = *(void(__fastcall****)(_QWORD))(v17 + 48 * (v13 + 31));
						v22 = sub_1400B7660(v46);
						sub_140514C10(v11, *(_QWORD*)(v22 + 8), *(__m128i**)(v18 + 488), v21, v19, v20);
						if ((_QWORD)v47)
							sub_14018B900(v47, 0);
						sub_1400B7390(v46);
						v24 = sub_14034BDD0(v23, 719800);
						sub_1405147C0(v11, (__int64)v24);
						sub_1400B7210((__int64)v46, (int*)L"$1n");
						v46[0] = (__int64)off_140B69230;
						v48 = 0i64;
						v47 = 0i64;
						v25 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v47 = v25;
						*((_QWORD*)&v47 + 1) = v25;
						v48 = v25 + 4;
						if (v25)
							*(_WORD*)v25 = 0;
						v26 = sub_14018B280(96i64, 0);
						v27 = v52;
						if (v26)
						{
							v28 = sub_140514750(*(_DWORD*)(v52 + 24));
							v30 = (_QWORD*)sub_1404DDAF0(v29, v28);
						}
						else
						{
							v30 = 0i64;
						}
						sub_1400B7480((__int64)v46, v30);
						v31 = 1;
						if (*(_DWORD*)(v3 + 120))
							v31 = *(_DWORD*)(v3 + 120);
						LODWORD(v52) = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
						sub_1400B7660(v46);
						v32 = (__m128i*)sub_1405146D0(*(_DWORD*)(v27 + 24));
						sub_140514C10(v11, *(_QWORD*)(v33 + 8), v32, 0i64, (unsigned int*)&v52, v31);
						sub_1401429A0(qword_140C63678, v52);
						if ((_QWORD)v47)
							sub_14018B900(v47, 0);
						sub_1400B7390(v46);
						sub_1400B7090((__int64)v49, 719507);
						v49[0] = (__int64)off_140B69230;
						v51 = 0i64;
						v50 = 0i64;
						v34 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v50 = v34;
						*((_QWORD*)&v50 + 1) = v34;
						v51 = v34 + 4;
						if (v34)
							*(_WORD*)v34 = 0;
						v35 = *(unsigned int**)(v3 + 72);
						v43 = 0i64;
						v44 = 1i64;
						v45 = 0i64;
						if (v35)
							v36 = (__int64)v35;
						else
							v36 = *(_QWORD*)(v3 + 64) + 8i64;
						if (v36)
						{
							if (!v35)
								v35 = (unsigned int*)(*(_QWORD*)(v3 + 64) + 8i64);
							LOBYTE(v4) = *(_DWORD*)(v27 + 24) != 0;
							if ((unsigned int)sub_140513F30(v35, &v43, v4))
							{
								v37 = sub_1400B7660(v49);
								sub_140514AB0(v11, *(_QWORD*)(v37 + 8), &v43);
							}
						}
						v38 = sub_1400CD4C0(v11, 0);
						v39 = sub_1400CB3D0(v11, &v43);
						v40 = v53;
						v41 = v39[3] - v39[1];
						sub_1400CB3D0((__int64)v53, &v43);
						v42 = v38 + HIDWORD(v44) - v41;
						if (v42 < SHIDWORD(v44))
							v42 = HIDWORD(v44);
						HIDWORD(v44) = v42;
						sub_1400CC7C0((__int64)v40, (int*)&v43);
						sub_1400CB690((__int64)v40);
						sub_1400CB960(v40);
						if ((_QWORD)v50)
							sub_14018B900(v50, 0);
						sub_1400B7390(v49);
					}
				}
			}
		}
	}
}
// 14051EF47: variable 'v10' is possibly undefined
// 14051F067: variable 'v23' is possibly undefined
// 14051F0E9: variable 'v29' is possibly undefined
// 14051F13C: variable 'v33' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140B6BA40: using guessed type wchar_t aUiTextholobody[16];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

