#include "../winhttp.h"

//----- (00000001406BD0D0) ----------------------------------------------------
__int64 __fastcall sub_1406BD0D0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	int v4; // edx
	int v5; // ecx
	int v6; // ecx
	int v7; // edx
	int v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // ebx
	int v14; // ebx
	int v15; // ebx
	int v16; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-9h] BYREF
	__int64 v19; // [rsp+58h] [rbp-1h]
	LPVOID lpTlsValue; // [rsp+60h] [rbp+7h]
	__int64(__fastcall * *v21)(); // [rsp+70h] [rbp+17h] BYREF
	__int64 v22; // [rsp+78h] [rbp+1Fh]
	LPVOID v23; // [rsp+80h] [rbp+27h]
	__int64 v24; // [rsp+C0h] [rbp+67h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, &TlsValue, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v2;
		*(_DWORD*)(a1 + 400) = v2[1];
		*(_DWORD*)(a1 + 404) = v2[2];
		*(_DWORD*)(a1 + 408) = v2[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v3 = a1;
		do
		{
			if (!*(_DWORD*)(v3 + 392))
				break;
			*(_DWORD*)(v3 + 392) = 0;
			v3 = *(_QWORD*)(v3 + 16);
		} while (v3);
	}
	v4 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v5 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	if ((unsigned int)(v4 - 1) > 0xFFF)
		v4 = 1;
	if ((unsigned int)(v5 - 1) > 0xFFF)
		v5 = 1;
	if (*(_DWORD*)(a1 + 2444) != v4 || *(_DWORD*)(a1 + 2440) != v5)
	{
		*(_DWORD*)(a1 + 2444) = v4;
		*(_DWORD*)(a1 + 2440) = v5;
		v6 = HIDWORD(qword_140C77760);
		v7 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
		v8 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
		*(_DWORD*)(a1 + 2284) = qword_140C77760;
		*(_DWORD*)(a1 + 2288) = v6;
		*(_DWORD*)(a1 + 2292) = v7;
		*(_DWORD*)(a1 + 2296) = v8;
		v9 = *(_QWORD*)(a1 + 2320);
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 2320) = 0i64;
		}
		v10 = *(_QWORD*)(a1 + 2328);
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*(_QWORD*)(a1 + 2328) = 0i64;
		}
		v11 = *(_QWORD*)(a1 + 2344);
		if (v11)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(a1 + 2344) = 0i64;
		}
		v12 = *(_QWORD*)(a1 + 2352);
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*(_QWORD*)(a1 + 2352) = 0i64;
		}
		if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			*(unsigned int*)(a1 + 2444),
			*(unsigned int*)(a1 + 2440),
			1i64,
			0,
			5,
			1,
			256,
			0,
			a1 + 2320) < 0)
		{
			TlsValue = &off_140B5E648;
			v19 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v21 = TlsValue;
			v22 = v19;
			v23 = lpTlsValue;
			v24 = 0x141E32980i64;
			v13 = sub_1401971E0(&dword_140C8B034, 13, &v24, &v21);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v13)
				DebugBreak();
		}
		if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			*(unsigned int*)(a1 + 2444),
			*(unsigned int*)(a1 + 2440),
			1i64,
			0,
			5,
			1,
			256,
			0,
			a1 + 2328) < 0)
		{
			TlsValue = &off_140B5E648;
			v19 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v21 = TlsValue;
			v22 = v19;
			v23 = lpTlsValue;
			v24 = 0x141E329E0i64;
			v14 = sub_1401971E0(&dword_140C8B038, 13, &v24, &v21);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v14)
				DebugBreak();
		}
		if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			(unsigned int)(2 * *(_DWORD*)(a1 + 2444)),
			(unsigned int)(2 * *(_DWORD*)(a1 + 2440)),
			1i64,
			0,
			3,
			1,
			256,
			0,
			a1 + 2344) < 0)
		{
			TlsValue = &off_140B5E648;
			v19 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v21 = TlsValue;
			v22 = v19;
			v23 = lpTlsValue;
			v24 = 0x141E32CE0i64;
			v15 = sub_1401971E0(&dword_140C8B03C, 13, &v24, &v21);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v15)
				DebugBreak();
		}
		if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			(unsigned int)(2 * *(_DWORD*)(a1 + 2444)),
			(unsigned int)(2 * *(_DWORD*)(a1 + 2440)),
			1i64,
			23,
			5,
			0,
			256,
			0,
			a1 + 2352) < 0)
		{
			TlsValue = &off_140B5E648;
			v19 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v21 = TlsValue;
			v22 = v19;
			v23 = lpTlsValue;
			v24 = 0x141E32D40i64;
			v16 = sub_1401971E0(dword_140C8B040, 13, &v24, &v21);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v16)
				DebugBreak();
		}
		sub_1406BCFB0(a1);
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C8B034: using guessed type _DWORD dword_140C8B034;
// 140C8B038: using guessed type _DWORD dword_140C8B038;
// 140C8B03C: using guessed type _DWORD dword_140C8B03C;
// 140C8B040: using guessed type _DWORD dword_140C8B040[2];

