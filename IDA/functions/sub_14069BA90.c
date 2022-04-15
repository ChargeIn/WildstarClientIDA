//----- (000000014069BA90) ----------------------------------------------------
__int64 __fastcall sub_14069BA90(_QWORD* a1)
{
	_QWORD* v1; // r15
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rdi
	int v12; // r10d
	__int64 v13; // rbx
	__int64 i; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int16* v17; // rsi
	signed int LastError; // eax
	bool v19; // sf
	int TimeFormatW; // eax
	__int64 v21; // r14
	WCHAR* lpTimeStr; // rax
	signed int v23; // eax
	bool v24; // sf
	unsigned __int16* v25; // r14
	int* v26; // rax
	unsigned __int64 v27; // r14
	float v28; // xmm2_4
	unsigned __int64 v29; // rax
	signed __int64 v30; // rax
	unsigned __int64 v31; // rtt
	double v32; // xmm0_8
	float v33; // xmm1_4
	float v34; // xmm6_4
	__int64 v35; // rcx
	unsigned __int64 v36; // rax
	float v37; // xmm6_4
	__int64 v38; // r14
	__int64 v39; // rax
	int v40; // eax
	__int64 v41; // rcx
	int v42; // r12d
	_QWORD* v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rdx
	int v46; // r11d
	_QWORD* v47; // rax
	__int64 v48; // r11
	__int64 v49; // rdx
	_QWORD* v50; // rax
	__int64 v51; // r11
	unsigned __int64* v52; // rdx
	unsigned __int64 v53; // r8
	__int64 v54; // rax
	__int64* v55; // rax
	int v56; // ecx
	__int64 v57; // rax
	int v58; // ecx
	__int64 v59; // rcx
	_QWORD* v60; // rax
	__int64 v61; // rdx
	unsigned __int16* v62; // r9
	unsigned __int16* v63; // r8
	unsigned __int16* v64; // r11
	__int64 v65; // rcx
	_QWORD* v66; // rax
	__int64 v67; // rcx
	__int64 v68; // rdx
	int v69; // r11d
	int v70; // ebx
	_QWORD* v71; // rax
	__int64 v72; // r11
	__int64 v73; // rdx
	int v74; // ecx
	__int64 v75; // rcx
	_QWORD* v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rdx
	_QWORD* v79; // rax
	__int64 v80; // rcx
	__int64 v81; // rdx
	unsigned __int16* v82; // r11
	__int64 v83; // rcx
	unsigned __int64 v84; // rax
	__int64 v85; // r14
	__int64 v86; // rax
	int v87; // eax
	unsigned int v88; // ecx
	unsigned int* v89; // rax
	__int64 v90; // rdx
	__int64 v91; // rdx
	__int64 v92; // rax
	__int64 j; // rax
	__int64 v94; // rcx
	__int64 v95; // rax
	_QWORD* v96; // rax
	__int64 v97; // r8
	__int64 v98; // rdx
	int v99; // r10d
	__int64 v101; // [rsp+40h] [rbp-C0h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-B8h] BYREF
	FILETIME FileTime; // [rsp+50h] [rbp-B0h] BYREF
	__int64(__fastcall * *v104)(); // [rsp+58h] [rbp-A8h] BYREF
	__int64 v105; // [rsp+60h] [rbp-A0h]
	_QWORD* v106; // [rsp+68h] [rbp-98h]
	int v107; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v108)(); // [rsp+78h] [rbp-88h] BYREF
	int v109; // [rsp+80h] [rbp-80h]
	_QWORD* v110; // [rsp+88h] [rbp-78h]
	int v111; // [rsp+90h] [rbp-70h]
	__int64 v112[2]; // [rsp+98h] [rbp-68h] BYREF
	__int64 v113[2]; // [rsp+A8h] [rbp-58h] BYREF
	__int64(__fastcall * *v114)(); // [rsp+B8h] [rbp-48h] BYREF
	int v115; // [rsp+C0h] [rbp-40h]
	_QWORD* v116; // [rsp+C8h] [rbp-38h]
	int v117; // [rsp+D0h] [rbp-30h]
	__int64 v118[2]; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v119[2]; // [rsp+E8h] [rbp-18h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+F8h] [rbp-8h] BYREF
	unsigned __int16 v121[40]; // [rsp+110h] [rbp+10h] BYREF

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v101 = v5) != 0))
	{
		v6 = v1[4];
		v7 = *(_QWORD*)(v6 + 112);
		v108 = off_140B569F0;
		v110 = v1;
		v111 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)v1);
		v8 = v1[2];
		v9 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		v1[2] += 16i64;
		v10 = sub_1400578C0((__int64)v1);
		v11 = *(_QWORD*)(v5 + 832);
		v12 = v10;
		v109 = v10;
		if (v11 != *(_QWORD*)(v11 + 16))
		{
			do
			{
				if (*(_BYTE*)v11 || *(_QWORD*)(*(_QWORD*)(v11 + 8) + 8i64) != v11)
				{
					v13 = *(_QWORD*)(v11 + 16);
					if (v13)
					{
						for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
							v13 = i;
					}
					else
					{
						v13 = *(_QWORD*)(v11 + 8);
						if (v11 == *(_QWORD*)(v13 + 16))
						{
							do
							{
								v15 = v13;
								v13 = *(_QWORD*)(v13 + 8);
							} while (v15 == *(_QWORD*)(v13 + 16));
						}
					}
				}
				else
				{
					v13 = *(_QWORD*)(v11 + 24);
				}
				if (*(_DWORD*)(v13 + 48)
					|| (v16 = sub_140643E20(qword_140C65C28, *(_DWORD*)(v13 + 56))) != 0
					&& (*(_BYTE*)(*(_QWORD*)v16 + 12i64) & 2) == 0)
				{
					FileTime = *(FILETIME*)(v13 + 96);
					v17 = 0i64;
					if (!FileTimeToSystemTime(&FileTime, &SystemTime))
					{
						LastError = GetLastError();
						v19 = LastError < 0;
						if (LastError > 0)
							v19 = 1;
						if (v19)
							goto LABEL_28;
					}
					TimeFormatW = GetTimeFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, &SystemTime, 0i64, 0i64, 0);
					if (!TimeFormatW
						|| (v21 = TimeFormatW,
							lpTimeStr = (WCHAR*)sub_14018D140(0i64, TimeFormatW),
							lpTimeStr[v21] = 0,
							v17 = lpTimeStr,
							!GetTimeFormatW(
								*(_DWORD*)(qword_140C7AAC0 + 12),
								0,
								&SystemTime,
								0i64,
								lpTimeStr,
								*((_QWORD*)lpTimeStr - 1))))
					{
						v23 = GetLastError();
						v24 = v23 < 0;
						if (v23 > 0)
							v24 = 1;
						if (v24)
						{
						LABEL_28:
							v25 = v17;
							v26 = sub_14018B280(18i64, 0);
							if (v26)
							{
								*((_QWORD*)v26 + 1) = 0i64;
								*(_QWORD*)v26 = off_140B55060;
							}
							else
							{
								v26 = 0i64;
							}
							v17 = (unsigned __int16*)(v26 + 4);
							*((_WORD*)v26 + 8) = 0;
							if (v25)
								(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v25 - 2) + 8i64))(v25 - 8);
						}
					}
					v27 = *(_QWORD*)(v13 + 96);
					GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
					if (*(_QWORD*)&SystemTimeAsFileTime <= v27)
						v28 = 1.0;
					else
						v28 = -1.0;
					if (*(_QWORD*)&SystemTimeAsFileTime <= v27)
						v29 = v27 - *(_QWORD*)&SystemTimeAsFileTime;
					else
						v29 = *(_QWORD*)&SystemTimeAsFileTime - v27;
					v31 = v29;
					v30 = v29 / 0xC92A69C000i64;
					v32 = (double)(int)(v31 % 0xC92A69C000i64);
					if (((v31 % 0xC92A69C000i64) & 0x8000000000000000ui64) != 0i64)
						v32 = v32 + 1.844674407370955e19;
					v33 = (float)(int)v30;
					if (v30 < 0)
						v33 = v33 + 1.8446744e19;
					v35 = v1[4];
					v114 = off_140B569F0;
					v36 = *(_QWORD*)(v35 + 112);
					v116 = v1;
					v117 = 1;
					v34 = v32 * 1.157407407407407e-12;
					v37 = (float)(v34 + v33) * v28;
					if (*(_QWORD*)(v35 + 120) >= v36)
						sub_14005E2C0((__int64)v1);
					v38 = v1[2];
					v39 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v38 + 8) = 5;
					*(_QWORD*)v38 = v39;
					v1[2] += 16i64;
					v40 = sub_1400578C0((__int64)v1);
					v41 = *(_QWORD*)(v1[4] + 160i64);
					v42 = v40;
					v115 = v40;
					v43 = sub_14005C3C0(v41, v40);
					v44 = v1[2];
					*(_QWORD*)v44 = *v43;
					*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v45, L"eType", v46);
					v1[2] -= 16i64;
					v47 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
					*(_QWORD*)v48 = *v47;
					*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v49, L"strCreationDate", v17);
					v1[2] -= 16i64;
					v50 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
					*(_QWORD*)v51 = *v50;
					*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
					v1[2] += 16i64;
					v52 = (unsigned __int64*)sub_14018F0E0(&v104, L"fCreationTime")[1];
					if (v52)
					{
						v53 = -1i64;
						do
							++v53;
						while (*((_BYTE*)v52 + v53));
						sub_140058710((__int64)v1, v52, v53);
					}
					else
					{
						*(_DWORD*)(v1[2] + 8i64) = 0;
						v1[2] += 16i64;
					}
					if (v105)
						sub_14018B900(v105, 0);
					v54 = v1[2];
					*(_DWORD*)(v54 + 8) = 3;
					*(double*)v54 = v37;
					v1[2] += 16i64;
					v55 = (__int64*)sub_1400580E0((__int64)v1, -3);
					sub_14005EA50((__int64)v1, v55, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
					v1[2] -= 48i64;
					v56 = *(_DWORD*)(v13 + 48);
					if (v56)
					{
						if ((unsigned int)(v56 - 1) <= 1)
						{
							v83 = v1[4];
							v106 = v1;
							v104 = off_140B569F0;
							v84 = *(_QWORD*)(v83 + 112);
							v107 = 1;
							if (*(_QWORD*)(v83 + 120) >= v84)
								sub_14005E2C0((__int64)v1);
							v85 = v1[2];
							v86 = sub_14005C1B0((__int64)v1, 0, 0);
							*(_DWORD*)(v85 + 8) = 5;
							*(_QWORD*)v85 = v86;
							v1[2] += 16i64;
							v87 = sub_1400578C0((__int64)v1);
							v88 = *(_DWORD*)(v13 + 56);
							LODWORD(v85) = v87;
							LODWORD(v105) = v87;
							v89 = (unsigned int*)sub_140202CA0(v88);
							sub_140580280(v101, (__int64)&v104, v89);
							sub_1400FB2A0((__int64)&v114, (__int64)L"tGuildPerk", v85);
							sub_1400579E0((__int64)v1, v90, v85);
						}
						else if ((unsigned int)(v56 - 3) <= 1)
						{
							v74 = *(_DWORD*)(qword_140C635F0 + 5760);
							v118[1] = *(_QWORD*)(v13 + 56);
							LODWORD(v118[0]) = v74;
							v119[1] = 0i64;
							v119[0] = 0i64;
							if ((unsigned int)sub_1403F82F0(qword_140C65898, 5, v118, v121, 0x21u, v119, 0i64))
							{
								v76 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
								v77 = v1[2];
								*(_QWORD*)v77 = *v76;
								*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
								v1[2] += 16i64;
								sub_1400F0870((__int64)v1, v78, L"strMemberName", v121);
							}
							else
							{
								sub_14034BDD0(v75, 108);
								v79 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
								v80 = v1[2];
								*(_QWORD*)v80 = *v79;
								*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
								v1[2] += 16i64;
								sub_1400F0870((__int64)v1, v81, L"strMemberName", v82);
							}
							v1[2] -= 16i64;
						}
						else if (v56 == 5)
						{
							v58 = *(_DWORD*)(qword_140C635F0 + 5760);
							v112[1] = *(_QWORD*)(v13 + 56);
							LODWORD(v112[0]) = v58;
							v113[1] = 0i64;
							v113[0] = 0i64;
							if ((unsigned int)sub_1403F82F0(qword_140C65898, 5, v112, v121, 0x21u, v113, 0i64))
							{
								v60 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
								v62 = v121;
								v63 = L"strMemberName";
							}
							else
							{
								sub_14034BDD0(v59, 108);
								v60 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
								v62 = v64;
								v63 = L"strMemberName";
							}
							v65 = v1[2];
							*(_QWORD*)v65 = *v60;
							*(_DWORD*)(v65 + 8) = *((_DWORD*)v60 + 2);
							v1[2] += 16i64;
							sub_1400F0870((__int64)v1, v61, v63, v62);
							v1[2] -= 16i64;
							v66 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
							v67 = v1[2];
							*(_QWORD*)v67 = *v66;
							*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v68, L"nOldRank", v69);
							v1[2] -= 16i64;
							v70 = *(_DWORD*)(v13 + 72);
							v71 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
							*(_QWORD*)v72 = *v71;
							*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v73, L"nNewRank", v70);
							v1[2] -= 16i64;
						}
					}
					else
					{
						v57 = sub_140643E20(qword_140C65C28, *(_DWORD*)(v13 + 56));
						if (v57 && (unsigned int)sub_1404332A0(v1, v57))
						{
							sub_1400FB540((__int64)&v114);
							v1[2] -= 16i64;
						}
					}
					sub_1400FB1D0((__int64)&v108);
					sub_1400579E0((__int64)v1, v91, v42);
					if (v17)
						(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 8);
					v5 = v101;
				}
				if (*(_BYTE*)v11 || *(_QWORD*)(*(_QWORD*)(v11 + 8) + 8i64) != v11)
				{
					v92 = *(_QWORD*)(v11 + 16);
					if (v92)
					{
						v11 = *(_QWORD*)(v11 + 16);
						for (j = *(_QWORD*)(v92 + 24); j; j = *(_QWORD*)(j + 24))
							v11 = j;
					}
					else
					{
						v94 = *(_QWORD*)(v11 + 8);
						if (v11 == *(_QWORD*)(v94 + 16))
						{
							do
							{
								v95 = v94;
								v94 = *(_QWORD*)(v94 + 8);
							} while (v95 == *(_QWORD*)(v94 + 16));
						}
						v11 = v94;
					}
				}
				else
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
			} while (v11 != *(_QWORD*)(*(_QWORD*)(v5 + 832) + 16i64));
			v1 = v110;
			v12 = v109;
		}
		v96 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v12);
		v97 = v1[2];
		*(_QWORD*)v97 = *v96;
		v98 = *((unsigned int*)v96 + 2);
		*(_DWORD*)(v97 + 8) = v98;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v98, v99);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	return 1i64;
}
// 14069BAE2: variable 'v3' is possibly undefined
// 14069BE5C: variable 'v45' is possibly undefined
// 14069BE5C: variable 'v46' is possibly undefined
// 14069BE90: variable 'v48' is possibly undefined
// 14069BEA0: variable 'v49' is possibly undefined
// 14069BED3: variable 'v51' is possibly undefined
// 14069C04F: variable 'v59' is possibly undefined
// 14069C06A: variable 'v64' is possibly undefined
// 14069C090: variable 'v61' is possibly undefined
// 14069C0D7: variable 'v68' is possibly undefined
// 14069C0D7: variable 'v69' is possibly undefined
// 14069C10E: variable 'v72' is possibly undefined
// 14069C11E: variable 'v73' is possibly undefined
// 14069C1BA: variable 'v78' is possibly undefined
// 14069C1CE: variable 'v75' is possibly undefined
// 14069C20F: variable 'v81' is possibly undefined
// 14069C20F: variable 'v82' is possibly undefined
// 14069C2B0: variable 'v90' is possibly undefined
// 14069C2C8: variable 'v91' is possibly undefined
// 14069C3C4: variable 'v99' is possibly undefined
// 140B34808: using guessed type wchar_t aStrcreationdat[16];
// 140B34828: using guessed type wchar_t aFcreationtime[14];
// 140B34848: using guessed type wchar_t aEtype_24[6];
// 140B34A68: using guessed type wchar_t aNoldrank[9];
// 140B34A80: using guessed type wchar_t aNnewrank[9];
// 140B34A98: using guessed type wchar_t aStrmembername_0[14];
// 140B34AB8: using guessed type wchar_t aStrmembername_1[14];
// 140B34AD8: using guessed type wchar_t aStrmembername_2[14];
// 140B34AF8: using guessed type wchar_t aStrmembername_3[14];
// 140B34B30: using guessed type wchar_t aTguildperk[11];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 14069BA90: using guessed type unsigned __int16 var_E0[40];

