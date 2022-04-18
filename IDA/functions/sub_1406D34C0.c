#include "../winhttp.h"

//----- (00000001406D34C0) ----------------------------------------------------
__int64 __fastcall sub_1406D34C0(__int64 a1, int a2, int* a3)
{
	unsigned int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // edi
	_DWORD* v10; // r15
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rsi
	__int64 v15; // rbx
	int v16; // eax
	__int64 v17; // rdx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rax
	int v21; // ecx
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	unsigned int v28; // r13d
	__int64 v29; // rbx
	int v30; // ecx
	__int64 v31; // rax
	unsigned int v32; // eax
	__int64 v33; // rbx
	int* v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rcx
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rcx
	int v41; // eax
	__int64 v42; // r11
	__int64 v43; // rax
	__int64 v44; // rbx
	int v45; // eax
	unsigned int v46; // ecx
	__int64 v47; // rcx
	int v48; // r11d
	__int64 v49; // r10
	__int64 v50; // rcx
	int v51; // eax
	__int64 v52; // r10
	__int64 v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rcx
	int v56; // eax
	__int64 v57; // rax
	__int64 v58; // rbx
	unsigned int* v59; // rax
	unsigned int v60; // edx
	__int64 v61; // rcx
	__int64 v62; // rdi
	int* v63; // rbx
	__int64 v64; // rax
	__int64 v65; // r12
	_DWORD* v66; // rax
	unsigned int* v67; // rax
	__int64 v68; // rax
	int v69; // ecx
	__int64 v70; // rax
	__int64 v71; // r8
	__int64 v72; // rdx
	__int64 v73; // rcx
	char* v74; // r8
	__int64 v75; // rcx
	__int64 v76; // rax
	unsigned int v77; // edx
	__int64 v78; // r8
	__int64 v79; // rdx
	BOOL v80; // eax
	int* v81; // rax
	int v82; // ebx
	__int64 v83; // rsi
	int* v84; // rdi
	__int64 v85; // rax
	__int64 v86; // rcx
	int v87; // ebx
	__int64 v88; // rax
	__int64 v89; // r8
	__int64 v90; // rcx
	__int64 v91; // rax
	int v92; // eax
	__int64* v93; // rax
	__int64 v94; // rdx
	int v95; // [rsp+20h] [rbp-49h]
	_DWORD* v96; // [rsp+40h] [rbp-29h] BYREF
	__int64 v97; // [rsp+48h] [rbp-21h]
	__int64 v98; // [rsp+50h] [rbp-19h]
	__int64 v99; // [rsp+58h] [rbp-11h]
	__int64 v100; // [rsp+60h] [rbp-9h] BYREF
	__int64 v101; // [rsp+68h] [rbp-1h]
	__int128 v102; // [rsp+70h] [rbp+7h]
	int* v103; // [rsp+80h] [rbp+17h]
	unsigned int v104; // [rsp+D0h] [rbp+67h] BYREF
	int v105; // [rsp+D4h] [rbp+6Bh]
	int* v106; // [rsp+E0h] [rbp+77h]
	int v107; // [rsp+E8h] [rbp+7Fh]

	v106 = a3;
	v6 = sub_1400D2550(a1, a2, a3);
	v7 = *(_QWORD*)a1;
	v8 = v6;
	if ((*(_BYTE*)(a1 + 28) & 0x40) != 0)
		v8 = 0;
	v104 = v8;
	if ((*(float(__fastcall**)(__int64))(v7 + 72))(a1) > 0.0
		&& (*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) < 1.0)
	{
		return v8;
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 664i64))(a1, a3);
	if (!a2)
	{
		if (*(_BYTE*)(a1 + 2089))
		{
			v11 = *(_QWORD*)a1;
			*(_BYTE*)(a1 + 2089) = 0;
			if ((*(unsigned __int8(__fastcall**)(__int64))(v11 + 568))(a1)
				|| (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 576i64))(a1)
				|| (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 584i64))(a1))
			{
				if (v10)
				{
					if (v10 == *(_DWORD**)(a1 + 2096))
					{
						v13 = v10[2];
						if (v13 == 2 || (unsigned int)(v13 - 5) <= 1)
						{
							v104 = v10[3];
							v105 = v10[4];
							if (!sub_14053BC30(v12, (__int64)&v104))
							{
								v14 = qword_140C65898;
								v15 = sub_1403AC780(qword_140C65898 + 160, v10 + 3);
								if (v15)
								{
									v16 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 2876i64);
									switch (v16)
									{
									case 4:
										if (*(_DWORD*)(*(_QWORD*)(v15 + 64) + 360i64))
										{
											Apollo_LUAEvent(*(_QWORD*)(v14 + 29504), "CraftingModItem", L"O", v15);
											return 0i64;
										}
										break;
									case 1:
										Apollo_LUAEvent(*(_QWORD*)(v14 + 29504), "SplitItemStack", "O", v15);
										return 0i64;
									case 2:
										Apollo_LUAEvent(*(_QWORD*)(v14 + 29504), "ToggleItemContextMenu", byte_1409EAE84, v15);
										return 0i64;
									default:
										v17 = sub_14018EFA0(&v100, (__int64)L"%d", (unsigned int)v10[22])[1];
										v18 = v10[3];
										if (v18 < 300)
											v19 = *((unsigned __int8*)v10 + 16) | ((unsigned __int64)(unsigned __int8)v18 << 8);
										else
											v19 = -1i64;
										sub_1406D4D50(
											a1,
											1,
											(int*)&qword_140B3C2F0,
											*(__m128i**)(*(_QWORD*)(v15 + 64) + 488i64),
											v19,
											v17);
										if (v101)
											sub_14018B900(v101, 0);
										break;
									}
								}
							}
							return 0i64;
						}
					}
				}
			}
		}
		return v8;
	}
	if (a2 == 1 && *(_BYTE*)(a1 + 2088))
	{
		v20 = *(_QWORD*)(a1 + 32);
		*(_BYTE*)(a1 + 2088) = 0;
		v21 = *(_DWORD*)(v20 + 2876);
		if (v21 == 1)
		{
			v22 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 664i64))(a1, a3);
			if (v22)
			{
				v23 = qword_140C65898;
				v24 = sub_1403AC780(qword_140C65898 + 160, (int*)(v22 + 12));
				if (v24)
					Apollo_LUAEvent(*(_QWORD*)(v23 + 29504), "ItemLink", byte_1409E9D4C, v24);
			}
			goto LABEL_133;
		}
		if (v21 == 4)
		{
			v25 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 664i64))(a1, a3);
			if (v25)
			{
				v26 = qword_140C65898;
				v27 = sub_1403AC780(qword_140C65898 + 160, (int*)(v25 + 12));
				if (v27)
					Apollo_LUAEvent(*(_QWORD*)(v26 + 29504), "ToggleItemContextMenu", byte_1409EAE84, v27);
			}
			goto LABEL_133;
		}
		v107 = 0;
		v28 = 1;
		if (v10)
		{
			if (sub_1403AC780(qword_140C65898 + 160, v10 + 3))
			{
				v95 = 1;
				sub_1400D4040(a1, "ItemClick", (char*)a1, "iO>b");
				if (v107)
				{
				LABEL_133:
					sub_1406D31C0((_QWORD*)a1, (__int64)v106, 1);
					*(_QWORD*)(a1 + 2096) = 0i64;
					return v8;
				}
			}
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1))
		{
			v29 = qword_140C65898;
			v30 = *(_DWORD*)(qword_140C65898 + 26180);
			if (((v30 - 40) & 0xFFFFFFF6) == 0 && v30 != 48)
			{
				if (v10)
				{
					v31 = sub_1403AC780(qword_140C65898 + 160, v10 + 3);
					if (v31)
					{
						v32 = *(_DWORD*)(v31 + 120);
						if (v32)
							v28 = v32;
						if (*(_QWORD*)(v29 + 120) && (int)sub_1403C2630(v29, v10 + 3, v28) >= 0)
						{
							v33 = *(_QWORD*)(a1 + 32);
							v34 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v102 = v34;
							*((_QWORD*)&v102 + 1) = v34;
							v103 = v34 + 4;
							if (v34)
								*(_WORD*)v34 = 0;
							sub_14010AEB0((__int64)&v100, v33, (int*)L"PlayUIBuySell");
							v35 = v102;
							if ((int)v100 >= 0)
							{
								v36 = *(_QWORD*)(qword_140C63650 + 1832);
								if (v36)
									(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v36
										+ 16i64))(
											v36,
											(unsigned int)v100,
											0i64,
											0i64,
											0i64,
											0i64,
											0i64);
							}
							else if ((_QWORD)v102 != *((_QWORD*)&v102 + 1))
							{
								sub_1400E2370(qword_140C63650, v102);
							}
							if (v35)
								sub_14018B900(v35, 0);
						}
					}
				}
				goto LABEL_133;
			}
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1)
			&& (unsigned int)(*(_DWORD*)(qword_140C65898 + 26180) - 66) <= 1)
		{
			if (!v10)
				goto LABEL_133;
			v37 = (__int64*)sub_1403AC780(qword_140C65898 + 160, v10 + 3);
			if (!v37)
				goto LABEL_133;
			v38 = *v37;
			v96 = 0i64;
			v97 = 0i64;
			v39 = (*(__int64(__fastcall**)(__int64*))(v38 + 48))(v37);
			LODWORD(v97) = 1;
			goto LABEL_66;
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1)
			&& *(_DWORD*)(qword_140C65898 + 26180) == 68)
		{
			if ((unsigned int)sub_1403A6930(qword_140C65898))
			{
				if (!v10)
					goto LABEL_133;
				v41 = v10[2];
				if (v41 != 2 && (unsigned int)(v41 - 5) > 1)
					goto LABEL_133;
				v104 = v10[3];
				v105 = v10[4];
				if (!sub_14053BC30(v40, (__int64)&v104))
				{
					v43 = sub_1403AC780(v42 + 160, v10 + 3);
					v44 = v43;
					if (v43
						&& ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v43 + 96i64))(v43)
							|| (*(_DWORD*)(*(_QWORD*)(v44 + 64) + 332i64) & 0x40000) != 0
							|| (*(_BYTE*)(v44 + 128) & 0x40) != 0))
					{
						if (*(_DWORD*)(v44 + 120))
							LOWORD(v28) = *(_DWORD*)(v44 + 120);
						v45 = v10[3];
						if (v45 < 300)
							v46 = *((unsigned __int8*)v10 + 16) | (((unsigned __int8)v45 | ((unsigned __int16)v28 << 8)) << 8);
						else
							v46 = -1;
						Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailAddAttachment", L"i", v46);
					}
					goto LABEL_133;
				}
			}
			return 0i64;
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1)
			&& (unsigned int)(*(_DWORD*)(qword_140C65898 + 26180) - 72) <= 1)
		{
			if ((unsigned int)sub_1403A6930(qword_140C65898))
			{
				if (!dword_140C7DE28)
				{
					if (v48 == 72)
					{
						sub_140584660();
					}
					else if (v48 == 73)
					{
						sub_140584690();
					}
					if (v10)
					{
						v104 = v10[3];
						v105 = v10[4];
						if (!sub_14053BC30(v47, (__int64)&v104) && v49 && *(_DWORD*)(v49 + 640) != 300)
						{
							v104 = *(_DWORD*)(v49 + 640);
							v105 = 0;
							sub_14057F0B0((__int64*)v49, (__int64)(v10 + 3), 0, &v104, 1);
						}
					}
				}
				goto LABEL_133;
			}
			return 0i64;
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1))
		{
			v50 = *(_QWORD*)(qword_140C65898 + 26392);
			if (v50)
			{
				if (!v10)
					goto LABEL_133;
				v51 = v10[2];
				if (v51 != 2 && (unsigned int)(v51 - 5) > 1)
					goto LABEL_133;
				if (!*(_DWORD*)(v50 + 16))
					goto LABEL_133;
				v104 = v10[3];
				v105 = v10[4];
				if (!sub_14053BC30(v50, (__int64)&v104))
				{
					v53 = sub_1403AC780(v52 + 160, v10 + 3);
					v54 = v53;
					if (v53)
					{
						if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v53 + 96i64))(v53)
							|| (v55 = *(_QWORD*)(v54 + 64)) != 0 && sub_140569A20(v55))
						{
							if (*(_QWORD*)(qword_140C65898 + 26392))
								sub_1403A6B50(qword_140C65898, v10 + 3);
						}
					}
					goto LABEL_133;
				}
				return 0i64;
			}
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 576i64))(a1)
			|| (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 584i64))(a1))
		{
			if (!v10)
				goto LABEL_133;
			v93 = (__int64*)sub_1403AC780(qword_140C65898 + 160, v10 + 3);
			if (!v93)
				goto LABEL_133;
			v94 = *v93;
			v96 = 0i64;
			v97 = 0i64;
			v39 = (*(__int64(__fastcall**)(__int64*))(v94 + 48))(v93);
		LABEL_66:
			v96 = (_DWORD*)v39;
			sub_1403F4900(qword_140C65898, 0xB6u, (__int64)&v96);
			goto LABEL_133;
		}
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1))
		{
			v56 = *(_DWORD*)(qword_140C65898 + 26180);
			if (v56 == 86 || v56 == 69)
			{
				if (!v10)
					goto LABEL_133;
				v57 = sub_1403AC780(qword_140C65898 + 160, v10 + 3);
				v58 = v57;
				if (!v57)
					goto LABEL_133;
				v59 = *(unsigned int**)(v57 + 64);
				v60 = v59[95];
				v61 = v60 - 1;
				if ((unsigned int)v61 > 5)
				{
					if (v60 != 20)
						goto LABEL_133;
				}
				else
				{
					v61 = v60 - 1;
					if ((unsigned int)v61 >= 7)
						goto LABEL_133;
				}
				if (!(unsigned int)sub_1403B91D0(v61, *v59))
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "UnlockCostumeItem", L"O", v58);
				goto LABEL_133;
			}
		}
		if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1)
			|| !v10
			|| v10 != *(_DWORD**)(a1 + 2096)
			|| v10[2] != 2)
		{
			goto LABEL_133;
		}
		v62 = qword_140C65898;
		v63 = v10 + 3;
		v96 = v10 + 3;
		v64 = sub_1403AC780(qword_140C65898 + 160, v10 + 3);
		v65 = v64;
		if (v64)
		{
			v66 = *(_DWORD**)(v64 + 64);
			if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 2876i64) == 2)
			{
				if ((int)v66[95] < 72)
				{
					if (v66[116])
					{
						v67 = (unsigned int*)sub_140203DA0(v66[116]);
						if (!v67)
							return v104;
						Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "DecorPreviewOpen", byte_1409EC01C, *v67);
					}
					else
					{
						Apollo_LUAEvent(*(_QWORD*)(v62 + 29504), "ShowItemInDressingRoom", L"O", v65);
					}
				}
				goto LABEL_132;
			}
			if (v66[114])
			{
				v96 = 0i64;
				v97 = 0i64;
				v96 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v65 + 48i64))(v65);
				if (*(_DWORD*)(v65 + 120))
					v28 = *(_DWORD*)(v65 + 120);
				LODWORD(v97) = v28;
				sub_1403F4900(qword_140C65898, 0x12Au, (__int64)&v96);
				goto LABEL_132;
			}
			v68 = sub_14056A030(v65);
			if (!v68)
				goto LABEL_173;
			v69 = *(_DWORD*)(*(_QWORD*)(v68 + 112) + 124i64);
			if (v69 == 6)
			{
				v96 = 0i64;
				v97 = 0i64;
				v98 = 0i64;
				v99 = 0i64;
				v96 = (_DWORD*)sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
				v97 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
				v98 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractActive");
				v70 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
				v71 = (unsigned int)v10[22];
				v99 = v70;
				v72 = sub_14018EFA0(&v100, (__int64)L"%d", v71)[1];
				if (*v63 < 300)
					v73 = *((unsigned __int8*)v10 + 16) | ((unsigned __int64)(unsigned __int8)*v63 << 8);
				else
					v73 = -1i64;
				v74 = "DDUseItemWithInventory";
			LABEL_149:
				sub_1406D4E40(a1, 1, (int*)v74, (__int64*)&v96, *(__m128i**)(*(_QWORD*)(v65 + 64) + 488i64), v73, v72);
				if (v101)
					sub_14018B900(v101, 0);
				goto LABEL_132;
			}
			if (v69 != 1
				|| (v75 = *(_QWORD*)(v65 + 64), (*(_DWORD*)(v75 + 340) & 0x400) != 0)
				&& *(_DWORD*)(v75 + 384)
				&& *(_DWORD*)(v65 + 32))
			{
			LABEL_173:
				v90 = *(_QWORD*)(v65 + 72);
				v96 = 0i64;
				if (v90)
					v91 = v90;
				else
					v91 = *(_QWORD*)(v65 + 64) + 8i64;
				if (!v91)
					goto LABEL_183;
				if (!v90)
					v90 = *(_QWORD*)(v65 + 64) + 8i64;
				if (sub_1404AA7D0(
					v90,
					*(_DWORD*)(*(_QWORD*)(v65 + 64) + 324i64),
					**(_DWORD**)(v65 + 64),
					*(_DWORD*)(v90 + 4),
					v95,
					&v96)
					&& v96
					&& (v96[2] & 4) != 0)
				{
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SalvageKeyRequiresConfirm", byte_1409EB924, v65);
				}
				else
				{
				LABEL_183:
					v92 = sub_1403998E0(qword_140C65898, v10 + 3, 0, 0i64);
					if (!v92 || v92 == 317)
						Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "RefreshInventoryBags", byte_1409D0D27);
				}
				sub_140611DD0(*(_QWORD*)(qword_140C65898 + 29544), v10 + 3);
				goto LABEL_132;
			}
			v76 = *(_QWORD*)(v65 + 80);
			if (!v76)
				v76 = v75 + 156;
			v77 = *(_DWORD*)(v76 + 128);
			if (v77)
			{
				v78 = sub_1403ACD90(qword_140C65B70, v77, *(_QWORD*)(qword_140C65898 + 120));
				if (v78)
				{
					v79 = *(_QWORD*)(v65 + 64);
					v80 = (*(_DWORD*)(v79 + 340) & 0x400) == 0 || !*(_DWORD*)(v79 + 384) || *(_DWORD*)(v65 + 32) == 0;
					if ((*(_DWORD*)(v79 + 340) & 0x200) != 0 || v80)
					{
						v81 = *(int**)(v78 + 112);
						v100 = 0i64;
						v82 = *v81;
						*(_QWORD*)((char*)&v102 + 4) = 0i64;
						LODWORD(v102) = 0;
						v101 = 0i64;
						v83 = *(_QWORD*)(qword_140C65898 + 120);
						HIDWORD(v102) = 96;
						v84 = (int*)(qword_140C65898 + 27920);
						v85 = sub_14055BDC0(qword_140C65898, v83, v78, 1, 0);
						v87 = sub_1403986F0(v86, v82, v83, v85, v84, v65, (__int64)&v100, 0);
						if (v100)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v100 - 16) + 8i64))(v100 - 16);
						if (!v87)
						{
							v96 = *(_DWORD**)v96;
							sub_1403998E0(qword_140C65898, (int*)&v96, 2, 0i64);
							goto LABEL_132;
						}
						v63 = v10 + 3;
					}
				}
			}
			v96 = 0i64;
			v97 = 0i64;
			v98 = 0i64;
			v99 = 0i64;
			v96 = (_DWORD*)sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
			v97 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
			v98 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractActive");
			v88 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"InteractInactive");
			v89 = (unsigned int)v10[22];
			v99 = v88;
			v72 = sub_14018EFA0(&v100, (__int64)L"%d", v89)[1];
			if (*v63 < 300)
			{
				v74 = "DDUseItemWithTarget";
				v73 = *((unsigned __int8*)v63 + 4) | ((unsigned __int64)(unsigned __int8)*v63 << 8);
			}
			else
			{
				v73 = -1i64;
				v74 = "DDUseItemWithTarget";
			}
			goto LABEL_149;
		}
	LABEL_132:
		v8 = v104;
		goto LABEL_133;
	}
	return v8;
}
// 1406D35E0: variable 'v12' is possibly undefined
// 1406D3A6A: variable 'v40' is possibly undefined
// 1406D3A77: variable 'v42' is possibly undefined
// 1406D3B68: variable 'v48' is possibly undefined
// 1406D3BA2: variable 'v47' is possibly undefined
// 1406D3BB2: variable 'v49' is possibly undefined
// 1406D3C5E: variable 'v52' is possibly undefined
// 1406D412A: variable 'v86' is possibly undefined
// 1406D428B: variable 'v95' is possibly undefined
// 1409D0D27: using guessed type _BYTE byte_1409D0D27[22];
// 1409E9D4C: using guessed type _BYTE byte_1409E9D4C[48];
// 1409EAE84: using guessed type _BYTE byte_1409EAE84[40];
// 1409EB924: using guessed type _BYTE byte_1409EB924[128];
// 1409EC01C: using guessed type _BYTE byte_1409EC01C[16];
// 1409EEF6C: using guessed type wchar_t aI_33[2];
// 1409EF25C: using guessed type wchar_t aO_8[2];
// 1409EF6C4: using guessed type wchar_t aO_9[2];
// 1409EF764: using guessed type wchar_t aO_10[2];
// 140B3B7C8: using guessed type wchar_t aInteractinacti_1[17];
// 140B3B840: using guessed type wchar_t aInteractactive[15];
// 140B3B860: using guessed type wchar_t aInteractinacti_0[17];
// 140B3B888: using guessed type wchar_t aInteractinacti[17];
// 140B3B8B0: using guessed type wchar_t aPlayuibuysell[14];
// 140B3B8E4: using guessed type wchar_t aD_64[3];
// 140B3BA48: using guessed type wchar_t aD_66[3];
// 140B3BA50: using guessed type wchar_t aInteractinacti_4[17];
// 140B3BA78: using guessed type wchar_t aInteractactive_0[15];
// 140B3BA98: using guessed type wchar_t aInteractinacti_3[17];
// 140B3BAC0: using guessed type wchar_t aInteractinacti_2[17];
// 140B3BAE4: using guessed type wchar_t aD_65[3];
// 140B3C2F0: using guessed type __int64 qword_140B3C2F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DE28: using guessed type int dword_140C7DE28;

