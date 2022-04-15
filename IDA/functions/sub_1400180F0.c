//----- (00000001400180F0) ----------------------------------------------------
__int64 __fastcall sub_1400180F0(__int64 a1)
{
	__int64 v1; // r15
	int* v2; // rax
	int v3; // ebx
	__int64 v4; // rdi
	int v5; // esi
	unsigned int v6; // r14d
	int v7; // eax
	int* v8; // r13
	int v9; // ecx
	int* v10; // r8
	__int64 v11; // r10
	int v12; // edx
	__int64 v13; // rcx
	__m128i si128; // xmm1
	__int64 v15; // rax
	int* v16; // rax
	__int64 v17; // rdx
	HWND DesktopWindow; // rax
	_DWORD* v19; // rax
	int v20; // r12d
	int v21; // esi
	int v22; // edi
	__int64 v23; // rbx
	int v24; // r12d
	LONG v25; // esi
	int v26; // edi
	__int64 v27; // rax
	int* v28; // r15
	_DWORD* v29; // r8
	unsigned int v30; // eax
	HDC DC; // rbx
	HBITMAP v32; // rax
	HBITMAP v33; // rdi
	__int64 v34; // rdi
	int* v35; // rax
	int* v36; // rbx
	unsigned __int64 v37; // rdi
	const WCHAR* v38; // r12
	WCHAR i; // si
	int* v40; // rsi
	__int64 v41; // r15
	int* v42; // r15
	__int64 v43; // r13
	int** v44; // r13
	int* v45; // r15
	__int64 v46; // r12
	__int64 v47; // rdi
	__int64 v48; // r12
	__int64 v49; // rsi
	bool v50; // zf
	__int64 v51; // r15
	__int16* v52; // rax
	BITMAPINFO* pbmi; // [rsp+20h] [rbp-E0h]
	__int64 iUsage; // [rsp+28h] [rbp-D8h]
	__int64 v56; // [rsp+30h] [rbp-D0h]
	__int64 v57; // [rsp+38h] [rbp-C8h]
	__int64 v58; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v59; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v60; // [rsp+60h] [rbp-A0h] BYREF
	unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
	unsigned int v62; // [rsp+6Ch] [rbp-94h]
	unsigned int v63; // [rsp+70h] [rbp-90h]
	int v64[4]; // [rsp+78h] [rbp-88h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+88h] [rbp-78h] BYREF
	BITMAPINFO v66; // [rsp+98h] [rbp-68h] BYREF
	__int16 v67[264]; // [rsp+D0h] [rbp-30h] BYREF

	v1 = a1;
	v60 = a1;
	v2 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 560i64))(qword_140C65670);
	v3 = *v2;
	v4 = (unsigned int)v2[1];
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 568i64))(qword_140C65670, 0i64);
	if (!v3 || !(_DWORD)v4)
		return 0i64;
	v6 = 0;
	v58 = 0i64;
	v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		(unsigned int)v3,
		(unsigned int)v4,
		1i64,
		v5,
		0,
		0,
		0,
		0,
		&v58);
	if (v7 < 0)
		goto LABEL_79;
	v66.bmiHeader.biSize = 1;
	*(_QWORD*)&v66.bmiHeader.biHeight = v58;
	v66.bmiHeader.biSizeImage = 0;
	(*(void(__fastcall**)(__int64, _QWORD, BITMAPINFO*))(*(_QWORD*)qword_140C65670 + 536i64))(
		qword_140C65670,
		0i64,
		&v66);
	v8 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v58 + 72i64))(
		v58,
		0i64,
		&v59,
		3i64);
	if (v8)
	{
		v9 = dword_140C3AFB0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3AFB0)
			v9 = *(_DWORD*)qword_140C63750;
		if (!byte_140C3AFC0[v9] && (!v5 || v5 == 25))
		{
			v10 = v8;
			if ((int)v4 > 0)
			{
				v11 = v4;
				do
				{
					v12 = 0;
					v13 = 0i64;
					if (v3 > 0)
					{
						if ((unsigned int)v3 >= 4)
						{
							si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B610);
							do
							{
								v15 = v12;
								v12 += 4;
								v13 += 4i64;
								*(__m128i*)& v10[v15] = _mm_or_si128(_mm_loadu_si128((const __m128i*) & v10[v15]), si128);
							} while (v12 < v3 - (v3 & 3));
						}
						if (v12 < v3)
						{
							v16 = &v10[v13];
							v17 = (unsigned int)(v3 - v12);
							do
							{
								*v16++ |= 0xFF000000;
								--v17;
							} while (v17);
						}
					}
					v10 = (int*)((char*)v10 + v59);
					--v11;
				} while (v11);
			}
		}
		DesktopWindow = GetDesktopWindow();
		if (OpenClipboard(DesktopWindow))
		{
			if (EmptyClipboard())
			{
				v19 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v58 + 24i64))(v58);
				*(_QWORD*)&v66.bmiHeader.biHeight = 1i64;
				v20 = v19[1];
				v21 = v19[2];
				v22 = v19[3];
				v23 = (int)v19[6];
				v64[3] = v19[6];
				v24 = (v20 == 0) + v20;
				v64[0] = v24;
				v66.bmiHeader.biSize = v24;
				v25 = (v21 == 0) + v21;
				v64[1] = v25;
				v66.bmiHeader.biWidth = v25;
				v26 = (v22 == 0) + v22;
				v64[2] = v26;
				v27 = 4i64 * (unsigned int)(v25 * v24);
				if (!is_mul_ok((unsigned int)(v25 * v24), 4ui64))
					v27 = -1i64;
				v28 = sub_14018B280(v27, 0);
				v61 = v59;
				v29 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v23);
				v30 = (unsigned int)(v26 + v29[7]) >> v29[8];
				v62 = v59 * ((unsigned int)(v25 + v29[4]) >> v29[5]);
				v63 = v62 * v30;
				*(_DWORD*)&SystemTime.wYear = (4 * v24 + 3) & 0xFFFFFFFC;
				*(_DWORD*)&SystemTime.wDayOfWeek = v25 * *(_DWORD*)&SystemTime.wYear;
				*(_DWORD*)&SystemTime.wHour = v25 * *(_DWORD*)&SystemTime.wYear;
				if ((int)sub_1402645D0(v28, (int*)&v66, (unsigned int*)&SystemTime.wYear, v8, v64, &v61) >= 0)
				{
					DC = GetDC(0i64);
					if (DC)
					{
						sub_1407E4830((int*)&v66, 0i64, 0x2Cui64);
						v66.bmiHeader.biSize = 40;
						v66.bmiHeader.biWidth = v24;
						v66.bmiHeader.biHeight = -v25;
						*(_QWORD*)&v66.bmiHeader.biPlanes = 2097153i64;
						v32 = CreateDIBitmap(DC, &v66.bmiHeader, 4u, v28, &v66, 0);
						v33 = v32;
						if (v32 && !SetClipboardData(2u, v32))
							DeleteObject(v33);
						ReleaseDC(0i64, DC);
					}
				}
				sub_14018B900((__int64)v28, 0);
				v1 = v60;
			}
			CloseClipboard();
		}
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v58 + 80i64))(v58, 0i64);
	}
	v34 = 0i64;
	do
		++v34;
	while (aScreenshots[v34]);
	v35 = sub_14018B280(2 * v34 + 18, 0);
	if (v35)
	{
		*((_QWORD*)v35 + 1) = v34;
		*(_QWORD*)v35 = off_140B55060;
	}
	else
	{
		v35 = 0i64;
	}
	v36 = v35 + 4;
	v37 = 2 * v34;
	sub_1407DB590(v35 + 4, (int*)L"Screenshots\\", v37);
	*(_WORD*)((char*)v36 + v37) = 0;
	v38 = L"WildStar";
	if (*(_QWORD*)(v1 + 5776))
		v38 = *(const WCHAR**)(v1 + 5776);
	for (i = *v38; i; ++v38)
	{
		switch (i)
		{
		case ' ':
		case '.':
			v40 = v36;
			if (v36)
				v41 = *((_QWORD*)v36 - 1);
			else
				v41 = 0i64;
			v36 = (int*)sub_14018D140(v36, v41 + 1);
			*(int*)((char*)v36 + 2 * v41) = 95;
			if (v40 != v36 && v40)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 4);
			break;
		case '"':
		case '*':
		case '/':
		case ':':
		case '<':
		case '>':
		case '?':
		case '\\':
		case '|':
			break;
		default:
			v42 = v36;
			if (v36)
				v43 = *((_QWORD*)v36 - 1);
			else
				v43 = 0i64;
			v36 = (int*)sub_14018D140(v36, v43 + 1);
			*((_WORD*)v36 + v43) = i;
			*((_WORD*)v36 + v43 + 1) = 0;
			if (v42 != v36 && v42)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4);
			break;
		}
		i = v38[1];
	}
	GetLocalTime(&SystemTime);
	LODWORD(v57) = SystemTime.wSecond;
	LODWORD(v56) = SystemTime.wMinute;
	LODWORD(iUsage) = SystemTime.wHour;
	LODWORD(pbmi) = SystemTime.wDay;
	v44 = (int**)sub_14018D540(
		&v60,
		(__int64)L".%0.2u%0.2u%0.2u.%0.2u%0.2u%0.2u",
		SystemTime.wYear % 0x64u,
		SystemTime.wMonth,
		pbmi,
		iUsage,
		v56,
		v57);
	if (*v44)
	{
		v45 = v36;
		v46 = v36 ? *((_QWORD*)v36 - 1) : 0i64;
		v47 = *((_QWORD*)*v44 - 1);
		v36 = (int*)sub_14018D140(v36, v47 + v46);
		sub_1407DB590((int*)((char*)v36 + 2 * v46), *v44, 2 * v47);
		*((_WORD*)v36 + v47 + v46) = 0;
		if (v45 != v36)
		{
			if (v45)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
		}
	}
	if (v60)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v60 - 16) + 8i64))(v60 - 16);
	if (v36)
		v48 = *((_QWORD*)v36 - 1);
	else
		v48 = 0i64;
	v49 = 0i64;
	do
		v50 = aPng[++v49] == 0;
	while (!v50);
	v51 = sub_14018D140(v36, v49 + v48);
	sub_1407DB590((int*)(v51 + 2 * v48), (int*)L".png", 2 * v49);
	*(_WORD*)(v51 + 2 * (v49 + v48)) = 0;
	if (v36 != (int*)v51 && v36)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
	if ((int)sub_14001B370(
		v67,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 3724i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		v51) >= 0
		&& v67[0])
	{
		v52 = v67;
		do
		{
			v50 = v52[1] == 0;
			++v52;
		} while (!v50);
	}
	if (v51)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v51 - 16) + 8i64))(v51 - 16);
	v7 = (*(__int64(__fastcall**)(__int64, __int16*))(*(_QWORD*)v58 + 64i64))(v58, v67);
	if (v7 < 0)
		LABEL_79:
	v6 = v7;
	if (v58)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v58 + 8i64))(v58);
	return v6;
}
// 140018266: conditional instruction was optimized away because ebx.4>=4
// 140018261: mask 0x80000003 is shortened because ebx.4 <= 0x7FFFFFFF
// 14001864C: variable 'pbmi' is possibly undefined
// 14001864C: variable 'iUsage' is possibly undefined
// 14001864C: variable 'v56' is possibly undefined
// 14001864C: variable 'v57' is possibly undefined
// 1409E09C8: using guessed type wchar_t aScreenshots[13];
// 1409E0A10: using guessed type wchar_t a02u02u02u02u02[33];
// 1409E0A58: using guessed type wchar_t aPng[5];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A473F8: using guessed type wchar_t aSSSS_1[12];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140C3AFB0: using guessed type int dword_140C3AFB0;
// 140C3AFC0: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

