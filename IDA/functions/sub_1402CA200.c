//----- (00000001402CA200) ----------------------------------------------------
__int64 __fastcall sub_1402CA200(__int64 a1)
{
	bool v1; // zf
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_DWORD*)(a1 + 24) == 3;
	v4[0] = -1;
	if (!v1)
		sub_1402C9AE0(a1, (__int64)v4, 1);
	return *(unsigned int*)(*(_QWORD*)(a1 + 64) + 32i64);
}
// 1402CA200: using guessed type int var_18[6];

