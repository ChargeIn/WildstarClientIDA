#include "../winhttp.h"

//----- (000000014026F6B0) ----------------------------------------------------
__int64 __fastcall sub_14026F6B0(__int64 a1)
{
	__int64 v2; // rdx
	int v3; // r9d
	__int64 v4; // rcx
	int v6; // [rsp+20h] [rbp-18h]

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 7064) + 96i64))(*(_QWORD*)(a1 + 7064));
	v2 = *(unsigned int*)(a1 + 7092);
	v3 = *(_DWORD*)(a1 + 7084);
	v4 = 2 * v2;
	v6 = *(_DWORD*)(a1 + 4 * (v2 + 54i64 * *(int*)(a1 + 7088)) + 1188);
	*(_QWORD*)(a1 + 16 * (v2 + 607)) = *(_QWORD*)(a1 + 7064);
	*(_DWORD*)(a1 + 8 * v4 + 9720) = v3;
	*(_DWORD*)(a1 + 8 * v4 + 9724) = v6;
	return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 800i64))(*(_QWORD*)(a1 + 6608));
}

