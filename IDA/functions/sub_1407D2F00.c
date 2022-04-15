//----- (00000001407D2F00) ----------------------------------------------------
float __fastcall sub_1407D2F00(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 16))(a1, v4);
	return *(float*)(a1[1] + 16);
}
// 1407D2F00: using guessed type int var_18[6];

