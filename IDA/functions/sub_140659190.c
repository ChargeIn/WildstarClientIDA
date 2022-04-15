#include "../winhttp.h"

//----- (0000000140659190) ----------------------------------------------------
__int64 __fastcall sub_140659190(_QWORD* a1)
{
	unsigned int v1; // r14d
	int* v3; // rax
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64(__fastcall * *v6)(); // r8
	__int64(__fastcall * *v7)(); // rcx
	__int64(__fastcall * v8)(); // rax
	__int64 v9; // r15
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rdx
	int v15; // r12d
	int v16; // esi
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	_QWORD* v20; // rdi
	__int64 v21; // rcx
	unsigned int v22; // ecx
	__int64 v23; // rdi
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rdi
	__int64(__fastcall * *v27)(); // rax
	__int64 v28; // r9
	__int64 v29; // rcx
	unsigned __int64 v30; // rax
	__int64 v31; // rdi
	__int64 v32; // rax
	int v33; // eax
	unsigned int* v34; // rcx
	int v35; // r8d
	unsigned int v36; // edx
	__int64 v37; // rdx
	__int64 v38; // rdi
	__int64 v39; // rax
	int v40; // edi
	int* v41; // rax
	int* v42; // rax
	_QWORD* v43; // rax
	_QWORD* v44; // rax
	__int64 v45; // rdx
	unsigned __int16* v46; // r10
	__int64 v47; // rcx
	_QWORD* v48; // rax
	__int64 v49; // rdx
	unsigned __int16* v50; // r10
	_QWORD* v51; // rax
	__int64 v52; // r11
	__int64 v53; // rdx
	unsigned __int16* v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rcx
	unsigned __int64 v57; // rax
	__int64 v58; // rdi
	__int64 v59; // rax
	int v60; // eax
	unsigned int* v61; // rcx
	int v62; // edi
	__int64 v63; // rax
	__int64 v64; // rdx
	unsigned int v65; // ecx
	__int64 v66; // rdi
	_QWORD* v67; // rax
	__int64 v68; // rdi
	__int64(__fastcall * *v69)(); // rax
	__int64 v70; // r9
	_QWORD* v71; // rax
	__int64 v72; // rdx
	int v73; // r10d
	int v74; // edi
	_QWORD* v75; // rax
	__int64 v76; // r10
	unsigned __int64* v77; // rdx
	unsigned __int64 v78; // r8
	int* v79; // rax
	__int64* v80; // rax
	_QWORD* v81; // rax
	__int64 v82; // r11
	__int64 v83; // rdx
	int v84; // r10d
	_QWORD* v85; // rax
	__int64 v86; // rdx
	int v87; // r10d
	_QWORD* v88; // rax
	__int64 v89; // r10
	__int64 result; // rax
	__int64(__fastcall * *v91)(); // [rsp+20h] [rbp-E0h] BYREF
	__int128 v92; // [rsp+28h] [rbp-D8h]
	int v93; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v94)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v95; // [rsp+48h] [rbp-B8h]
	_QWORD* v96; // [rsp+50h] [rbp-B0h]
	int v97; // [rsp+58h] [rbp-A8h]
	__int64 v98[24]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v99; // [rsp+120h] [rbp+20h]
	int* v100; // [rsp+130h] [rbp+30h]
	char v101[1216]; // [rsp+140h] [rbp+40h] BYREF
	__int64 v102[96]; // [rsp+600h] [rbp+500h] BYREF
	__int64 v103; // [rsp+900h] [rbp+800h]

	v1 = 1;
	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
	{
		v5 = *(_DWORD*)(v4 + 8);
		v6 = *(__int64(__fastcall***)())(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
		v7 = v6;
		v8 = v6[1];
		while (v8)
		{
			if (*((_DWORD*)v8 + 8) < v5)
			{
				v8 = (__int64(__fastcall*)()) * ((_QWORD*)v8 + 3);
			}
			else
			{
				v7 = (__int64(__fastcall**)())v8;
				v8 = (__int64(__fastcall*)()) * ((_QWORD*)v8 + 2);
			}
		}
		if (v7 == v6 || (v91 = v7, v5 < *((_DWORD*)v7 + 8)))
			v91 = v6;
		if (v91 == v6 || (v9 = (__int64)(v91 + 5), v91 == (__int64(__fastcall**)()) - 40i64))
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		else
		{
			v10 = a1[4];
			v11 = *(_QWORD*)(v10 + 112);
			v94 = off_140B569F0;
			v96 = a1;
			v97 = 1;
			if (*(_QWORD*)(v10 + 120) >= v11)
				sub_14005E2C0((__int64)a1);
			v12 = a1[2];
			v13 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			a1[2] += 16i64;
			v15 = sub_1400578C0((__int64)a1);
			LODWORD(v95) = v15;
			v16 = 0;
			switch (*(_DWORD*)(v9 + 12))
			{
			case 0:
				if (!*(_QWORD*)(v9 + 16))
					goto LABEL_66;
				v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
				v18 = a1[2];
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v18, L"nCount", v19);
				a1[2] -= 16i64;
				sub_14040FAE0((__int64)v102);
				sub_1404111E0((__int64)v102, v9, 1);
				v20 = (_QWORD*)sub_14040FC60((__int64)v101, (__int64)v102);
				if ((unsigned int)sub_140415BB0(a1, (__int64)v20))
				{
					sub_1400FB540((__int64)&v94);
					a1[2] -= 16i64;
				}
				if (*v20)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v20 + 8i64))(*v20);
					*v20 = 0i64;
				}
				v21 = v20[96];
				if (v21)
					sub_14018B900(v21, 0);
				if (v102[0])
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v102[0] + 8i64))(v102[0]);
					v102[0] = 0i64;
				}
				if (v103)
					sub_14018B900(v103, 0);
				goto LABEL_55;
			case 2:
				v22 = *(_DWORD*)(v9 + 68);
				if (!v22)
					goto LABEL_65;
				v14 = *(unsigned int*)(v9 + 64);
				if ((unsigned int)(v14 - 1) > 0xD)
					goto LABEL_65;
				v23 = v22;
				LODWORD(v92) = *(_DWORD*)(v9 + 64);
				*(_QWORD*)((char*)&v92 + 4) = 0i64;
				HIDWORD(v92) = 0;
				v24 = (_QWORD*)sub_140059170(a1, 0x18ui64);
				v25 = (unsigned int)v92;
				*v24 = v23;
				v24[1] = v25;
				v24[2] = *((_QWORD*)&v92 + 1);
				v26 = a1[4];
				v27 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
				v28 = a1[2];
				v91 = v27;
				LODWORD(v92) = 4;
				sub_14005E8E0((__int64)a1, v26 + 160, (int*)&v91, v28);
				a1[2] += 16i64;
				sub_140058BF0((__int64)a1, -2);
				goto LABEL_54;
			case 6:
				if (!*(_QWORD*)(v9 + 40))
					goto LABEL_65;
				v29 = a1[4];
				v91 = off_140B569F0;
				*((_QWORD*)&v92 + 1) = a1;
				v30 = *(_QWORD*)(v29 + 112);
				v93 = 1;
				if (*(_QWORD*)(v29 + 120) >= v30)
					sub_14005E2C0((__int64)a1);
				v31 = a1[2];
				v32 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v31 + 8) = 5;
				*(_QWORD*)v31 = v32;
				a1[2] += 16i64;
				v33 = sub_1400578C0((__int64)a1);
				v34 = *(unsigned int**)(v9 + 40);
				v35 = *(_DWORD*)(v9 + 68);
				v36 = *v34;
				LODWORD(v31) = v33;
				LODWORD(v92) = v33;
				sub_140416130((__int64)v34, v36, v35, (__int64)&v91);
				sub_1400FB2A0((__int64)&v94, (__int64)L"tVirtualItem", v31);
				sub_1400579E0((__int64)a1, v37, v31);
				goto LABEL_55;
			case 7:
				if (!*(_QWORD*)(v9 + 48))
					goto LABEL_65;
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v38 = a1[2];
				v39 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v38 + 8) = 5;
				*(_QWORD*)v38 = v39;
				a1[2] += 16i64;
				v40 = sub_1400578C0((__int64)a1);
				sub_1400B7210((__int64)v98, (int*)L"$1n");
				v98[0] = (__int64)off_140B69230;
				v100 = 0i64;
				v99 = 0i64;
				v41 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v99 = v41;
				*((_QWORD*)&v99 + 1) = v41;
				v100 = v41 + 4;
				if (v41)
					*(_WORD*)v41 = 0;
				v42 = sub_14018B280(96i64, 0);
				if (v42)
					v43 = (_QWORD*)sub_1404DDAF0((__int64)v42, *(_DWORD*)(*(_QWORD*)(v9 + 48) + 24i64));
				else
					v43 = 0i64;
				sub_1400B7480((__int64)v98, v43);
				sub_1400B7660(v98);
				v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v40);
				v45 = a1[2];
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v45, L"strName", v46);
				a1[2] -= 16i64;
				sub_14034BDD0(v47, *(_DWORD*)(*(_QWORD*)(v9 + 48) + 28i64));
				v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v40);
				v49 = a1[2];
				*(_QWORD*)v49 = *v48;
				*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v49, L"strDescription", v50);
				a1[2] -= 16i64;
				v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v40);
				*(_QWORD*)v52 = *v51;
				*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v53, L"strButtonIcon", v54);
				a1[2] -= 16i64;
				sub_1400FB2A0((__int64)&v94, (__int64)L"tAbility", v40);
				if ((_QWORD)v99)
					sub_14018B900(v99, 0);
				sub_1400B7390(v98);
				sub_1400579E0((__int64)a1, v55, v40);
				goto LABEL_55;
			case 8:
				if (!*(_QWORD*)(v9 + 56))
					goto LABEL_65;
				v56 = a1[4];
				v91 = off_140B569F0;
				*((_QWORD*)&v92 + 1) = a1;
				v57 = *(_QWORD*)(v56 + 112);
				v93 = 1;
				if (*(_QWORD*)(v56 + 120) >= v57)
					sub_14005E2C0((__int64)a1);
				v58 = a1[2];
				v59 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v58 + 8) = 5;
				*(_QWORD*)v58 = v59;
				a1[2] += 16i64;
				v60 = sub_1400578C0((__int64)a1);
				v61 = *(unsigned int**)(v9 + 56);
				v62 = v60;
				LODWORD(v92) = v60;
				v63 = sub_1401E8C20(*v61);
				if (v63)
					sub_1404E34B0((__int64)&v91, v63);
				sub_1400FB2A0((__int64)&v94, (__int64)L"tAccountItem", v62);
				sub_1400579E0((__int64)a1, v64, v62);
				goto LABEL_55;
			case 9:
				v65 = *(_DWORD*)(v9 + 68);
				if (v65 && (v14 = *(unsigned int*)(v9 + 8), (unsigned int)(v14 - 1) <= 0x11))
				{
					v66 = v65;
					HIDWORD(v92) = *(_DWORD*)(v9 + 8);
					*(_QWORD*)&v92 = 15i64;
					DWORD2(v92) = 0;
					v67 = (_QWORD*)sub_140059170(a1, 0x18ui64);
					*v67 = v66;
					v67[1] = 15i64;
					v67[2] = *((_QWORD*)&v92 + 1);
					v68 = a1[4];
					v69 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
					v70 = a1[2];
					v91 = v69;
					LODWORD(v92) = 4;
					sub_14005E8E0((__int64)a1, v68 + 160, (int*)&v91, v70);
					a1[2] += 16i64;
					sub_140058BF0((__int64)a1, -2);
				LABEL_54:
					sub_1400FB540((__int64)&v94);
					a1[2] -= 16i64;
				LABEL_55:
					v71 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
					v72 = a1[2];
					*(_QWORD*)v72 = *v71;
					*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v72, L"eLootItemType", v73);
					a1[2] -= 16i64;
					v74 = *(_DWORD*)(v9 + 76);
					v75 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
					*(_QWORD*)v76 = *v75;
					*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
					a1[2] += 16i64;
					v77 = (unsigned __int64*)sub_14018F0E0(&v94, L"bCanLoot")[1];
					if (v77)
					{
						v78 = -1i64;
						do
							++v78;
						while (*((_BYTE*)v77 + v78));
						sub_140058710((__int64)a1, v77, v78);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v95)
						sub_14018B900(v95, 0);
					v79 = (int*)a1[2];
					LOBYTE(v16) = v74 != 0;
					v79[2] = 1;
					*v79 = v16;
					a1[2] += 16i64;
					v80 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v80, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
					if (*(_DWORD*)(v9 + 4))
					{
						v81 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
						*(_QWORD*)v82 = *v81;
						*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v83, L"idOwner", v84);
						a1[2] -= 16i64;
					}
					v85 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
					v86 = a1[2];
					*(_QWORD*)v86 = *v85;
					*(_DWORD*)(v86 + 8) = *((_DWORD*)v85 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v86, L"nTimeLeft", v87);
					a1[2] -= 16i64;
					v88 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
					*(_QWORD*)v89 = *v88;
					*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
				LABEL_68:
					a1[2] += 16i64;
				}
				else
				{
				LABEL_65:
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
					v16 = 1;
				LABEL_66:
					v1 = v16;
				}
				sub_1400579E0((__int64)a1, v14, v15);
				result = v1;
				break;
			default:
				v14 = a1[2];
				*(_DWORD*)(v14 + 8) = 0;
				goto LABEL_68;
			}
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140659334: variable 'v19' is possibly undefined
// 140659521: variable 'v37' is possibly undefined
// 140659632: variable 'v46' is possibly undefined
// 140659643: variable 'v47' is possibly undefined
// 14065967F: variable 'v50' is possibly undefined
// 1406596D9: variable 'v52' is possibly undefined
// 1406596EB: variable 'v53' is possibly undefined
// 1406596EB: variable 'v54' is possibly undefined
// 140659729: variable 'v55' is possibly undefined
// 1406597C7: variable 'v64' is possibly undefined
// 1406598C1: variable 'v73' is possibly undefined
// 1406598F0: variable 'v76' is possibly undefined
// 1406599B1: variable 'v82' is possibly undefined
// 1406599C3: variable 'v83' is possibly undefined
// 1406599C3: variable 'v84' is possibly undefined
// 140659A0D: variable 'v87' is possibly undefined
// 140659A31: variable 'v89' is possibly undefined
// 140659A65: variable 'v14' is possibly undefined
// 140B2CEE0: using guessed type wchar_t a1n_9[4];
// 140B2CEE8: using guessed type wchar_t aStrname_45[8];
// 140B2CF10: using guessed type wchar_t aTvirtualitem[13];
// 140B2CF30: using guessed type wchar_t aNcount_33[7];
// 140B2D080: using guessed type wchar_t aNtimeleft[10];
// 140B2D0A8: using guessed type wchar_t aBcanloot[9];
// 140B2D0C0: using guessed type wchar_t aIdowner[8];
// 140B2D0E8: using guessed type wchar_t aElootitemtype[14];
// 140B2D108: using guessed type wchar_t aTability[9];
// 140B2D120: using guessed type wchar_t aTaccountitem[13];
// 140B2D140: using guessed type wchar_t aStrdescription_12[15];
// 140B2D160: using guessed type wchar_t aStrbuttonicon[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140659190: using guessed type char var_9B0[1216];

