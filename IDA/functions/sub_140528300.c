#include "../winhttp.h"

//----- (0000000140528300) ----------------------------------------------------
_DWORD* __fastcall sub_140528300(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	float v6; // xmm7_4
	float v7; // xmm6_4
	__int64 v8; // rax
	float v9; // xmm0_4
	int v10; // ecx
	float v11; // xmm0_4
	int v13; // [rsp+50h] [rbp+8h] BYREF
	int v14; // [rsp+54h] [rbp+Ch]
	char v15; // [rsp+58h] [rbp+10h] BYREF

	v6 = (float)(a3[2] - *a3) / (float)*(int*)(a1 + 64);
	v7 = (float)(a3[3] - a3[1]) / (float)*(int*)(a1 + 68);
	sub_140528400((_DWORD*)a1, &v13);
	*a2 = *a3
		+ (int)(float)((float)*(int*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 40i64))(
			*(_QWORD*)(a1 + 8),
			&v15)
			* v6);
	v8 = (*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 40i64))(*(_QWORD*)(a1 + 8), &v15);
	v9 = (float)v13;
	v10 = a3[1] + (int)(float)((float)*(int*)(v8 + 4) * v7);
	a2[1] = v10;
	LODWORD(v8) = (int)(float)(v9 * v6);
	v11 = (float)v14;
	a2[2] = *a2 + v8;
	a2[3] = v10 + (int)(float)(v11 * v7);
	return a2;
}

