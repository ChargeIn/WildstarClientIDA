#include "../winhttp.h"

//----- (00000001401846B0) ----------------------------------------------------
__int64 __fastcall sub_1401846B0(_QWORD* a1)
{
	signed int LastError; // eax
	bool v3; // sf
	int DateFormatW; // eax
	signed int v5; // eax
	bool v6; // sf
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	struct _FILETIME LocalFileTime; // [rsp+30h] [rbp-458h] BYREF
	FILETIME FileTime; // [rsp+38h] [rbp-450h] BYREF
	__int64 v12; // [rsp+40h] [rbp-448h] BYREF
	__int64 v13; // [rsp+48h] [rbp-440h]
	struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-428h] BYREF
	WCHAR DateStr[512]; // [rsp+70h] [rbp-418h] BYREF

	FileTime = *(FILETIME*)sub_140056AB0(a1, 1u);
	if (!FileTimeToLocalFileTime(&FileTime, &LocalFileTime) || !FileTimeToSystemTime(&LocalFileTime, &SystemTime))
	{
		LastError = GetLastError();
		v3 = LastError < 0;
		if (LastError > 0)
			v3 = 1;
		if (v3)
			sub_140056830(a1, (unsigned __int64*)"Could not convert time to a SDateTime");
	}
	DateFormatW = GetDateFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, &SystemTime, 0i64, DateStr, 512);
	if (!DateFormatW)
		goto LABEL_11;
	if (DateFormatW + 1 < 512)
		*(&SystemTime.wMilliseconds + DateFormatW) = 32;
	if (!GetTimeFormatW(
		*(_DWORD*)(qword_140C7AAC0 + 12),
		0,
		&SystemTime,
		0i64,
		&DateStr[DateFormatW],
		512 - DateFormatW))
	{
	LABEL_11:
		v5 = GetLastError();
		v6 = v5 < 0;
		if (v5 > 0)
			v6 = 1;
		if (v6)
			sub_140056830(a1, (unsigned __int64*)"Error converting time to a string");
	}
	v7 = (unsigned __int64*)sub_14018F0E0(&v12, DateStr)[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		sub_140058710((__int64)a1, v7, v8);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 1401846B0: using guessed type WCHAR DateStr[512];

