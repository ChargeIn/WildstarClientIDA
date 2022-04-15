//----- (00000001404045C0) ----------------------------------------------------
void __fastcall sub_1404045C0(
	__int64* a1,
	unsigned int a2,
	unsigned __int64 a3,
	int a4,
	int* a5,
	unsigned __int16* a6,
	int a7,
	int** a8,
	int a9,
	int a10,
	int a11,
	int a12,
	int a13,
	unsigned __int8 a14)
{
	int** v14; // rsi
	int v15; // ebx
	int* v17; // rdi
	int v19; // r14d
	__int64 v20; // rax
	__int64 v21; // r13
	__int64 v22; // rbx
	__int64 v23; // rbx
	__int64 v24; // rcx
	__int64 v25; // rdi
	__int64 v26; // rax
	int v27; // r14d
	__int64 v28; // rdx
	__int64 v29; // rsi
	__int64 v30; // rdx
	__int64 v31; // rdi
	__int64 v32; // rax
	int v33; // eax
	__int64 v34; // rsi
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64 v37; // rcx
	_QWORD* v38; // rax
	__int64 v39; // rdx
	unsigned __int64 v40; // rdi
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	_DWORD* v43; // rcx
	__int64* v44; // rax
	_QWORD* v45; // rax
	__int64 v46; // r10
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	_DWORD* v49; // rcx
	__int64* v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // r10
	unsigned __int64* v53; // rdx
	unsigned __int64 v54; // r8
	_DWORD* v55; // rcx
	__int64* v56; // rax
	_QWORD* v57; // rax
	unsigned __int16* v58; // r9
	__int64 v59; // r10
	__int64 v60; // rdx
	_QWORD* v61; // rax
	unsigned __int16* v62; // r9
	__int64 v63; // r10
	__int64 v64; // rdx
	_QWORD* v65; // rax
	__int64 v66; // r10
	__int64 v67; // rdx
	int v68; // r12d
	_QWORD* v69; // rax
	__int64 v70; // rdx
	unsigned __int64* v71; // rdx
	unsigned __int64 v72; // r8
	_DWORD* v73; // rcx
	__int64* v74; // rax
	int v75; // esi
	_QWORD* v76; // rax
	__int64 v77; // r10
	unsigned __int64* v78; // rdx
	_DWORD* v79; // rcx
	__int64* v80; // rax
	_QWORD* v81; // rax
	__int64 v82; // r10
	__int64 v83; // rdx
	int v84; // r11d
	_QWORD* v85; // rax
	__int64 v86; // rdx
	__int64 v87; // rcx
	__int64 v88; // rdx
	__int64 v89; // rcx
	int* v90; // rax
	int* v91; // rdx
	void* v92; // r8
	void* v93; // r9
	bool v94; // zf
	int* v95; // rbx
	void* v96; // rcx
	const wchar_t* v97; // rax
	unsigned __int16* v98; // rdi
	int* v99; // rsi
	__int64(__fastcall * *v100)(); // [rsp+68h] [rbp-98h] BYREF
	int* v101; // [rsp+70h] [rbp-90h]
	int* v102; // [rsp+78h] [rbp-88h]
	int* v103; // [rsp+80h] [rbp-80h]
	int v104; // [rsp+88h] [rbp-78h]
	int* v105; // [rsp+90h] [rbp-70h]
	__int64 v106; // [rsp+98h] [rbp-68h] BYREF
	unsigned __int16* v107; // [rsp+A0h] [rbp-60h]
	int** v108; // [rsp+B8h] [rbp-48h]
	unsigned __int16* v109; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v110; // [rsp+C8h] [rbp-38h]
	__int64(__fastcall * *v111)(); // [rsp+D0h] [rbp-30h] BYREF
	int v112; // [rsp+D8h] [rbp-28h]
	__int64 v113; // [rsp+E0h] [rbp-20h]
	int v114; // [rsp+E8h] [rbp-18h]
	struct _SYSTEMTIME SystemTime; // [rsp+F0h] [rbp-10h] BYREF

	v14 = a8;
	v15 = a10;
	v109 = a6;
	v17 = (int*)&unk_1409E84EC;
	if (a5)
		v17 = a5;
	v110 = a3;
	v19 = a2;
	v104 = a2;
	v108 = a8;
	v105 = v17;
	v20 = sub_140401220(a1, a2, a3);
	v21 = v20;
	if (v20)
	{
		if (qword_140C65898)
		{
			if ((*(_DWORD*)(*(_QWORD*)(v20 + 8) + 52i64) & 0x100) == 0)
			{
				v22 = *(_QWORD*)(qword_140C65898 + 29504);
				LODWORD(v103) = 1;
				v23 = *(_QWORD*)(v22 + 400);
				v100 = off_140B569F0;
				v24 = *(_QWORD*)(v23 + 32);
				v102 = (int*)v23;
				if (*(_QWORD*)(v24 + 120) >= *(_QWORD*)(v24 + 112))
					sub_14005E2C0(v23);
				v25 = *(_QWORD*)(v23 + 16);
				v26 = sub_14005C1B0(v23, 0, 0);
				*(_DWORD*)(v25 + 8) = 5;
				*(_QWORD*)v25 = v26;
				*(_QWORD*)(v23 + 16) += 16i64;
				v27 = sub_1400578C0(v23);
				LODWORD(v101) = v27;
				v28 = *(_QWORD*)(qword_140C65898 + 29504);
				v114 = 1;
				v29 = *(_QWORD*)(v28 + 400);
				v111 = off_140B569F0;
				v30 = *(_QWORD*)(v29 + 32);
				v113 = v29;
				if (*(_QWORD*)(v30 + 120) >= *(_QWORD*)(v30 + 112))
					sub_14005E2C0(v29);
				v31 = *(_QWORD*)(v29 + 16);
				v32 = sub_14005C1B0(v29, 0, 0);
				*(_DWORD*)(v31 + 8) = 5;
				*(_QWORD*)v31 = v32;
				*(_QWORD*)(v29 + 16) += 16i64;
				v33 = sub_1400578C0(v29);
				v34 = (__int64)v108;
				v112 = v33;
				sub_140408850(v35, (__int64)&v111, (__int64)v108);
				v36 = sub_1403D90D0(qword_140C65898, a4);
				v37 = *(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64);
				*(_QWORD*)&SystemTime.wYear = v36;
				v38 = sub_14005C3C0(v37, v27);
				v39 = *(_QWORD*)(v23 + 16);
				*(_QWORD*)v39 = *v38;
				*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				v40 = -1i64;
				v41 = (unsigned __int64*)sub_14018F0E0(&v106, L"bAutoResponse")[1];
				if (v41)
				{
					v42 = -1i64;
					do
						++v42;
					while (*((_BYTE*)v41 + v42));
					sub_140058710(v23, v41, v42);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
					*(_QWORD*)(v23 + 16) += 16i64;
				}
				if (v107)
					sub_14018B900((__int64)v107, 0);
				v43 = *(_DWORD**)(v23 + 16);
				v43[2] = 1;
				*v43 = a11 != 0;
				*(_QWORD*)(v23 + 16) += 16i64;
				v44 = (__int64*)sub_1400580E0(v23, -3);
				sub_14005EA50(v23, v44, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
				*(_QWORD*)(v23 + 16) -= 48i64;
				v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				*(_QWORD*)v46 = *v45;
				*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				v47 = (unsigned __int64*)sub_14018F0E0(&v106, L"bGM")[1];
				if (v47)
				{
					v48 = -1i64;
					do
						++v48;
					while (*((_BYTE*)v47 + v48));
					sub_140058710(v23, v47, v48);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
					*(_QWORD*)(v23 + 16) += 16i64;
				}
				if (v107)
					sub_14018B900((__int64)v107, 0);
				v49 = *(_DWORD**)(v23 + 16);
				v49[2] = 1;
				*v49 = a10 != 0;
				*(_QWORD*)(v23 + 16) += 16i64;
				v50 = (__int64*)sub_1400580E0(v23, -3);
				sub_14005EA50(v23, v50, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
				*(_QWORD*)(v23 + 16) -= 48i64;
				v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				*(_QWORD*)v52 = *v51;
				*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				v53 = (unsigned __int64*)sub_14018F0E0(&v106, L"bSelf")[1];
				if (v53)
				{
					v54 = -1i64;
					do
						++v54;
					while (*((_BYTE*)v53 + v54));
					sub_140058710(v23, v53, v54);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
					*(_QWORD*)(v23 + 16) += 16i64;
				}
				if (v107)
					sub_14018B900((__int64)v107, 0);
				v55 = *(_DWORD**)(v23 + 16);
				v55[2] = 1;
				*v55 = a9 != 0;
				*(_QWORD*)(v23 + 16) += 16i64;
				v56 = (__int64*)sub_1400580E0(v23, -3);
				sub_14005EA50(v23, v56, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
				*(_QWORD*)(v23 + 16) -= 48i64;
				v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				v58 = (unsigned __int16*)v105;
				*(_QWORD*)v59 = *v57;
				*(_DWORD*)(v59 + 8) = *((_DWORD*)v57 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				sub_1400F0870(v23, v60, L"strSender", v58);
				*(_QWORD*)(v23 + 16) -= 16i64;
				v61 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				v62 = v109;
				*(_QWORD*)v63 = *v61;
				*(_DWORD*)(v63 + 8) = *((_DWORD*)v61 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				sub_1400F0870(v23, v64, L"strRealmName", v62);
				*(_QWORD*)(v23 + 16) -= 16i64;
				v65 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				*(_QWORD*)v66 = *v65;
				*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				sub_1400F06F0(v23, v67, L"nPresenceState", a7);
				v68 = v112;
				*(_QWORD*)(v23 + 16) -= 16i64;
				sub_1400FB2A0((__int64)&v100, (__int64)L"arMessageSegments", v68);
				if (*(_QWORD*)&SystemTime.wYear && (unsigned int)sub_140649930((_QWORD*)v23, *(__int64*)&SystemTime.wYear))
				{
					sub_1400FB540((__int64)&v100);
					*(_QWORD*)(v23 + 16) -= 16i64;
				}
				v69 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				v70 = *(_QWORD*)(v23 + 16);
				*(_QWORD*)v70 = *v69;
				*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				v71 = (unsigned __int64*)sub_14018F0E0(&v106, L"bShowChatBubble")[1];
				if (v71)
				{
					v72 = -1i64;
					do
						++v72;
					while (*((_BYTE*)v71 + v72));
					sub_140058710(v23, v71, v72);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
					*(_QWORD*)(v23 + 16) += 16i64;
				}
				if (v107)
					sub_14018B900((__int64)v107, 0);
				v73 = *(_DWORD**)(v23 + 16);
				v73[2] = 1;
				*v73 = a12 != 0;
				*(_QWORD*)(v23 + 16) += 16i64;
				v74 = (__int64*)sub_1400580E0(v23, -3);
				sub_14005EA50(v23, v74, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
				*(_QWORD*)(v23 + 16) -= 48i64;
				v75 = *(_DWORD*)(v34 + 24);
				v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				*(_QWORD*)v77 = *v76;
				*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				v78 = (unsigned __int64*)sub_14018F0E0(&v106, L"bCrossFaction")[1];
				if (v78)
				{
					do
						++v40;
					while (*((_BYTE*)v78 + v40));
					sub_140058710(v23, v78, v40);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
					*(_QWORD*)(v23 + 16) += 16i64;
				}
				if (v107)
					sub_14018B900((__int64)v107, 0);
				v79 = *(_DWORD**)(v23 + 16);
				v79[2] = 1;
				*v79 = v75 != 0;
				*(_QWORD*)(v23 + 16) += 16i64;
				v80 = (__int64*)sub_1400580E0(v23, -3);
				sub_14005EA50(v23, v80, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
				*(_QWORD*)(v23 + 16) -= 48i64;
				if (a13)
				{
					v81 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
					*(_QWORD*)v82 = *v81;
					*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
					*(_QWORD*)(v23 + 16) += 16i64;
					sub_1400F06F0(v23, v83, L"nReportId", v84);
					*(_QWORD*)(v23 + 16) -= 16i64;
				}
				v85 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
				v86 = *(_QWORD*)(v23 + 16);
				*(_QWORD*)v86 = *v85;
				*(_DWORD*)(v86 + 8) = *((_DWORD*)v85 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				sub_1400F06F0(v23, v86, L"nPremiumTier", a14);
				v87 = qword_140C65898;
				*(_QWORD*)(v23 + 16) -= 16i64;
				sub_1400EA3E0(*(_QWORD*)(v87 + 29504), "ChatMessage", "HT", v21, v27);
				if (v113)
					sub_1400579E0(v113, v88, v68);
				sub_1400579E0(v23, v88, v27);
				v17 = v105;
				v14 = v108;
				v19 = v104;
			}
			v89 = a1[26];
			v15 = a10;
			if (v89 && v19 == 19 && qword_140C65C30 == v89)
				sub_140645BB0(v89, v17, v14, a10);
		}
		else
		{
			v15 = a10;
		}
	}
	if (a1[11])
	{
		GetLocalTime(&SystemTime);
		v90 = sub_14018B280(16i64, 0);
		v101 = v90;
		v102 = v90;
		v103 = v90 + 4;
		if (v90)
			*(_WORD*)v90 = 0;
		sub_14018CF50(&SystemTime, (__int64)&v100);
		v91 = (int*)&unk_1409E84CC;
		if (*v14)
			v91 = *v14;
		if (v21)
		{
			v92 = *(void**)(v21 + 256);
			v93 = *(void**)(v21 + 32);
		}
		else
		{
			v92 = &unk_1409E8624;
			v93 = &unk_1409E85E4;
		}
		v94 = v15 == 0;
		v95 = v101;
		v96 = &unk_1409E859C;
		if (!v94)
			v96 = &unk_1409E85B4;
		v97 = L"<-";
		if (a9)
			v97 = L"->";
		sub_14018EFA0(&v106, (__int64)L"[%s]%s.%s(%d, %I64u) %s%s%s: %s\r\n", v101, v93, v92, v19, v110, v97, v96, v17, v91);
		v98 = v107;
		sub_14018F0E0(&v100, v107);
		v99 = v101;
		sub_14001B050(a1 + 12, v101, v102);
		if (v99)
			sub_14018B900((__int64)v99, 0);
		if (!a1[18])
		{
			LODWORD(v100) = 0;
			v102 = (int*)sub_14040AC60;
			v101 = (int*)a1;
			v103 = 0i64;
			sub_140195960((__int64)(a1 + 16), 1000, (__int64)&v100, 4);
		}
		if (v98)
			sub_14018B900((__int64)v98, 0);
		if (v95)
			sub_14018B900((__int64)v95, 0);
	}
}
// 140404751: variable 'v35' is possibly undefined
// 140404851: variable 'v46' is possibly undefined
// 14040490D: variable 'v52' is possibly undefined
// 1404049CD: variable 'v59' is possibly undefined
// 1404049DF: variable 'v60' is possibly undefined
// 140404A0E: variable 'v63' is possibly undefined
// 140404A20: variable 'v64' is possibly undefined
// 140404A52: variable 'v66' is possibly undefined
// 140404A64: variable 'v67' is possibly undefined
// 140404B92: variable 'v77' is possibly undefined
// 140404C57: variable 'v82' is possibly undefined
// 140404C69: variable 'v83' is possibly undefined
// 140404C69: variable 'v84' is possibly undefined
// 140404CEC: variable 'v88' is possibly undefined
// 140AF0754: using guessed type wchar_t asc_140AF0754[3];
// 140AF1014: using guessed type wchar_t asc_140AF1014[3];
// 140AF8758: using guessed type wchar_t aBshowchatbubbl[16];
// 140AF8790: using guessed type wchar_t aArmessagesegme[18];
// 140AF87B8: using guessed type wchar_t aNpresencestate[15];
// 140AF87D8: using guessed type wchar_t aNpremiumtier[13];
// 140AF87F8: using guessed type wchar_t aNreportid[10];
// 140AF8810: using guessed type wchar_t aBcrossfaction[14];
// 140AF8830: using guessed type wchar_t aBautoresponse[14];
// 140AF8850: using guessed type wchar_t aStrrealmname[13];
// 140AF8870: using guessed type wchar_t aStrsender[10];
// 140AF8888: using guessed type wchar_t aBself[6];
// 140AF8898: using guessed type wchar_t aBgm[4];
// 140AF8960: using guessed type wchar_t aSSSDI64uSSSS[34];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C30: using guessed type __int64 qword_140C65C30;

