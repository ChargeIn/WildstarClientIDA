//----- (00000001407C11B0) ----------------------------------------------------
__int64 __fastcall sub_1407C11B0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v5; // r8
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 64))(a1, v7);
	v5 = a1[5];
	if (v5 && a2 < *(_DWORD*)(v5 + 48))
		return *(_QWORD*)(v5 + 64) + a2 * *(_DWORD*)(a1[2] + 8);
	else
		return 0i64;
}
// 1407C11B0: using guessed type int var_18[6];

