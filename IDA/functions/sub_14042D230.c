#include "../winhttp.h"

//----- (000000014042D230) ----------------------------------------------------
void __fastcall sub_14042D230(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v7; // r12
	__int64 v8; // r14
	_QWORD* v9; // rdi
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rdx
	int v18; // r10d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	__int64 v27; // rcx
	unsigned __int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	unsigned int v35; // eax
	__int64 v36; // rcx
	unsigned __int64 v37; // rax
	__int64 v38; // rbx
	__int64 v39; // rax
	unsigned int v40; // eax
	int v41; // r13d
	__int64 v42; // rcx
	unsigned __int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	int v46; // eax
	int v47; // edx
	__int64 v48; // rcx
	_QWORD* v49; // rax
	__int64 v50; // rdx
	unsigned __int16* v51; // r10
	_QWORD* v52; // rax
	__int64 v53; // r11
	__int64 v54; // rdx
	unsigned __int16* v55; // r10
	__int64 v56; // rcx
	unsigned __int64 v57; // rax
	__int64 v58; // rsi
	__int64 v59; // rbx
	__int64 v60; // rax
	__int64 v61; // r14
	int v62; // ebx
	__int64 v63; // rcx
	unsigned __int64 v64; // rax
	__int64 v65; // rbx
	__int64 v66; // rax
	int v67; // ebx
	int v68; // r13d
	__int64 v69; // rcx
	__int64 v70; // r12
	_QWORD* v71; // rax
	__int64 v72; // rdx
	unsigned __int64* v73; // r14
	unsigned __int64 v74; // rsi
	__int64 v75; // rbx
	__int64 v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rax
	__int64* v79; // rax
	unsigned int v80; // edx
	__int64 v81; // r8
	__int64 v82; // rcx
	__int64 v83; // rax
	__int64* v84; // rax
	__int64 v85; // rax
	__int64 v86; // rdx
	__int64 v87; // rdx
	int v88; // r14d
	__int64 v89; // rdx
	__int64 v90; // [rsp+20h] [rbp-E0h]
	int v91; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v92)(); // [rsp+38h] [rbp-C8h] BYREF
	int v93; // [rsp+40h] [rbp-C0h]
	_QWORD* v94; // [rsp+48h] [rbp-B8h]
	int v95; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v96)(); // [rsp+58h] [rbp-A8h] BYREF
	int v97; // [rsp+60h] [rbp-A0h]
	_QWORD* v98; // [rsp+68h] [rbp-98h]
	int v99; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v100)(); // [rsp+78h] [rbp-88h] BYREF
	int v101; // [rsp+80h] [rbp-80h]
	_QWORD* v102; // [rsp+88h] [rbp-78h]
	int v103; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v104)(); // [rsp+98h] [rbp-68h] BYREF
	int v105; // [rsp+A0h] [rbp-60h]
	_QWORD* v106; // [rsp+A8h] [rbp-58h]
	int v107; // [rsp+B0h] [rbp-50h]
	__int64 v108; // [rsp+B8h] [rbp-48h] BYREF
	__int64(__fastcall * *v109)(); // [rsp+C0h] [rbp-40h] BYREF
	int v110; // [rsp+C8h] [rbp-38h]
	_QWORD* v111; // [rsp+D0h] [rbp-30h]
	int v112; // [rsp+D8h] [rbp-28h]
	__int64 v113; // [rsp+E0h] [rbp-20h] BYREF
	__int64(__fastcall * *v114)(); // [rsp+E8h] [rbp-18h] BYREF
	int v115; // [rsp+F0h] [rbp-10h]
	_QWORD* v116; // [rsp+F8h] [rbp-8h]
	int v117; // [rsp+100h] [rbp+0h]
	__int64(__fastcall * *v118)(); // [rsp+108h] [rbp+8h] BYREF
	int v119; // [rsp+110h] [rbp+10h]
	_QWORD* v120; // [rsp+118h] [rbp+18h]
	int v121; // [rsp+120h] [rbp+20h]
	_QWORD v122[5]; // [rsp+128h] [rbp+28h] BYREF

	v7 = a2;
	v8 = sub_140229540(a4);
	if (v8)
	{
		v9 = *(_QWORD**)(a1 + 400);
		v10 = v9[4];
		v95 = 1;
		v11 = *(_QWORD*)(v10 + 112);
		v92 = off_140B569F0;
		v94 = v9;
		if (*(_QWORD*)(v10 + 120) >= v11)
			sub_14005E2C0((__int64)v9);
		v12 = v9[2];
		v13 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		v9[2] += 16i64;
		v14 = sub_1400578C0((__int64)v9);
		v15 = *(_QWORD*)(v9[4] + 160i64);
		LODWORD(v12) = v14;
		v93 = v14;
		v16 = sub_14005C3C0(v15, v14);
		v17 = v9[2];
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
		v9[2] += 16i64;
		sub_1400F06F0((__int64)v9, v17, L"nElapsedTime", v18);
		v9[2] -= 16i64;
		v19 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), v12);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		v9[2] += 16i64;
		sub_1400F06F0((__int64)v9, v21, L"eRewardTier", v22);
		v9[2] -= 16i64;
		v23 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), v12);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		v9[2] += 16i64;
		sub_1400F06F0((__int64)v9, v25, L"eRewardType", v26);
		v9[2] -= 16i64;
		v27 = v9[4];
		v96 = off_140B569F0;
		v28 = *(_QWORD*)(v27 + 112);
		v98 = v9;
		v99 = 1;
		if (*(_QWORD*)(v27 + 120) >= v28)
			sub_14005E2C0((__int64)v9);
		v29 = v9[2];
		v30 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v29 + 8) = 5;
		*(_QWORD*)v29 = v30;
		v9[2] += 16i64;
		v97 = sub_1400578C0((__int64)v9);
		sub_1400FA9E0((__int64)&v96);
		sub_1400FA9E0((__int64)&v96);
		sub_1400FA9E0((__int64)&v96);
		sub_1400FB2A0((__int64)&v92, (__int64)L"arRewardThresholds", v97);
		v31 = v9[4];
		v104 = off_140B569F0;
		v32 = *(_QWORD*)(v31 + 112);
		v106 = v9;
		v107 = 1;
		if (*(_QWORD*)(v31 + 120) >= v32)
			sub_14005E2C0((__int64)v9);
		v33 = v9[2];
		v34 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v33 + 8) = 5;
		*(_QWORD*)v33 = v34;
		v9[2] += 16i64;
		v105 = sub_1400578C0((__int64)v9);
		v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
		sub_140433B50((__int64)&v104, *(unsigned int**)(a3 + 40), *(unsigned int*)(a3 + 32), v35, a4);
		sub_1400FB2A0((__int64)&v92, (__int64)L"arTeamStats", v105);
		v36 = v9[4];
		v109 = off_140B569F0;
		v37 = *(_QWORD*)(v36 + 112);
		v111 = v9;
		v112 = 1;
		if (*(_QWORD*)(v36 + 120) >= v37)
			sub_14005E2C0((__int64)v9);
		v38 = v9[2];
		v39 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v38 + 8) = 5;
		*(_QWORD*)v38 = v39;
		v9[2] += 16i64;
		v110 = sub_1400578C0((__int64)v9);
		v40 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
		sub_140433CE0((__int64)&v109, *(_QWORD*)(a3 + 56), *(unsigned int*)(a3 + 48), v40);
		v41 = v110;
		sub_1400FB2A0((__int64)&v92, (__int64)L"arParticipantStats", v110);
		v42 = v9[4];
		v43 = *(_QWORD*)(v42 + 112);
		v100 = off_140B569F0;
		v102 = v9;
		v103 = 1;
		if (*(_QWORD*)(v42 + 120) >= v43)
			sub_14005E2C0((__int64)v9);
		v44 = v9[2];
		v45 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v44 + 8) = 5;
		*(_QWORD*)v44 = v45;
		v9[2] += 16i64;
		v46 = sub_1400578C0((__int64)v9);
		v47 = *(_DWORD*)(v8 + 4);
		LODWORD(v44) = v46;
		v101 = v46;
		sub_14034BDD0(v48, v47);
		v49 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), v44);
		v50 = v9[2];
		*(_QWORD*)v50 = *v49;
		*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
		v9[2] += 16i64;
		sub_1400F0870((__int64)v9, v50, L"strTeamName", v51);
		v9[2] -= 16i64;
		v52 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), v44);
		*(_QWORD*)v53 = *v52;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
		v9[2] += 16i64;
		sub_1400F0870((__int64)v9, v54, L"strName", v55);
		v9[2] -= 16i64;
		sub_1405F0EA0((__int64)&v100, a3 + 16, v7);
		sub_1400FB2A0((__int64)&v92, (__int64)L"arPersonalStats", v101);
		v56 = v9[4];
		v114 = off_140B569F0;
		v57 = *(_QWORD*)(v56 + 112);
		v58 = (__int64)v9;
		v116 = v9;
		v117 = 1;
		if (*(_QWORD*)(v56 + 120) >= v57)
			sub_14005E2C0((__int64)v9);
		v59 = v9[2];
		v60 = sub_14005C1B0((__int64)v9, 0, 0);
		*(_DWORD*)(v59 + 8) = 5;
		*(_QWORD*)v59 = v60;
		v9[2] += 16i64;
		v61 = 0i64;
		v62 = sub_1400578C0((__int64)v9);
		v115 = v62;
		v91 = 0;
		if (*(_DWORD*)(a3 + 64))
		{
			do
			{
				v63 = v9[4];
				v120 = v9;
				v118 = off_140B569F0;
				v64 = *(_QWORD*)(v63 + 112);
				v121 = 1;
				if (*(_QWORD*)(v63 + 120) >= v64)
					sub_14005E2C0((__int64)v9);
				v65 = v9[2];
				v66 = sub_14005C1B0((__int64)v9, 0, 0);
				*(_DWORD*)(v65 + 8) = 5;
				*(_QWORD*)v65 = v66;
				v9[2] += 16i64;
				v67 = sub_1400578C0((__int64)v9);
				v68 = *(_DWORD*)(*(_QWORD*)(a3 + 72) + 8 * v61 + 4);
				v69 = v9[4];
				v119 = v67;
				v70 = (unsigned int)v61;
				v71 = sub_14005C3C0(*(_QWORD*)(v69 + 160), v67);
				v72 = v9[2];
				*(_QWORD*)v72 = *v71;
				*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
				v9[2] += 16i64;
				v73 = (unsigned __int64*)sub_14018F0E0(v122, L"eStatus")[1];
				if (v73)
				{
					v74 = -1i64;
					do
						++v74;
					while (*((_BYTE*)v73 + v74));
					if (*(_QWORD*)(v9[4] + 120i64) >= *(_QWORD*)(v9[4] + 112i64))
						sub_14005E2C0((__int64)v9);
					v75 = v9[2];
					v76 = sub_140062650((__int64)v9, v73, v74);
					*(_DWORD*)(v75 + 8) = 4;
					*(_QWORD*)v75 = v76;
					v67 = v119;
				}
				else
				{
					*(_DWORD*)(v9[2] + 8i64) = 0;
				}
				v77 = v122[1];
				v9[2] += 16i64;
				if (v77)
					sub_14018B900(v77, 0);
				v78 = v9[2];
				*(_DWORD*)(v78 + 8) = 3;
				*(double*)v78 = (double)v68;
				v9[2] += 16i64;
				v79 = (__int64*)sub_1400580E0((__int64)v9, -3);
				sub_14005EA50((__int64)v9, v79, (int*)(v9[2] - 32i64), (unsigned int*)(v9[2] - 16i64));
				v9[2] -= 48i64;
				v80 = *(_DWORD*)(*(_QWORD*)(a3 + 72) + 8 * v70);
				v81 = *(_QWORD*)(qword_140C65988 + 48);
				v82 = v81;
				v83 = *(_QWORD*)(v81 + 8);
				while (v83)
				{
					if (*(_DWORD*)(v83 + 32) < v80)
					{
						v83 = *(_QWORD*)(v83 + 24);
					}
					else
					{
						v82 = v83;
						v83 = *(_QWORD*)(v83 + 16);
					}
				}
				if (v82 == v81 || v80 < *(_DWORD*)(v82 + 32))
				{
					v108 = *(_QWORD*)(qword_140C65988 + 48);
					v84 = &v108;
				}
				else
				{
					v113 = v82;
					v84 = &v113;
				}
				v85 = *v84;
				if (v85 == v81)
					v86 = 0i64;
				else
					v86 = *(_QWORD*)(v85 + 40);
				if ((unsigned int)sub_140432D60(v9, v86))
				{
					sub_1400FB540((__int64)&v118);
					v9[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v114);
				sub_1400579E0((__int64)v9, v87, v67);
				v61 = (unsigned int)(v91 + 1);
				v91 = v61;
			} while ((unsigned int)v61 < *(_DWORD*)(a3 + 64));
			v58 = (__int64)v116;
			v62 = v115;
			v7 = a2;
			v41 = v110;
		}
		sub_1400FB2A0((__int64)&v92, (__int64)L"arObjectives", v62);
		v88 = v93;
		LODWORD(v90) = *(_DWORD*)(a3 + 4);
		sub_1400EA3E0(a1, "PublicEventEnd", byte_1409ED244, v7, v90, v93);
		if (v58)
			sub_1400579E0(v58, v89, v62);
		if (v102)
			sub_1400579E0((__int64)v102, v89, v101);
		if (v111)
			sub_1400579E0((__int64)v111, v89, v41);
		if (v106)
			sub_1400579E0((__int64)v106, v89, v105);
		if (v98)
			sub_1400579E0((__int64)v98, v89, v97);
		sub_1400579E0((__int64)v9, v89, v88);
	}
}
// 14042D31B: variable 'v18' is possibly undefined
// 14042D34C: variable 'v20' is possibly undefined
// 14042D35E: variable 'v21' is possibly undefined
// 14042D35E: variable 'v22' is possibly undefined
// 14042D38F: variable 'v24' is possibly undefined
// 14042D3A1: variable 'v25' is possibly undefined
// 14042D3A1: variable 'v26' is possibly undefined
// 14042D5AA: variable 'v48' is possibly undefined
// 14042D5E6: variable 'v51' is possibly undefined
// 14042D621: variable 'v53' is possibly undefined
// 14042D633: variable 'v54' is possibly undefined
// 14042D633: variable 'v55' is possibly undefined
// 14042D8B5: variable 'v87' is possibly undefined
// 14042D921: variable 'v90' is possibly undefined
// 14042D931: variable 'v89' is possibly undefined
// 1409ED244: using guessed type _BYTE byte_1409ED244[4];
// 140B010A8: using guessed type wchar_t aArrewardthresh[19];
// 140B010D0: using guessed type wchar_t aErewardtype[12];
// 140B010E8: using guessed type wchar_t aErewardtier[12];
// 140B01100: using guessed type wchar_t aNelapsedtime[13];
// 140B01120: using guessed type wchar_t aStrname_14[8];
// 140B01130: using guessed type wchar_t aStrteamname[12];
// 140B01148: using guessed type wchar_t aArparticipants[19];
// 140B01170: using guessed type wchar_t aArteamstats[12];
// 140B01188: using guessed type wchar_t aArobjectives[13];
// 140B011C8: using guessed type wchar_t aEstatus_1[8];
// 140B011D8: using guessed type wchar_t aArpersonalstat[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65988: using guessed type __int64 qword_140C65988;

