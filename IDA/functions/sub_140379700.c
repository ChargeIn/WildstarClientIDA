//----- (0000000140379700) ----------------------------------------------------
__int64 __fastcall sub_140379700(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v6);
	return (__int64)&a1[8 * v3 + 46];
}
// 140379700: using guessed type int var_18[6];

