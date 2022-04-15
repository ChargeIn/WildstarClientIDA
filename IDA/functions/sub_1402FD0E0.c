//----- (00000001402FD0E0) ----------------------------------------------------
float __fastcall sub_1402FD0E0(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 1400))(a1, v4);
	return *(float*)(a1[8] + 908);
}
// 1402FD0E0: using guessed type int var_18[6];

