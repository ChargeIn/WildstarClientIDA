//----- (00000001402E5C00) ----------------------------------------------------
_BOOL8 __fastcall sub_1402E5C00(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 48))(a1, v6);
	return a1[v3 + 19] == 0;
}
// 1402E5C00: using guessed type int var_18[6];

