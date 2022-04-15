//----- (00000001402AB850) ----------------------------------------------------
__int64 __fastcall sub_1402AB850(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	result = (*(__int64(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	*((_DWORD*)a1 + 18) = 0;
	return result;
}
// 1402AB850: using guessed type int var_18[6];

