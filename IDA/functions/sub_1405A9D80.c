#include "../winhttp.h"

//----- (00000001405A9D80) ----------------------------------------------------
float __fastcall sub_1405A9D80(__int64 a1)
{
	WORD v2; // ax
	float v3; // xmm7_4
	__int64 v4; // rax
	__int64 v6; // rax
	float* v7; // rdx
	float v8; // xmm1_4
	float v9; // xmm3_4
	float* v10; // rcx
	float v11; // xmm1_4
	float v12; // xmm3_4
	struct _FILETIME* p_FileTime; // rax
	float v14; // xmm4_4
	int v15; // [rsp+20h] [rbp-58h] BYREF
	struct _FILETIME FileTime; // [rsp+28h] [rbp-50h] BYREF
	SYSTEMTIME SystemTime; // [rsp+30h] [rbp-48h] BYREF

	SystemTime.wYear = *(_WORD*)(a1 + 32);
	v2 = *(_WORD*)(a1 + 34);
	v15 = 0;
	SystemTime.wMonth = v2;
	SystemTime.wDay = *(_WORD*)(a1 + 36);
	SystemTime.wDayOfWeek = 0;
	SystemTime.wHour = *(_WORD*)(a1 + 38);
	SystemTime.wMinute = *(_WORD*)(a1 + 40);
	SystemTime.wSecond = *(_WORD*)(a1 + 42);
	SystemTime.wMilliseconds = *(_DWORD*)(a1 + 44) / 0xF4240u;
	SystemTimeToFileTime(&SystemTime, &FileTime);
	sub_1401E83A0((float*)&v15, *(_QWORD*)&FileTime);
	v3 = fabs(*(float*)&v15);
	v4 = sub_140206C60(*(_DWORD*)(a1 + 12));
	if (!v4)
		return 0.0;
	v6 = sub_140206820(*(_DWORD*)(v4 + 124));
	v7 = (float*)v6;
	if (!v6)
		return 0.0;
	v8 = *(float*)(v6 + 28);
	v9 = *(float*)(v6 + 32);
	v15 = 1065353216;
	v10 = (float*)&v15;
	v11 = (float)(v8 * 0.001) * 0.000011574074;
	v12 = (float)(v9 * 0.001) * 0.000011574074;
	if (*(float*)(a1 + 48) <= 1.0)
		v10 = (float*)(a1 + 48);
	p_FileTime = (struct _FILETIME*)&v15;
	v14 = 1.0 - *v10;
	v15 = 0;
	*(float*)&FileTime.dwLowDateTime = (float)((float)((float)((float)((float)((float)((float)((float)((float)(v14 * v7[9]) + (float)(v12 + v11))
		+ (float)(v14 * v7[10]))
		+ (float)(v14 * v7[11]))
		+ (float)(v14 * v7[12]))
		+ (float)(v14 * v7[13]))
		+ (float)(v14 * v7[14]))
		+ (float)(v14 * v7[15]))
		+ (float)(v14 * v7[16]))
		- v3;
	if (*(float*)&FileTime.dwLowDateTime >= 0.0)
		p_FileTime = &FileTime;
	return *(float*)&p_FileTime->dwLowDateTime;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

