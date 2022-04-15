//----- (00000001400374E0) ----------------------------------------------------
__int64 sub_1400374E0()
{
	__int64 v0; // r12
	IPAddr v1; // r15d
	int v2; // esi
	__int64 v3; // rbx
	_QWORD* v4; // r13
	_QWORD* v5; // rdi
	int v6; // ecx
	unsigned __int16* v7; // rdx
	const char* v8; // rbx
	unsigned __int64 v9; // rdi
	int* v10; // rax
	struct hostent* v11; // rax
	IPAddr** h_addr_list; // rax
	int v13; // edi
	unsigned int v14; // esi
	__int64 v15; // rdi
	__int64 v16; // r13
	char* v17; // rdi
	__int64 v18; // rsi
	_DWORD* v19; // rdi
	__int64 v20; // rsi
	int v21; // edi
	unsigned int v22; // ecx
	unsigned int v23; // r9d
	unsigned int v24; // r8d
	_DWORD* v25; // rdx
	int v26; // ecx
	char v27; // r13
	unsigned int v28; // esi
	_DWORD* v29; // r14
	unsigned int v30; // r8d
	int* v31; // r12
	__int64 v32; // rdi
	int* v33; // rax
	int* v34; // r15
	unsigned __int64 v35; // rdi
	HANDLE* v36; // rdi
	__int64 v38; // [rsp+20h] [rbp-E0h]
	__int64 v39; // [rsp+20h] [rbp-E0h]
	__int64 v40; // [rsp+28h] [rbp-D8h]
	__int64 v41; // [rsp+28h] [rbp-D8h]
	__int64 v42; // [rsp+28h] [rbp-D8h]
	__int64 v43; // [rsp+30h] [rbp-D0h]
	__int64 v44; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v45; // [rsp+48h] [rbp-B8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-B0h] BYREF
	int* v47; // [rsp+58h] [rbp-A8h]
	LPVOID lpTlsValue; // [rsp+60h] [rbp-A0h]
	int v49; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v50)(); // [rsp+80h] [rbp-80h] BYREF
	int* v51; // [rsp+88h] [rbp-78h]
	_BYTE* v52; // [rsp+90h] [rbp-70h]
	__int64 v53; // [rsp+A0h] [rbp-60h] BYREF
	_DWORD v54[1088]; // [rsp+A8h] [rbp-58h] BYREF
	char v55[512]; // [rsp+11A8h] [rbp+10A8h] BYREF
	HANDLE File; // [rsp+13A8h] [rbp+12A8h]

	v0 = *(int*)(qword_140C635F0 + 296);
	v1 = 0;
	v49 = 0;
	v2 = 0;
	v3 = 0i64;
	if ((int)v0 <= 0)
		goto LABEL_11;
	v4 = *(_QWORD**)(qword_140C635F0 + 288);
	v5 = v4;
	while (1)
	{
		v6 = *(unsigned __int16*)*v5;
		if ((((v6 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v6 - 150) <= 1)
			&& !(unsigned int)sub_14018E2C0(*v5 + 2i64, L"patcher"))
		{
			break;
		}
		++v3;
		++v2;
		++v5;
		if (v3 >= v0)
			goto LABEL_11;
	}
	if (v2 + 1 >= (int)v0
		|| (v7 = (unsigned __int16*)v4[v2 + 1]) == 0i64
		|| (sub_14018DD50((int**)&v45, v7), (v8 = (const char*)v45) == 0i64))
	{
	LABEL_11:
		v45 = 0x141CEFD80i64;
		sub_1401A3130(22, 0, &v45);
		v9 = 0i64;
		do
			++v9;
		while (aWildstarPatche[v9]);
		v10 = sub_14018B280(v9 + 17, 0);
		if (v10)
		{
			*((_QWORD*)v10 + 1) = v9;
			*(_QWORD*)v10 = off_140B55060;
		}
		else
		{
			v10 = 0i64;
		}
		v8 = (const char*)(v10 + 4);
		v45 = (__int64)(v10 + 4);
		sub_1407DB590(v10 + 4, (int*)"wildstar.patcher.ncsoft.com", v9);
		v8[v9] = 0;
	}
	v11 = gethostbyname(v8);
	if (v11)
	{
		h_addr_list = (IPAddr**)v11->h_addr_list;
		if (*h_addr_list)
			v1 = **h_addr_list;
	}
	if (v1)
	{
		sub_14018EE90(&v50, (__int64)"%u.%u.%u.%u%s", HIBYTE(v1), BYTE2(v1), BYTE1(v1), (unsigned __int8)v1, byte_1409E67BC);
		v15 = (__int64)v51;
		v44 = 0x141CEFED0i64;
		sub_1401A3130(22, 2, &v44, v8, v51);
		if (v15)
			sub_14018B900(v15, 0);
		v16 = 64i64;
		v53 = 0i64;
		v17 = v55;
		v18 = 64i64;
		do
		{
			v17 += 8;
			*((_QWORD*)v17 - 1) = CreateEventW(0i64, 0, 0, 0i64);
			--v18;
		} while (v18);
		v19 = v54;
		v20 = 64i64;
		do
		{
			*v19 = 0;
			sub_1407E4830(v19 + 1, 0i64, 0x40ui64);
			v19 += 17;
			--v20;
		} while (v20);
		File = IcmpCreateFile();
		if (File == (HANDLE)-1i64)
		{
			v14 = -2147024890;
		}
		else
		{
			v14 = sub_140333E10((__int64)&v53, v1);
			if ((int)(v14 + 0x80000000) < 0 || v14 == -2147024893)
			{
				v22 = 0;
				v23 = 0;
				v24 = 0;
				do
				{
					v25 = &v54[17 * v22];
					if (!v25[2])
					{
						++v24;
						v23 += v25[3];
					}
					++v22;
				} while (v22 < 0x40);
				if (v24)
					v26 = v23 / v24;
				else
					v26 = 0;
				v44 = 0x141CEFF90i64;
				LODWORD(v40) = v53;
				LODWORD(v38) = v26;
				sub_1401A3130(22, 2, &v44, HIDWORD(v53), v38, v40);
				v44 = 0x141CEFF10i64;
				sub_1401A3130(22, 2, &v44);
				v27 = v49;
				v28 = 0;
				do
				{
					v29 = &v54[17 * v28];
					v30 = v29[1];
					if (v30)
					{
						LODWORD(v41) = (unsigned __int8)v30;
						LODWORD(v39) = BYTE1(v30);
						sub_14018EFA0(&v50, (__int64)L"%u.%u.%u.%u%s", HIBYTE(v30), BYTE2(v30), v39, v41, &unk_1409E6794);
						if ((v27 & 2) != 0)
						{
							v27 &= ~2u;
							if (v47)
								sub_14018B900((__int64)v47, 0);
						}
						v31 = v51;
						v32 = (v52 - (_BYTE*)v51) >> 1;
						v33 = sub_14018B280(2 * v32 + 18, 0);
						if (v33)
						{
							*(_QWORD*)v33 = off_140B55060;
							*((_QWORD*)v33 + 1) = v32;
						}
						v34 = v33 + 4;
						v35 = 2 * v32;
						sub_1407DB590(v33 + 4, v31, v35);
						*(_WORD*)((char*)v34 + v35) = 0;
						if (v31)
							sub_14018B900((__int64)v31, 0);
						++v28;
						v44 = 0x141CF0018i64;
						LODWORD(v43) = v29[2];
						LODWORD(v42) = v29[3];
						sub_1401A3130(22, 2, &v44, v28, v34, v42, v43);
						if (v34)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v34 - 2) + 8i64))(v34 - 4);
					}
					else
					{
						++v28;
						v44 = 0x141CEFFE8i64;
						sub_1401A3130(22, 2, &v44, v28);
					}
				} while (v29[2] && v28 < 0x40);
				v8 = (const char*)v45;
				v14 = 0;
				v16 = 64i64;
				goto LABEL_57;
			}
		}
		v47 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v44 = 0x141CEFE60i64;
		v50 = TlsValue;
		v51 = v47;
		v52 = lpTlsValue;
		v21 = sub_1401971E0(&dword_140C8A010, 22, &v44, v14, v8, &v50);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v21)
			DebugBreak();
	LABEL_57:
		v36 = (HANDLE*)v55;
		do
		{
			CloseHandle(*v36++);
			--v16;
		} while (v16);
		goto LABEL_59;
	}
	v47 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v50 = TlsValue;
	v45 = 0x141CEFE10i64;
	v51 = v47;
	v52 = lpTlsValue;
	v13 = sub_1401971E0(&dword_140C8A014, 22, &v45, v8, &v50);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v13)
		DebugBreak();
	v14 = -2147467259;
LABEL_59:
	if (v8)
		(*(void(__fastcall**)(const char*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 16);
	return v14;
}
// 140037953: variable 'v38' is possibly undefined
// 140037953: variable 'v40' is possibly undefined
// 1400379EB: variable 'v39' is possibly undefined
// 1400379EB: variable 'v41' is possibly undefined
// 140037A92: variable 'v42' is possibly undefined
// 140037A92: variable 'v43' is possibly undefined
// 1409F5708: using guessed type wchar_t aPatcher[8];
// 140AF1D70: using guessed type wchar_t aUUUUS_0[14];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C8A010: using guessed type _DWORD dword_140C8A010;
// 140C8A014: using guessed type _DWORD dword_140C8A014;

