#include "../winhttp.h"

//----- (00000001404E5780) ----------------------------------------------------
__int64 __fastcall sub_1404E5780(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r9d
	__int64 v7; // rbx
	__int64 v8; // rdi
	__int64 v9; // rax
	int v10; // edi
	__int64 v11; // r9
	_DWORD* v12; // rdx
	__int64 v13; // rcx
	unsigned __int16* v14; // r12
	int* v15; // rax
	unsigned __int16* v16; // r15
	_WORD* v17; // r13
	__int64 v18; // rdx
	signed int LastError; // eax
	bool v20; // sf
	int DateFormatW; // eax
	__int64 cchDate; // rdi
	int TimeFormatW; // eax
	int v24; // r14d
	signed int v25; // eax
	bool v26; // sf
	int v27; // r14d
	_QWORD* v28; // rax
	__int64 v29; // rdx
	_WORD* v30; // rdi
	_QWORD* v31; // rax
	__int64 v32; // rdx
	unsigned __int64* v33; // rdx
	unsigned __int64 v34; // r8
	__int64 v35; // rax
	__int64* v36; // rax
	float LowPart; // xmm0_4
	float v38; // xmm6_4
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	__int64 v43; // rax
	__int64* v44; // rax
	int v45; // r8d
	__int64 v46; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v49; // r10
	_DWORD* v50; // rcx
	__int64 v51; // r8
	__int64 v52; // rdx
	FILETIME FileTime; // [rsp+38h] [rbp-D0h] BYREF
	int v55; // [rsp+40h] [rbp-C8h]
	__int64 v56; // [rsp+48h] [rbp-C0h] BYREF
	LPWSTR lpDateStr; // [rsp+50h] [rbp-B8h]
	int* v58; // [rsp+58h] [rbp-B0h]
	int* v59; // [rsp+60h] [rbp-A8h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp-A0h] BYREF
	struct _FILETIME LocalFileTime; // [rsp+70h] [rbp-98h] BYREF
	__int64(__fastcall * *v62)(); // [rsp+78h] [rbp-90h] BYREF
	int v63; // [rsp+80h] [rbp-88h]
	__int64 v64; // [rsp+88h] [rbp-80h]
	int v65; // [rsp+90h] [rbp-78h]
	unsigned __int16* v66; // [rsp+98h] [rbp-70h] BYREF
	_WORD* v67; // [rsp+A0h] [rbp-68h]
	_WORD* v68; // [rsp+A8h] [rbp-60h]
	struct _SYSTEMTIME SystemTime; // [rsp+B0h] [rbp-58h] BYREF

	v1 = a1;
	v64 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v62 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v65 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v63 = v6;
	v7 = *(_QWORD*)(qword_140C66758 + 16);
	if (v7 != qword_140C66758)
	{
		while (1)
		{
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v8 = *(_QWORD*)(v1 + 16);
			v9 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			*(_QWORD*)(v1 + 16) += 16i64;
			v10 = sub_1400578C0(v1);
			v55 = v10;
			sub_14003CD40((int**)&v66, (int**)(v7 + 40));
			v11 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v11 + 56))
			{
				*(double*)&FileTime = (double)v10;
				if ((double)v10 == 0.0)
					v12 = *(_DWORD**)(v11 + 32);
				else
					v12 = (_DWORD*)(*(_QWORD*)(v11 + 32)
						+ 40
						* ((FileTime.dwLowDateTime + FileTime.dwHighDateTime)
							% (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
				while (v12[6] != 3 || (double)v10 != *((double*)v12 + 2))
				{
					v12 = (_DWORD*)*((_QWORD*)v12 + 4);
					if (!v12)
					{
						v12 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v10 - 1));
			}
			v13 = *(_QWORD*)(v1 + 16);
			v14 = v66;
			*(_QWORD*)v13 = *(_QWORD*)v12;
			*(_DWORD*)(v13 + 8) = v12[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, (__int64)v12, L"strIPAddress", v14);
			*(_QWORD*)(v1 + 16) -= 16i64;
			*(double*)&FileTime = 0.0;
			*(_QWORD*)&SystemTime.wYear = 0i64;
			*(_QWORD*)&SystemTime.wHour = 0i64;
			v15 = sub_14018B280(16i64, 0);
			v16 = (unsigned __int16*)v15;
			lpDateStr = (LPWSTR)v15;
			v58 = v15;
			v59 = v15 + 4;
			if (v15)
				*(_WORD*)v15 = 0;
			v17 = v67;
			if ((int)sub_1400A75D0(v67, &FileTime) < 0)
				goto LABEL_60;
			if (!FileTimeToLocalFileTime(&FileTime, &LocalFileTime) || !FileTimeToSystemTime(&LocalFileTime, &SystemTime))
			{
				LastError = GetLastError();
				v20 = LastError < 0;
				if (LastError > 0)
					v20 = 1;
				if (v20)
					goto LABEL_60;
			}
			DateFormatW = GetDateFormatW(0x400u, 0, &SystemTime, 0i64, 0i64, 0);
			cchDate = DateFormatW;
			if (!DateFormatW
				|| (TimeFormatW = GetTimeFormatW(0x400u, 0, &SystemTime, 0i64, 0i64, 0), (v24 = TimeFormatW) == 0)
				|| (sub_14018D060((__int64)&v56, (int)cchDate + TimeFormatW),
					v16 = lpDateStr,
					!GetDateFormatW(0x400u, 0, &SystemTime, 0i64, lpDateStr, cchDate))
				|| (v16[(int)cchDate - 1] = 32, !GetTimeFormatW(0x400u, 0, &SystemTime, 0i64, &v16[cchDate], v24)))
			{
				v25 = GetLastError();
				v26 = v25 < 0;
				if (v25 > 0)
					v26 = 1;
				if (v26)
					break;
			}
			v27 = v55;
			v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v55);
			v29 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v29, L"strRegisterd", v16);
			v30 = v68;
			*(_QWORD*)(v1 + 16) -= 16i64;
			*(double*)&FileTime = 0.0;
			if ((int)sub_1400A75D0(v30, &FileTime) < 0)
			{
				v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v27);
				v32 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v32 = *v31;
				*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v33 = (unsigned __int64*)sub_14018F0E0(&v56, L"fSecondsRemaining")[1];
				if (v33)
				{
					v34 = -1i64;
					do
						++v34;
					while (*((_BYTE*)v33 + v34));
					sub_140058710(v1, v33, v34);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					*(_QWORD*)(v1 + 16) += 16i64;
				}
				if (lpDateStr)
					sub_14018B900((__int64)lpDateStr, 0);
				v35 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v35 = 0xBFF0000000000000ui64;
				*(_DWORD*)(v35 + 8) = 3;
				*(_QWORD*)(v1 + 16) += 16i64;
				v36 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v36, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
			}
			GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
			if (*(_QWORD*)&SystemTimeAsFileTime < *(unsigned __int64*)&FileTime)
			{
				LowPart = (float)(int)Frequency.LowPart;
				if (Frequency.QuadPart < 0)
					LowPart = LowPart + 1.8446744e19;
				v38 = (float)(FileTime.dwLowDateTime - SystemTimeAsFileTime.dwLowDateTime) / LowPart;
				v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v27);
				v40 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v40 = *v39;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v41 = (unsigned __int64*)sub_14018F0E0(&v56, L"fSecondsRemaining")[1];
				if (v41)
				{
					v42 = -1i64;
					do
						++v42;
					while (*((_BYTE*)v41 + v42));
					sub_140058710(v1, v41, v42);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					*(_QWORD*)(v1 + 16) += 16i64;
				}
				if (lpDateStr)
					sub_14018B900((__int64)lpDateStr, 0);
				v43 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v43 + 8) = 3;
				*(double*)v43 = v38;
				*(_QWORD*)(v1 + 16) += 16i64;
				v44 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v44, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				sub_1400FB1D0((__int64)&v62);
			}
			if (v16)
				sub_14018B900((__int64)v16, 0);
			if (v30)
				(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 8);
			if (v17)
				(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 8);
			if (v14)
				(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 8);
			v45 = v27;
		LABEL_69:
			sub_1400579E0(v1, v18, v45);
			v46 = *(_QWORD*)(v7 + 24);
			if (v46)
			{
				v7 = *(_QWORD*)(v7 + 24);
				for (i = *(_QWORD*)(v46 + 16); i; i = *(_QWORD*)(i + 16))
					v7 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = j;
				if (*(_QWORD*)(v7 + 24) != j)
					v7 = j;
			}
			if (v7 == qword_140C66758)
			{
				v1 = v64;
				v6 = v63;
				goto LABEL_79;
			}
		}
		v10 = v55;
	LABEL_60:
		if (v16)
			sub_14018B900((__int64)v16, 0);
		if (v68)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v68 - 2) + 8i64))(v68 - 8);
		if (v17)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 8);
		if (v14)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 8);
		v45 = v10;
		goto LABEL_69;
	}
