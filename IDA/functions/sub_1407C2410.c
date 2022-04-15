#include "../winhttp.h"

//----- (00000001407C2410) ----------------------------------------------------
__int64 __fastcall sub_1407C2410(__int64 a1, __int64 a2, unsigned int* a3)
{
	unsigned int v3; // eax
	unsigned int v6; // ecx
	float v8; // xmm0_4
	float v9; // xmm1_4
	_DWORD* v10; // rcx
	unsigned __int64 v11; // rax
	unsigned int v12; // r9d
	unsigned int v13; // r10d

	v3 = *(_DWORD*)(a1 + 12);
	v6 = *(_DWORD*)(a2 + 12);
	if (v3 < v6)
		return 0xFFFFFFFFi64;
	if (v3 > v6)
		return 1i64;
	v8 = *(float*)(a1 + 16);
	v9 = *(float*)(a2 + 16);
	if (v8 > v9)
		return 0xFFFFFFFFi64;
	if (v8 < v9)
		return 1i64;
	v10 = *(_DWORD**)(a1 + 24);
	v11 = *(_QWORD*)(a2 + 24);
	v12 = v10[2];
	v13 = *(_DWORD*)(v11 + 8);
	if (v12 < v13)
		return 0xFFFFFFFFi64;
	if (v12 > v13)
		return 1i64;
	if ((unsigned __int64)v10 < v11)
		return 0xFFFFFFFFi64;
	if ((unsigned __int64)v10 > v11)
		return 1i64;
	return (*(__int64(__fastcall**)(_DWORD*, _QWORD, __int64, __int64))(*(_QWORD*)v10 + 8i64))(v10, *a3, a1, a2);
}

