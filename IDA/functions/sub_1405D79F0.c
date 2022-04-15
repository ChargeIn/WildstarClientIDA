//----- (00000001405D79F0) ----------------------------------------------------
void __fastcall sub_1405D79F0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rdi
	__int64 v4; // rsi
	int v5; // r15d
	__int64 v6; // r14
	__int64 v7; // r13
	_QWORD* v8; // r12
	__int64 v9; // rax
	unsigned int v10; // ecx
	__int64 v11; // r14
	__int64 v12; // r15
	int* v13; // rdi
	__int64 v14; // rax
	int* v15; // r14
	int v16; // esi
	int* v17; // rax
	int* v18; // rbx
	int v19; // edx
	__int64 v20; // rcx
	__int64 v21; // rax
	int v22; // r10d
	int v23; // ebx
	unsigned __int64 v24; // r9
	unsigned __int64 v25; // r8
	_DWORD* v26; // rax
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int64 v29; // rdx
	int v30; // eax
	__int128 v31; // xmm0
	__int64 v32; // rax
	int v33; // ecx
	__int64 v34; // rax
	int v35; // eax
	__int64 v36; // rcx
	__int16* v37; // rax
	int* v38; // rsi
	__int64 v39; // rcx
	int* v40; // rax
	__int64 v41; // rax
	int* v42; // r14
	__int64 v43; // r15
	int* v44; // rax
	__int64 v45; // rax
	__int64 v46; // rax
	int* v47; // rdx
	bool v48; // zf
	__int64 v49; // rcx
	int v50; // eax
	int v51; // eax
	int v52; // edx
	int v53; // ecx
	unsigned __int64 v54; // rax
	__int64 v55; // r8
	float v56; // xmm6_4
	__int64 v57; // rcx
	float v58; // xmm6_4
	__int64 v59; // rax
	float v60; // xmm0_4
	unsigned int* v61; // rax
	unsigned int* v62; // rbx
	unsigned __int64 v63; // rax
	_WORD* v64; // rdi
	__int64 v65; // rdx
	__int64 v66; // rcx
	unsigned int v67; // eax
	unsigned int* v68; // rbx
	__int64 v69; // rdi
	__int64 v70; // rax
	__int64 v71; // [rsp+30h] [rbp-D0h]
	char v72[8]; // [rsp+38h] [rbp-C8h] BYREF
	int* v73; // [rsp+40h] [rbp-C0h]
	int* v74; // [rsp+48h] [rbp-B8h]
	__int64 v75; // [rsp+50h] [rbp-B0h]
	__int64 v76; // [rsp+60h] [rbp-A0h] BYREF
	int v77[2]; // [rsp+68h] [rbp-98h] BYREF
	__int128 v78; // [rsp+70h] [rbp-90h]
	__int128 v79; // [rsp+80h] [rbp-80h]
	__int128 v80; // [rsp+90h] [rbp-70h]
	__int64 v81; // [rsp+A0h] [rbp-60h]
	int v82; // [rsp+A8h] [rbp-58h]
	int v83; // [rsp+ACh] [rbp-54h]
	__int64 v84; // [rsp+B0h] [rbp-50h]
	BOOL v85; // [rsp+B8h] [rbp-48h]
	__int64 v86; // [rsp+BCh] [rbp-44h]
	int v87; // [rsp+F8h] [rbp-8h]
	_WORD* v88; // [rsp+100h] [rbp+0h]
	__int64 v89; // [rsp+120h] [rbp+20h]
	__int64 v93; // [rsp+1B8h] [rbp+B8h]
	unsigned int v94; // [rsp+1B8h] [rbp+B8h]

	v3 = a2;
	v4 = a1;
	v5 = a3;
	v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 88));
	v71 = v6;
	v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 92));
	if (!v7)
		return;
	v8 = 0i64;
	if (!*(_DWORD*)(v3 + 28))
		goto LABEL_24;
	if (!v6)
		goto LABEL_24;
	v9 = *(_QWORD*)(v6 + 24);
	if (!v9)
		goto LABEL_24;
	v10 = *(_DWORD*)(v9 + 220);
	if (!v10 || *(_DWORD*)(v6 + 592) || *(_DWORD*)(v6 + 596))
		goto LABEL_24;
	v11 = sub_1401F7E60(v10);
	if (v11)
	{
		v12 = 0i64;
		v13 = 0i64;
		if (sub_1401AE760(0.0, 100.0) <= *(float*)(v11 + 60))
		{
			v14 = 4i64;
			v15 = (int*)(v11 + 44);
			v93 = 4i64;
			do
			{
				v16 = *v15;
				if (*v15)
				{
					v17 = sub_14018DB00((__int64)v13, v12 + 1, 4i64);
					v17[v12] = v16;
					v18 = v17;
					if (v13 != v17)
					{
						sub_1407DB590(v17, v13, 4 * v12);
						if (v13)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
						v13 = v18;
					}
					v14 = v93;
					++v12;
				}
				++v15;
				v93 = --v14;
			} while (v14);
			if ((_DWORD)v12)
			{
				v94 = v13[(unsigned int)sub_1401AE6F0(0, (int)v12 - 1)];
				v37 = sub_14034BDD0(v36, v94);
				v38 = (int*)v37;
				if (v37)
				{
					v39 = 0i64;
					if (*v37)
					{
						do
							++v39;
						while (v37[v39]);
						if (v39)
						{
							sub_1404DDE90(&v76);
							v40 = sub_14018B280(96i64, 0);
							if (v40)
								v8 = (_QWORD*)sub_1404DB7E0((__int64)v40, v71);
							v41 = 0i64;
							v42 = 0i64;
							v73 = 0i64;
							v74 = 0i64;
							v75 = 0i64;
							do
								++v41;
							while (word_140B0A7C8[v41]);
							v43 = (2 * v41) >> 1;
							if ((unsigned __int64)(v43 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							{
								v42 = sub_14018B280(2 * (v43 + 1), 0);
								v73 = v42;
								v74 = v42;
								v75 = (__int64)v42 + 2 * v43 + 2;
							}
							sub_1407DB590(v42, (int*)word_140B0A7C8, 2 * v43);
							v44 = (int*)((char*)v42 + 2 * v43);
							v74 = v44;
							if (v44)
								*(_WORD*)v44 = 0;
							sub_1400B7480((__int64)&v76, v8);
							(*(void(__fastcall**)(_QWORD*, char*))(*v8 + 72i64))(v8, v72);
							if (v73)
								sub_14018B900((__int64)v73, 0);
							v45 = 0i64;
							if (*(_WORD*)v38)
							{
								do
									++v45;
								while (*((_WORD*)v38 + v45));
							}
							sub_14001C480((__int64)v77, v38, (int*)((char*)v38 + 2 * v45));
							v46 = sub_1400B7660(&v76);
							v6 = v71;
							sub_140475EF0(v71, *(int**)(v46 + 8), 1, 0.0);
							sub_140472ED0(v71, v94);
							if (v89)
								sub_14018B900(v89, 0);
							sub_1400B7390(&v76);
							if (v13)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
							v4 = a1;
							v3 = a2;
							v5 = a3;
							goto LABEL_24;
						}
					}
				}
			}
			if (v13)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
			v4 = a1;
		}
		v5 = a3;
		v3 = a2;
	}
	v6 = v71;
LABEL_24:
	v19 = *(_DWORD*)(v4 + 88);
	v20 = *(_QWORD*)(qword_140C65898 + 120);
	if (v20 && *(_DWORD*)(v20 + 8) == v19)
		goto LABEL_38;
	v21 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v21)
	{
		if (*(_DWORD*)(v21 + 8) == v19)
			goto LABEL_38;
	}
	v22 = *(_DWORD*)(v4 + 92);
	if (v20)
	{
		if (*(_DWORD*)(v20 + 8) == v22)
			goto LABEL_38;
	}
	if (v21 && *(_DWORD*)(v21 + 8) == v22)
		goto LABEL_38;
	v23 = 0;
	if (v20)
	{
		v24 = *(_QWORD*)(v20 + 704);
		v25 = 0i64;
		if (v24)
		{
			v26 = *(_DWORD**)(v20 + 696);
			while (*v26 != v19)
			{
				++v25;
				++v26;
				if (v25 >= v24)
					goto LABEL_37;
			}
			goto LABEL_38;
		}
	LABEL_37:
		if ((unsigned int)sub_14047C1E0(v20, v22))
			LABEL_38 :
			v23 = 1;
	}
	v27 = *(_OWORD*)v3;
	v28 = *(_OWORD*)(v3 + 16);
	v29 = *(_QWORD*)(v4 + 80);
	v86 = 0i64;
	HIDWORD(v76) = *(_DWORD*)(v4 + 88);
	v30 = *(_DWORD*)(v4 + 92);
	v78 = v27;
	v79 = v28;
	v31 = *(_OWORD*)(v3 + 32);
	*(_QWORD*)&v28 = *(_QWORD*)(v3 + 48);
	LODWORD(v76) = v30;
	v32 = *(_QWORD*)(v4 + 176);
	v80 = v31;
	v81 = v28;
	v33 = *(_DWORD*)(v32 + 16);
	v34 = *(_QWORD*)(v29 + 312);
	v77[0] = v33;
	if (*(char*)(*(_QWORD*)(v34 + 112) + 268i64) >= 0)
		v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	else
		v35 = *(_DWORD*)(v29 + 108);
	v47 = *(int**)(v4 + 176);
	v82 = v35;
	v48 = v47[9] == 0;
	v83 = *v47;
	v84 = *(_QWORD*)(*(_QWORD*)(v4 + 80) + 408i64);
	v85 = !v48;
	sub_1405642C0(v84, v5, &v76);
	v48 = *(_QWORD*)(v7 + 872) == 0i64;
	LODWORD(v86) = *(_DWORD*)(v3 + 20);
	if (!v48 || (v50 = 0, *(_QWORD*)(v7 + 888)))
		v50 = 1;
	HIDWORD(v86) = v50;
	if (v23)
		sub_140563930(v49, v5, &v76);
	sub_140563A00(v49, v5, &v76);
	if (v6)
	{
		v51 = *(_DWORD*)(v6 + 128);
		if (v51 || (v52 = 1, *(_DWORD*)(v7 + 128)))
			v52 = 0;
		if (v51 != 20 || (v53 = 1, *(_DWORD*)(v7 + 128) != 20))
			v53 = 0;
		if ((*(_DWORD*)(v7 + 40) & 0x1000) == 0)
		{
			v54 = *(int*)(v7 + 128);
			if ((unsigned int)v54 > 0x24 || (v55 = 0x1042CE5D12i64, !_bittest64(&v55, v54)))
			{
				if (*(_DWORD*)(v3 + 28) && *(_DWORD*)(v3 + 32) == 1 && !v52 && !v53)
				{
					v56 = (float)*(int*)(v3 + 16);
					v58 = v56 / (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v7 + 72i64))(v7);
					if ((dword_140DC34F0 & 1) != 0)
					{
						v60 = *(float*)&dword_140DC34F4;
					}
					else
					{
						dword_140DC34F0 |= 1u;
						v59 = sub_140200220(0x1E7u);
						if (v59)
						{
							v60 = *(float*)(v59 + 24);
							dword_140DC34F4 = LODWORD(v60);
						}
						else
						{
							v60 = 0.050000001;
							dword_140DC34F4 = 1028443341;
						}
					}
					if (v58 > v60)
					{
						v61 = sub_1405D8110(v57, v3, v7);
						v62 = v61;
						if (v61)
						{
							v63 = *((_QWORD*)v61 + 4);
							if (v63)
							{
								if (v63 <= qword_140C3FE70)
								{
									v64 = (_WORD*)(v63 + qword_140C3FE68);
									if (v63 + qword_140C3FE68)
									{
										if (*v64)
										{
											sub_1407E4830((int*)&v76, 0i64, 0xA8ui64);
											v66 = 150i64;
											v87 = *(_DWORD*)(v4 + 92);
											v67 = v62[10];
											LODWORD(v76) = 0;
											if (v67)
												v66 = v67;
											v88 = v64;
											v77[1] = 1;
											*(_DWORD*)(v7 + 5000) = v66;
											sub_1405773B0(v66, v65, (int*)&v76, (__int64*)(v7 + 1416));
											sub_1400EA3E0(
												*(_QWORD*)(qword_140C65898 + 29504),
												"UnitGibbed",
												L"U",
												*(unsigned int*)(v4 + 92));
											*(_DWORD*)(v7 + 600) = 1;
										}
									}
								}
							}
							v68 = v62 + 11;
							v69 = 3i64;
							do
							{
								v70 = sub_140248F00(*v68);
								if (v70)
									sub_140578770(v7 + 4528, *(_DWORD*)(v4 + 92), v70, 0i64, (__int128*)(v7 + 4528), 0i64);
								++v68;
								--v69;
							} while (v69);
						}
					}
				}
			}
		}
	}
}
// 1405D7C91: variable 'v36' is possibly undefined
// 1405D7EC3: variable 'v49' is possibly undefined
// 1405D7FEB: variable 'v57' is possibly undefined
// 1405D8075: variable 'v65' is possibly undefined
// 1409EE03C: using guessed type wchar_t aU_16[2];
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC34F0: using guessed type int dword_140DC34F0;
// 140DC34F4: using guessed type int dword_140DC34F4;
// 1405D79F0: using guessed type char var_158[8];

