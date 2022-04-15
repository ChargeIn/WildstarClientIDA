//----- (0000000140192440) ----------------------------------------------------
__int64 __fastcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS* ExceptionInfo)
{
	_DWORD* StackBase; // r15
	int v2; // r13d
	struct _EXCEPTION_POINTERS* v3; // rsi
	_DWORD* v4; // r15
	unsigned int v5; // edi
	DWORD ExceptionCode; // ecx
	BOOL v7; // r12d
	BOOL v8; // ebx
	BOOL v9; // eax
	int v10; // ecx
	const __m128i* v11; // rax
	LPWSTR i; // rax
	__int64 v13; // rdx
	WCHAR* v14; // rcx
	WCHAR v15; // ax
	unsigned int v16; // ecx
	const wchar_t* v17; // r13
	__int64 v18; // rdi
	_DWORD* p_ExceptionCode; // rax
	PCONTEXT ContextRecord; // rdx
	int* v21; // rcx
	__int64 v22; // rax
	__int128 v23; // xmm1
	__int64 v24; // rbx
	LPVOID Value; // r15
	unsigned __int16* v26; // rsi
	__int64 v27; // rax
	unsigned __int16 v28; // cx
	__int64 v29; // rbx
	__int64 v30; // r10
	unsigned __int16* j; // r11
	unsigned __int64 v32; // rdx
	unsigned __int64 v33; // r8
	__int64 v34; // rax
	unsigned __int16 v35; // r9
	__int64 v36; // rax
	__int16* v37; // rbx
	int v38; // r12d
	__int64 v39; // rax
	unsigned __int64 v40; // rbx
	int v41; // esi
	HANDLE FileW; // r15
	unsigned int v43; // r13d
	unsigned int CurrentProcessId; // ebx
	HANDLE CurrentProcess; // rax
	int v46; // ebx
	int v47; // eax
	int v48; // r12d
	int* v49; // rdx
	int v50; // r15d
	int v51; // eax
	void* v52; // rbx
	int v53; // esi
	int v54; // eax
	signed int LastError; // eax
	bool v56; // sf
	signed __int64 v57; // rsi
	signed int v58; // eax
	bool v59; // sf
	int v60; // eax
	__int64 v61; // rbx
	HANDLE EventW; // rcx
	__int64 dwCreationDisposition; // [rsp+20h] [rbp-F0h]
	__int64 dwFlagsAndAttributes; // [rsp+28h] [rbp-E8h]
	__int64 v66; // [rsp+60h] [rbp-B0h]
	__int64 v67; // [rsp+68h] [rbp-A8h]
	__int64 v68; // [rsp+70h] [rbp-A0h]
	const wchar_t* v69; // [rsp+90h] [rbp-80h]
	BOOL v70; // [rsp+98h] [rbp-78h]
	int v71; // [rsp+A0h] [rbp-70h]
	int v72; // [rsp+A4h] [rbp-6Ch]
	BOOL v74; // [rsp+B0h] [rbp-60h]
	__int16* v75; // [rsp+B8h] [rbp-58h]
	LPWSTR FilePart; // [rsp+C0h] [rbp-50h] BYREF
	DWORD nSize; // [rsp+C8h] [rbp-48h] BYREF
	__int128 v78; // [rsp+D0h] [rbp-40h] BYREF
	DWORD NumberOfBytesWritten; // [rsp+E0h] [rbp-30h] BYREF
	int* v80; // [rsp+E8h] [rbp-28h] BYREF
	__int64 v81; // [rsp+F0h] [rbp-20h] BYREF
	_DWORD* v82; // [rsp+F8h] [rbp-18h]
	char* v83; // [rsp+100h] [rbp-10h] BYREF
	HINTERNET hSession; // [rsp+108h] [rbp-8h] BYREF
	__int64 v85; // [rsp+110h] [rbp+0h] BYREF
	unsigned __int64 v86; // [rsp+118h] [rbp+8h] BYREF
	unsigned __int64 v87; // [rsp+120h] [rbp+10h] BYREF
	const WCHAR* v88[5]; // [rsp+130h] [rbp+20h] BYREF
	INTERNET_PORT v89; // [rsp+15Ch] [rbp+4Ch]
	struct _SYSTEMTIME SystemTime; // [rsp+1A0h] [rbp+90h] BYREF
	HINTERNET hInternet[2]; // [rsp+1B0h] [rbp+A0h] BYREF
	HANDLE hFile; // [rsp+1C0h] [rbp+B0h]
	char v93[72]; // [rsp+1C8h] [rbp+B8h] BYREF
	__int128 v94[9]; // [rsp+210h] [rbp+100h] BYREF
	__int64 v95; // [rsp+2A0h] [rbp+190h]
	int v96[308]; // [rsp+2B0h] [rbp+1A0h] BYREF
	wchar_t v97[12]; // [rsp+780h] [rbp+670h] BYREF
	WCHAR v98[16]; // [rsp+798h] [rbp+688h] BYREF
	wchar_t v99[16]; // [rsp+7B8h] [rbp+6A8h] BYREF
	char v100[40]; // [rsp+7D8h] [rbp+6C8h] BYREF
	int v101[64]; // [rsp+800h] [rbp+6F0h] BYREF
	char v102[528]; // [rsp+900h] [rbp+7F0h] BYREF
	WCHAR v103[264]; // [rsp+B10h] [rbp+A00h] BYREF
	WCHAR FileName[264]; // [rsp+D20h] [rbp+C10h] BYREF
	WCHAR v105[264]; // [rsp+F30h] [rbp+E20h] BYREF
	WCHAR PathName[264]; // [rsp+1140h] [rbp+1030h] BYREF
	int v107[256]; // [rsp+1350h] [rbp+1240h] BYREF
	WCHAR Filename[264]; // [rsp+1750h] [rbp+1640h] BYREF
	__m128i Buffer[33]; // [rsp+1960h] [rbp+1850h] BYREF
	WCHAR TempFileName[264]; // [rsp+1B70h] [rbp+1A60h] BYREF
	__int16 v111[1024]; // [rsp+1D80h] [rbp+1C70h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v2 = *(StackBase - 1);
	v3 = ExceptionInfo;
	v4 = StackBase - 1;
	v5 = 1;
	v71 = v2;
	v82 = v4;
	*v4 = 1;
	sub_14003D8F0(&v81, &qword_140C67400);
	ExceptionCode = v3->ExceptionRecord->ExceptionCode;
	v7 = ExceptionCode + 805371904 <= 3;
	v8 = ExceptionCode == 1073741845;
	v70 = v7;
	v74 = v8;
	v9 = IsDebuggerPresent();
	v10 = -1;
	if (v9)
		goto LABEL_154;
	GetModuleFileNameW(0i64, Filename, 0x104u);
	GetFullPathNameW(Filename, 0x104u, (LPWSTR)Buffer, &FilePart);
	v11 = sub_1407DD8D8(Buffer, 0x2Eu);
	if (v11)
		v11->m128i_i16[0] = 0;
	for (i = FilePart; *i; ++i)
	{
		if (*i == 46)
			*i = 95;
	}
	sub_14001B370(v99, 16i64, L"%d", 16042i64);
	nSize = 16;
	if ((dword_140C63724 & 4) != 0 || !GetComputerNameW(v98, &nSize))
	{
		v13 = 16i64;
		v14 = v98;
		while (v13 != -2147483630)
		{
			v15 = *(WCHAR*)((char*)v14 + (char*)L"UNKNOWN" - (char*)v98);
			if (!v15)
				break;
			*v14++ = v15;
			if (!--v13)
			{
				--v14;
				break;
			}
		}
		*v14 = 0;
	}
	GetSystemTime(&SystemTime);
	v75 = sub_1401909C0();
	CreateDirectoryW((LPCWSTR)v75, 0i64);
	v16 = v3->ExceptionRecord->ExceptionCode;
	if (v16 > 0xC000008E)
	{
		if (v16 > 0xC00000FD)
		{
			switch (v16)
			{
			case 0xCFFF0000:
				v17 = L"Warning";
				break;
			case 0xCFFF0001:
				v17 = L"Error";
				break;
			case 0xCFFF0002:
				v17 = L"FatalError";
				break;
			case 0xCFFF0003:
				v17 = L"Assert";
				break;
			default:
			LABEL_58:
				sub_14001B370(v100, 16i64, L"%0.8x");
				v17 = (const wchar_t*)v100;
				break;
			}
		}
		else if (v16 == -1073741571)
		{
			v17 = L"StackOverflow";
		}
		else
		{
			switch (v16)
			{
			case 0xC000008F:
				v17 = L"FloatInexactResult";
				break;
			case 0xC0000090:
				v17 = L"FloatInvalidOperation";
				break;
			case 0xC0000091:
				v17 = L"FloatOverflow";
				break;
			case 0xC0000092:
				v17 = L"FloatStackCheck";
				break;
			case 0xC0000093:
				v17 = L"FloatUnderflow";
				break;
			case 0xC0000094:
				v17 = L"IntegerDivideByZero";
				break;
			case 0xC0000095:
				v17 = L"IntegerOverflow";
				break;
			case 0xC0000096:
				v17 = L"PrivilegedInstruction";
				break;
			default:
				goto LABEL_58;
			}
		}
	}
	else
	{
		if (v16 == -1073741682)
		{
			v17 = L"FloatDivideByZero";
			goto LABEL_63;
		}
		if (v16 <= 0xC0000006)
		{
			if (v16 == -1073741818)
			{
				v17 = L"InPageError";
				goto LABEL_63;
			}
			if (v16 > 0x80000003)
			{
				if (v16 == -2147483644)
				{
					v17 = L"SingleStep";
					goto LABEL_63;
				}
				if (v16 == -1073741819)
				{
					v17 = L"AccessViolation";
					goto LABEL_63;
				}
			}
			else
			{
				switch (v16)
				{
				case 0x80000003:
					v17 = L"Breakpoint";
					goto LABEL_63;
				case 0x40000015u:
					v17 = L"RuntimeError";
					goto LABEL_63;
				case 0x80000001:
					v17 = L"GuardPage";
					goto LABEL_63;
				case 0x80000002:
					v17 = L"DatatypeMisalignment";
					goto LABEL_63;
				}
			}
			goto LABEL_58;
		}
		switch (v16)
		{
		case 0xC0000008:
			v17 = L"InvalidHandle";
			break;
		case 0xC000001D:
			v17 = L"IllegalInstruction";
			break;
		case 0xC0000025:
			v17 = L"NoncontinuableException";
			break;
		case 0xC0000026:
			v17 = L"InvalidDisposition";
			break;
		case 0xC000008C:
			v17 = L"ArrayBoundsExceeded";
			break;
		case 0xC000008D:
			v17 = L"FloatDenormalOperand";
			break;
		default:
			goto LABEL_58;
		}
	}
LABEL_63:
	v69 = v17;
	v85 = 0i64;
	sub_140191420(&v85);
	v18 = v85;
	if (v7)
	{
		p_ExceptionCode = &v3->ExceptionRecord->ExceptionCode;
		ContextRecord = v3->ContextRecord;
		v21 = v96;
		v94[0] = *(_OWORD*)&v3->ExceptionRecord->ExceptionCode;
		v94[1] = *((_OWORD*)p_ExceptionCode + 1);
		v94[2] = *((_OWORD*)p_ExceptionCode + 2);
		v94[3] = *((_OWORD*)p_ExceptionCode + 3);
		v94[4] = *((_OWORD*)p_ExceptionCode + 4);
		v94[5] = *((_OWORD*)p_ExceptionCode + 5);
		v94[6] = *((_OWORD*)p_ExceptionCode + 6);
		v94[7] = *((_OWORD*)p_ExceptionCode + 7);
		v94[8] = *((_OWORD*)p_ExceptionCode + 8);
		v95 = *((_QWORD*)p_ExceptionCode + 18);
		if ((((unsigned __int8)v96 | (unsigned __int8)ContextRecord) & 0xF) != 0)
		{
			sub_1407DB590(v96, (int*)ContextRecord, 0x4D0ui64);
		}
		else
		{
			v22 = 9i64;
			do
			{
				*(_OWORD*)v21 = *(_OWORD*)&ContextRecord->P1Home;
				*((_OWORD*)v21 + 1) = *(_OWORD*)&ContextRecord->P3Home;
				*((_OWORD*)v21 + 2) = *(_OWORD*)&ContextRecord->P5Home;
				*((_OWORD*)v21 + 3) = *(_OWORD*)&ContextRecord->ContextFlags;
				*((_OWORD*)v21 + 4) = *(_OWORD*)&ContextRecord->SegGs;
				*((_OWORD*)v21 + 5) = *(_OWORD*)&ContextRecord->Dr1;
				*((_OWORD*)v21 + 6) = *(_OWORD*)&ContextRecord->Dr3;
				v23 = *(_OWORD*)&ContextRecord->Dr7;
				v21 += 32;
				ContextRecord = (PCONTEXT)((char*)ContextRecord + 128);
				*((_OWORD*)v21 - 1) = v23;
				--v22;
			} while (v22);
			*(_OWORD*)v21 = *(_OWORD*)&ContextRecord->P1Home;
			*((_OWORD*)v21 + 1) = *(_OWORD*)&ContextRecord->P3Home;
			*((_OWORD*)v21 + 2) = *(_OWORD*)&ContextRecord->P5Home;
			*((_OWORD*)v21 + 3) = *(_OWORD*)&ContextRecord->ContextFlags;
			*((_OWORD*)v21 + 4) = *(_OWORD*)&ContextRecord->SegGs;
		}
		v3->ExceptionRecord = (PEXCEPTION_RECORD)v94;
		v3->ContextRecord = (PCONTEXT)v96;
		sub_140191E30(v18, v3);
	}
	v24 = 0i64;
	if (v7)
		v24 = sub_1400564A0((unsigned __int16*)v3->ExceptionRecord->ExceptionInformation[0]);
	Value = TlsGetValue(dwTlsIndex);
	if (Value)
	{
		do
		{
			v26 = (unsigned __int16*)*((_QWORD*)Value + 1);
			if (!v26)
				break;
			(**(void(__fastcall***)(LPVOID, __int16*, __int64))Value)(Value, v111, 1024i64);
			v27 = sub_1400564A0(v26);
			v28 = v111[0];
			v29 = v27 + 2860486313i64 * v24;
			v30 = 0i64;
			for (j = (unsigned __int16*)v111; *j; v30 = v36 + 2860486313i64 * v30)
			{
				if (v28 >= 0x80u)
				{
					v32 = 0i64;
					v33 = 977i64;
					while (1)
					{
						v34 = v32 + ((v33 - v32) >> 1);
						v35 = word_140A41A80[v34];
						if (v28 >= v35)
						{
							if (v28 <= v35)
							{
								v28 = word_140A40AF0[v34];
								goto LABEL_86;
							}
							v32 = v34 + 1;
						}
						else
						{
							v33 = v32 + ((v33 - v32) >> 1);
						}
						if (v32 >= v33)
							goto LABEL_86;
					}
				}
				if ((unsigned __int16)(v28 - 65) <= 0x19u)
					v28 += 32;
			LABEL_86:
				++j;
				v36 = v28;
				v28 = *j;
			}
			Value = (LPVOID) * ((_QWORD*)Value + 2);
			v24 = v30 + 2860486313i64 * v29;
		} while (Value);
		v3 = ExceptionInfo;
	}
	sub_14001B370(v97, 9i64, L"%0.8x", (unsigned int)v24);
	sub_14001B370(
		v102,
		260i64,
		L"%s.%s.%s.%p.%s.%s.%0.2u%0.2u%0.2u.%0.2u%0.2u%0.2u",
		FilePart,
		v99,
		v17,
		v3->ExceptionRecord->ExceptionAddress,
		v97,
		v98,
		SystemTime.wYear % 0x64u,
		SystemTime.wMonth,
		SystemTime.wDay,
		SystemTime.wHour,
		SystemTime.wMinute,
		SystemTime.wSecond);
	v37 = v75;
	v72 = 0;
	v38 = ((unsigned __int8)~(_BYTE)dword_140C63724 >> 1) & 1;
	if ((int)sub_14001B370(v103, 260i64, L"%s\\%s.txt", v75, v102) >= 0)
	{
		v39 = sub_1407E0734(v103, L"w");
		v40 = v39;
		if (v39)
		{
			sub_140191520(v39, &SystemTime.wYear, (unsigned int**)v3);
			sub_140191F50(v18, v40, (__int64)v3);
			sub_1407E089C(v40);
			v72 = 1;
		}
		v37 = v75;
	}
	v41 = 0;
	if (v18)
	{
		if ((int)sub_14001B370(FileName, 260i64, L"%s\\%s.dmp", v37, v102) >= 0)
		{
			FileW = CreateFileW(FileName, 0xC0000000, 3u, 0i64, 2u, 0, 0i64);
			if (FileW != (HANDLE)-1i64)
			{
				v78 = 0ui64;
				LODWORD(v78) = GetCurrentThreadId();
				*(_QWORD*)((char*)&v78 + 4) = ExceptionInfo;
				HIDWORD(v78) = 1;
				if ((dword_140C63724 & 1) != 0 && (!v70 || ExceptionInfo->ExceptionRecord->ExceptionCode == -805371902))
				{
					v38 = 0;
					v43 = 2;
				}
				else
				{
					v43 = 0;
				}
				CurrentProcessId = GetCurrentProcessId();
				CurrentProcess = GetCurrentProcess();
				if ((unsigned int)sub_140191340(
					(__int64)CurrentProcess,
					CurrentProcessId,
					(__int64)FileW,
					v43,
					(__int64)&v78,
					dwFlagsAndAttributes))
					v41 = 1;
				CloseHandle(FileW);
				v17 = v69;
			}
		}
	}
	v46 = 0;
	if ((int)sub_14001B370(v105, 260i64, L"%s\\%s.log", v75, v102) >= 0)
	{
		if (dword_140C674A0)
			sub_1401A2BC0(v105);
		else
			OutputDebugStringA("WARNING! Log called before CRT startup");
		v46 = 1;
	}
	if (!v38)
		goto LABEL_151;
	if (!v72)
		goto LABEL_151;
	if (!v41)
		goto LABEL_151;
	if (!v46)
		goto LABEL_151;
	v47 = sub_14018CDF0();
	v48 = v47;
	if (dword_140C8A1AC)
	{
		if (v47 - dword_140C8A1A8 < 0)
			goto LABEL_151;
	}
	v49 = (int*)&word_140C886C0;
	if (!word_140C886C0)
		v49 = (int*)L"http://crash.na.wildstar-online.com/errors.php";
	hSession = 0i64;
	v88[0] = 0i64;
	sub_1401C3640((__int64)v88, v49);
	v50 = 0;
	v51 = sub_1401C37F0(&hSession, v88[0], 0);
	v52 = hSession;
	if (v51 < 0)
		goto LABEL_144;
	hFile = (HANDLE)-1i64;
	*(_OWORD*)hInternet = 0i64;
	v53 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
		* 2.328306436538696e-10
		* 4294967296.0);
	v54 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
	LODWORD(dwCreationDisposition) = v53;
	sub_1400EFDD0(
		v93,
		64i64,
		"%0.8x_MultipartBoundary_%0.8x",
		(unsigned int)(int)((double)v54 * 2.328306436538696e-10 * 4294967296.0),
		dwCreationDisposition);
	v86 = 1024i64;
	v83 = (char*)v107;
	LODWORD(v68) = SystemTime.wDay;
	LODWORD(v67) = SystemTime.wMonth;
	LODWORD(v66) = SystemTime.wYear % 0x64u;
	sub_140193940(
		v107,
		0x400ui64,
		(int**)&v83,
		&v86,
		0,
		"Program=%S\r\n"
		"Build=%S\r\n"
		"Type=%S\r\n"
		"Address=%p\r\n"
		"Hash=%S\r\n"
		"Machine=%S\r\n"
		"Date=%0.2u%0.2u%0.2u\r\n"
		"Time=%0.2u%0.2u%0.2u\r\n",
		FilePart,
		v99,
		v17,
		ExceptionInfo->ExceptionRecord->ExceptionAddress,
		v97,
		v98,
		v66,
		v67,
		v68,
		SystemTime.wHour,
		SystemTime.wMinute,
		SystemTime.wSecond);
	hInternet[0] = WinHttpConnect(v52, v88[4], v89, 0);
	if (hInternet[0])
	{
		if (GetTempPathW(0x104u, PathName))
		{
			if (GetTempFileNameW(PathName, L"ERR", 0, TempFileName))
			{
				hFile = CreateFileW(TempFileName, 0xC0000000, 0, 0i64, 2u, 0x4000100u, 0i64);
				if (hFile != (HANDLE)-1i64)
					goto LABEL_125;
			}
		}
	}
	LastError = GetLastError();
	v56 = LastError < 0;
	if (LastError > 0)
		v56 = 1;
	if (!v56)
	{
	LABEL_125:
		v57 = v83 - (char*)v107;
		v80 = v101;
		v87 = 256i64;
		if ((int)sub_140193940(
			v101,
			0x100ui64,
			&v80,
			&v87,
			0,
			"\r\n--%s\r\nContent-Disposition: form-data; name=\"%s\"\r\n\r\n",
			v93,
			"Id") >= 0)
		{
			if (WriteFile(hFile, v101, (_DWORD)v80 - (unsigned int)v101, &NumberOfBytesWritten, 0i64)
				&& WriteFile(hFile, v107, v57, &NumberOfBytesWritten, 0i64))
			{
				goto LABEL_134;
			}
			v58 = GetLastError();
			v59 = v58 < 0;
			if (v58 > 0)
				v59 = 1;
			if (!v59)
			{
			LABEL_134:
				if (sub_1401C4370((__int64)hInternet, "Info", v103) >= 0
					&& sub_1401C4370((__int64)hInternet, "Dump", FileName) >= 0
					&& sub_1401C4370((__int64)hInternet, "Log", v105) >= 0
					&& sub_1401C4540((__int64)hInternet, (__int64)v88) >= 0)
				{
					v50 = 1;
				}
			}
		}
	}
	if (hInternet[1])
		WinHttpCloseHandle(hInternet[1]);
	if (hInternet[0])
		WinHttpCloseHandle(hInternet[0]);
	if (hFile != (HANDLE)-1i64)
		CloseHandle(hFile);
	if (v50)
	{
		v60 = 0;
	}
	else
	{
	LABEL_144:
		v60 = dword_140C8A1AC;
		if ((unsigned int)dword_140C8A1AC >= 0x7530)
		{
			if ((unsigned int)dword_140C8A1AC >= 0x7FFFFFFF)
				goto LABEL_149;
			v60 = 2 * dword_140C8A1AC;
		}
		else
		{
			v60 = 30000;
		}
	}
	dword_140C8A1AC = v60;
