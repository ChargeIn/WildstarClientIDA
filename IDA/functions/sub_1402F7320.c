//----- (00000001402F7320) ----------------------------------------------------
__int64 __fastcall sub_1402F7320(__int64* a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // rbx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	result = sub_14021A300(a2);
	if (result)
	{
		v5 = *a1;
		v7[0] = -1;
		(*(void(__fastcall**)(__int64*, int*))(v5 + 1400))(a1, v7);
		v6 = a1[8];
		return (unsigned int)sub_140327080(v6, a2) < *(_DWORD*)(v6 + 128);
	}
	return result;
}
// 1402F7320: using guessed type int var_18[6];

