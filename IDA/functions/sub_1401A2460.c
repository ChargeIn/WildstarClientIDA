//----- (00000001401A2460) ----------------------------------------------------
void __fastcall sub_1401A2460(__int64 a1, int a2, int a3, __int64 a4)
{
	__int64 v5; // r15
	__int64 v6; // r13
	unsigned __int64 v7; // rsi
	char v8; // al
	const wchar_t* v9; // rcx
	const wchar_t* v10; // rax
	__int64 v11; // r9
	__int64 v12; // rcx
	int* v13; // r14
	CHAR* v14; // rbx
	__int64 v15; // r14
	int* v16; // r12
	__int64 v17; // r8
	int* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	bool v21; // cf
	__int64 v22; // rbx
	unsigned __int64 v23; // rdi
	char v24; // al
	__int64 v25; // rax
	__int64 v26; // r14
	unsigned __int64 v27; // rbx
	int v28; // eax
	WORD v29; // dx
	void** v30; // rax
	void** v31; // rax
	void** v32; // rax
	WORD v33; // dx
	void** v34; // rax
	void** v35; // rax
	void** v36; // rax
	__int64 i; // rbx
	__int64 v38; // rbx
	HANDLE EventW; // rcx
	int* v40; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v41; // [rsp+68h] [rbp-98h] BYREF
	__int64 v42; // [rsp+70h] [rbp-90h] BYREF
	CHAR* v43; // [rsp+78h] [rbp-88h]
	unsigned __int64 v44; // [rsp+80h] [rbp-80h]
	struct _SYSTEMTIME SystemTime; // [rsp+88h] [rbp-78h] BYREF
	CHAR OutputString[18]; // [rsp+A0h] [rbp-60h] BYREF
	char v48[8174]; // [rsp+B2h] [rbp-4Eh] BYREF
	int v49[9]; // [rsp+20A0h] [rbp+1FA0h] BYREF
	char v50; // [rsp+20C4h] [rbp+1FC4h] BYREF

	v5 = a3;
	v6 = a2;
	if (!dword_140C674A0)
	{
		OutputDebugStringA("WARNING! Log called before CRT startup");
		return;
	}
	if ((unsigned __int64)a2 < 0x83)
	{
		v41 = 4095i64;
		v40 = v49;
		GetLocalTime(&SystemTime);
		v7 = 0i64;
		sub_1401A3210(
			v49,
			0xFFFui64,
			(__int64*)&v40,
			&v41,
			0,
			L"%0.2u/%0.2u/%0.2u %0.2u:%0.2u:%0.2u ",
			SystemTime.wMonth,
			SystemTime.wDay,
			SystemTime.wYear % 0x64u,
			SystemTime.wHour,
			SystemTime.wMinute,
			SystemTime.wSecond);
		v8 = dword_140C674A4;
		if ((dword_140C674A4 & 0x80u) == 0)
		{
			if ((unsigned int)(v5 + 1) > 5)
				v9 = L"Unknown";
			else
				v9 = off_140A44EC8[v5];
			sub_1401A3210(v40, v41, (__int64*)&v40, &v41, 0, L"(%s) ", v9);
			v8 = dword_140C674A4;
		}
		if ((v8 & 0x40) == 0)
		{
			if ((int)v6 >= 131)
				v10 = L"Unknown";
			else
				v10 = off_140C2CE70[v6];
			sub_1401A3210(v40, v41, (__int64*)&v40, &v41, 0, L"(%s) ", v10);
		}
		sub_1401A3210(v40, v41, (__int64*)&v40, &v41, 0, L"%s", a4);
		v12 = 10i64;
		v13 = (int*)((char*)v40 + 2);
		*(_WORD*)v40 = 10;
		*(_WORD*)v13 = 0;
		v40 = v13;
		v14 = OutputString;
		v15 = ((char*)v13 - (char*)v49) >> 1;
		v16 = v49;
		v17 = v15;
		v43 = OutputString;
		v18 = v49;
		if (v15)
		{
			v11 = 128i64;
			do
			{
				v12 = *(unsigned __int16*)v18;
				if ((unsigned __int16)v12 >= 0x80u)
				{
					if ((unsigned __int16)v12 >= 0x1000u)
					{
						if (v7 >= 0x1FFD)
							return;
						OutputString[v7] = ((unsigned __int16)v12 >> 12) | 0xE0;
						OutputString[v7 + 1] = ((unsigned __int16)v12 >> 6) & 0x3F | 0x80;
						v7 += 3i64;
						OutputString[v7 - 1] = *(_BYTE*)v18 & 0x3F | 0x80;
					}
					else
					{
						if (v7 >= 0x1FFE)
							return;
						OutputString[v7] = ((unsigned __int16)v12 >> 6) | 0xC0;
						v7 += 2i64;
						OutputString[v7 - 1] = *(_BYTE*)v18 & 0x3F | 0x80;
					}
				}
				else
				{
					if (v7 >= 0x1FFF)
						return;
					OutputString[v7++] = v12;
				}
				if (!(_WORD)v12)
					break;
				v18 = (int*)((char*)v18 + 2);
				--v17;
			} while (v17);
		}
		v44 = v7;
		if (v7 >= 0x2000)
		{
			_report_rangecheckfailure(v12, v18, v17, v11);
			JUMPOUT(0x1401A2BB2i64);
		}
		OutputString[v7] = 0;
		sub_14003D8F0(&v42, &qword_140C67400);
		if ((dword_140C674A4 & 1) != 0)
		{
			if (qword_140C676C8)
			{
				sub_1407E1088((int*)OutputString, v7, 1ui64, qword_140C676C8);
				if ((dword_140C674A4 & 0x10) != 0)
					sub_1407E11EC((_DWORD*)qword_140C676C8);
			}
		}
		if ((unsigned __int64)qword_140C776D0 >= 0x8000)
		{
			if (v7 + qword_140C776D8 <= 0x10000)
			{
				sub_1407DB590((int*)(0x140000000i64 + qword_140C776D8 + 13006544), (int*)OutputString, v7);
				v20 = v7 + qword_140C776D8;
				v21 = qword_140C776E0 < v7 + qword_140C776D8;
				qword_140C776D8 += v7;
				if (v21)
					qword_140C776E0 = v20;
			LABEL_38:
				v24 = dword_140C674A4;
				if ((dword_140C674A4 & 0x20) == 0)
				{
					v14 = v48;
					v15 -= 18i64;
					v7 -= 18i64;
					v43 = v48;
					v16 = (int*)&v50;
					v44 = v7;
				}
				if ((dword_140C674A4 & 2) == 0 || !qword_140C776E8)
					goto LABEL_50;
				if (qword_140C776F8 + v15 > (unsigned __int64)qword_140C776F0)
				{
					v26 = v15 - (qword_140C776F0 - qword_140C776F8);
					v27 = 2 * (qword_140C776F0 - qword_140C776F8);
					sub_1407DB590((int*)(qword_140C776E8 + 2 * qword_140C776F8), v16, v27);
					sub_1407DB590((int*)qword_140C776E8, (int*)((char*)v16 + v27), 2 * v26);
					v25 = qword_140C776F0;
					qword_140C776F8 = v26;
				}
				else
				{
					sub_1407DB590((int*)(qword_140C776E8 + 2 * qword_140C776F8), v16, 2 * v15);
					v25 = v15 + qword_140C776F8;
					v21 = qword_140C77700 < (unsigned __int64)(v15 + qword_140C776F8);
					qword_140C776F8 += v15;
					if (!v21)
					{
					LABEL_47:
						v28 = dword_140C77708;
						v14 = v43;
						if (dword_140C77708 > (int)v5)
							v28 = v5;
						dword_140C77708 = v28;
						v24 = dword_140C674A4;
					LABEL_50:
						if ((v24 & 4) != 0)
						{
							if (hConsoleOutput == (HANDLE)-1i64 || (v29 = word_140C77718[v5], v29 == word_140C77722))
							{
								v31 = sub_1407DDFA0();
								sub_1407E1088((int*)v14, v7, 1ui64, (unsigned __int64)(v31 + 6));
							}
							else
							{
								SetConsoleTextAttribute(hConsoleOutput, v29);
								v30 = sub_1407DDFA0();
								sub_1407E1088((int*)v14, v7, 1ui64, (unsigned __int64)(v30 + 6));
								SetConsoleTextAttribute(hConsoleOutput, word_140C77722);
							}
							v24 = dword_140C674A4;
							if ((dword_140C674A4 & 0x10) != 0)
							{
								v32 = sub_1407DDFA0();
								sub_1407E11EC((_DWORD*)v32 + 12);
								v24 = dword_140C674A4;
							}
						}
						if ((v24 & 8) != 0)
						{
							if (qword_140C77728 == (HANDLE)-1i64 || (v33 = word_140C77730[v5], v33 == word_140C7773A))
							{
								v35 = sub_1407DDFA0();
								sub_1407E1088((int*)v14, v7, 1ui64, (unsigned __int64)(v35 + 12));
							}
							else
							{
								SetConsoleTextAttribute(qword_140C77728, v33);
								v34 = sub_1407DDFA0();
								sub_1407E1088((int*)v14, v7, 1ui64, (unsigned __int64)(v34 + 12));
								SetConsoleTextAttribute(qword_140C77728, word_140C7773A);
							}
							if ((dword_140C674A4 & 0x10) != 0)
							{
								v36 = sub_1407DDFA0();
								sub_1407E11EC((_DWORD*)v36 + 24);
							}
						}
						if (!dword_140C63734 && IsDebuggerPresent())
							OutputDebugStringA(v14);
						for (i = qword_140C77748; i != (_QWORD)xmmword_140C77750; i += 16i64)
							(*(void(__fastcall**)(_QWORD, _QWORD, int*, _QWORD))i)(
								(unsigned int)v6,
								(unsigned int)v5,
								v16,
								*(_QWORD*)(i + 8));
						v38 = v42;
						if (*(_QWORD*)(v42 + 8) <= 1ui64)
						{
							*(_DWORD*)v42 = 0;
							_InterlockedExchange64((volatile __int64*)(v38 + 8), 0i64);
							if (*(_QWORD*)(v38 + 16))
							{
								if (!*(_QWORD*)(v38 + 24))
								{
									EventW = CreateEventW(0i64, 0, 0, 0i64);
									if (_InterlockedCompareExchange64(
										(volatile signed __int64*)(v38 + 24),
										(signed __int64)EventW,
										0i64))
									{
										CloseHandle(EventW);
									}
								}
								SetEvent(*(HANDLE*)(v38 + 24));
							}
						}
						else
						{
							--* (_QWORD*)(v42 + 8);
						}
						return;
					}
				}
				qword_140C77700 = v25;
				goto LABEL_47;
			}
			v22 = 0x10000 - qword_140C776D8;
			v23 = v7 - (0x10000 - qword_140C776D8);
			sub_1407DB590(
				(int*)(0x140000000i64 + qword_140C776D8 + 13006544),
				(int*)OutputString,
				0x10000 - qword_140C776D8);
			sub_1407DB590((int*)((char*)&unk_140C676D0 + qword_140C776D0), (int*)&OutputString[v22], v7 - v22);
			qword_140C776E0 = 0x10000i64;
			v19 = v23 + qword_140C776D0;
			v14 = OutputString;
		}
		else
		{
			sub_1407DB590((int*)((char*)&unk_140C676D0 + qword_140C776D8), (int*)OutputString, v7);
			v19 = v7 + qword_140C776D8;
			qword_140C776E0 = v7 + qword_140C776D8;
			qword_140C776D0 = v7 + qword_140C776D8;
		}
		qword_140C776D8 = v19;
		goto LABEL_38;
	}
}
// 1401A2BAD: control flows out of bounds to 1401A2BB2
// 1401A2BAD: variable 'v11' is possibly undefined
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409E3FBC: using guessed type wchar_t aS_12[3];
// 140A44CA0: using guessed type wchar_t a02u02u02u02u02_1[37];
// 140A44E90: using guessed type wchar_t aUnknown_7[8];
// 140A44EA0: using guessed type wchar_t aS_11[6];
// 140A44EB0: using guessed type wchar_t aS_10[6];
// 140A44EC8: using guessed type wchar_t *off_140A44EC8[5];
// 140A46EE8: using guessed type wchar_t aUnknown_5[8];
// 140C2CE70: using guessed type wchar_t *off_140C2CE70[131];
// 140C63734: using guessed type int dword_140C63734;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C674A0: using guessed type int dword_140C674A0;
// 140C674A4: using guessed type int dword_140C674A4;
// 140C676C8: using guessed type __int64 qword_140C676C8;
// 140C776D0: using guessed type __int64 qword_140C776D0;
// 140C776D8: using guessed type __int64 qword_140C776D8;
// 140C776E0: using guessed type __int64 qword_140C776E0;
// 140C776E8: using guessed type __int64 qword_140C776E8;
// 140C776F0: using guessed type __int64 qword_140C776F0;
// 140C776F8: using guessed type __int64 qword_140C776F8;
// 140C77700: using guessed type __int64 qword_140C77700;
// 140C77708: using guessed type int dword_140C77708;
// 140C77718: using guessed type __int16 word_140C77718[];
// 140C77722: using guessed type __int16 word_140C77722;
// 140C77730: using guessed type __int16 word_140C77730[];
// 140C7773A: using guessed type __int16 word_140C7773A;
// 140C77748: using guessed type __int64 qword_140C77748;
// 140C77750: using guessed type __int128 xmmword_140C77750;
// 1401A2460: using guessed type int var_2040[9];

