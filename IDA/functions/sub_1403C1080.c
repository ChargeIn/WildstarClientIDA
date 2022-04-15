#include "../winhttp.h"

//----- (00000001403C1080) ----------------------------------------------------
__int64 __fastcall sub_1403C1080(__int64 a1, __int64 a2, double a3, double a4)
{
	int v6; // ebx
	int v7; // ebx
	_DWORD* v8; // rax
	__int64 v9; // rcx
	struct _FILETIME v10; // rcx
	__int64 v11; // rax
	struct _FILETIME FileTime; // [rsp+20h] [rbp-29h] BYREF
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-19h] BYREF
	__int128 v15; // [rsp+38h] [rbp-11h]
	struct _FILETIME v16; // [rsp+50h] [rbp+7h] BYREF
	__int64(__fastcall * *v17)(); // [rsp+60h] [rbp+17h] BYREF
	__int128 v18; // [rsp+68h] [rbp+1Fh]
	__int64(__fastcall * *TlsValue)(); // [rsp+80h] [rbp+37h] BYREF
	__int128 v20; // [rsp+88h] [rbp+3Fh]

	if (qword_140C65898)
	{
		*(_DWORD*)(a1 + 7016) = *(_DWORD*)(a2 + 12);
		*(_BYTE*)(a1 + 7020) = *(_BYTE*)(a2 + 16);
		*(_DWORD*)(a1 + 7024) = *(_DWORD*)(a2 + 4);
		*(_DWORD*)(a1 + 7048) = *(_DWORD*)(a2 + 20);
		if (*(_DWORD*)(a2 + 12))
		{
			if (!*(_QWORD*)(a1 + 120))
			{
				*(_QWORD*)&v15 = 0i64;
				v14 = &off_140B5E648;
				*((_QWORD*)&v15 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v14);
				v17 = v14;
				FileTime = (struct _FILETIME)0x141DF0918i64;
				v18 = v15;
				v7 = sub_1401971E0(&dword_140C8A6C0, 5, &FileTime, &v17);
				v14 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v15 + 1));
				if (!v7)
					return 0i64;
				goto LABEL_3;
			}
			v8 = (_DWORD*)sub_1403D90D0(a1, *(_DWORD*)a2);
			if (v8)
				sub_1403968B0(v9, v8);
			*(_QWORD*)(a1 + 6984) = *(unsigned int*)(a2 + 8);
			GetLocalTime((LPSYSTEMTIME)&TlsValue);
			SystemTimeToFileTime((const SYSTEMTIME*)&TlsValue, &FileTime);
			LocalFileTimeToFileTime(&FileTime, &v16);
			v10 = v16;
			*(_QWORD*)(a1 + 6992) = *(_QWORD*)&v16 + 10000i64 * *(_QWORD*)(a1 + 6984);
			*(_QWORD*)(a1 + 7000) = *(unsigned int*)(a2 + 24);
			*(_QWORD*)(a1 + 7008) = *(_QWORD*)&v10 + 10000i64 * *(unsigned int*)(a2 + 24);
			*(_QWORD*)(a1 + 7032) = *(_QWORD*)&v10 + 10000i64 * *(unsigned int*)(a2 + 28);
		}
		else
		{
			v11 = *(_QWORD*)(a1 + 120);
			if (*(_QWORD*)(a1 + 25744) != v11)
			{
				*(_QWORD*)(a1 + 25744) = v11;
				*(_QWORD*)(a1 + 25736) = 0i64;
			}
			if (qword_140C65B78)
				sub_140575DD0();
			sub_14055B0E0(a1, 0, a3, a4);
			*(_DWORD*)(*(_QWORD*)(a1 + 29088) + 84i64) = 0;
		}
		sub_140425850(*(_QWORD*)(a1 + 29504));
		dword_140C89AA0 = 0;
		sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 192, *(_DWORD*)(a2 + 12));
		return 0i64;
	}
	*(_QWORD*)&v20 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v20 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v14 = TlsValue;
	FileTime = (struct _FILETIME)0x141DF0720i64;
	v15 = v20;
	v6 = sub_1401971E0(&dword_140C8A6BC, 5, &FileTime, &v14);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v20 + 1));
	if (v6)
		LABEL_3:
	DebugBreak();
	return 0i64;
}
// 1403C123E: variable 'v9' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140C89AA0: using guessed type int dword_140C89AA0;
// 140C8A6BC: using guessed type _DWORD dword_140C8A6BC;
// 140C8A6C0: using guessed type _DWORD dword_140C8A6C0;

