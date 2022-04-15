#include "../winhttp.h"

//----- (00000001406E9330) ----------------------------------------------------
void __fastcall sub_1406E9330(__int64 a1, __int64 a2, unsigned __int8* a3)
{
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v21; // r11d
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	__int64 v30; // rax
	_QWORD* v31; // r15
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // edi
	__int64 v36; // rdx
	__int64 v37; // rbx
	_QWORD* v38; // rax
	__int64 v39; // rbx
	__int64(__fastcall * *v40)(); // rax
	__int64 v41; // r9
	__int64 v42; // rcx
	__int64 v43; // rbx
	_QWORD* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rbx
	__int64(__fastcall * *v47)(); // rax
	__int64 v48; // r9
	__int64 v49; // rbx
	_QWORD* v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rbx
	__int64(__fastcall * *v53)(); // rax
	__int64 v54; // r9
	__int64 v55; // rcx
	__int64 v56; // rbx
	_QWORD* v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rbx
	__int64(__fastcall * *v60)(); // rax
	__int64 v61; // r9
	__int64 v62; // rdx
	unsigned int v63; // r12d
	__int64 v64; // rdi
	__int64 v65; // rdx
	__int64 v66; // rbx
	__int64 v67; // rax
	int v68; // ebx
	__int64 v69; // rdi
	__int64 v70; // rcx
	__int64 v71; // rbx
	__int64 v72; // rax
	int v73; // ebx
	int v74; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *v75)(); // [rsp+30h] [rbp-40h] BYREF
	__int64 v76; // [rsp+38h] [rbp-38h]
	__int64 v77; // [rsp+40h] [rbp-30h]
	int v78; // [rsp+48h] [rbp-28h]
	__int64(__fastcall * *v79)(); // [rsp+50h] [rbp-20h] BYREF
	int v80; // [rsp+58h] [rbp-18h]
	_QWORD* v81; // [rsp+60h] [rbp-10h]
	int v82; // [rsp+68h] [rbp-8h]

	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v8, L"id", v9);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v12, L"eVisualType", v13);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v16, L"eState", v17);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v20, L"nAllocations", v21);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v24 = *(_QWORD*)(v23 + 16);
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v24, L"nMaxAllocations", v25);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v28 = *(_QWORD*)(v27 + 16);
	*(_QWORD*)v28 = *v26;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v27 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v28, L"nSavedAllocations", v29);
	v30 = *(_QWORD*)(a2 + 16);
	v82 = 1;
	*(_QWORD*)(v30 + 16) -= 16i64;
	v31 = *(_QWORD**)(a2 + 16);
	v32 = v31[4];
	v79 = off_140B569F0;
	v81 = v31;
	if (*(_QWORD*)(v32 + 120) >= *(_QWORD*)(v32 + 112))
		sub_14005E2C0((__int64)v31);
	v33 = v31[2];
	v34 = sub_14005C1B0((__int64)v31, 0, 0);
	*(_DWORD*)(v33 + 8) = 5;
	*(_QWORD*)v33 = v34;
	v31[2] += 16i64;
	v35 = sub_1400578C0((__int64)v31);
	v36 = **(_QWORD**)a3;
	v80 = v35;
	v37 = *(unsigned int*)(v36 + 24);
	v76 = 11i64;
	v77 = 0i64;
	v38 = (_QWORD*)sub_140059170(v31, 0x18ui64);
	*v38 = v37;
	v38[1] = 11i64;
	v38[2] = 0i64;
	v39 = v31[4];
	v40 = (__int64(__fastcall**)())sub_140062650((__int64)v31, (unsigned __int64*)"Game.Money", 0xAui64);
	v41 = v31[2];
	v75 = v40;
	LODWORD(v76) = 4;
	sub_14005E8E0((__int64)v31, v39 + 160, (int*)&v75, v41);
	v31[2] += 16i64;
	sub_140058BF0((__int64)v31, -2);
	sub_1400FB540((__int64)&v79);
	v31[2] -= 16i64;
	v42 = **(_QWORD**)a3;
	v76 = 13i64;
	v43 = *(unsigned int*)(v42 + 32);
	v77 = 0i64;
	v44 = (_QWORD*)sub_140059170(v31, 0x18ui64);
	v45 = v76;
	*v44 = v43;
	v44[1] = v45;
	v44[2] = 0i64;
	v46 = v31[4];
	v47 = (__int64(__fastcall**)())sub_140062650((__int64)v31, (unsigned __int64*)"Game.Money", 0xAui64);
	v48 = v31[2];
	v75 = v47;
	LODWORD(v76) = 4;
	sub_14005E8E0((__int64)v31, v46 + 160, (int*)&v75, v48);
	v31[2] += 16i64;
	sub_140058BF0((__int64)v31, -2);
	sub_1400FB540((__int64)&v79);
	v31[2] -= 16i64;
	v49 = *(unsigned int*)(**(_QWORD**)a3 + 28i64);
	v76 = 12i64;
	v77 = 0i64;
	v50 = (_QWORD*)sub_140059170(v31, 0x18ui64);
	v51 = v76;
	*v50 = v49;
	v50[1] = v51;
	v50[2] = 0i64;
	v52 = v31[4];
	v53 = (__int64(__fastcall**)())sub_140062650((__int64)v31, (unsigned __int64*)"Game.Money", 0xAui64);
	v54 = v31[2];
	v75 = v53;
	LODWORD(v76) = 4;
	sub_14005E8E0((__int64)v31, v52 + 160, (int*)&v75, v54);
	v31[2] += 16i64;
	sub_140058BF0((__int64)v31, -2);
	sub_1400FB540((__int64)&v79);
	v31[2] -= 16i64;
	v55 = **(_QWORD**)a3;
	v76 = 14i64;
	v56 = *(unsigned int*)(v55 + 36);
	v77 = 0i64;
	v57 = (_QWORD*)sub_140059170(v31, 0x18ui64);
	v58 = v76;
	*v57 = v56;
	v57[1] = v58;
	v57[2] = 0i64;
	v59 = v31[4];
	v60 = (__int64(__fastcall**)())sub_140062650((__int64)v31, (unsigned __int64*)"Game.Money", 0xAui64);
	v61 = v31[2];
	v75 = v60;
	LODWORD(v76) = 4;
	sub_14005E8E0((__int64)v31, v59 + 160, (int*)&v75, v61);
	v31[2] += 16i64;
	sub_140058BF0((__int64)v31, -2);
	sub_1400FB540((__int64)&v79);
	v31[2] -= 16i64;
	sub_1400FB2A0(a2, (__int64)L"tPrice", v35);
	v62 = qword_140C65898;
	if (qword_140C65898)
	{
		v62 = *(_QWORD*)(qword_140C65898 + 120);
		if (v62)
		{
			v63 = sub_1406DFA40((__int64)a3, v62);
			if (a3[68])
			{
				v64 = *(_QWORD*)(a2 + 16);
				v78 = 1;
				v65 = *(_QWORD*)(v64 + 32);
				v75 = off_140B569F0;
				v77 = v64;
				if (*(_QWORD*)(v65 + 120) >= *(_QWORD*)(v65 + 112))
					sub_14005E2C0(v64);
				v66 = *(_QWORD*)(v64 + 16);
				v67 = sub_14005C1B0(v64, 0, 0);
				*(_DWORD*)(v66 + 8) = 5;
				*(_QWORD*)v66 = v67;
				*(_QWORD*)(v64 + 16) += 16i64;
				LODWORD(v76) = sub_1400578C0(v64);
				sub_1406E8A60(a1, (__int64)&v75, (__int64)a3, v63, a3[68], v74);
				v68 = v76;
				sub_1400FB2A0(a2, (__int64)L"arCurrentRewards", v76);
				if (v77)
					sub_1400579E0(v77, v62, v68);
			}
			if ((unsigned int)a3[68] < *(_DWORD*)(**(_QWORD**)a3 + 20i64))
			{
				v69 = *(_QWORD*)(a2 + 16);
				v78 = 1;
				v70 = *(_QWORD*)(v69 + 32);
				v75 = off_140B569F0;
				v77 = v69;
				if (*(_QWORD*)(v70 + 120) >= *(_QWORD*)(v70 + 112))
					sub_14005E2C0(v69);
				v71 = *(_QWORD*)(v69 + 16);
				v72 = sub_14005C1B0(v69, 0, 0);
				*(_DWORD*)(v71 + 8) = 5;
				*(_QWORD*)v71 = v72;
				*(_QWORD*)(v69 + 16) += 16i64;
				LODWORD(v76) = sub_1400578C0(v69);
				sub_1406E8A60(a1, (__int64)&v75, (__int64)a3, v63, a3[68] + 1, v74);
				v73 = v76;
				sub_1400FB2A0(a2, (__int64)L"arNextRewards", v76);
				if (v77)
					sub_1400579E0(v77, v62, v73);
			}
		}
	}
	sub_1400579E0((__int64)v31, v62, v80);
}
// 1406E9378: variable 'v7' is possibly undefined
// 1406E939B: variable 'v9' is possibly undefined
// 1406E93C8: variable 'v11' is possibly undefined
// 1406E93EB: variable 'v13' is possibly undefined
// 1406E9415: variable 'v15' is possibly undefined
// 1406E9438: variable 'v17' is possibly undefined
// 1406E9463: variable 'v19' is possibly undefined
// 1406E9486: variable 'v21' is possibly undefined
// 1406E94B6: variable 'v23' is possibly undefined
// 1406E94D9: variable 'v25' is possibly undefined
// 1406E9507: variable 'v27' is possibly undefined
// 1406E952A: variable 'v29' is possibly undefined
// 1406E98A0: variable 'v74' is possibly undefined
// 1406E98C6: variable 'v62' is possibly undefined
// 140B3F3F8: using guessed type wchar_t aArnextrewards[14];
// 140B3F418: using guessed type wchar_t aArcurrentrewar[17];
// 140B3F440: using guessed type wchar_t aTprice_0[7];
// 140B3F4A0: using guessed type wchar_t aNsavedallocati[18];
// 140B3F4C8: using guessed type wchar_t aNmaxallocation[16];
// 140B3F4E8: using guessed type wchar_t aNallocations[13];
// 140B3F508: using guessed type wchar_t aEstate_2[7];
// 140B3F518: using guessed type wchar_t aEvisualtype[12];
// 140B3F530: using guessed type wchar_t aId_22[3];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

