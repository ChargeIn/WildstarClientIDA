//----- (00000001402CD870) ----------------------------------------------------
__int64 __fastcall sub_1402CD870(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	__int64 v5; // rsi
	__int64 v6; // rdx
	unsigned __int64 v7; // rcx
	__int64 v9; // rsi
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v10, 3i64);
	v5 = a1[3];
	v10[0] = -1;
	if (*(_DWORD*)(v5 + 24) != 3)
		sub_1402C9AE0(v5, (__int64)v10, 3);
	v6 = *(_QWORD*)(v5 + 64);
	v7 = a1[8];
	if (v7 >= *(unsigned int*)(v6 + 112))
		return 0i64;
	v9 = *(_QWORD*)(v6 + 120) + 40 * v7;
	if (a2 < *(unsigned int*)(v9 + 24))
		return 0i64;
	else
		return *(unsigned int*)(((a2 - *(unsigned int*)(v9 + 24)) << 7) + *(_QWORD*)(sub_1402D5890(a1[4]) + 16) + 4);
}

