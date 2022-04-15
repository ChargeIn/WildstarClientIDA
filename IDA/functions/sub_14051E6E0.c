#include "../winhttp.h"

//----- (000000014051E6E0) ----------------------------------------------------
void __fastcall sub_14051E6E0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // r13
	char* v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // r12
	int v8; // edx
	__int16* v9; // rax
	int* v10; // rax
	int* v11; // rax
	_QWORD* v12; // rax
	int v13; // eax
	__int64 v14; // rbx
	unsigned int v15; // r14d
	__int64 v16; // rcx
	unsigned int* v17; // rsi
	void(__fastcall * **v18)(_QWORD); // rdi
	__int64 v19; // rax
	__int64 v20; // rax
	unsigned int v21; // edx
	int* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rsi
	__int64 v25; // rbx
	__int16* v26; // rax
	int* v27; // rax
	int* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rcx
	unsigned int* v31; // rdi
	void(__fastcall * **v32)(_QWORD); // rbx
	__int64 v33; // rax
	int* v34; // rax
	unsigned int* v35; // rcx
	__int64 v36; // rdx
	__int64 v37; // rax
	int v38; // edi
	_DWORD* v39; // rax
	int v40; // ebx
	int v41; // edx
	__int64 v42; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v43; // [rsp+38h] [rbp-C8h]
	__int64 v44; // [rsp+40h] [rbp-C0h]
	__int64 v45[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v46; // [rsp+110h] [rbp+10h]
	int* v47; // [rsp+120h] [rbp+20h]
	__int64 v48[24]; // [rsp+130h] [rbp+30h] BYREF
	__int128 v49; // [rsp+1F0h] [rbp+F0h]
	int* v50; // [rsp+200h] [rbp+100h]
	char* v51; // [rsp+240h] [rbp+140h]

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v3)
		{
			v4 = (char*)sub_1400F52E0(
				*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
				(__m128i*)L"UI\\ActionConfirmButton.xml",
				(int*)L"TooltipBase",
				0i64,
				0i64,
				-2);
			v51 = v4;
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v4);
			if (v4)
			{
				v5 = sub_1400D3830((__int64)(v4 + 552), L"ActionConfirm_LabelML");
				if (v5)
				{
					v7 = sub_1400D3830((__int64)(v4 + 552), L"Container");
					if (v7)
					{
						v8 = 719798;
						if (!*(_DWORD*)(a1 + 28))
							v8 = 719826;
						v9 = sub_14034BDD0(v6, v8);
						sub_140514F00(v5, v7, (__int64)v9);
						sub_1400B7210((__int64)v45, (int*)L"$1n");
						v45[0] = (__int64)off_140B69230;
						v47 = 0i64;
						v46 = 0i64;
						v10 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v46 = v10;
						*((_QWORD*)&v46 + 1) = v10;
						v47 = v10 + 4;
						if (v10)
							*(_WORD*)v10 = 0;
						v11 = sub_14018B280(96i64, 0);
						if (v11)
							v12 = (_QWORD*)sub_1404DDAF0((__int64)v11, *(_DWORD*)(*(_QWORD*)(v3 + 64) + 476i64));
						else
							v12 = 0i64;
						sub_1400B7480((__int64)v45, v12);
						v13 = sub_1405150D0(v3);
						v14 = *(_QWORD*)(v3 + 64);
						v15 = 1;
						if (*(_DWORD*)(v3 + 120))
							v15 = *(_DWORD*)(v3 + 120);
						v16 = *(_QWORD*)(a1 + 8);
						v17 = (unsigned int*)(v16 + 1872 + 4i64 * v13);
						v18 = *(void(__fastcall****)(_QWORD))(v16 + 16 * (3i64 * v13 + 93));
						v19 = sub_1400B7660(v45);
						sub_140514C10(v7, *(_QWORD*)(v19 + 8), *(__m128i**)(v14 + 488), v18, v17, v15);
						if ((_QWORD)v46)
							sub_14018B900(v46, 0);
						sub_1400B7390(v45);
						v20 = *(unsigned int*)(a1 + 24);
						if ((unsigned int)v20 >= 8)
							v21 = 0;
						else
							v21 = *(_DWORD*)(v3 + 4 * v20 + 188);
						v22 = sub_1400B5DF0(qword_140C658F0, v21, 0i64);
						v24 = (__int64)v22;
						if (v22)
						{
							v25 = v22[2];
							v26 = sub_14034BDD0(v23, 719799);
							sub_1405147C0(v7, (__int64)v26);
							sub_1400B7210((__int64)v48, (int*)L"$1n");
							v48[0] = (__int64)off_140B69230;
							v50 = 0i64;
							v49 = 0i64;
							v27 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v49 = v27;
							*((_QWORD*)&v49 + 1) = v27;
							v50 = v27 + 4;
							if (v27)
								*(_WORD*)v27 = 0;
							v28 = sub_14018B280(96i64, 0);
							if (v28)
								v29 = (_QWORD*)sub_1404DDAF0((__int64)v28, *(_DWORD*)(v24 + 476));
							else
								v29 = 0i64;
							sub_1400B7480((__int64)v48, v29);
							v30 = *(_QWORD*)(a1 + 8);
							v31 = (unsigned int*)(v30 + 1872 + 4 * v25);
							v32 = *(void(__fastcall****)(_QWORD))(v30 + 48 * (v25 + 31));
							v33 = sub_1400B7660(v48);
							sub_140514C10(v7, *(_QWORD*)(v33 + 8), *(__m128i**)(v24 + 488), v32, v31, 1u);
							sub_1400B7090((__int64)v45, 719507);
							v45[0] = (__int64)off_140B69230;
							v47 = 0i64;
							v46 = 0i64;
							v34 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v46 = v34;
							*((_QWORD*)&v46 + 1) = v34;
							v47 = v34 + 4;
							if (v34)
							{
								*(_WORD*)v34 = 0;
								v34 = (int*)v46;
							}
							v35 = *(unsigned int**)(v3 + 72);
							v42 = 0i64;
							v43 = 1i64;
							v44 = 0i64;
							if (v35)
								v36 = (__int64)v35;
							else
								v36 = *(_QWORD*)(v3 + 64) + 8i64;
							if (v36)
							{
								if (!v35)
									v35 = (unsigned int*)(*(_QWORD*)(v3 + 64) + 8i64);
								if ((unsigned int)sub_1405143C0(v35, &v42, v24, *(_DWORD*)(a1 + 28), *(_DWORD*)(a1 + 32)))
								{
									v37 = sub_1400B7660(v45);
									sub_140514AB0(v7, *(_QWORD*)(v37 + 8), &v42);
								}
								v34 = (int*)v46;
							}
							if (v34)
								sub_14018B900((__int64)v34, 0);
							sub_1400B7390(v45);
							if ((_QWORD)v49)
								sub_14018B900(v49, 0);
							sub_1400B7390(v48);
						}
						v38 = sub_1400CD4C0(v7, 0);
						v39 = sub_1400CB3D0(v7, &v42);
						v40 = v39[3] - v39[1];
						sub_1400CB3D0((__int64)v51, &v42);
						v41 = v38 + HIDWORD(v43) - v40;
						if (v41 < SHIDWORD(v43))
							v41 = HIDWORD(v43);
						HIDWORD(v43) = v41;
						sub_1400CC7C0((__int64)v51, (int*)&v42);
						sub_1400CB690((__int64)v51);
						sub_1400CB960(v51);
					}
				}
			}
		}
	}
}
// 14051E7FE: variable 'v6' is possibly undefined
// 14051E94C: variable 'v23' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

