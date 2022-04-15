#include "../winhttp.h"

//----- (00000001404FBBE0) ----------------------------------------------------
__int64 __fastcall sub_1404FBBE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r15
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	int v11; // ebp
	unsigned __int64 v12; // rax
	int v13; // r13d
	int v14; // r14d
	int v15; // esi
	__int64 v16; // rdi
	__int64 v17; // rax
	unsigned __int64 v18; // rdi
	int v19; // r12d
	bool v20; // cc
	__int64 v21; // rax
	_DWORD* v22; // rax
	int v23; // esi
	unsigned int v24; // esi
	int v25; // eax
	int v26; // r13d
	int v27; // ecx
	__int64 v28; // rdi
	__int64 v29; // rax
	int v30; // r14d
	_QWORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r11
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r11
	__int64 v39; // rdx
	int v40; // edi
	_QWORD* v41; // rax
	__int64 v42; // r11
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	_DWORD* v45; // rcx
	__int64* v46; // rax
	__int64 v47; // rdi
	_QWORD* v48; // rax
	__int64 v49; // rdx
	int v50; // r11d
	__int64 v51; // rax
	__int64 v52; // rcx
	_QWORD* v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rdx
	unsigned __int16* v56; // r11
	_QWORD* v57; // rax
	__int64 v58; // rcx
	unsigned __int64* v59; // rdx
	unsigned __int64 v60; // r8
	_DWORD* v61; // rcx
	__int64* v62; // rax
	__int64 v63; // rdx
	int v64; // r15d
	_QWORD* v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rdx
	int v68; // esi
	_QWORD* v69; // rax
	__int64 v70; // rcx
	__int64 v71; // rdx
	_QWORD* v72; // rax
	__int64 v73; // r11
	unsigned __int64* v74; // rdx
	_DWORD* v75; // rax
	__int64* v76; // rax
	_QWORD* v77; // rax
	__int64 v78; // rdx
	__int64 v79; // r11
	__int64 v80; // rcx
	int v82; // [rsp+20h] [rbp-A8h]
	_DWORD* v83; // [rsp+28h] [rbp-A0h]
	__int64(__fastcall * *v84)(); // [rsp+30h] [rbp-98h] BYREF
	int v85; // [rsp+38h] [rbp-90h]
	_QWORD* v86; // [rsp+40h] [rbp-88h]
	int v87; // [rsp+48h] [rbp-80h]
	__int64(__fastcall * *v88)(); // [rsp+50h] [rbp-78h] BYREF
	int v89; // [rsp+58h] [rbp-70h]
	_QWORD* v90; // [rsp+60h] [rbp-68h]
	int v91; // [rsp+68h] [rbp-60h]
	__int64 v92; // [rsp+70h] [rbp-58h] BYREF
	__int64 v93; // [rsp+78h] [rbp-50h]
	int v94; // [rsp+D8h] [rbp+10h]
	int v95; // [rsp+E0h] [rbp+18h]
	int v96; // [rsp+E8h] [rbp+20h]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 2328);
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	if (!*(_QWORD*)(v3 + 2168))
		return 0i64;
	v5 = a1[4];
	v6 = *(_QWORD*)(v5 + 112);
	v90 = a1;
	v91 = 1;
	v88 = off_140B569F0;
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
	v89 = v9;
	v12 = *(_QWORD*)(v10 + 112);
	v13 = 0;
	v94 = 0;
	v14 = 0;
	v15 = 0;
	v84 = off_140B569F0;
	v86 = a1;
	v87 = 1;
	if (*(_QWORD*)(v10 + 120) >= v12)
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	v18 = -1i64;
	v85 = sub_1400578C0((__int64)a1);
	v95 = 0;
	v19 = 0;
	v20 = 1;
	do
	{
		if (v20)
		{
			v21 = *(int*)(v3 + 7200);
			if ((int)v21 < 23)
			{
				v22 = (_DWORD*)(v3 + 4 * (v21 + 23i64 * v19 + 2 * (v21 + 23i64 * v19 + 292)));
				v83 = v22;
				if (v22)
				{
					if (v22[2] || v22[1])
					{
						v23 = v15 + 1;
						v82 = v23;
						if (!v13)
							v94 = *v22;
						if (v19 == *(_DWORD*)(v3 + 7188))
							v14 = v23;
						v24 = 0;
						v96 = v14;
						do
						{
							if ((v19 != 13 || !v24) && v24 != 2)
							{
								v25 = *(_DWORD*)(v3 + 7188);
								v26 = 0;
								if (v19 == v25)
								{
									v27 = *(_DWORD*)(v3 + 7192);
									if (v24 == v27)
									{
										v26 = 1;
										if (v25 != *(_DWORD*)(v3 + 7304) || v27 != *(_DWORD*)(v3 + 7308))
											v95 = 1;
									}
								}
								if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
									sub_14005E2C0((__int64)a1);
								v28 = a1[2];
								v29 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v28 + 8) = 5;
								*(_QWORD*)v28 = v29;
								a1[2] += 16i64;
								v30 = sub_1400578C0((__int64)a1);
								v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								v32 = a1[2];
								*(_QWORD*)v32 = *v31;
								*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v33, L"idRace", v19);
								a1[2] -= 16i64;
								v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								*(_QWORD*)v35 = *v34;
								*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v36, L"idGender", v24);
								a1[2] -= 16i64;
								LODWORD(v28) = *v83;
								v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								*(_QWORD*)v38 = *v37;
								*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v39, L"idSlider", v28);
								a1[2] -= 16i64;
								v40 = v83[2];
								v41 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								*(_QWORD*)v42 = *v41;
								*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
								a1[2] += 16i64;
								v43 = (unsigned __int64*)sub_14018F0E0(&v92, L"bAvailable")[1];
								if (v43)
								{
									v44 = -1i64;
									do
										++v44;
									while (*((_BYTE*)v43 + v44));
									sub_140058710((__int64)a1, v43, v44);
								}
								else
								{
									*(_DWORD*)(a1[2] + 8i64) = 0;
									a1[2] += 16i64;
								}
								if (v93)
									sub_14018B900(v93, 0);
								v45 = (_DWORD*)a1[2];
								v45[2] = 1;
								*v45 = v40 != 0;
								a1[2] += 16i64;
								v46 = (__int64*)sub_1400580E0((__int64)a1, -3);
								sub_14005EA50((__int64)a1, v46, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
								a1[2] -= 48i64;
								v47 = a1[2];
								v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								*(_QWORD*)v47 = *v48;
								*(_DWORD*)(v47 + 8) = *((_DWORD*)v48 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v49, L"idEntitlementRequired", v50);
								a1[2] -= 16i64;
								v51 = sub_1401FE020(v83[1]);
								if (v51)
								{
									sub_14034BDD0(v52, *(_DWORD*)(v51 + 20));
									v53 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
									v54 = a1[2];
									*(_QWORD*)v54 = *v53;
									*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
									a1[2] += 16i64;
									sub_1400F0870((__int64)a1, v55, L"strRequiredEntitlementDesc", v56);
									a1[2] -= 16i64;
								}
								v57 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v30);
								v58 = a1[2];
								*(_QWORD*)v58 = *v57;
								*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
								a1[2] += 16i64;
								v59 = (unsigned __int64*)sub_14018F0E0(&v92, L"bCurrent")[1];
								if (v59)
								{
									v18 = -1i64;
									v60 = -1i64;
									do
										++v60;
									while (*((_BYTE*)v59 + v60));
									sub_140058710((__int64)a1, v59, v60);
								}
								else
								{
									*(_DWORD*)(a1[2] + 8i64) = 0;
									a1[2] += 16i64;
									v18 = -1i64;
								}
								if (v93)
									sub_14018B900(v93, 0);
								v61 = (_DWORD*)a1[2];
								v61[2] = 1;
								*v61 = v26 != 0;
								a1[2] += 16i64;
								v62 = (__int64*)sub_1400580E0((__int64)a1, -3);
								sub_14005EA50((__int64)a1, v62, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
								a1[2] -= 48i64;
								sub_1400FB1D0((__int64)&v84);
								sub_1400579E0((__int64)a1, v63, v30);
							}
							++v24;
						} while (v24 < 3);
						v14 = v96;
						v15 = v82;
						v13 = v94;
					}
				}
			}
		}
		v20 = ++v19 < 17;
	} while ((unsigned int)v19 < 0x11);
	v64 = v89;
	v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v89);
	v66 = a1[2];
	*(_QWORD*)v66 = *v65;
	*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v67, L"idSlider", v13);
	v68 = v85;
	a1[2] -= 16i64;
	sub_1400FB2A0((__int64)&v88, (__int64)L"arRaces", v68);
	v69 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v64);
	v70 = a1[2];
	*(_QWORD*)v70 = *v69;
	*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v71, L"nValueIdx", v14);
	a1[2] -= 16i64;
	v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v64);
	*(_QWORD*)v73 = *v72;
	*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
	a1[2] += 16i64;
	v74 = (unsigned __int64*)sub_14018F0E0(&v92, L"bChanged")[1];
	if (v74)
	{
		do
			++v18;
		while (*((_BYTE*)v74 + v18));
		sub_140058710((__int64)a1, v74, v18);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v93)
		sub_14018B900(v93, 0);
	v75 = (_DWORD*)a1[2];
	v75[2] = 1;
	LOBYTE(v11) = v95 != 0;
	*v75 = v11;
	a1[2] += 16i64;
	v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v77 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v64);
	*(_QWORD*)v79 = *v77;
	*(_DWORD*)(v79 + 8) = *((_DWORD*)v77 + 2);
	v80 = (__int64)v86;
	a1[2] += 16i64;
	if (v80)
		sub_1400579E0(v80, v78, v68);
	sub_1400579E0((__int64)a1, v78, v64);
	return 1i64;
}
// 1404FBE7A: variable 'v33' is possibly undefined
// 1404FBEAE: variable 'v35' is possibly undefined
// 1404FBEBE: variable 'v36' is possibly undefined
// 1404FBEF9: variable 'v38' is possibly undefined
// 1404FBF09: variable 'v39' is possibly undefined
// 1404FBF44: variable 'v42' is possibly undefined
// 1404FC01A: variable 'v49' is possibly undefined
// 1404FC01A: variable 'v50' is possibly undefined
// 1404FC039: variable 'v52' is possibly undefined
// 1404FC07A: variable 'v55' is possibly undefined
// 1404FC07A: variable 'v56' is possibly undefined
// 1404FC15B: variable 'v63' is possibly undefined
// 1404FC1CA: variable 'v67' is possibly undefined
// 1404FC225: variable 'v71' is possibly undefined
// 1404FC258: variable 'v73' is possibly undefined
// 1404FC33A: variable 'v79' is possibly undefined
// 1404FC357: variable 'v78' is possibly undefined
// 140B0EFC0: using guessed type wchar_t aIdrace_0[7];
// 140B0EFF8: using guessed type wchar_t aIdslider[9];
// 140B0F010: using guessed type wchar_t aIdgender_0[9];
// 140B0F2B0: using guessed type wchar_t aArraces[8];
// 140B0F2C0: using guessed type wchar_t aIdslider_0[9];
// 140B0F2D8: using guessed type wchar_t aBchanged[9];
// 140B0F2F0: using guessed type wchar_t aNvalueidx[10];
// 140B0F308: using guessed type wchar_t aIdentitlementr[22];
// 140B0F338: using guessed type wchar_t aBavailable[11];
// 140B0F350: using guessed type wchar_t aBcurrent_0[9];
// 140B0F368: using guessed type wchar_t aStrrequiredent[27];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

