//----- (00000001407BE8B0) ----------------------------------------------------
__int64 __fastcall sub_1407BE8B0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	if ((*(unsigned int(__fastcall**)(__int64*, int*))(v2 + 64))(a1, v6) && a2 < *((_DWORD*)a1 + 18))
		return a1[7] + a2 * *(_DWORD*)(a1[3] + 8);
	else
		return 0i64;
}
// 1407BE8B0: using guessed type int var_18[6];

