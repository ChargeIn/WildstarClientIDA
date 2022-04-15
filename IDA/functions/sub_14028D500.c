//----- (000000014028D500) ----------------------------------------------------
__int64 __fastcall sub_14028D500(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	result = (*(__int64(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	*((_DWORD*)a1 + 24) = 0;
	return result;
}
// 14028D500: using guessed type int var_18[6];

