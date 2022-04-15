//----- (00000001402F7390) ----------------------------------------------------
__int64 __fastcall sub_1402F7390(__int64* a1, unsigned int a2, unsigned __int16 a3)
{
	__int64 v3; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 1400))(a1, v8);
	return *(_QWORD*)(a1[7] + 152) + 32i64 * (unsigned int)sub_1402F7130(a1, a2, a3);
}
// 1402F7390: using guessed type int var_18[6];

