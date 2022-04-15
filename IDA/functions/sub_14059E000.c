//----- (000000014059E000) ----------------------------------------------------
__int64 __fastcall sub_14059E000(__int64 a1, __int64 a2, int a3)
{
	int v5; // r15d
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	int* v10; // rax
	int* v11; // rax
	__int64 v12; // rdi
	int v13; // ebx
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	unsigned __int16* v17; // r11
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v21; // r11d
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	__int64 v26; // rcx
	int v27; // edi
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	__int64 v31; // rbx
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	_DWORD* v34; // rcx
	__int64* v35; // rax
	int v36; // edi
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	__int64 v40; // rbx
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	_DWORD* v43; // rcx
	__int64* v44; // rax
	int v45; // edi
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	__int64 v49; // rbx
	unsigned __int64* v50; // rdx
	unsigned __int64 v51; // r8
	_DWORD* v52; // rcx
	__int64* v53; // rax
	__int64 v54; // rax
	__int64 v55; // rcx
	_QWORD* v56; // rax
	__int64 v57; // r10
	__int64 v58; // rdx
	unsigned __int16* v59; // r11
	__int64 v60; // rdi
	__int64 v61; // rcx
	__int64 v62; // rbx
	__int64 v63; // rax
	int v64; // eax
	unsigned int* v65; // rcx
	int v66; // ebx
	_QWORD* v67; // rax
	unsigned __int64 v68; // r12
	unsigned int* v69; // rsi
	int v70; // eax
	int* v71; // r13
	__int64 v72; // rbx
	__int64 v73; // rdi
	__int64 v74; // rax
	int v75; // r15d
	_QWORD* v76; // rax
	__int64 v77; // rdx
	int v78; // r10d
	int* v79; // rax
	int* v80; // rax
	__int64 v81; // rsi
	int v82; // edi
	_QWORD* v83; // rax
	__int64 v84; // rdx
	unsigned __int16* v85; // r10
	_QWORD* v86; // rax
	__int64 v87; // r10
	unsigned __int64* v88; // rdx
	unsigned __int64 v89; // r8
	_DWORD* v90; // rcx
	__int64* v91; // rax
	__int64 v92; // rdx
	__int64 v93; // rdx
	__int64(__fastcall * *v95)(); // [rsp+20h] [rbp-E0h] BYREF
	__int64 v96; // [rsp+28h] [rbp-D8h]
	__int64 v97; // [rsp+30h] [rbp-D0h]
	int v98; // [rsp+38h] [rbp-C8h]
	__int64 v99; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v100; // [rsp+48h] [rbp-B8h]
	__int64 v101[24]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v102; // [rsp+120h] [rbp+20h]
	int* v103; // [rsp+130h] [rbp+30h]
	__int64 v104[24]; // [rsp+140h] [rbp+40h] BYREF
	__int128 v105; // [rsp+200h] [rbp+100h]
	int* v106; // [rsp+210h] [rbp+110h]
	int v107; // [rsp+260h] [rbp+160h]
	_QWORD* v108; // [rsp+268h] [rbp+168h]

	v5 = a3;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v8, L"nSchematicId", v9);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1400B7210((__int64)v104, (int*)L"$1n");
	v104[0] = (__int64)off_140B69230;
	v105 = 0i64;
	v106 = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v105 = v10;
	*((_QWORD*)&v105 + 1) = v10;
	v106 = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	v11 = sub_14018B280(96i64, 0);
	v12 = (__int64)v11;
	if (v11)
	{
		v13 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 476i64);
		sub_1400B6390(v11);
		*(_QWORD*)v12 = off_140B69170;
		*(_DWORD*)(v12 + 88) = 1;
		sub_1400B6D70(v12, (__int64)L"name", v13);
	}
	else
	{
		v12 = 0i64;
	}
	sub_1400B7480((__int64)v104, (_QWORD*)v12);
	sub_1400B7660(v104);
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v16, L"strName", v17);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v20, L"eItemType", v21);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v24 = *(_QWORD*)(v23 + 16);
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v24, L"eTier", v25);
	v26 = qword_140C65898;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v27 = sub_1405E5E70((__int64*)(v26 + 5784), **(_DWORD**)a1);
	v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v30 = *(_QWORD*)(v29 + 16);
	*(_QWORD*)v30 = *v28;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(v29 + 16) += 16i64;
	v31 = *(_QWORD*)(a2 + 16);
	v32 = (unsigned __int64*)sub_14018F0E0(&v95, L"bIsKnown")[1];
	if (v32)
	{
		v33 = -1i64;
		do
			++v33;
		while (*((_BYTE*)v32 + v33));
		sub_140058710(v31, v32, v33);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v31 + 16) + 8i64) = 0;
		*(_QWORD*)(v31 + 16) += 16i64;
	}
	if (v96)
		sub_14018B900(v96, 0);
	v34 = *(_DWORD**)(v31 + 16);
	v34[2] = 1;
	*v34 = v27 != 0;
	*(_QWORD*)(v31 + 16) += 16i64;
	v35 = (__int64*)sub_1400580E0(v31, -3);
	sub_14005EA50(v31, v35, (int*)(*(_QWORD*)(v31 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v31 + 16) - 16i64));
	*(_QWORD*)(v31 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v36 = (*(_DWORD*)(*(_QWORD*)a1 + 32i64) >> 2) & 1;
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v39 = *(_QWORD*)(v38 + 16);
	*(_QWORD*)v39 = *v37;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
	*(_QWORD*)(v38 + 16) += 16i64;
	v40 = *(_QWORD*)(a2 + 16);
	v41 = (unsigned __int64*)sub_14018F0E0(&v95, L"bIsOneUse")[1];
	if (v41)
	{
		v42 = -1i64;
		do
			++v42;
		while (*((_BYTE*)v41 + v42));
		sub_140058710(v40, v41, v42);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
		*(_QWORD*)(v40 + 16) += 16i64;
	}
	if (v96)
		sub_14018B900(v96, 0);
	v43 = *(_DWORD**)(v40 + 16);
	v43[2] = 1;
	*v43 = v36 != 0;
	*(_QWORD*)(v40 + 16) += 16i64;
	v44 = (__int64*)sub_1400580E0(v40, -3);
	sub_14005EA50(v40, v44, (int*)(*(_QWORD*)(v40 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
	*(_QWORD*)(v40 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (*(_DWORD*)(*(_QWORD*)a1 + 28i64) || (v45 = 1, (*(_BYTE*)(*(_QWORD*)a1 + 32i64) & 4) == 0))
		v45 = 0;
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v48 = *(_QWORD*)(v47 + 16);
	*(_QWORD*)v48 = *v46;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v47 + 16) += 16i64;
	v49 = *(_QWORD*)(a2 + 16);
	v50 = (unsigned __int64*)sub_14018F0E0(&v95, L"bIsUniversal")[1];
	if (v50)
	{
		v51 = -1i64;
		do
			++v51;
		while (*((_BYTE*)v50 + v51));
		sub_140058710(v49, v50, v51);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v49 + 16) + 8i64) = 0;
		*(_QWORD*)(v49 + 16) += 16i64;
	}
	if (v96)
		sub_14018B900(v96, 0);
	v52 = *(_DWORD**)(v49 + 16);
	v52[2] = 1;
	*v52 = v45 != 0;
	*(_QWORD*)(v49 + 16) += 16i64;
	v53 = (__int64*)sub_1400580E0(v49, -3);
	sub_14005EA50(v49, v53, (int*)(*(_QWORD*)(v49 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v49 + 16) - 16i64));
	*(_QWORD*)(v49 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v54 = sub_14020A3A0(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 324i64));
	if (v54)
	{
		sub_14034BDD0(v55, *(_DWORD*)(v54 + 4));
		v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v58 = *(_QWORD*)(v57 + 16);
		*(_QWORD*)v58 = *v56;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v56 + 2);
		*(_QWORD*)(v57 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v58, L"strItemTypeName", v59);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v60 = *(_QWORD*)(a2 + 16);
	v98 = 1;
	v61 = *(_QWORD*)(v60 + 32);
	v95 = off_140B569F0;
	v97 = v60;
	if (*(_QWORD*)(v61 + 120) >= *(_QWORD*)(v61 + 112))
		sub_14005E2C0(v60);
	v62 = *(_QWORD*)(v60 + 16);
	v63 = sub_14005C1B0(v60, 0, 0);
	*(_DWORD*)(v62 + 8) = 5;
	*(_QWORD*)v62 = v63;
	*(_QWORD*)(v60 + 16) += 16i64;
	v64 = sub_1400578C0(v60);
	v65 = *(unsigned int**)a1;
	v66 = v64;
	LODWORD(v96) = v64;
	v67 = (_QWORD*)sub_1405BE260((__int64)v65, *v65);
	v108 = v67;
	if (v67)
	{
		v68 = 0i64;
		if (v67[1])
		{
			do
			{
				v69 = *(unsigned int**)(*v67 + 8 * v68);
				v70 = sub_1405E5E70((__int64*)(qword_140C65898 + 5784), *v69);
				v107 = v70;
				if (v5 || v70)
				{
					v71 = sub_1400B5DF0(qword_140C658F0, v69[3], 0i64);
					if (v71)
					{
						v72 = *(_QWORD*)(a2 + 16);
						if (*(_QWORD*)(*(_QWORD*)(v72 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v72 + 32) + 112i64))
							sub_14005E2C0(*(_QWORD*)(a2 + 16));
						v73 = *(_QWORD*)(v72 + 16);
						v74 = sub_14005C1B0(v72, 0, 0);
						*(_DWORD*)(v73 + 8) = 5;
						*(_QWORD*)v73 = v74;
						*(_QWORD*)(v72 + 16) += 16i64;
						v75 = sub_1400578C0(v72);
						v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v72 + 32) + 160i64), v75);
						v77 = *(_QWORD*)(v72 + 16);
						*(_QWORD*)v77 = *v76;
						*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
						*(_QWORD*)(v72 + 16) += 16i64;
						sub_1400F06F0(v72, v77, L"nSchematicId", v78);
						*(_QWORD*)(v72 + 16) -= 16i64;
						sub_1400B7210((__int64)v101, (int*)L"$1n");
						v103 = 0i64;
						v102 = 0i64;
						v101[0] = (__int64)off_140B69230;
						v79 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v102 = v79;
						*((_QWORD*)&v102 + 1) = v79;
						v103 = v79 + 4;
						if (v79)
							*(_WORD*)v79 = 0;
						v80 = sub_14018B280(96i64, 0);
						v81 = (__int64)v80;
						if (v80)
						{
							v82 = v71[119];
							sub_1400B6390(v80);
							*(_QWORD*)v81 = off_140B69170;
							*(_DWORD*)(v81 + 88) = 1;
							sub_1400B6D70(v81, (__int64)L"name", v82);
						}
						else
						{
							v81 = 0i64;
						}
						sub_1400B7480((__int64)v101, (_QWORD*)v81);
						sub_1400B7660(v101);
						v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v72 + 32) + 160i64), v75);
						v84 = *(_QWORD*)(v72 + 16);
						*(_QWORD*)v84 = *v83;
						*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
						*(_QWORD*)(v72 + 16) += 16i64;
						sub_1400F0870(v72, v84, L"strName", v85);
						*(_QWORD*)(v72 + 16) -= 16i64;
						v86 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v72 + 32) + 160i64), v75);
						*(_QWORD*)v87 = *v86;
						*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
						*(_QWORD*)(v72 + 16) += 16i64;
						v88 = (unsigned __int64*)sub_14018F0E0(&v99, L"bIsKnown")[1];
						if (v88)
						{
							v89 = -1i64;
							do
								++v89;
							while (*((_BYTE*)v88 + v89));
							sub_140058710(v72, v88, v89);
						}
						else
						{
							*(_DWORD*)(*(_QWORD*)(v72 + 16) + 8i64) = 0;
							*(_QWORD*)(v72 + 16) += 16i64;
						}
						if (v100)
							sub_14018B900(v100, 0);
						v90 = *(_DWORD**)(v72 + 16);
						v90[2] = 1;
						*v90 = v107 != 0;
						*(_QWORD*)(v72 + 16) += 16i64;
						v91 = (__int64*)sub_1400580E0(v72, -3);
						sub_14005EA50(
							v72,
							v91,
							(int*)(*(_QWORD*)(v72 + 16) - 32i64),
							(unsigned int*)(*(_QWORD*)(v72 + 16) - 16i64));
						*(_QWORD*)(v72 + 16) -= 48i64;
						sub_1400FB1D0((__int64)&v95);
						if ((_QWORD)v102)
							sub_14018B900(v102, 0);
						sub_1400B7390(v101);
						sub_1400579E0(v72, v92, v75);
						v5 = a3;
					}
				}
				v67 = v108;
				++v68;
			} while (v68 < v108[1]);
			v60 = v97;
			v66 = v96;
		}
	}
	sub_1400FB2A0(a2, (__int64)L"tSubRecipes", v66);
	if (v60)
		sub_1400579E0(v60, v93, v66);
	if ((_QWORD)v105)
		sub_14018B900(v105, 0);
	sub_1400B7390(v104);
	return 0i64;
}
// 14059E04A: variable 'v7' is possibly undefined
// 14059E06D: variable 'v9' is possibly undefined
// 14059E155: variable 'v15' is possibly undefined
// 14059E178: variable 'v17' is possibly undefined
// 14059E1A9: variable 'v19' is possibly undefined
// 14059E1CC: variable 'v21' is possibly undefined
// 14059E1F9: variable 'v23' is possibly undefined
// 14059E21C: variable 'v25' is possibly undefined
// 14059E25C: variable 'v29' is possibly undefined
// 14059E334: variable 'v38' is possibly undefined
// 14059E41D: variable 'v47' is possibly undefined
// 14059E4E8: variable 'v55' is possibly undefined
// 14059E508: variable 'v57' is possibly undefined
// 14059E52B: variable 'v59' is possibly undefined
// 14059E68A: variable 'v78' is possibly undefined
// 14059E781: variable 'v85' is possibly undefined
// 14059E7AC: variable 'v87' is possibly undefined
// 14059E879: variable 'v92' is possibly undefined
// 14059E8BF: variable 'v93' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B1FDD8: using guessed type wchar_t aBisoneuse_0[10];
// 140B1FDF0: using guessed type wchar_t aBisknown_0[9];
// 140B1FE08: using guessed type wchar_t aStritemtypenam[16];
// 140B1FE28: using guessed type wchar_t aBisuniversal_0[13];
// 140B1FE48: using guessed type wchar_t aStrname_37[8];
// 140B1FE58: using guessed type wchar_t a1n_5[4];
// 140B1FE60: using guessed type wchar_t aEtier_2[6];
// 140B1FE70: using guessed type wchar_t aEitemtype_1[10];
// 140B1FEB8: using guessed type wchar_t aNschematicid_1[13];
// 140B20040: using guessed type wchar_t aTsubrecipes[12];
// 140B200B0: using guessed type wchar_t a1n_6[4];
// 140B200B8: using guessed type wchar_t aNschematicid_2[13];
// 140B200D8: using guessed type wchar_t aBisknown_1[9];
// 140B200F0: using guessed type wchar_t aStrname_38[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

