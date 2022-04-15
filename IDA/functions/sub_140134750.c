#include "../winhttp.h"

//----- (0000000140134750) ----------------------------------------------------
void __fastcall sub_140134750(__int64 a1, __int64 a2)
{
	int v2; // r8d
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	v2 = *(_DWORD*)(a1 + 56);
	if (v2 != -2)
		sub_1400579E0(*(_QWORD*)(*(_QWORD*)a1 + 400i64), a2, v2);
	*(_DWORD*)(a1 + 56) = -2;
	v4 = *(_QWORD*)(a1 + 232);
	if (v4)
		sub_14018B900(v4, 0);
	v5 = *(_QWORD*)(a1 + 200);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = *(_QWORD*)(a1 + 168);
	if (v6)
		sub_14018B900(v6, 0);
	v7 = *(_QWORD*)(a1 + 136);
	if (v7)
		sub_14018B900(v7, 0);
	v8 = *(_QWORD*)(a1 + 104);
	if (v8)
		sub_14018B900(v8, 0);
	v9 = *(_QWORD*)(a1 + 72);
	if (v9)
		sub_14018B900(v9, 0);
	v10 = *(_QWORD*)(a1 + 32);
	if (v10)
		sub_14018B900(v10, 0);
}

