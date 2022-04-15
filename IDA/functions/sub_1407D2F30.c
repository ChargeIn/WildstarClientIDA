//----- (00000001407D2F30) ----------------------------------------------------
_BOOL8 __fastcall sub_1407D2F30(__int64* a1)
{
	__int64 v1; // rax
	int v3[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v3[0] = 0;
	return (*(unsigned int(__fastcall**)(__int64*, int*))(v1 + 16))(a1, v3) != 0;
}
// 1407D2F30: using guessed type int var_18[6];

