//----- (00000001402AB820) ----------------------------------------------------
__int64 __fastcall sub_1402AB820(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	return *((unsigned int*)a1 + 18);
}
// 1402AB820: using guessed type int var_18[6];

