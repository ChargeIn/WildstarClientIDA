#include "../winhttp.h"

//----- (00000001403331C0) ----------------------------------------------------
int __fastcall sub_1403331C0(_QWORD* a1)
{
	LONGLONG v2; // rsi
	__int64 v3; // rcx
	LARGE_INTEGER v4; // rbx
	unsigned int v5; // eax
	unsigned int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // eax
	int result; // eax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(0);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v2 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	while (1)
	{
		v3 = a1[6];
		v10 = 6;
		v11 = 0i64;
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 48i64))(v3, &v10))
			break;
		switch (v10)
		{
		case 0:
			v4.QuadPart = v11;
			if (v11)
				(**(void(__fastcall***)(__int64))v11)(v11);
			PerformanceCount = v4;
			if (v4.QuadPart)
				(**(void(__fastcall***)(LARGE_INTEGER))v4.QuadPart)(v4);
			(**(void(__fastcall***)(_QWORD, _QWORD*, LARGE_INTEGER*))a1[15])(a1[15], a1, &PerformanceCount);
			if (v4.QuadPart)
				(*(void(__fastcall**)(LARGE_INTEGER))(*(_QWORD*)v4.QuadPart + 8i64))(v4);
			break;
		case 1:
			v5 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*a1 + 64i64))(a1, &v11);
			sub_1403315A0((__int64)a1, v5, 1u);
			break;
		case 2:
			v6 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*a1 + 64i64))(a1, &v11);
			sub_1403315A0((__int64)a1, v6, 0xAu);
			break;
		case 3:
			sub_1403323A0(a1, (__int64)&v11);
			break;
		case 4:
			v7 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*a1 + 64i64))(a1, &v11);
			sub_1403315A0((__int64)a1, v7, 2u);
			break;
		case 5:
			v8 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*a1 + 64i64))(a1, &v11);
			sub_1403315A0((__int64)a1, v8, 0x11u);
			break;
		default:
			PerformanceCount.QuadPart = 0x141DEC288i64;
			sub_1401A2E50(0xBu, 0, &PerformanceCount);
			break;
		}
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	result = QueryPerformanceCounter(&PerformanceCount);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Network_Incoming", 0, PerformanceCount.QuadPart - v2 - ::PerformanceCount.QuadPart, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 140AF1C00: using guessed type wchar_t aHNetworkIncomi[19];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;

