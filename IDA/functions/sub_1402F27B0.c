//----- (00000001402F27B0) ----------------------------------------------------
void __fastcall sub_1402F27B0(__int64 a1)
{
	unsigned int v1; // r15d
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	unsigned int i; // ebx
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rbx
	const void*** j; // r12
	void(__fastcall * **v13)(_QWORD, __int64); // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 k; // rbx
	__int64 v17; // rax
	__int64 v18; // rdi
	unsigned int m; // ebx
	__int64 v20; // rdi
	__int64 v21; // rbx
	int CurrentThreadId; // edx
	__int64 v23; // rcx
	__int64 v24; // rcx
	HANDLE EventW; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rsi
	__int64 v30; // rbx
	int v31; // edi
	_QWORD* v32; // rbx
	__int64 v33; // rdx
	__int64 v34; // rdi
	__int64 v35; // rsi
	__int64 v36; // rcx
	int v37; // edi
	_QWORD* n; // rbx
	__int64 v39; // rcx
	__int64 v40; // rcx
	unsigned __int64 ii; // rbx
	void(__fastcall * **v42)(_QWORD, __int64); // rcx
	unsigned __int64 jj; // rbx
	void(__fastcall * **v44)(_QWORD, __int64); // rcx
	unsigned int kk; // ebx
	_QWORD* v46; // rdi
	__int64 v47; // rcx
	__int64 v48; // rcx
	__int64 v49; // rax
	int v50; // r9d
	__int64 v51; // rdx
	__int64 v52; // r8
	__int64 v53; // rcx
	__int64 v54; // r9
	__int64 v55; // r10
	__int64 v56; // rdx
	int v57; // r9d
	_QWORD* v58; // rdx
	_QWORD* v59; // rcx
	__int64 v60; // r8
	const void*** mm; // rsi
	const void** v62; // rcx
	_QWORD* v63; // rdx
	_QWORD* v64; // rdx
	const void*** nn; // rdi
	const void** v66; // rcx
	_QWORD* v67; // rdx
	_QWORD* v68; // rdx
	const void*** v69; // r13
	const void** v70; // rcx
	_QWORD* v71; // rdx
	_QWORD* v72; // rdx
	_QWORD* v73; // rdx
	_QWORD* v74; // rdx
	__int64* v75; // r15
	__int64 v76; // rdi
	__int64 v77; // rdi
	char v78; // r12
	int* v79; // rax
	__int64 v80; // rbx
	unsigned __int64 v81; // rdi
	__int64 v82; // rsi
	int* v83; // rdi
	int* v84; // rax
	int v85; // edi
	__int64 v86; // rcx
	_QWORD* v87; // rdx
	__int64 v88; // rdx
	__int64 v89; // rbx
	int v90; // edx
	__int64 v91; // rcx
	_QWORD* v92; // rcx
	__int64 v93; // rcx
	HANDLE v94; // rcx
	__int64 v95; // rcx
	__int64 v96; // rcx
	_QWORD* v97; // rcx
	__int64 v98; // rdx
	__int64 v99; // rcx
	__int64 v100; // rcx
	__int64 v101; // rcx
	__int64 v102; // rcx
	__int64 v103; // rcx
	__int64 v104; // rcx
	__int64 v105; // rcx
	__int64 v106; // rcx
	_QWORD* v107; // rcx
	__int64 v108; // rcx
	_QWORD* v109; // rcx
	__int64 v110; // rdx
	_QWORD* v111; // rcx
	__int64 v112; // rcx
	__int64(__fastcall * *v113)(); // [rsp+30h] [rbp-89h] BYREF
	__int64 v114; // [rsp+38h] [rbp-81h]
	LPVOID v115; // [rsp+40h] [rbp-79h]
	__int64(__fastcall * *v116)(); // [rsp+48h] [rbp-71h] BYREF
	const wchar_t* v117; // [rsp+50h] [rbp-69h]
	LPVOID lpTlsValue; // [rsp+58h] [rbp-61h]
	__int64 v119; // [rsp+60h] [rbp-59h]
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-51h] BYREF
	__int64 v121; // [rsp+70h] [rbp-49h]
	LPVOID Value; // [rsp+78h] [rbp-41h]
	__int64 v123[4]; // [rsp+80h] [rbp-39h] BYREF
	__int64 v124[4]; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v125[10]; // [rsp+C0h] [rbp+7h] BYREF
	__int64 v126; // [rsp+120h] [rbp+67h] BYREF
	__int64 v127; // [rsp+128h] [rbp+6Fh] BYREF

	v1 = 0;
	LODWORD(v126) = 0;
	*(_QWORD*)a1 = off_140B63970;
	if (*(_QWORD*)(a1 + 56))
	{
		if (!*(_QWORD*)(a1 + 16))
		{
			TlsValue = &off_140B5E648;
			v121 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v3 = *(_QWORD*)(a1 + 56);
			v123[0] = (__int64)TlsValue;
			v123[1] = v121;
			v123[2] = (__int64)Value;
			v4 = *(_QWORD*)(v3 + 24);
			v117 = L"FileName";
			v116 = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v116);
			v119 = v4;
			v125[1] = (__int64)v117;
			v116 = &off_140B5E638;
			v125[3] = v4;
			v125[0] = (__int64)&off_140B5E638;
			v126 = 0x141DEB9A0i64;
			v125[2] = (__int64)lpTlsValue;
			LODWORD(v4) = sub_140196F30(&dword_140C8A600, 6, &v126, v125, v123);
			v116 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v4)
				DebugBreak();
		}
	}
	if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_DWORD*)(*(_QWORD*)(a1 + 64) + 696i64))
	{
		do
		{
			v5 = 40i64 * v1;
			v6 = v5 + *(_QWORD*)(*(_QWORD*)(a1 + 64) + 704i64);
			v7 = v5 + *(_QWORD*)(a1 + 1128);
			for (i = 0; i < *(_DWORD*)(v6 + 24); ++i)
			{
				v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64 * i);
				if (v9)
				{
					v10 = *(_QWORD*)(v7 + 32);
					if (*(_BYTE*)(v10 + 20i64 * i))
					{
						*(_BYTE*)(v10 + 20i64 * i) = 0;
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9);
					}
				}
			}
			++v1;
		} while (v1 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 696i64));
	}
	if (*(_DWORD*)(a1 + 332))
	{
		v11 = *(_QWORD**)(a1 + 1232);
		for (*(_DWORD*)(a1 + 332) = 0; v11; v11 = (_QWORD*)v11[156])
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*v11 + 1000i64))(v11, 0i64);
	}
	for (j = (const void***)(a1 + 1232); *j; (*((void(__fastcall**)(const void**)) * *j + 117))(*j))
		;
	while (*(_QWORD*)(a1 + 72))
	{
		v13 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 72);
		if (v13)
			(**v13)(v13, 1i64);
	}
	v14 = *(_QWORD*)(a1 + 56);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 496), 0);
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	sub_14018B900(*(_QWORD*)(a1 + 736), 0);
	sub_14018B900(*(_QWORD*)(a1 + 808), 0);
	sub_14018B900(*(_QWORD*)(a1 + 824), 0);
	v15 = *(_QWORD*)(a1 + 840);
	if (v15)
		sub_1402F3520(v15);
	sub_14018B900(*(_QWORD*)(a1 + 832), 0);
	sub_14018B900(*(_QWORD*)(a1 + 848), 0);
	for (k = 0i64; k < *(_QWORD*)(a1 + 880); ++k)
	{
		v17 = *(_QWORD*)(a1 + 872);
		v18 = *(_QWORD*)(v17 + 8 * k);
		if (v18)
		{
			sub_1402F1E00(*(_QWORD*)(v17 + 8 * k));
			sub_14018B900(v18, 0);
		}
	}
	for (m = 0; m < *(_DWORD*)(a1 + 904); ++m)
	{
		v20 = *(_QWORD*)(a1 + 8i64 * m + 912);
		if (v20)
		{
			sub_1402F1E00(*(_QWORD*)(a1 + 8i64 * m + 912));
			sub_14018B900(v20, 0);
		}
	}
	if (*(_QWORD*)(a1 + 384))
	{
		v21 = *(_QWORD*)(a1 + 16);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v21 + 104) == CurrentThreadId)
		{
			++* (_QWORD*)(v21 + 112);
		}
		else
		{
			v23 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v21 + 112), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v23 >= 0x400)
				{
					sub_14019FB60(v21 + 104, CurrentThreadId);
					goto LABEL_42;
				}
			}
			*(_DWORD*)(v21 + 104) = CurrentThreadId;
		}
	LABEL_42:
		v24 = *(_QWORD*)(a1 + 384);
		if (v24)
			sub_1403088B0(v24, (_QWORD*)(a1 + 384));
		if (*(_QWORD*)(v21 + 112) <= 1ui64)
		{
			*(_DWORD*)(v21 + 104) = 0;
			_InterlockedExchange64((volatile __int64*)(v21 + 112), 0i64);
			if (*(_QWORD*)(v21 + 120))
			{
				if (!*(_QWORD*)(v21 + 128))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v21 + 128), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v21 + 128));
			}
		}
		else
		{
			--* (_QWORD*)(v21 + 112);
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 1032), 0);
	v26 = *(_QWORD*)(a1 + 1056);
	if (v26)
		sub_1402F35B0(v26);
	v27 = *(_QWORD*)(a1 + 1104);
	if (v27)
	{
		v28 = *(int*)(v27 - 16);
		v29 = v27 - 16;
		v30 = 96 * v28 + 80;
		v31 = v28 - 1;
		if (v31 >= 0)
		{
			v32 = (_QWORD*)(v27 + v30);
			do
			{
				v32 -= 12;
				sub_14018B900(*(v32 - 9), 0);
				if (*v32)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v32 + 8i64))(*v32);
				--v31;
			} while (v31 >= 0);
		}
		sub_14018B900(v29, 0);
	}
	sub_14018B900(*(_QWORD*)(a1 + 1112), 0);
	sub_14018B900(*(_QWORD*)(a1 + 1120), 0);
	v33 = *(_QWORD*)(a1 + 1128);
	if (v33)
	{
		v34 = *(int*)(v33 - 8);
		v35 = v33 - 8;
		v36 = 5 * v34;
		v37 = v34 - 1;
		for (n = (_QWORD*)(v33 + 8 * v36); v37 >= 0; --v37)
		{
			n -= 5;
			sub_1402F20C0(n);
		}
		sub_14018B900(v35, 0);
	}
	v39 = *(_QWORD*)(a1 + 1136);
	if (v39)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
		*(_QWORD*)(a1 + 1136) = 0i64;
	}
	v40 = *(_QWORD*)(a1 + 1144);
	if (v40)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
		*(_QWORD*)(a1 + 1144) = 0i64;
	}
	for (ii = 0i64; ii < *(_QWORD*)(a1 + 1160); ++ii)
	{
		v42 = *(void(__fastcall****)(_QWORD, __int64))(*(_QWORD*)(a1 + 1152) + 8 * ii);
		if (v42)
			(**v42)(v42, 1i64);
	}
	for (jj = 0i64; jj < *(_QWORD*)(a1 + 1184); ++jj)
	{
		v44 = *(void(__fastcall****)(_QWORD, __int64))(*(_QWORD*)(a1 + 1176) + 8 * jj);
		if (v44)
			(**v44)(v44, 1i64);
	}
	sub_14018B900(*(_QWORD*)(a1 + 1416), 0);
	if (*(_QWORD*)(a1 + 1424))
	{
		for (kk = 0; kk < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64); ++kk)
		{
			v46 = (_QWORD*)(*(_QWORD*)(a1 + 1424) + 8i64 * kk);
			if (*v46)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v46 + 8i64))(*v46);
				*v46 = 0i64;
			}
		}
		sub_14018B900(*(_QWORD*)(a1 + 1424), 0);
	}
	v47 = *(_QWORD*)(a1 + 1432);
	if (v47)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
		*(_QWORD*)(a1 + 1432) = 0i64;
	}
	v48 = *(_QWORD*)(a1 + 1464);
	if (v48)
		sub_1402F3640(v48);
	v49 = *(_QWORD*)(a1 + 1472);
	if (v49)
	{
		v50 = *(_DWORD*)(v49 - 8) - 1;
		if (v50 >= 0)
		{
			v51 = v49 + 136i64 * *(int*)(v49 - 8) + 16;
			do
			{
				v51 -= 136i64;
				if (*(_QWORD*)v51)
					**(_QWORD**)v51 = *(_QWORD*)(v51 + 8);
				v52 = *(_QWORD*)(v51 + 8);
				if (v52)
					*(_QWORD*)(v52 + 16) = *(_QWORD*)v51;
				--v50;
				*(_QWORD*)v51 = 0i64;
				*(_QWORD*)(v51 + 8) = 0i64;
			} while (v50 >= 0);
		}
		sub_14018B900(v49 - 8, 0);
	}
	v53 = *(_QWORD*)(a1 + 1488);
	if (v53)
	{
		v54 = *(int*)(v53 - 8);
		v55 = v53 - 8;
		v56 = 48 * v54 + 32;
		v57 = v54 - 1;
		if (v57 >= 0)
		{
			v58 = (_QWORD*)(v53 + v56);
			do
			{
				v59 = (_QWORD*)*(v58 - 6);
				v58 -= 6;
				if (v59)
					*v59 = v58[1];
				v60 = v58[1];
				if (v60)
					*(_QWORD*)(v60 + 32) = *v58;
				--v57;
				*v58 = 0i64;
				v58[1] = 0i64;
			} while (v57 >= 0);
		}
		sub_14018B900(v55, 0);
	}
	for (mm = (const void***)(a1 + 1480); *mm; v62[3] = 0i64)
	{
		v62 = *mm;
		v63 = (*mm)[2];
		if (v63)
			*v63 = v62[3];
		v64 = v62[3];
		if (v64)
			v64[2] = v62[2];
		v62[2] = 0i64;
	}
	for (nn = (const void***)(a1 + 1496); *nn; v66[5] = 0i64)
	{
		v66 = *nn;
		v67 = (*nn)[4];
		if (v67)
			*v67 = v66[5];
		v68 = v66[5];
		if (v68)
			v68[4] = v66[4];
		v66[4] = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 1664), 0);
	sub_14018B900(*(_QWORD*)(a1 + 1672), 0);
	v69 = (const void***)(a1 + 1696);
	while (*v69)
	{
		v70 = *v69;
		if (*v69)
		{
			v71 = v70[14];
			if (v71)
				*v71 = v70[15];
			v72 = v70[15];
			if (v72)
				v72[14] = v70[14];
			v70[14] = 0i64;
			v70[15] = 0i64;
			v70[5] = &off_140B62AC0;
			v73 = v70[9];
			if (v73)
				*v73 = v70[10];
			v74 = v70[10];
			if (v74)
				v74[4] = v70[9];
			v70[9] = 0i64;
			v70[10] = 0i64;
			sub_14018B900((__int64)v70, 0);
		}
	}
	v75 = (__int64*)(a1 + 1704);
	if (*(_QWORD*)(a1 + 1704))
	{
		v76 = *(_QWORD*)(a1 + 1816);
		if (v76)
		{
			v77 = *(_QWORD*)(v76 - 8);
			v78 = 1;
			v79 = sub_14018B280(2 * v77 + 18, 0);
			if (v79)
			{
				*((_QWORD*)v79 + 1) = v77;
				*(_QWORD*)v79 = off_140B55060;
			}
			v80 = (__int64)(v79 + 4);
			v81 = 2 * v77;
			sub_1407DB590(v79 + 4, *(int**)(a1 + 1816), v81);
			v82 = v126;
			*(_WORD*)(v80 + v81) = 0;
			v83 = (int*)v80;
		}
		else
		{
			v78 = 2;
			v84 = sub_14018B280(18i64, 0);
			if (v84)
			{
				*((_QWORD*)v84 + 1) = 0i64;
				*(_QWORD*)v84 = off_140B55060;
			}
			v80 = v126;
			v83 = v84 + 4;
			*((_WORD*)v84 + 8) = 0;
			v82 = (__int64)(v84 + 4);
		}
		v114 = 0i64;
		v113 = &off_140B5E648;
		v115 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v113);
		v124[0] = (__int64)v113;
		v127 = 0x141DEBA20i64;
		v124[1] = v114;
		v124[2] = (__int64)v115;
		v85 = sub_1401971E0(&dword_140C8A5FC, 6, &v127, v83, v124);
		v113 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v115);
		if ((v78 & 2) != 0)
		{
			v78 &= ~2u;
			if (v82)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v82 - 16) + 8i64))(v82 - 16);
		}
		if ((v78 & 1) != 0 && v80)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v80 - 16) + 8i64))(v80 - 16);
		if (v85)
			DebugBreak();
		nn = (const void***)(a1 + 1496);
		mm = (const void***)(a1 + 1480);
		j = (const void***)(a1 + 1232);
		if (*v75)
		{
			do
			{
				sub_140312AB0(*(_QWORD*)(a1 + 16), *v75);
				v86 = *v75;
				v87 = *(_QWORD**)(*v75 + 48);
				if (v87)
					*v87 = *(_QWORD*)(v86 + 56);
				v88 = *(_QWORD*)(v86 + 56);
				if (v88)
					*(_QWORD*)(v88 + 48) = *(_QWORD*)(v86 + 48);
				*(_QWORD*)(v86 + 48) = 0i64;
				*(_QWORD*)(v86 + 56) = 0i64;
			} while (*v75);
			v69 = (const void***)(a1 + 1696);
		}
	}
	if (*(_QWORD*)(a1 + 24))
	{
		v89 = *(_QWORD*)(a1 + 16);
		v90 = GetCurrentThreadId();
		if (*(_DWORD*)(v89 + 40) == v90)
		{
			++* (_QWORD*)(v89 + 48);
		}
		else
		{
			v91 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v89 + 48), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v91 >= 0x400)
				{
					sub_14019FB60(v89 + 40, v90);
					goto LABEL_159;
				}
			}
			*(_DWORD*)(v89 + 40) = v90;
		}
	LABEL_159:
		v92 = *(_QWORD**)(a1 + 24);
		if (v92)
			*v92 = *(_QWORD*)(a1 + 32);
		v93 = *(_QWORD*)(a1 + 32);
		if (v93)
			*(_QWORD*)(v93 + 24) = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		if (*(_QWORD*)(v89 + 48) <= 1ui64)
		{
			*(_DWORD*)(v89 + 40) = 0;
			_InterlockedExchange64((volatile __int64*)(v89 + 48), 0i64);
			if (*(_QWORD*)(v89 + 56))
			{
				if (!*(_QWORD*)(v89 + 64))
				{
					v94 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v89 + 64), (signed __int64)v94, 0i64))
						CloseHandle(v94);
				}
				SetEvent(*(HANDLE*)(v89 + 64));
			}
		}
		else
		{
			--* (_QWORD*)(v89 + 48);
		}
	}
	v95 = *(_QWORD*)(a1 + 1816);
	if (v95)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v95 - 16) + 8i64))(v95 - 16);
	v96 = *(_QWORD*)(a1 + 1808);
	if (v96)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v96 + 8i64))(v96);
	if (*(_QWORD*)(a1 + 1800))
		CloseHandle(*(HANDLE*)(a1 + 1800));
	if (*v75)
		sub_1401A4A00((const void***)(a1 + 1704));
	if (*v69)
		sub_1401A4A00(v69);
	if (*nn)
		sub_1401A4A00(nn);
	if (*mm)
		sub_1401A4A00(mm);
	v97 = *(_QWORD**)(a1 + 1240);
	if (v97)
		*v97 = *(_QWORD*)(a1 + 1248);
	v98 = *(_QWORD*)(a1 + 1248);
	if (v98)
		*(_QWORD*)(v98 + 1240) = *(_QWORD*)(a1 + 1240);
	*(_QWORD*)(a1 + 1240) = 0i64;
	*(_QWORD*)(a1 + 1248) = 0i64;
	if (*j)
		sub_1401A4A00(j);
	v99 = *(_QWORD*)(a1 + 1176);
	if (v99)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
	v100 = *(_QWORD*)(a1 + 1152);
	if (v100)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v100 - 16) + 8i64))(v100 - 16);
	v101 = *(_QWORD*)(a1 + 1088);
	if (v101)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v101 + 8i64))(v101);
	v102 = *(_QWORD*)(a1 + 1080);
	if (v102)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v102 - 16) + 8i64))(v102 - 16);
	v103 = *(_QWORD*)(a1 + 1040);
	if (v103)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v103 - 16) + 8i64))(v103 - 16);
	v104 = *(_QWORD*)(a1 + 888);
	if (v104)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
	v105 = *(_QWORD*)(a1 + 872);
	if (v105)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v105 - 16) + 8i64))(v105 - 16);
	v106 = *(_QWORD*)(a1 + 384);
	if (v106)
		sub_1403088B0(v106, (_QWORD*)(a1 + 384));
	v107 = *(_QWORD**)(a1 + 360);
	if (v107)
		*v107 = *(_QWORD*)(a1 + 368);
	v108 = *(_QWORD*)(a1 + 368);
	if (v108)
		*(_QWORD*)(v108 + 360) = *(_QWORD*)(a1 + 360);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	v109 = *(_QWORD**)(a1 + 344);
	if (v109)
		*v109 = *(_QWORD*)(a1 + 352);
	v110 = *(_QWORD*)(a1 + 352);
	if (v110)
		*(_QWORD*)(v110 + 344) = *(_QWORD*)(a1 + 344);
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	if (*(_QWORD*)(a1 + 72))
		sub_1401A4A00((const void***)(a1 + 72));
	v111 = *(_QWORD**)(a1 + 24);
	if (v111)
		*v111 = *(_QWORD*)(a1 + 32);
	v112 = *(_QWORD*)(a1 + 32);
	if (v112)
		*(_QWORD*)(v112 + 24) = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();
// 140B63970: using guessed type __int64 (__fastcall *off_140B63970[102])();
// 140C8A5FC: using guessed type _DWORD dword_140C8A5FC;
// 140C8A600: using guessed type _DWORD dword_140C8A600;

