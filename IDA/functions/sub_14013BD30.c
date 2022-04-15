//----- (000000014013BD30) ----------------------------------------------------
void __fastcall sub_14013BD30(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rdx
	_DWORD* v11; // rcx
	__int64* v12; // rax
	__int64 v13; // rdx
	unsigned __int16* v14; // r9
	int v15; // ebx
	_DWORD* v16; // rcx
	__int64* v17; // rax
	int v18; // ebx
	__int64 v19; // rax
	__int64* v20; // rax
	int v21; // ebx
	__int64 v22; // rax
	__int64* v23; // rax
	unsigned __int64 v24; // rbx
	__int64 v25; // rcx
	__int64* v26; // rax
	unsigned __int64 v27; // rbx
	__int64 v28; // rcx
	double v29; // xmm0_8
	__int64* v30; // rax
	__int64 v31; // rax
	__int64* v32; // rax
	float v33; // xmm6_4
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	unsigned __int64 v40; // rbx
	__int64 v41; // rcx
	__int64* v42; // rax
	_DWORD* v43; // rcx
	__int64* v44; // rax
	__int64 v45; // rax
	int v46; // ebx
	__int64* v47; // rax
	__int64 v48; // rax
	BOOL v49; // ebx
	BOOL* v50; // rcx
	__int64* v51; // rax
	__int64 v52; // rbx
	__int64 v53; // rax
	int v54; // r13d
	__int64 v55; // r12
	__int64 v56; // rax
	unsigned __int16* v57; // rdx
	__int64 v58; // rax
	unsigned __int64* v59; // r15
	unsigned __int64 v60; // rsi
	__int64 v61; // rbx
	__int64 v62; // rax
	unsigned __int16* v63; // rcx
	unsigned __int16* v64; // rsi
	__int64 v65; // rdx
	__int64* v66; // rax
	__int64 v67; // rdx
	__int64 v68; // rbx
	__int64 v69; // rax
	__int64 v70; // rcx
	__int64 v71; // rbx
	__int64 v72; // rax
	unsigned __int64 v73; // r12
	__int64 v74; // r13
	__int64 v75; // rcx
	unsigned __int64* v76; // r15
	unsigned __int64 v77; // rsi
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rcx
	__int64 v81; // [rsp+28h] [rbp-79h]
	__int64 v82; // [rsp+30h] [rbp-71h]
	__int64 v83; // [rsp+38h] [rbp-69h]
	struct _FILETIME LocalFileTime; // [rsp+48h] [rbp-59h] BYREF
	FILETIME FileTime; // [rsp+50h] [rbp-51h] BYREF
	__int64 v86; // [rsp+58h] [rbp-49h] BYREF
	unsigned __int16* v87; // [rsp+60h] [rbp-41h]
	__int64 v88; // [rsp+78h] [rbp-29h] BYREF
	__int64 v89; // [rsp+80h] [rbp-21h]
	struct _SYSTEMTIME SystemTime; // [rsp+98h] [rbp-9h] BYREF

	v2 = *(_QWORD**)(a2 + 456);
	*(_DWORD*)(a2 + 496) = 0;
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			*(_DWORD*)(a2 + 496) += sub_140134B40((int*)v3[2]);
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a2 + 456));
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0090(a1, v8, (unsigned __int64*)"strFolder", *(unsigned __int16**)(a2 + 128));
	sub_1400F0090(a1, v9, (unsigned __int64*)"strName", *(unsigned __int16**)(a2 + 24));
	sub_1400F0090(a1, v10, (unsigned __int64*)"strConfigureButtonText", *(unsigned __int16**)(a2 + 56));
	LOBYTE(v6) = *(_BYTE*)(a2 + 264);
	sub_140058710(a1, (unsigned __int64*)"bCarbine", 8ui64);
	v11 = *(_DWORD**)(a1 + 16);
	v11[2] = 1;
	*v11 = (_BYTE)v6 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v12, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v14 = L"Carbine";
	if (!*(_BYTE*)(a2 + 264))
		v14 = *(unsigned __int16**)(a2 + 192);
	sub_1400F0090(a1, v13, (unsigned __int64*)"strAuthor", v14);
	v15 = (unsigned __int8)sub_140136B00(a2, 0);
	sub_140058710(a1, (unsigned __int64*)"bLoadOnStart", 0xCui64);
	v16 = *(_DWORD**)(a1 + 16);
	v16[2] = 1;
	*v16 = v15 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v18 = *(_DWORD*)(a2 + 496);
	sub_140058710(a1, (unsigned __int64*)"nMemoryUsage", 0xCui64);
	v19 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v19 + 8) = 3;
	*(double*)v19 = (double)v18;
	*(_QWORD*)(a1 + 16) += 16i64;
	v20 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v20, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v21 = *(_DWORD*)(a2 + 544);
	sub_140058710(a1, (unsigned __int64*)"nTotalCalls", 0xBui64);
	v22 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v22 + 8) = 3;
	*(double*)v22 = (double)v21;
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v23, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v24 = *(_QWORD*)(a2 + 552) / (unsigned __int64)qword_140C636B0;
	sub_140058710(a1, (unsigned __int64*)"fTotalTime", 0xAui64);
	v25 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v25 + 8) = 3;
	*(double*)v25 = (float)((float)(int)v24 * 0.001);
	*(_QWORD*)(a1 + 16) += 16i64;
	v26 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v27 = *(_QWORD*)(a2 + 560) / (unsigned __int64)qword_140C636B0;
	sub_140058710(a1, (unsigned __int64*)"fLongestCall", 0xCui64);
	v28 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v28 + 8) = 3;
	v29 = (float)((float)(int)v27 * 0.001);
	*(double*)v28 = v29;
	*(_QWORD*)(a1 + 16) += 16i64;
	v30 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v30, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140136E20(a2);
	sub_140058710(a1, (unsigned __int64*)"fCallTimePerSecond", 0x12ui64);
	v31 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v31 + 8) = 3;
	*(double*)v31 = *(float*)&v29;
	*(_QWORD*)(a1 + 16) += 16i64;
	v32 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v32, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v33 = sub_140136FC0(a2);
	sub_140058710(a1, (unsigned __int64*)"fCallTimePerFrame", 0x11ui64);
	v34 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v34 + 8) = 3;
	*(double*)v34 = v33;
	*(_QWORD*)(a1 + 16) += 16i64;
	v35 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v35, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v27) = *(_DWORD*)(a2 + 536) >= 6;
	sub_140058710(a1, (unsigned __int64*)"bRunning", 8ui64);
	v36 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v36 + 8) = 3;
	*(double*)v36 = (double)(int)v27;
	*(_QWORD*)(a1 + 16) += 16i64;
	v37 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v37, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v27) = *(_DWORD*)(a2 + 536);
	sub_140058710(a1, (unsigned __int64*)"eStatus", 7ui64);
	v38 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v38 + 8) = 3;
	*(double*)v38 = (double)(int)v27;
	*(_QWORD*)(a1 + 16) += 16i64;
	v39 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v40 = *(_QWORD*)(a2 + 256);
	sub_140058710(a1, (unsigned __int64*)"fLastModified", 0xDui64);
	v41 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v41 + 8) = 3;
	*(double*)v41 = (float)(int)(v40 / 0x989680);
	*(_QWORD*)(a1 + 16) += 16i64;
	v42 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v42, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LOBYTE(v40) = *(_BYTE*)(a2 + 272);
	sub_140058710(a1, (unsigned __int64*)"bIgnoreVersion", 0xEui64);
	v43 = *(_DWORD**)(a1 + 16);
	v43[2] = 1;
	*v43 = (_BYTE)v40 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v44 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v44, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	if (*(_BYTE*)(a2 + 264))
	{
		sub_140058710(a1, (unsigned __int64*)"nAPIVersion", 0xBui64);
		v45 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v45 = 0x4030000000000000i64;
	}
	else
	{
		v46 = *(_DWORD*)(a2 + 248);
		sub_140058710(a1, (unsigned __int64*)"nAPIVersion", 0xBui64);
		v45 = *(_QWORD*)(a1 + 16);
		*(double*)v45 = (double)v46;
	}
	*(_DWORD*)(v45 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v47 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v47, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v48 = *(_QWORD*)(a2 + 456);
	v49 = *(_QWORD*)v48 != v48
		&& *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v48 + 16i64) + 168i64) != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v48 + 16i64)
			+ 176i64)
		&& *(int*)(a2 + 536) >= 6;
	sub_140058710(a1, (unsigned __int64*)"bHasConfigure", 0xDui64);
	v50 = *(BOOL**)(a1 + 16);
	v50[2] = 1;
	*v50 = v49;
	*(_QWORD*)(a1 + 16) += 16i64;
	v51 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v51, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"arErrors", 8ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v52 = *(_QWORD*)(a1 + 16);
	v53 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v52 + 8) = 5;
	v54 = 0;
	*(_QWORD*)v52 = v53;
	*(_QWORD*)(a1 + 16) += 16i64;
	if ((int)((__int64)(*(_QWORD*)(a2 + 520) - *(_QWORD*)(a2 + 512)) >> 5) > 0)
	{
		v55 = 0i64;
		do
		{
			v56 = *(_QWORD*)(a1 + 16);
			++v54;
			v57 = (unsigned __int16*)&unk_1409D914C;
			*(_DWORD*)(v56 + 8) = 3;
			*(double*)v56 = (double)v54;
			*(_QWORD*)(a1 + 16) += 16i64;
			v58 = *(_QWORD*)(a2 + 512);
			if (*(_QWORD*)(v58 + v55 + 8))
				v57 = *(unsigned __int16**)(v58 + v55 + 8);
			v59 = (unsigned __int64*)sub_14018F0E0(&v86, v57)[1];
			if (v59)
			{
				v60 = -1i64;
				do
					++v60;
				while (*((_BYTE*)v59 + v60));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v61 = *(_QWORD*)(a1 + 16);
				v62 = sub_140062650(a1, v59, v60);
				*(_DWORD*)(v61 + 8) = 4;
				*(_QWORD*)v61 = v62;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v63 = v87;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v63)
				sub_14018B900((__int64)v63, 0);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v55 += 32i64;
		} while (v54 < (int)((__int64)(*(_QWORD*)(a2 + 520) - *(_QWORD*)(a2 + 512)) >> 5));
	}
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	FileTime = *(FILETIME*)(a2 + 256);
	if (!FileTimeToLocalFileTime(&FileTime, &LocalFileTime) || !FileTimeToSystemTime(&LocalFileTime, &SystemTime))
		GetLastError();
	sub_14018EFA0(
		&v86,
		(__int64)L"%d/%d/%d %d:%02d",
		SystemTime.wMonth,
		SystemTime.wDay,
		SystemTime.wYear,
		SystemTime.wHour,
		SystemTime.wMinute);
	v64 = v87;
	sub_1400F0090(a1, v65, (unsigned __int64*)"strLastModified", v87);
	LODWORD(v83) = SystemTime.wMinute;
	LODWORD(v82) = SystemTime.wHour;
	LODWORD(v81) = SystemTime.wDay;
	v66 = sub_14018EFA0(&v88, (__int64)L"%02d%02d%4d%02d%02d", SystemTime.wYear, SystemTime.wMonth, v81, v82, v83);
	if (v66 != &v86)
	{
		sub_14001C480((__int64)&v86, (int*)v66[1], (int*)v66[2]);
		v64 = v87;
	}
	if (v89)
		sub_14018B900(v89, 0);
	sub_1400F0090(a1, v67, (unsigned __int64*)"strLastModifiedSort", v64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v68 = *(_QWORD*)(a1 + 16);
	v69 = sub_140062650(a1, (unsigned __int64*)"arReplacedAddons", 0x10ui64);
	*(_DWORD*)(v68 + 8) = 4;
	*(_QWORD*)v68 = v69;
	v70 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_QWORD*)(v70 + 120) >= *(_QWORD*)(v70 + 112))
		sub_14005E2C0(a1);
	v71 = *(_QWORD*)(a1 + 16);
	v72 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v71 + 8) = 5;
	v73 = 0i64;
	*(_QWORD*)v71 = v72;
	*(_QWORD*)(a1 + 16) += 16i64;
	if ((__int64)(*(_QWORD*)(a2 + 432) - *(_QWORD*)(a2 + 424)) >> 5)
	{
		v74 = 0i64;
		do
		{
			v75 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v75 + 8) = 3;
			*(double*)v75 = (double)((int)v73 + 1);
			*(_QWORD*)(a1 + 16) += 16i64;
			v76 = (unsigned __int64*)sub_14018F0E0(&v88, *(unsigned __int16**)(v74 + *(_QWORD*)(a2 + 424) + 8))[1];
			if (v76)
			{
				v77 = -1i64;
				do
					++v77;
				while (*((_BYTE*)v76 + v77));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v78 = *(_QWORD*)(a1 + 16);
				v79 = sub_140062650(a1, v76, v77);
				*(_DWORD*)(v78 + 8) = 4;
				*(_QWORD*)v78 = v79;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v80 = v89;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v80)
				sub_14018B900(v80, 0);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			++v73;
			v74 += 32i64;
		} while (v73 < (__int64)(*(_QWORD*)(a2 + 432) - *(_QWORD*)(a2 + 424)) >> 5);
		v64 = v87;
	}
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	if (v64)
		sub_14018B900((__int64)v64, 0);
}
// 14013BDE9: variable 'v8' is possibly undefined
// 14013BDFC: variable 'v9' is possibly undefined
// 14013BE0F: variable 'v10' is possibly undefined
// 14013BE95: variable 'v13' is possibly undefined
// 14013C642: variable 'v65' is possibly undefined
// 14013C674: variable 'v81' is possibly undefined
// 14013C674: variable 'v82' is possibly undefined
// 14013C674: variable 'v83' is possibly undefined
// 14013C6B4: variable 'v67' is possibly undefined
// 140A22C28: using guessed type wchar_t aCarbine_0[8];
// 140A22CC0: using guessed type wchar_t aDDDD02d[17];
// 140A22CF8: using guessed type wchar_t a02d02d4d02d02d[20];
// 140C636B0: using guessed type __int64 qword_140C636B0;

