//----- (00000001401A1530) ----------------------------------------------------
int __fastcall sub_1401A1530(__int64 a1)
{
	int CurrentThreadId; // edi
	__int64 v3; // rcx
	int* v4; // rbx
	int v5; // edi
	int v6; // eax
	int v7; // r15d
	_QWORD* v8; // r14
	int v9; // esi
	int v10; // ecx
	int v11; // r15d
	_QWORD* v12; // r14
	int v13; // esi
	int v14; // ecx
	int v15; // r15d
	_QWORD* v16; // r14
	int v17; // esi
	int v18; // ecx
	int v19; // r15d
	_QWORD* v20; // r14
	int v21; // esi
	int v22; // ecx
	int v23; // r15d
	_QWORD* v24; // r14
	int v25; // esi
	int v26; // ecx
	int v27; // r15d
	_QWORD* v28; // r14
	int v29; // esi
	int v30; // ecx
	int v31; // r15d
	_QWORD* v32; // r14
	int v33; // esi
	int v34; // ecx
	int v35; // r15d
	_QWORD* v36; // r14
	int v37; // esi
	int v38; // ecx
	__int64 v39; // r12
	int v40; // esi
	int v41; // r14d
	__int64 v42; // rdi
	_QWORD* v43; // r13
	_QWORD* v44; // rsi
	int v45; // ecx
	WCHAR* v46; // rcx
	int v47; // eax
	_DWORD* v48; // rdi
	__int64 i; // rcx
	int v50; // eax
	unsigned __int64 v51; // r15
	const wchar_t* v52; // r13
	__int64 v53; // r13
	__int64 v54; // r14
	__int64 v55; // r13
	int v56; // r15d
	__int64 v57; // rdi
	_QWORD* v58; // rsi
	int v59; // ecx
	__int64 v60; // rdi
	WCHAR* v61; // rcx
	WCHAR v62; // ax
	__int64 v63; // r12
	_QWORD* v64; // rdi
	int v65; // ecx
	int v66; // edi
	int v67; // r14d
	_QWORD* v68; // rsi
	int v69; // ecx
	int v70; // r14d
	__int64 v71; // rdi
	_QWORD* v72; // rsi
	int v73; // ecx
	WCHAR* v74; // rdi
	__int64 v75; // rdi
	__int64 v76; // rdx
	__m128i* v77; // rcx
	__int64 v78; // rdi
	__int16 v79; // ax
	const __m128i* v80; // rax
	__int64 v81; // r8
	__int64 v82; // r9
	int v83; // r15d
	__int64 v84; // rdi
	__int64 v85; // r13
	_QWORD* v86; // rsi
	int v87; // ecx
	__int64 v88; // rdx
	__int16* v89; // rcx
	__int16 v90; // ax
	__int64 v91; // rdi
	__int64 v92; // rdx
	__int16* v93; // rcx
	__int64 v94; // rdi
	__int16 v95; // ax
	LPWSTR v96; // rax
	unsigned __int64 v97; // rax
	__int64 v98; // rcx
	__int16* v99; // rax
	__int16* v100; // rax
	__int64 v101; // rdx
	char* v102; // r8
	__int16 v103; // di
	const __m128i* v104; // rax
	unsigned __int64 v105; // rdi
	__int64 v106; // rdx
	__int64 v107; // rcx
	__int64 v108; // r8
	__int64 v109; // r9
	__int64 v110; // rcx
	__int64 v111; // rax
	HANDLE StdHandle; // rax
	__int16 v113; // cx
	HANDLE v114; // rax
	__int16 v115; // cx
	int v116; // r15d
	__int64 v117; // rdi
	__int64 v118; // r13
	_QWORD* v119; // rsi
	int v120; // ecx
	int result; // eax
	__int64 v122; // rdx
	__int16* v123; // rcx
	__int64 v124; // rdx
	__int16 v125; // ax
	HANDLE EventW; // rcx
	int v127; // [rsp+40h] [rbp-C0h]
	DWORD CurrentProcessId; // [rsp+70h] [rbp-90h]
	__int64 v130; // [rsp+88h] [rbp-78h]
	LPWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
	int v132; // [rsp+98h] [rbp-68h] BYREF
	DWORD nSize; // [rsp+9Ch] [rbp-64h] BYREF
	int v134; // [rsp+A0h] [rbp-60h] BYREF
	int* v135; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v136; // [rsp+B0h] [rbp-50h]
	__int64 v137; // [rsp+B8h] [rbp-48h]
	struct _SYSTEMTIME SystemTime; // [rsp+C0h] [rbp-40h] BYREF
	struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [rsp+D0h] [rbp-30h] BYREF
	struct _CONSOLE_SCREEN_BUFFER_INFO v140; // [rsp+E8h] [rbp-18h] BYREF
	WCHAR Buffer[16]; // [rsp+100h] [rbp+0h] BYREF
	__int16 v142[264]; // [rsp+120h] [rbp+20h] BYREF
	__m128i v143[33]; // [rsp+330h] [rbp+230h] BYREF
	__m128i v144[33]; // [rsp+540h] [rbp+440h] BYREF
	__int16 v145[264]; // [rsp+750h] [rbp+650h] BYREF
	int v146[132]; // [rsp+960h] [rbp+860h] BYREF
	WCHAR Filename[264]; // [rsp+B70h] [rbp+A70h] BYREF
	WCHAR pszPath[264]; // [rsp+D80h] [rbp+C80h] BYREF
	unsigned __int16 v149[1024]; // [rsp+F90h] [rbp+E90h] BYREF

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	v135 = 0i64;
	sub_1401C94C0(&v135);
	v4 = v135;
	v5 = 0;
	dword_140C674A4 = 0;
	if (v135)
	{
		v6 = (*(__int64(__fastcall**)(int*, int*, const wchar_t*, _QWORD))(*(_QWORD*)v135 + 40i64))(
			v135,
			&v132,
			L"Flags",
			0i64);
		v5 = dword_140C674A4;
		if (v6 >= 0)
		{
			v5 = v132 | dword_140C674A4;
			dword_140C674A4 |= v132;
		}
	}
	v7 = *(_DWORD*)(a1 + 8);
	v8 = *(_QWORD**)a1;
	v9 = 0;
	if (v7 > 0)
	{
		while (1)
		{
			v10 = *(unsigned __int16*)*v8;
			if ((((v10 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v10 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v8 + 2i64, L"logFile"))
			{
				break;
			}
			++v9;
			++v8;
			if (v9 >= v7)
				goto LABEL_18;
		}
		v5 |= 1u;
		dword_140C674A4 = v5;
	}
LABEL_18:
	v11 = *(_DWORD*)(a1 + 8);
	v12 = *(_QWORD**)a1;
	v13 = 0;
	if (v11 > 0)
	{
		while (1)
		{
			v14 = *(unsigned __int16*)*v12;
			if ((((v14 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v14 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v12 + 2i64, L"logNoFile"))
			{
				break;
			}
			++v13;
			++v12;
			if (v13 >= v11)
				goto LABEL_25;
		}
		v5 &= ~1u;
		dword_140C674A4 = v5;
	}
LABEL_25:
	v15 = *(_DWORD*)(a1 + 8);
	v16 = *(_QWORD**)a1;
	v17 = 0;
	if (v15 > 0)
	{
		while (1)
		{
			v18 = *(unsigned __int16*)*v16;
			if ((((v18 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v18 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v16 + 2i64, L"logFlush"))
			{
				break;
			}
			++v17;
			++v16;
			if (v17 >= v15)
				goto LABEL_32;
		}
		v5 |= 0x10u;
		dword_140C674A4 = v5;
	}
LABEL_32:
	v19 = *(_DWORD*)(a1 + 8);
	v20 = *(_QWORD**)a1;
	v21 = 0;
	if (v19 > 0)
	{
		while (1)
		{
			v22 = *(unsigned __int16*)*v20;
			if ((((v22 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v22 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v20 + 2i64, L"logNoFlush"))
			{
				break;
			}
			++v21;
			++v20;
			if (v21 >= v19)
				goto LABEL_39;
		}
		v5 &= ~0x10u;
		dword_140C674A4 = v5;
	}
LABEL_39:
	v23 = *(_DWORD*)(a1 + 8);
	v24 = *(_QWORD**)a1;
	v25 = 0;
	if (v23 > 0)
	{
		while (1)
		{
			v26 = *(unsigned __int16*)*v24;
			if ((((v26 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v26 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v24 + 2i64, L"logTimestamp"))
			{
				break;
			}
			++v25;
			++v24;
			if (v25 >= v23)
				goto LABEL_46;
		}
		v5 |= 0x20u;
		dword_140C674A4 = v5;
	}
LABEL_46:
	v27 = *(_DWORD*)(a1 + 8);
	v28 = *(_QWORD**)a1;
	v29 = 0;
	if (v27 > 0)
	{
		while (1)
		{
			v30 = *(unsigned __int16*)*v28;
			if ((((v30 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v30 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v28 + 2i64, L"logNoTimestamp"))
			{
				break;
			}
			++v29;
			++v28;
			if (v29 >= v27)
				goto LABEL_53;
		}
		v5 &= ~0x20u;
		dword_140C674A4 = v5;
	}
LABEL_53:
	v31 = *(_DWORD*)(a1 + 8);
	v32 = *(_QWORD**)a1;
	v33 = 0;
	if (v31 > 0)
	{
		while (1)
		{
			v34 = *(unsigned __int16*)*v32;
			if ((((v34 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v34 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v32 + 2i64, L"logFacility"))
			{
				break;
			}
			++v33;
			++v32;
			if (v33 >= v31)
				goto LABEL_60;
		}
		v5 &= ~0x40u;
		dword_140C674A4 = v5;
	}
LABEL_60:
	v35 = *(_DWORD*)(a1 + 8);
	v36 = *(_QWORD**)a1;
	v37 = 0;
	if (v35 > 0)
	{
		while (1)
		{
			v38 = *(unsigned __int16*)*v36;
			if ((((v38 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v38 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v36 + 2i64, L"logNoFacility"))
			{
				break;
			}
			++v37;
			++v36;
			if (v37 >= v35)
				goto LABEL_67;
		}
		dword_140C674A4 = v5 | 0x40;
	}
LABEL_67:
	v39 = *(int*)(a1 + 8);
	v40 = 0;
	v41 = 0;
	v42 = 0i64;
	if ((int)v39 > 0)
	{
		v43 = *(_QWORD**)a1;
		v44 = v43;
		while (1)
		{
			v45 = *(unsigned __int16*)*v44;
			if ((((v45 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v45 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v44 + 2i64, L"logDefaultLevel"))
			{
				break;
			}
			++v42;
			++v41;
			++v44;
			if (v42 >= v39)
				goto LABEL_79;
		}
		if (v41 + 1 < (int)v39)
		{
			v46 = (WCHAR*)v43[v41 + 1];
			if (v46)
			{
				v47 = sub_14018E820(v46);
				v48 = dword_140C674A8;
				for (i = 131i64; i; --i)
					*v48++ = v47;
			}
		}
	LABEL_79:
		v40 = 0;
	}
	v50 = 0;
	v51 = 8i64;
	v136 = 0i64;
	v130 = 8i64;
	do
	{
		if (v50 >= 131)
		{
			v52 = L"Unknown";
		}
		else
		{
			v52 = off_140C2CE70[v50];
			if (!v52)
			{
				v53 = a1;
				goto LABEL_84;
			}
		}
		if (v4
			&& (*(int(__fastcall**)(int*, int*, const wchar_t*, __int64))(*(_QWORD*)v4 + 40i64))(v4, &v134, v52, 1i64) >= 0)
		{
			*(int*)((char*)&dword_140C674A0 + v51) = v134;
		}
		sub_14001B370(v149, 1024i64, L"log%s", v52);
		v63 = *(int*)(a1 + 8);
		if ((int)v63 > 0)
		{
			v64 = *(_QWORD**)a1;
			while (1)
			{
				v65 = *(unsigned __int16*)*v64;
				if ((((v65 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v65 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v64 + 2i64, v149))
				{
					break;
				}
				++v40;
				++v64;
				if (v40 >= (int)v63)
					goto LABEL_108;
			}
			v70 = 0;
			v71 = 0i64;
			v72 = *(_QWORD**)a1;
			while (1)
			{
				v73 = *(unsigned __int16*)*v72;
				if ((((v73 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v73 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v72 + 2i64, v149))
				{
					break;
				}
				++v71;
				++v70;
				++v72;
				if (v71 >= v63)
					goto LABEL_119;
			}
			if (v70 + 1 >= (int)v63
				|| (v74 = *(WCHAR**)(*(_QWORD*)a1 + 8 * v71 + 8)) == 0i64
				|| !(unsigned int)sub_1407DFF2C(*v74))
			{
			LABEL_119:
				v51 = v130;
				*(int*)((char*)&dword_140C674A0 + v130) = 2;
				goto LABEL_108;
			}
			v51 = v130;
			*(int*)((char*)&dword_140C674A0 + v130) = sub_14018E820(v74);
		}
	LABEL_108:
		sub_14001B370(v149, 1024i64, L"logNo%s", v52);
		v53 = a1;
		v66 = 0;
		v67 = *(_DWORD*)(a1 + 8);
		v68 = *(_QWORD**)a1;
		if (v67 <= 0)
		{
		LABEL_113:
			v40 = 0;
		}
		else
		{
			while (1)
			{
				v69 = *(unsigned __int16*)*v68;
				if ((((v69 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v69 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v68 + 2i64, v149))
				{
					break;
				}
				++v66;
				++v68;
				if (v66 >= v67)
					goto LABEL_113;
			}
			v40 = 0;
			*(int*)((char*)&dword_140C674A0 + v51) = -1;
		}
	LABEL_84:
		v51 += 4i64;
		v50 = v136 + 1;
		v130 = v51;
		++v136;
	} while (v51 < 0x214);
	v54 = 260i64;
	if ((dword_140C674A4 & 1) != 0)
	{
		v55 = *(int*)(v53 + 8);
		v56 = 0;
		v57 = 0i64;
		if ((int)v55 <= 0)
			goto LABEL_92;
		v58 = *(_QWORD**)a1;
		while (1)
		{
			v59 = *(unsigned __int16*)*v58;
			if ((((v59 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v59 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v58 + 2i64, L"logFileName"))
			{
				break;
			}
			++v57;
			++v56;
			++v58;
			if (v57 >= v55)
				goto LABEL_92;
		}
		if (v56 + 1 < (int)v55 && (v75 = *(_QWORD*)(*(_QWORD*)a1 + 8i64 * v56 + 8)) != 0)
		{
			v76 = 260i64;
			v77 = v143;
			v78 = v75 - (_QWORD)v143;
			while (v76 != -2147483386)
			{
				v79 = *(__int16*)((char*)v77->m128i_i16 + v78);
				if (!v79)
					break;
				v77->m128i_i16[0] = v79;
				v77 = (__m128i*)((char*)v77 + 2);
				if (!--v76)
				{
					v77[-1].m128i_i16[7] = 0;
					goto LABEL_171;
				}
			}
			v77->m128i_i16[0] = 0;
		}
		else
		{
		LABEL_92:
			v60 = 16i64;
			nSize = 16;
			if (!GetComputerNameW(Buffer, &nSize))
			{
				v61 = Buffer;
				while (v60 != -2147483630)
				{
					v62 = *(WCHAR*)((char*)v61 + (char*)L"UNKNOWN" - (char*)Buffer);
					if (!v62)
						break;
					*v61++ = v62;
					if (!--v60)
					{
						--v61;
						break;
					}
				}
				*v61 = 0;
			}
			GetModuleFileNameW(0i64, Filename, 0x104u);
			GetFullPathNameW(Filename, 0x104u, (LPWSTR)v144, &FilePart);
			v80 = sub_1407DD8D8(v144, 0x2Eu);
			if (v80)
				v80->m128i_i16[0] = 0;
			v83 = 0;
			v84 = 0i64;
			v85 = *(int*)(a1 + 8);
			if ((int)v85 <= 0)
				goto LABEL_142;
			v86 = *(_QWORD**)a1;
			while (1)
			{
				v87 = *(unsigned __int16*)*v86;
				if ((((v87 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v87 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v86 + 2i64, L"logDir"))
				{
					break;
				}
				++v84;
				++v83;
				++v86;
				if (v84 >= v85)
					goto LABEL_142;
			}
			if (v83 + 1 < (int)v85 && (v91 = *(_QWORD*)(*(_QWORD*)a1 + 8i64 * v83 + 8)) != 0)
			{
				v92 = 260i64;
				v93 = v142;
				v94 = v91 - (_QWORD)v142;
				while (v92 != -2147483386)
				{
					v95 = *(__int16*)((char*)v93 + v94);
					if (!v95)
						break;
					*v93++ = v95;
					if (!--v92)
					{
						*(v93 - 1) = 0;
						goto LABEL_160;
					}
				}
				*v93 = 0;
			}
			else
			{
			LABEL_142:
				v88 = 260i64;
				v89 = v142;
				while (v88 != -2147483386)
				{
					v90 = v89[528];
					if (!v90)
						break;
					*v89++ = v90;
					if (!--v88)
					{
						--v89;
						break;
					}
				}
				v96 = FilePart;
				*v89 = 0;
				v97 = ((char*)v96 - (char*)v144) >> 1;
				if (v97 >= 260)
				{
					_report_rangecheckfailure(v144, v88, v81, v82);
					JUMPOUT(0x1401A2454i64);
				}
				v142[v97] = 0;
				v98 = 260i64;
				v99 = v142;
				while (*v99)
				{
					++v99;
					if (!--v98)
					{
						v137 = 0i64;
						goto LABEL_160;
					}
				}
				v137 = 260 - v98;
				v100 = &v142[260 - v98];
				v101 = 2147483646i64;
				v102 = (char*)((char*)L"..\\Logs" - (char*)v100);
				while (v101)
				{
					v103 = *(__int16*)((char*)v100 + (_QWORD)v102);
					if (!v103)
						break;
					*v100++ = v103;
					--v101;
					if (!--v98)
					{
						*(v100 - 1) = 0;
						goto LABEL_160;
					}
				}
				*v100 = 0;
			}
		LABEL_160:
			v145[0] = 0;
			GetLocalTime(&SystemTime);
			if ((dword_140C674A4 & 0x100) != 0)
			{
				CurrentProcessId = GetCurrentProcessId();
				v127 = SystemTime.wYear % 100;
				if ((CurrentProcessId & 0xFFFF0000) != 0)
					sub_14001B370(
						v143,
						260i64,
						L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.%08x.txt",
						v142,
						FilePart,
						16042,
						Buffer,
						v145,
						v127,
						SystemTime.wMonth,
						SystemTime.wDay,
						SystemTime.wHour,
						SystemTime.wMinute,
						SystemTime.wSecond,
						CurrentProcessId);
				else
					sub_14001B370(
						v143,
						260i64,
						L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.%04x.txt",
						v142,
						FilePart,
						16042,
						Buffer,
						v145,
						v127,
						SystemTime.wMonth,
						SystemTime.wDay,
						SystemTime.wHour,
						SystemTime.wMinute,
						SystemTime.wSecond,
						CurrentProcessId);
			}
			else
			{
				sub_14001B370(
					v143,
					260i64,
					L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.txt",
					v142,
					FilePart,
					16042,
					Buffer,
					v145,
					SystemTime.wYear % 0x64u,
					SystemTime.wMonth,
					SystemTime.wDay,
					SystemTime.wHour,
					SystemTime.wMinute,
					SystemTime.wSecond);
			}
		}
	LABEL_171:
		v104 = sub_1407DD8D8(v143, 0x5Cu);
		if (v104)
		{
			v105 = 2 * (((char*)v104 - (char*)v143) >> 1);
			sub_1407DB590(v146, v143[0].m128i_i32, v105);
			if (v105 >= 0x208)
			{
				_report_rangecheckfailure(v107, v106, v108, v109);
				__debugbreak();
			}
			v110 = *(_QWORD*)&qword_140C63788;
			*(_WORD*)((char*)v146 + v105) = 0;
			sub_1401B5020(v110, pszPath, v108, (const WCHAR*)v146);
			SHCreateDirectory(0i64, pszPath);
		}
		qword_140C676C8 = sub_1407E0734((const WCHAR*)v143, word_1409E2144);
	}
	if ((dword_140C674A4 & 2) != 0)
	{
		qword_140C776F0 = 524280i64;
		v111 = 1048560i64;
		if (!is_mul_ok(0x7FFF8ui64, 2ui64))
			v111 = -1i64;
		qword_140C776E8 = (__int64)sub_14018B280(v111, 0);
	}
	if ((dword_140C674A4 & 4) != 0)
	{
		StdHandle = GetStdHandle(0xFFFFFFF5);
		hConsoleOutput = StdHandle;
		if (StdHandle != (HANDLE)-1i64)
		{
			GetConsoleScreenBufferInfo(StdHandle, &ConsoleScreenBufferInfo);
			word_140C7771C = ConsoleScreenBufferInfo.wAttributes;
			word_140C77722 = ConsoleScreenBufferInfo.wAttributes;
			v113 = (ConsoleScreenBufferInfo.wAttributes ^ 8) & 0xFFF8;
			word_140C77720 = v113;
			word_140C77718[0] = v113 | 4;
			word_140C7771A = v113 | 6;
			word_140C7771E = v113 | 3;
		}
	}
	if ((dword_140C674A4 & 8) != 0)
	{
		v114 = GetStdHandle(0xFFFFFFF4);
		qword_140C77728 = v114;
		if (v114 != (HANDLE)-1i64)
		{
			GetConsoleScreenBufferInfo(v114, &v140);
			word_140C77734 = v140.wAttributes;
			word_140C7773A = v140.wAttributes;
			v115 = (v140.wAttributes ^ 8) & 0xFFF8;
			word_140C77738 = v115;
			word_140C77730[0] = v115 | 4;
			word_140C77732 = v115 | 6;
			word_140C77736 = v115 | 3;
		}
	}
	v116 = 0;
	v117 = 0i64;
	v118 = *(int*)(a1 + 8);
	if ((int)v118 > 0)
	{
		v119 = *(_QWORD**)a1;
		while (1)
		{
			v120 = *(unsigned __int16*)*v119;
			if ((((v120 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v120 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v119 + 2i64, L"errDir"))
			{
				break;
			}
			++v117;
			++v116;
			++v119;
			if (v117 >= v118)
				goto LABEL_191;
		}
		if (v116 + 1 < (int)v118)
		{
			v122 = *(_QWORD*)(*(_QWORD*)a1 + 8i64 * v116 + 8);
			if (v122)
			{
				v123 = word_140C884B0;
				v124 = v122 - (_QWORD)word_140C884B0;
				while (v54 != -2147483386)
				{
					v125 = *(__int16*)((char*)v123 + v124);
					if (!v125)
						break;
					*v123++ = v125;
					if (!--v54)
					{
						*(v123 - 1) = 0;
						goto LABEL_191;
					}
				}
				*v123 = 0;
			}
		}
	}
LABEL_191:
	if (v4)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4);
	result = qword_140C67408;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		result = qword_140C67410;
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return result;
}
// 1401A244F: control flows out of bounds to 1401A2454
// 1401A1BFF: conditional instruction was optimized away because r12d.4>=1
// 1401A1D32: conditional instruction was optimized away because rdx.8!=0
// 1401A1D45: conditional instruction was optimized away because rdi.8!=0
// 1401A1E91: conditional instruction was optimized away because rdx.8!=0
// 1401A1EA1: conditional instruction was optimized away because rdx.8!=0
// 1401A1FBE: conditional instruction was optimized away because rcx.8!=0
// 1401A1FDC: conditional instruction was optimized away because rcx.8!=0
// 1401A201F: conditional instruction was optimized away because rcx.8!=0
// 1401A23B1: conditional instruction was optimized away because r14.8!=0
// 1401A2178: variable 'v108' is possibly undefined
// 1401A2449: variable 'v107' is possibly undefined
// 1401A2449: variable 'v106' is possibly undefined
// 1401A2449: variable 'v109' is possibly undefined
// 1401A244F: variable 'v81' is possibly undefined
// 1401A244F: variable 'v82' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409E2144: using guessed type _WORD word_1409E2144[12];
// 140A44B28: using guessed type wchar_t aLogtimestamp[13];
// 140A44B48: using guessed type wchar_t aLognoflush[11];
// 140A44B60: using guessed type wchar_t aLogfacility[12];
// 140A44B78: using guessed type wchar_t aLognotimestamp[15];
// 140A44B98: using guessed type wchar_t aLogfile[8];
// 140A44BA8: using guessed type wchar_t aFlags[6];
// 140A44BB8: using guessed type wchar_t aLogflush[9];
// 140A44BD0: using guessed type wchar_t aLognofile[10];
// 140A44BE8: using guessed type wchar_t aUnknown_6[8];
// 140A44BF8: using guessed type wchar_t aLogfilename[12];
// 140A44C10: using guessed type wchar_t aLogs[8];
// 140A44C20: using guessed type wchar_t aLogdir[7];
// 140A44C30: using guessed type wchar_t aLogdefaultleve[16];
// 140A44C50: using guessed type wchar_t aLognofacility[14];
// 140A44C70: using guessed type wchar_t aLognoS[8];
// 140A44C80: using guessed type wchar_t aLogS[6];
// 140A44C90: using guessed type wchar_t aErrdir[7];
// 140A44D20: using guessed type wchar_t aSSDSS02u02u02u[55];
// 140A44DB0: using guessed type wchar_t aSSDSS02u02u02u_1[50];
// 140A44E20: using guessed type wchar_t aSSDSS02u02u02u_0[55];
// 140A46EE8: using guessed type wchar_t aUnknown_5[8];
// 140C2CE70: using guessed type wchar_t *off_140C2CE70[131];
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C674A0: using guessed type int dword_140C674A0;
// 140C674A4: using guessed type int dword_140C674A4;
// 140C674A8: using guessed type _DWORD dword_140C674A8[77];
// 140C676C8: using guessed type __int64 qword_140C676C8;
// 140C776E8: using guessed type __int64 qword_140C776E8;
// 140C776F0: using guessed type __int64 qword_140C776F0;
// 140C77718: using guessed type __int16 word_140C77718[];
// 140C7771A: using guessed type __int16 word_140C7771A;
// 140C7771C: using guessed type __int16 word_140C7771C;
// 140C7771E: using guessed type __int16 word_140C7771E;
// 140C77720: using guessed type __int16 word_140C77720;
// 140C77722: using guessed type __int16 word_140C77722;
// 140C77730: using guessed type __int16 word_140C77730[];
// 140C77732: using guessed type __int16 word_140C77732;
// 140C77734: using guessed type __int16 word_140C77734;
// 140C77736: using guessed type __int16 word_140C77736;
// 140C77738: using guessed type __int16 word_140C77738;
// 140C7773A: using guessed type __int16 word_140C7773A;
// 140C884B0: using guessed type __int16 word_140C884B0[260];
// 1401A1530: using guessed type unsigned __int16 var_830[1024];
// 1401A1530: using guessed type __m128i var_1490[33];
// 1401A1530: using guessed type __m128i var_1280[33];
// 1401A1530: using guessed type int var_E60[132];

