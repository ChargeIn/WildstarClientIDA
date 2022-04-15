//----- (00000001407C1210) ----------------------------------------------------
__int64 __fastcall sub_1407C1210(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 64))(a1, v4);
	result = a1[5];
	if (result)
		return *(unsigned int*)(result + 48);
	return result;
}
// 1407C1210: using guessed type int var_18[6];

