//----- (00000001404FDB50) ----------------------------------------------------
__int64 __fastcall sub_1404FDB50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rdx
	int v11; // r12d
	unsigned __int64 v12; // rcx
	int v13; // r13d
	__int64 v14; // r15
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // eax
	int v18; // ecx
	int v19; // edi
	__int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // r8
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64 v27; // rdi
	__int64 v28; // rax
	int v29; // edi
	_QWORD* v30; // rax
	__int64 v31; // rdx
	int v32; // r10d
	__int64 v33; // rcx
	_QWORD* v34; // rax
	__int64 v35; // rdx
	int v36; // r10d
	__int64 v37; // rax
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int16* v41; // r10
	__int64 v42; // rdx
	__int64 v43; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v46; // rcx
	__int64 v47; // r10
	__int64 v48; // r11
	__int64 v49; // r8
	__int64 v50; // r9
	unsigned __int64 v51; // r9
	unsigned __int64 v52; // r11
	int* v53; // r8
	__int64 v54; // rbx
	int v55; // xmm1_4
	int v56; // ecx
	__int64 v57; // rbx
	__int64 v58; // rax
	int v59; // ebx
	_QWORD* v60; // rax
	__int64 v61; // rdx
	__int64 v62; // rax
	_QWORD* v63; // rax
	__int64 v64; // rdx
	__int64 v65; // rcx
	_QWORD* v66; // rax
	__int64 v67; // rdx
	unsigned __int16* v68; // r10
	__int64 v69; // rdx
	int v70; // ebx
	_QWORD* v71; // rax
	__int64 v72; // rdx
	__int64* v73; // rax
	__int64 v74; // rdx
	__int64 v75; // r10
	__int64(__fastcall * *v77)(); // [rsp+20h] [rbp-39h] BYREF
	int v78; // [rsp+28h] [rbp-31h]
	_QWORD* v79; // [rsp+30h] [rbp-29h]
	int v80; // [rsp+38h] [rbp-21h]
	char v81[8]; // [rsp+40h] [rbp-19h] BYREF
	__int64 v82; // [rsp+48h] [rbp-11h]
	__int64 v83; // [rsp+50h] [rbp-9h]
	__int64 v84; // [rsp+58h] [rbp-1h]
	__int64(__fastcall * *v85)(); // [rsp+60h] [rbp+7h] BYREF
	int v86; // [rsp+68h] [rbp+Fh]
	_QWORD* v87; // [rsp+70h] [rbp+17h]
	int v88; // [rsp+78h] [rbp+1Fh]
	__int64 v89; // [rsp+C8h] [rbp+6Fh] BYREF
	__int64 v90; // [rsp+D0h] [rbp+77h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		if (*(_QWORD*)(v3 + 2168))
		{
			v5 = a1[4];
			v6 = *(_QWORD*)(v5 + 112);
			v85 = off_140B569F0;
			v87 = a1;
			v88 = 1;
			if (*(_QWORD*)(v5 + 120) >= v6)
				sub_14005E2C0((__int64)a1);
			v7 = a1[2];
			v8 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			a1[2] += 16i64;
			v9 = sub_1400578C0((__int64)a1);
			v10 = a1[4];
			v11 = 0;
			v86 = v9;
			v12 = *(_QWORD*)(v10 + 112);
			v13 = 0;
			v77 = off_140B569F0;
			v14 = (__int64)a1;
			v79 = a1;
			v80 = 1;
			if (*(_QWORD*)(v10 + 120) >= v12)
				sub_14005E2C0((__int64)a1);
			v15 = a1[2];
			v16 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			a1[2] += 16i64;
			v17 = sub_1400578C0((__int64)a1);
			v18 = *(_DWORD*)(v3 + 7188);
			v19 = v17;
			v78 = v17;
			if (*(_DWORD*)(v3 + 7304) == v18 && *(_DWORD*)(v3 + 7308) == *(_DWORD*)(v3 + 7192))
			{
				v20 = *(_QWORD*)(v3 + 7064);
				v21 = *(_QWORD*)(v20 + 16);
				if (v21 != v20)
				{
					do
					{
						v22 = *(_QWORD*)(v3 + 7248);
						v23 = v22;
						v24 = *(_QWORD*)(v22 + 8);
						while (v24)
						{
							if (*(_DWORD*)(v24 + 32) < *(_DWORD*)(v21 + 32))
							{
								v24 = *(_QWORD*)(v24 + 24);
							}
							else
							{
								v23 = v24;
								v24 = *(_QWORD*)(v24 + 16);
							}
						}
						if (v23 == v22 || *(_DWORD*)(v21 + 32) < *(_DWORD*)(v23 + 32))
						{
							v90 = *(_QWORD*)(v3 + 7248);
							v25 = &v90;
						}
						else
						{
							v89 = v23;
							v25 = &v89;
						}
						v26 = *v25;
						if (v26 == v22 || *(_DWORD*)(v26 + 36) != *(_DWORD*)(v21 + 36))
						{
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v27 = a1[2];
							v28 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v27 + 8) = 5;
							*(_QWORD*)v27 = v28;
							a1[2] += 16i64;
							v29 = sub_1400578C0((__int64)a1);
							v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v29);
							v31 = a1[2];
							*(_QWORD*)v31 = *v30;
							*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
							a1[2] += 16i64;
							sub_1400F06F0((__int64)a1, v31, L"idSlider", v32);
							a1[2] -= 16i64;
							sub_140500700(v33, *(_DWORD*)(v21 + 32), *(_DWORD*)(v21 + 36));
							v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v29);
							v35 = a1[2];
							*(_QWORD*)v35 = *v34;
							*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
							a1[2] += 16i64;
							sub_1400F06F0((__int64)a1, v35, L"nCost", v36);
							a1[2] -= 16i64;
							v37 = sub_1401F0BA0(*(_DWORD*)(v21 + 32));
							if (v37)
							{
								sub_14034BDD0(v38, *(_DWORD*)(v37 + 4));
								v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v29);
								v40 = a1[2];
								*(_QWORD*)v40 = *v39;
								*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v40, L"strName", v41);
								a1[2] -= 16i64;
							}
							sub_1400FB1D0((__int64)&v77);
							++v13;
							sub_1400579E0((__int64)a1, v42, v29);
						}
						v43 = *(_QWORD*)(v21 + 24);
						if (v43)
						{
							v21 = *(_QWORD*)(v21 + 24);
							for (i = *(_QWORD*)(v43 + 16); i; i = *(_QWORD*)(i + 16))
								v21 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v21 + 8); v21 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v21 = j;
							if (*(_QWORD*)(v21 + 24) != j)
								v21 = j;
						}
					} while (v21 != *(_QWORD*)(v3 + 7064));
					v14 = (__int64)v79;
					v19 = v78;
				}
				if (!sub_1404FF150(v3))
				{
					v46 = *(_QWORD*)(v3 + 2328);
					v47 = 0i64;
					v82 = 0i64;
					v83 = 0i64;
					v84 = 0i64;
					if (v46)
					{
						if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v46 + 24i64))(v46) > 0)
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
						v47 = v82;
					}
					v48 = *(_QWORD*)(v3 + 2168);
					if (v48)
					{
						v49 = *(int*)(v3 + 7192);
						if (*(_DWORD*)(v3 + 7188) > 0x10u || (unsigned int)v49 > 2)
							v50 = qword_140C658E8;
						else
							v50 = *(_QWORD*)(32i64 * *(int*)(v3 + 7188) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v49;
						(*(void(__fastcall**)(_QWORD, char*, __int64, __int64, __int64(__fastcall**)()))(*(_QWORD*)v48 + 320i64))(
							*(_QWORD*)(v3 + 2168),
							v81,
							v3 + 7120,
							v50,
							v77);
						v47 = v82;
					}
					v51 = 0i64;
					v52 = (v83 - v47) >> 2;
					if (v52)
					{
						v53 = (int*)v47;
						v54 = *(_QWORD*)(v3 + 7280) - v47;
						while (1)
						{
							v55 = *v53;
							LODWORD(v89) = *(int*)((char*)v53 + v54);
							LODWORD(v90) = v55;
							v56 = v55;
							if ((int)(v55 ^ v89) < 0)
								v56 = 0x80000000 - v55;
							if ((int)abs32(v56 - v89) > 84)
								break;
							++v51;
							++v53;
							if (v51 >= v52)
								goto LABEL_69;
						}
						if ((dword_140DC3278 & 1) == 0)
						{
							dword_140DC3284 = 0;
							dword_140DC3278 |= 1u;
						}
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v57 = a1[2];
						v58 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v57 + 8) = 5;
						*(_QWORD*)v57 = v58;
						a1[2] += 16i64;
						v59 = sub_1400578C0((__int64)a1);
						v60 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v59);
						v61 = a1[2];
						*(_QWORD*)v61 = *v60;
						*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v61, L"idSlider", -1);
						a1[2] -= 16i64;
						if (dword_140DC3284)
						{
							v11 = dword_140DC3280;
						}
						else
						{
							dword_140DC3284 = 1;
							v62 = sub_140200220(0x497u);
							if (v62)
								v11 = *(_DWORD*)(v62 + 4);
							dword_140DC3280 = v11;
						}
						v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v59);
						v64 = a1[2];
						*(_QWORD*)v64 = *v63;
						*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v64, L"nCost", v11);
						a1[2] -= 16i64;
						sub_14034BDD0(v65, 644435);
						v66 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v59);
						v67 = a1[2];
						*(_QWORD*)v67 = *v66;
						*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v67, L"strName", v68);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v77);
						++v13;
						sub_1400579E0((__int64)a1, v69, v59);
						v14 = (__int64)v79;
						v19 = v78;
						v47 = v82;
					}
				LABEL_69:
					if (v47)
						sub_14018B900(v47, 0);
				}
			}
			sub_1400FB2A0((__int64)&v85, (__int64)L"arCosts", v19);
			v70 = v86;
			v71 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v86);
			v72 = a1[2];
			*(_QWORD*)v72 = *v71;
			*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v72, L"nCount", v13);
			a1[2] -= 16i64;
			v73 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v70);
			v74 = *v73;
			*(_QWORD*)v75 = *v73;
			*(_DWORD*)(v75 + 8) = *((_DWORD*)v73 + 2);
			a1[2] += 16i64;
			if (v14)
				sub_1400579E0(v14, v74, v19);
			sub_1400579E0((__int64)a1, v74, v70);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1404FDDB8: variable 'v32' is possibly undefined
