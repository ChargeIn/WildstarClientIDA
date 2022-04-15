#include "../winhttp.h"

//----- (0000000140518C50) ----------------------------------------------------
void __fastcall sub_140518C50(__int64 a1)
{
	char* v2; // r14
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // r15
	__int16* v6; // rax
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // r8
	__int64 v13; // rdx
	unsigned int v14; // edx
	int* v15; // rsi
	int v16; // ecx
	int v17; // ebx
	int v18; // ecx
	int* v19; // rax
	int* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // rcx
	unsigned int* v23; // rdi
	void(__fastcall * **v24)(_QWORD); // rbx
	__int64 v25; // rax
	_DWORD* v26; // rax
	int v27; // edx
	int v28[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v29; // [rsp+3Ch] [rbp-C4h]
	__int64 v30[24]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v31; // [rsp+100h] [rbp+0h]
	int* v32; // [rsp+110h] [rbp+10h]
	__int64 v33; // [rsp+120h] [rbp+20h] BYREF
	int* v34; // [rsp+128h] [rbp+28h]
	int v35; // [rsp+140h] [rbp+40h]
	__int64 v36; // [rsp+420h] [rbp+320h]
	int v37; // [rsp+5B8h] [rbp+4B8h]
	int v38; // [rsp+5C0h] [rbp+4C0h]
	int v39; // [rsp+5C4h] [rbp+4C4h]

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
				v6 = sub_14034BDD0(v4, 612136);
				sub_140514F00(v3, v5, (__int64)v6);
				v7 = *(_QWORD*)(a1 + 16);
				if (v7 != -1i64)
				{
					v8 = *(_QWORD*)(qword_140C635F0 + 5584);
					if (v7 < *(_QWORD*)(v8 + 112))
					{
						v9 = *(_QWORD*)(v8 + 104) + (v7 << 6);
						if (v9)
						{
							v10 = sub_1401E8C20(*(_DWORD*)(v9 + 8));
							v11 = v10;
							if (v10)
							{
								v12 = *(unsigned int*)(v10 + 48);
								if (!(_DWORD)v12
									|| (v13 = *(_QWORD*)(qword_140C65898 + 120)) == 0
									|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
										qword_140C659A0,
										v13,
										v12,
										0i64,
										0i64,
										0))
								{
									v14 = *(_DWORD*)(v11 + 8);
									if (v14)
									{
										v15 = sub_1400B5DF0(qword_140C658F0, v14, 0i64);
										if (v15)
										{
											sub_14040FAE0((__int64)&v33);
											if (v38 <= 6)
											{
												v34 = v15;
												v38 = 6;
											}
											sub_140412AD0((__int64)&v33);
											if (v33 || v38 && v34)
											{
												if (!v37)
												{
												LABEL_20:
													if (v38 && v34)
													{
														v16 = 1;
														v17 = 7;
														if (v34[86] > 1)
															v16 = v34[86];
														if (v16 < 7)
															v17 = v16;
													}
													else
													{
														v17 = 8;
													}
												LABEL_34:
													sub_1400B7210((__int64)v30, (int*)L"$1n");
													v30[0] = (__int64)off_140B69230;
													v32 = 0i64;
													v31 = 0i64;
													v19 = sub_14018B280(16i64, 0);
													*(_QWORD*)&v31 = v19;
													*((_QWORD*)&v31 + 1) = v19;
													v32 = v19 + 4;
													if (v19)
														*(_WORD*)v19 = 0;
													v20 = sub_14018B280(96i64, 0);
													if (v20)
														v21 = (_QWORD*)sub_1404DDAF0((__int64)v20, v15[119]);
													else
														v21 = 0i64;
													sub_1400B7480((__int64)v30, v21);
													v22 = *(_QWORD*)(a1 + 8);
													v23 = (unsigned int*)(v22 + 1872 + 4i64 * v17);
													v24 = *(void(__fastcall****)(_QWORD))(v22 + 16 * (3i64 * v17 + 93));
													v25 = sub_1400B7660(v30);
													sub_140514C10(v5, *(_QWORD*)(v25 + 8), *((__m128i**)v15 + 61), v24, v23, 1u);
													LODWORD(v23) = sub_1400CD4C0(v5, 0);
													v26 = sub_1400CB3D0(v5, v28);
													LODWORD(v24) = v26[3] - v26[1];
													sub_1400CB3D0((__int64)v2, v28);
													v27 = (_DWORD)v23 + v29 - (_DWORD)v24;
													if (v27 < v29)
														v27 = v29;
													v29 = v27;
													sub_1400CC7C0((__int64)v2, v28);
													sub_1400CB690((__int64)v2);
													sub_1400CB960(v2);
													if ((_QWORD)v31)
														sub_14018B900(v31, 0);
													sub_1400B7390(v30);
													if (v33)
													{
														(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
														v33 = 0i64;
													}
													goto LABEL_45;
												}
											}
											else if (!v37)
											{
												if (!v39)
												{
												LABEL_45:
													if (v36)
														sub_14018B900(v36, 0);
													return;
												}
												goto LABEL_20;
											}
											v18 = 1;
											v17 = 7;
											if (v35 > 1)
												v18 = v35;
											if (v18 < 7)
												v17 = v18;
											goto LABEL_34;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140518D25: variable 'v4' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140518C50: using guessed type int var_5E0[3];

