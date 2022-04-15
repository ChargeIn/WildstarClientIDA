#include "../winhttp.h"

//----- (00000001406F7570) ----------------------------------------------------
__int64 __fastcall sub_1406F7570(__int64 a1, SYSTEMTIME* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	signed int v20; // eax
	__int64 v21; // rdx
	unsigned __int16* v22; // rbx
	unsigned __int16* v24; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v4) = a2->wYear;
	sub_140058710(a1, (unsigned __int64*)"nYear", 5ui64);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v7, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wMonth;
	sub_140058710(a1, (unsigned __int64*)"nMonth", 6ui64);
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v9, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wDay;
	sub_140058710(a1, (unsigned __int64*)"nDay", 4ui64);
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v11, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wDayOfWeek + 1;
	sub_140058710(a1, (unsigned __int64*)"nDayOfWeek", 0xAui64);
	v12 = *(_QWORD*)(a1 + 16);
	*(double*)v12 = (double)(int)v4;
	*(_DWORD*)(v12 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wHour;
	sub_140058710(a1, (unsigned __int64*)"nHour", 5ui64);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wMinute;
	sub_140058710(a1, (unsigned __int64*)"nMinute", 7ui64);
	v16 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v4) = a2->wSecond;
	sub_140058710(a1, (unsigned __int64*)"nSecond", 7ui64);
	v18 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v24 = 0i64;
	v20 = sub_14034C150(a2, (int**)&v24);
	v22 = v24;
	if (v20 >= 0)
		sub_1400F0090(a1, v21, (unsigned __int64*)"strFormattedTime", v24);
	if (v22)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v22 - 2) + 8i64))(v22 - 8);
	return 1i64;
}
// 1406F7877: variable 'v21' is possibly undefined