LABEL_149:
	dword_140C8A1A8 = v48 + v60;
	sub_14018B900(v88[0], 0i64);
	if (v52)
		WinHttpCloseHandle(v52);
LABEL_151:
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v8 = v74;
	v9 = 0;
	v2 = v71;
	v7 = v70;
	v4 = v82;
	v3 = ExceptionInfo;
	v10 = -1;
	v5 = 1;
LABEL_154:
	if (v7 || v8)
	{
		if ((v3->ExceptionRecord->ExceptionFlags & 1) != 0)
			v10 = 1;
		v5 = v10;
	}
	else if (v9 || dword_140C63734)
	{
		v5 = 0;
	}
	v61 = v81;
	if (*(_QWORD*)(v81 + 8) <= 1ui64)
	{
		*(_DWORD*)v81 = 0;
		_InterlockedExchange64((volatile __int64*)(v61 + 8), 0i64);
		if (*(_QWORD*)(v61 + 16))
		{
			if (!*(_QWORD*)(v61 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v61 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v61 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v81 + 8);
	}
	*v4 = v2;
	return v5;
}
// 1401925EA: conditional instruction was optimized away because rdx.8!=0
// 140192D0D: variable 'dwFlagsAndAttributes' is possibly undefined
// 140192E97: variable 'dwCreationDisposition' is possibly undefined
// 140192F7C: variable 'v66' is possibly undefined
// 140192F7C: variable 'v67' is possibly undefined
// 140192F7C: variable 'v68' is possibly undefined
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 14018B900: using guessed type __int64 __fastcall sub_14018B900(_QWORD, _QWORD);
// 1409E1EE4: using guessed type wchar_t aW_110[2];
// 1409E33A4: using guessed type wchar_t aD_20[3];
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];
// 140A42D20: using guessed type wchar_t aHttpCrashNaWil[47];
// 140A43130: using guessed type wchar_t aUnknown_4[8];
// 140A43178: using guessed type wchar_t aDatatypemisali[21];
// 140A431A8: using guessed type wchar_t aAccessviolatio[16];
// 140A431C8: using guessed type wchar_t aSinglestep[11];
// 140A431E0: using guessed type wchar_t aBreakpoint_0[11];
// 140A431F8: using guessed type wchar_t aError_1[6];
// 140A43208: using guessed type wchar_t aWarning[8];
// 140A43218: using guessed type wchar_t aAssert[7];
// 140A43228: using guessed type wchar_t aFatalerror[11];
// 140A43240: using guessed type wchar_t aFloatoverflow[14];
// 140A43260: using guessed type wchar_t aFloatinvalidop[22];
// 140A43290: using guessed type wchar_t aFloatunderflow[15];
// 140A432B0: using guessed type wchar_t aFloatstackchec[16];
// 140A432D0: using guessed type wchar_t aFloatdenormalo[21];
// 140A43300: using guessed type wchar_t aArrayboundsexc[20];
// 140A43328: using guessed type wchar_t aFloatinexactre[19];
// 140A43350: using guessed type wchar_t aFloatdividebyz[18];
// 140A43378: using guessed type wchar_t aNoncontinuable_0[24];
// 140A433A8: using guessed type wchar_t aIllegalinstruc[19];
// 140A433D0: using guessed type wchar_t aInvaliddisposi[19];
// 140A433F8: using guessed type wchar_t aStackoverflow[14];
// 140A43418: using guessed type wchar_t aIntegeroverflo[16];
// 140A43438: using guessed type wchar_t aIntegerdivideb[20];
// 140A43460: using guessed type wchar_t aInpageerror[12];
// 140A43478: using guessed type wchar_t aPrivilegedinst[22];
// 140A434B0: using guessed type wchar_t aSSSPSS02u02u02[50];
// 140A43518: using guessed type wchar_t a08x_1[6];
// 140A43528: using guessed type wchar_t aSSTxt[10];
// 140A43540: using guessed type wchar_t aInvalidhandle[14];
// 140A43560: using guessed type wchar_t aGuardpage[10];
// 140A43578: using guessed type wchar_t a08x_0[6];
// 140A43588: using guessed type wchar_t aRuntimeerror[13];
// 140A435D0: using guessed type wchar_t aSSLog[10];
// 140A435E8: using guessed type wchar_t aSSDmp[10];
// 140C63724: using guessed type int dword_140C63724;
// 140C63734: using guessed type int dword_140C63734;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C674A0: using guessed type int dword_140C674A0;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C886C0: using guessed type __int16 word_140C886C0;
// 140C8A1A8: using guessed type int dword_140C8A1A8;
// 140C8A1AC: using guessed type int dword_140C8A1AC;
// 140192440: using guessed type __m128i Buffer[33];
// 140192440: using guessed type wchar_t var_1DF8[16];
// 140192440: using guessed type int var_2300[308];
// 140192440: using guessed type wchar_t var_1E30[12];
// 140192440: using guessed type WCHAR var_1AA0[264];
// 140192440: using guessed type WCHAR var_1680[264];
// 140192440: using guessed type int var_1260[256];
// 140192440: using guessed type int var_1DB0[64];

