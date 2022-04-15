//----- (000000014038C810) ----------------------------------------------------
__int64* __fastcall sub_14038C810(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v6);
	return &a1[8 * v3 + 32];
}
// 14038C810: using guessed type int var_18[6];

