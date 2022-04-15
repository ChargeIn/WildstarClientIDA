#include "../winhttp.h"

//----- (000000014053DA10) ----------------------------------------------------
float __fastcall sub_14053DA10(__int64 a1)
{
	__int64 v1; // r8
	int v2; // edx
	int v4; // r8d

	v1 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 80i64);
	v2 = dword_140C636A8 - *(_DWORD*)(a1 + 404);
	if (v1)
		return (float)((float)v2 / (float)*(int*)(v1 + 4)) * 100.0;
	v4 = *(_DWORD*)(a1 + 80);
	if (v4)
		return (float)((float)v2 / (float)v4) * 100.0;
	else
		return 100.0;
}
// 140C636A8: using guessed type int dword_140C636A8;