LABEL_79:
	v49 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v49 + 56))
	{
		*(double*)&FileTime = (double)v6;
		if ((double)v6 == 0.0)
			v50 = *(_DWORD**)(v49 + 32);
		else
			v50 = (_DWORD*)(*(_QWORD*)(v49 + 32)
				+ 40
				* ((FileTime.dwLowDateTime + FileTime.dwHighDateTime) % (((1i64 << *(_BYTE*)(v49 + 11)) - 1) | 1)));
		while (v50[6] != 3 || (double)v6 != *((double*)v50 + 2))
		{
			v50 = (_DWORD*)*((_QWORD*)v50 + 4);
			if (!v50)
			{
				v50 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v50 = (_DWORD*)(*(_QWORD*)(v49 + 24) + 16i64 * (v6 - 1));
	}
	v51 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v51 = *(_QWORD*)v50;
	v52 = (unsigned int)v50[2];
	*(_DWORD*)(v51 + 8) = v52;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v52, v6);
	return 1i64;
}
// 1404E5DA9: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0BA68: using guessed type wchar_t aFsecondsremain_0[18];
// 140B0BB18: using guessed type wchar_t aStripaddress[13];
// 140B0BB38: using guessed type wchar_t aStrregisterd[13];
// 140B0BB58: using guessed type wchar_t aFsecondsremain[18];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C66758: using guessed type __int64 qword_140C66758;