// 1404FDDC9: variable 'v33' is possibly undefined
// 1404FDE05: variable 'v36' is possibly undefined
// 1404FDE1F: variable 'v38' is possibly undefined
// 1404FDE5B: variable 'v41' is possibly undefined
// 1404FDE79: variable 'v42' is possibly undefined
// 1404FE10B: variable 'v65' is possibly undefined
// 1404FE147: variable 'v68' is possibly undefined
// 1404FE165: variable 'v69' is possibly undefined
// 1404FE1F9: variable 'v75' is possibly undefined
// 1404FE21E: variable 'v74' is possibly undefined
// 140B0F3A0: using guessed type wchar_t aNcount_21[7];
// 140B0F3B0: using guessed type wchar_t aArcosts[8];
// 140B0F468: using guessed type wchar_t aIdslider_4[9];
// 140B0F508: using guessed type wchar_t aStrname_26[8];
// 140B0F518: using guessed type wchar_t aStrname_27[8];
// 140B0F528: using guessed type wchar_t aNcost_0[6];
// 140B0F568: using guessed type wchar_t aNcost[6];
// 140B0F578: using guessed type wchar_t aIdslider_3[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140DC3278: using guessed type int dword_140DC3278;
// 140DC3280: using guessed type int dword_140DC3280;
// 140DC3284: using guessed type int dword_140DC3284;
// 1404FDB50: using guessed type char var_70[8];

