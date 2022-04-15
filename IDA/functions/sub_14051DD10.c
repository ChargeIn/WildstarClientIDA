#include "../winhttp.h"

//----- (000000014051DD10) ----------------------------------------------------
void __fastcall sub_14051DD10(__int64 a1)
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
	__int64 v25; // r10
	char v26; // r9
	__int64 v27; // rdx
	__int64 v28; // rax
	unsigned int v29; // ecx
	unsigned int v30; // r8d
	int v31; // eax
	__int64 v32; // rdi
	__int64 v33; // rcx
	__int64 v34; // rcx
	int v35; // esi
	int* v36; // rax
	int v37; // eax
	__int64 v38; // r8
	_QWORD* v39; // rax
	unsigned int v40; // ebx
	__m128i* v41; // rax
	__int64 v42; // r10
	__int16* v43; // rax
	int* v44; // rax
	int v45; // eax
	__int64 v46; // r8
	_QWORD* v47; // rax
	unsigned int v48; // ebx
	__m128i* v49; // rax
	__int64 v50; // r10
	int* v51; // rax
	unsigned int* v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rax
	int v55; // edi
	_DWORD* v56; // rax
	char* v57; // rsi
	int v58; // ebx
	int v59; // edx
	__int64 v60; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v61; // [rsp+38h] [rbp-C8h]
	__int64 v62; // [rsp+40h] [rbp-C0h]
	__int64 v63[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v64; // [rsp+110h] [rbp+10h]
	int* v65; // [rsp+120h] [rbp+20h]
	__int64 v66[24]; // [rsp+130h] [rbp+30h] BYREF
	__int128 v67; // [rsp+1F0h] [rbp+F0h]
	int* v68; // [rsp+200h] [rbp+100h]
	__int64 v69[24]; // [rsp+210h] [rbp+110h] BYREF
	__int128 v70; // [rsp+2D0h] [rbp+1D0h]
	int* v71; // [rsp+2E0h] [rbp+1E0h]
	__int64 v72; // [rsp+330h] [rbp+230h] BYREF
	char* v73; // [rsp+338h] [rbp+238h]

	v72 = a1;
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
			v73 = v5;
			(*(void(__fastcall**)(__int64*, char*))(v8 + 520))(v6, v5);
			if (v7)
			{
				v9 = sub_1400D3830((__int64)(v7 + 552), L"ActionConfirm_LabelML");
				if (v9)
				{
					v11 = sub_1400D3830((__int64)(v7 + 552), L"Container");
					if (v11)
					{
						v12 = sub_14034BDD0(v10, 641067);
						sub_140514F00(v9, v11, (__int64)v12);
						v13 = (int)sub_1405150D0(v3);
						sub_1400B7210((__int64)v66, (int*)L"$1n");
						v67 = 0i64;
						v66[0] = (__int64)off_140B69230;
						v68 = 0i64;
						v14 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v67 = v14;
						*((_QWORD*)&v67 + 1) = v14;
						v68 = v14 + 4;
						if (v14)
							*(_WORD*)v14 = 0;
						v15 = sub_14018B280(96i64, 0);
						if (v15)
							v16 = (_QWORD*)sub_1404DDAF0((__int64)v15, *(_DWORD*)(*(_QWORD*)(v3 + 64) + 476i64));
						else
							v16 = 0i64;
						sub_1400B7480((__int64)v66, v16);
						v17 = *(_QWORD*)(a1 + 8);
						v18 = *(_QWORD*)(v3 + 64);
						v19 = (unsigned int*)(v17 + 1872 + 4 * v13);
						v20 = 1;
						if (*(_DWORD*)(v3 + 120))
							v20 = *(_DWORD*)(v3 + 120);
						v21 = *(void(__fastcall****)(_QWORD))(v17 + 48 * (v13 + 31));
						v22 = sub_1400B7660(v66);
						sub_140514C10(v11, *(_QWORD*)(v22 + 8), *(__m128i**)(v18 + 488), v21, v19, v20);
						v24 = sub_14034BDD0(v23, 641160);
						sub_1405147C0(v11, (__int64)v24);
						v25 = *(_QWORD*)(v3 + 96);
						v26 = 0;
						if (!v25)
							goto LABEL_26;
						v27 = *(_QWORD*)(v3 + 72);
						if (v27)
							v28 = *(_QWORD*)(v3 + 72);
						else
							v28 = *(_QWORD*)(v3 + 64) + 8i64;
						v29 = *(_DWORD*)(v28 + 304);
						v30 = 8;
						v31 = 8;
						if (v29 < 8)
							v31 = v29;
						if (v31)
						{
							if (!v27)
								v27 = *(_QWORD*)(v3 + 64) + 8i64;
							v32 = v72;
							v33 = *(unsigned int*)(v72 + 24);
							if (*(_DWORD*)(v27 + 304) < 8u)
								v30 = *(_DWORD*)(v27 + 304);
							if (v30 > (unsigned int)v33)
								v26 = *(_BYTE*)(v33 + v25);
						}
						else
						{
						LABEL_26:
							v32 = v72;
						}
						v35 = sub_140514660(v26);
						if (v35)
						{
							sub_1400B7210((__int64)v63, (int*)L"$1n");
							v63[0] = (__int64)off_140B69230;
							v65 = 0i64;
							v64 = 0i64;
							v36 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v64 = v36;
							*((_QWORD*)&v64 + 1) = v36;
							v65 = v36 + 4;
							if (v36)
								*(_WORD*)v36 = 0;
							if (sub_14018B280(96i64, 0))
							{
								v37 = sub_140514750(v35);
								v39 = (_QWORD*)sub_1404DDAF0(v38, v37);
							}
							else
							{
								v39 = 0i64;
							}
							sub_1400B7480((__int64)v63, v39);
							v40 = 1;
							if (*(_DWORD*)(v3 + 120))
								v40 = *(_DWORD*)(v3 + 120);
							LODWORD(v72) = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
							sub_1400B7660(v63);
							v41 = (__m128i*)sub_1405146D0(v35);
							sub_140514C10(v11, *(_QWORD*)(v42 + 8), v41, 0i64, (unsigned int*)&v72, v40);
							sub_1401429A0(qword_140C63678, v72);
							if ((_QWORD)v64)
								sub_14018B900(v64, 0);
							sub_1400B7390(v63);
						}
						v43 = sub_14034BDD0(v34, 641080);
						sub_1405147C0(v11, (__int64)v43);
						sub_1400B7210((__int64)v63, (int*)L"$1n");
						v63[0] = (__int64)off_140B69230;
						v65 = 0i64;
						v64 = 0i64;
						v44 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v64 = v44;
						*((_QWORD*)&v64 + 1) = v44;
						v65 = v44 + 4;
						if (v44)
							*(_WORD*)v44 = 0;
						if (sub_14018B280(96i64, 0))
						{
							v45 = sub_140514750(*(_DWORD*)(v32 + 28));
							v47 = (_QWORD*)sub_1404DDAF0(v46, v45);
						}
						else
						{
							v47 = 0i64;
						}
						sub_1400B7480((__int64)v63, v47);
						v48 = 1;
						if (*(_DWORD*)(v3 + 120))
							v48 = *(_DWORD*)(v3 + 120);
						LODWORD(v72) = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
						sub_1400B7660(v63);
						v49 = (__m128i*)sub_1405146D0(*(_DWORD*)(v32 + 28));
						sub_140514C10(v11, *(_QWORD*)(v50 + 8), v49, 0i64, (unsigned int*)&v72, v48);
						sub_1401429A0(qword_140C63678, v72);
						if ((_QWORD)v64)
							sub_14018B900(v64, 0);
						sub_1400B7390(v63);
						sub_1400B7090((__int64)v69, 719507);
						v69[0] = (__int64)off_140B69230;
						v71 = 0i64;
						v70 = 0i64;
						v51 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v70 = v51;
						*((_QWORD*)&v70 + 1) = v51;
						v71 = v51 + 4;
						if (v51)
							*(_WORD*)v51 = 0;
						v52 = *(unsigned int**)(v3 + 72);
						v60 = 0i64;
						v61 = 1i64;
						v62 = 0i64;
						if (v52)
							v53 = (__int64)v52;
						else
							v53 = *(_QWORD*)(v3 + 64) + 8i64;
						if (v53)
						{
							if (!v52)
								v52 = (unsigned int*)(*(_QWORD*)(v3 + 64) + 8i64);
							LOBYTE(v4) = *(_DWORD*)(v32 + 28) != 0;
							if ((unsigned int)sub_140514170(v52, &v60, v4))
							{
								v54 = sub_1400B7660(v69);
								sub_140514AB0(v11, *(_QWORD*)(v54 + 8), &v60);
							}
						}
						v55 = sub_1400CD4C0(v11, 0);
						v56 = sub_1400CB3D0(v11, &v60);
						v57 = v73;
						v58 = v56[3] - v56[1];
						sub_1400CB3D0((__int64)v73, &v60);
						v59 = v55 + HIDWORD(v61) - v58;
						if (v59 < SHIDWORD(v61))
							v59 = HIDWORD(v61);
						HIDWORD(v61) = v59;
						sub_1400CC7C0((__int64)v57, (int*)&v60);
						sub_1400CB690((__int64)v57);
						sub_1400CB960(v57);
						if ((_QWORD)v70)
							sub_14018B900(v70, 0);
						sub_1400B7390(v69);
						if ((_QWORD)v67)
							sub_14018B900(v67, 0);
						sub_1400B7390(v66);
					}
				}
			}
		}
	}
}
// 14051DE27: variable 'v10' is possibly undefined
// 14051DF30: variable 'v23' is possibly undefined
// 14051E02D: variable 'v38' is possibly undefined
// 14051E07F: variable 'v42' is possibly undefined
// 14051E0DB: variable 'v34' is possibly undefined
// 14051E14F: variable 'v46' is possibly undefined
// 14051E1A2: variable 'v50' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140B6BA40: using guessed type wchar_t aUiTextholobody[16];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

