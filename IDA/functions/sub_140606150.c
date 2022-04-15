//----- (0000000140606150) ----------------------------------------------------
__int64 __fastcall sub_140606150(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r14
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // r13
	int v10; // r10d
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	unsigned __int64 v14; // rcx
	int v15; // esi
	unsigned __int64 v16; // r12
	__int64 v17; // rbx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int16* v20; // r10
	int v21; // r15d
	_QWORD* v22; // rax
	__int64 v23; // r10
	unsigned __int64* v24; // r14
	unsigned __int64 v25; // rsi
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rax
	int v31; // r15d
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // r14
	unsigned __int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rax
	__int64* v40; // rax
	int v41; // r15d
	_QWORD* v42; // rax
	__int64 v43; // r10
	unsigned __int64* v44; // r14
	unsigned __int64 v45; // rsi
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // rax
	__int64* v50; // rax
	int v51; // r15d
	_QWORD* v52; // rax
	__int64 v53; // r10
	unsigned __int64* v54; // r14
	unsigned __int64 v55; // rsi
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64* v60; // rax
	int v61; // r15d
	_QWORD* v62; // rax
	__int64 v63; // r10
	unsigned __int64* v64; // r14
	unsigned __int64 v65; // rsi
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64 v68; // rcx
	__int64 v69; // rax
	__int64* v70; // rax
	BOOL v71; // r15d
	_QWORD* v72; // rax
	__int64 v73; // r10
	unsigned __int64* v74; // r14
	unsigned __int64 v75; // rsi
	__int64 v76; // rbx
	__int64 v77; // rax
	__int64 v78; // rcx
	BOOL* v79; // rcx
	__int64* v80; // rax
	__int64 v81; // rcx
	unsigned int v82; // ebx
	__int64 v83; // rax
	int v84; // edx
	_QWORD* v85; // rax
	__int64 v86; // rdx
	unsigned __int16* v87; // r10
	__int64 v88; // rdx
	_QWORD* v89; // rax
	__int64 v90; // r8
	__int64 v91; // rdx
	int v92; // r10d
	__int64(__fastcall * *v93)(); // [rsp+20h] [rbp-60h] BYREF
	int v94; // [rsp+28h] [rbp-58h]
	__int64 v95; // [rsp+30h] [rbp-50h]
	int v96; // [rsp+38h] [rbp-48h]
	__int64 v97; // [rsp+40h] [rbp-40h] BYREF
	__int64 v98; // [rsp+48h] [rbp-38h]
	int v100; // [rsp+B0h] [rbp+30h]
	__int64 v101; // [rsp+B8h] [rbp+38h]

	v2 = a2;
	v3 = a1;
	if (!*(_QWORD*)a1)
		return 0i64;
	v5 = *(_QWORD*)(a2 + 32);
	v93 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v95 = a2;
	v96 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0(a2);
	v7 = *(_QWORD*)(v2 + 16);
	v8 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v2 + 16) += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0(v2);
	v94 = v10;
	if (*(_DWORD*)(v3 + 16))
	{
		while (1)
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v11 = *(_QWORD*)(v2 + 16);
			v12 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v2 + 16) += 16i64;
			v13 = sub_1400578C0(v2);
			v14 = *(unsigned int*)(v3 + 8);
			v15 = v13;
			v100 = v13;
			if ((unsigned int)v14 >= *(_DWORD*)(v3 + 16))
				goto LABEL_12;
			if (!v9)
			{
				v16 = (unsigned int)v14;
				goto LABEL_13;
			}
			v16 = v9 - 1;
			if (v9 > v14)
				LABEL_12:
			v16 = v9;
		LABEL_13:
			v17 = *(_QWORD*)(v3 + 24) + 168 * v16;
			v101 = v17;
			v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v13);
			v19 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v19, L"strCharacterName", v20);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v21 = *(_DWORD*)(v17 + 8);
			v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v23 = *v22;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v24 = (unsigned __int64*)sub_14018F0E0(&v97, L"nFactionId")[1];
			if (v24)
			{
				v25 = -1i64;
				do
					++v25;
				while (*((_BYTE*)v24 + v25));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v26 = *(_QWORD*)(v2 + 16);
				v27 = sub_140062650(v2, v24, v25);
				v15 = v100;
				*(_DWORD*)(v26 + 8) = 4;
				*(_QWORD*)v26 = v27;
				v17 = v101;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v28 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v28)
				sub_14018B900(v28, 0);
			v29 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v29 + 8) = 3;
			*(double*)v29 = (double)v21;
			*(_QWORD*)(v2 + 16) += 16i64;
			v30 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v30, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v31 = *(_DWORD*)(v17 + 12);
			v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v34 = (unsigned __int64*)sub_14018F0E0(&v97, L"eRaceId")[1];
			if (v34)
			{
				v35 = -1i64;
				do
					++v35;
				while (*((_BYTE*)v34 + v35));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v36 = *(_QWORD*)(v2 + 16);
				v37 = sub_140062650(v2, v34, v35);
				v15 = v100;
				*(_DWORD*)(v36 + 8) = 4;
				*(_QWORD*)v36 = v37;
				v17 = v101;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v38 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v38)
				sub_14018B900(v38, 0);
			v39 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v39 + 8) = 3;
			*(double*)v39 = (double)v31;
			*(_QWORD*)(v2 + 16) += 16i64;
			v40 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v40, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v41 = *(_DWORD*)(v17 + 16);
			v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v43 = *v42;
			*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v44 = (unsigned __int64*)sub_14018F0E0(&v97, L"eClassId")[1];
			if (v44)
			{
				v45 = -1i64;
				do
					++v45;
				while (*((_BYTE*)v44 + v45));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v46 = *(_QWORD*)(v2 + 16);
				v47 = sub_140062650(v2, v44, v45);
				v15 = v100;
				*(_DWORD*)(v46 + 8) = 4;
				*(_QWORD*)v46 = v47;
				v17 = v101;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v48 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v48)
				sub_14018B900(v48, 0);
			v49 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v49 + 8) = 3;
			*(double*)v49 = (double)v41;
			*(_QWORD*)(v2 + 16) += 16i64;
			v50 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v50, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v51 = *(_DWORD*)(v17 + 28);
			v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v53 = *v52;
			*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v54 = (unsigned __int64*)sub_14018F0E0(&v97, L"ePathType")[1];
			if (v54)
			{
				v55 = -1i64;
				do
					++v55;
				while (*((_BYTE*)v54 + v55));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v56 = *(_QWORD*)(v2 + 16);
				v57 = sub_140062650(v2, v54, v55);
				v15 = v100;
				*(_DWORD*)(v56 + 8) = 4;
				*(_QWORD*)v56 = v57;
				v17 = v101;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v58 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v58)
				sub_14018B900(v58, 0);
			v59 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v59 + 8) = 3;
			*(double*)v59 = (double)v51;
			*(_QWORD*)(v2 + 16) += 16i64;
			v60 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v60, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v61 = *(unsigned __int8*)(v17 + 24);
			v62 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v63 = *v62;
			*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v64 = (unsigned __int64*)sub_14018F0E0(&v97, L"nLevel")[1];
			if (v64)
			{
				v65 = -1i64;
				do
					++v65;
				while (*((_BYTE*)v64 + v65));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v66 = *(_QWORD*)(v2 + 16);
				v67 = sub_140062650(v2, v64, v65);
				v15 = v100;
				*(_DWORD*)(v66 + 8) = 4;
				*(_QWORD*)v66 = v67;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v68 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v68)
				sub_14018B900(v68, 0);
			v69 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v69 + 8) = 3;
			*(double*)v69 = (double)v61;
			*(_QWORD*)(v2 + 16) += 16i64;
			v70 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v70, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v71 = v16 == *(_DWORD*)(a1 + 8);
			v72 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			v74 = (unsigned __int64*)sub_14018F0E0(&v97, L"bIsLeader")[1];
			if (v74)
			{
				v75 = -1i64;
				do
					++v75;
				while (*((_BYTE*)v74 + v75));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v76 = *(_QWORD*)(v2 + 16);
				v77 = sub_140062650(v2, v74, v75);
				*(_DWORD*)(v76 + 8) = 4;
				*(_QWORD*)v76 = v77;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v78 = v98;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v78)
				sub_14018B900(v78, 0);
			v79 = *(BOOL**)(v2 + 16);
			v79[2] = 1;
			*v79 = v71;
			*(_QWORD*)(v2 + 16) += 16i64;
			v80 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v80, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v82 = *(_DWORD*)(v101 + 16);
			if (qword_140C63840)
			{
				v83 = qword_140C63840(off_140A69950, v82, qword_140C63858);
			}
			else
			{
				if (dword_140C65254 || (int)sub_1401F2F80() < 0)
					goto LABEL_76;
				v83 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 24i64))(qword_140C63C28, v82);
			}
			if (v83)
			{
				if (*(_DWORD*)(v101 + 20) == 1)
					v84 = *(_DWORD*)(v83 + 20);
				else
					v84 = *(_DWORD*)(v83 + 16);
				goto LABEL_77;
			}
		LABEL_76:
			v84 = 249089;
		LABEL_77:
			sub_14034BDD0(v81, v84);
			v85 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v100);
			v86 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v86 = *v85;
			*(_DWORD*)(v86 + 8) = *((_DWORD*)v85 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v86, L"strClassName", v87);
			*(_QWORD*)(v2 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v93);
			sub_1400579E0(v2, v88, v100);
			v3 = a1;
			if (++v9 >= *(unsigned int*)(a1 + 16))
			{
				v2 = v95;
				v10 = v94;
				break;
			}
		}
	}
	v89 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v10);
	v90 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v90 = *v89;
	v91 = *((unsigned int*)v89 + 2);
	*(_DWORD*)(v90 + 8) = v91;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v91, v92);
	return 1i64;
}
// 1406062AC: variable 'v20' is possibly undefined
// 1406062DA: variable 'v23' is possibly undefined
// 1406063D2: variable 'v33' is possibly undefined
// 1406064C3: variable 'v43' is possibly undefined
// 1406065B4: variable 'v53' is possibly undefined
// 1406066A6: variable 'v63' is possibly undefined
// 1406067A0: variable 'v73' is possibly undefined
// 1406068C6: variable 'v81' is possibly undefined
// 140606905: variable 'v87' is possibly undefined
// 140606920: variable 'v88' is possibly undefined
// 14060697F: variable 'v92' is possibly undefined
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140B24D78: using guessed type wchar_t aBisleader_0[10];
// 140B24D90: using guessed type wchar_t aStrclassname_0[13];
// 140B24DB0: using guessed type wchar_t aEpathtype_1[10];
// 140B24DC8: using guessed type wchar_t aNlevel_11[7];
// 140B24DD8: using guessed type wchar_t aEraceid_1[8];
// 140B24DE8: using guessed type wchar_t aEclassid_1[9];
// 140B24E00: using guessed type wchar_t aStrcharacterna_6[17];
// 140B24E28: using guessed type wchar_t aNfactionid_2[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C65254: using guessed type int dword_140C65254;

