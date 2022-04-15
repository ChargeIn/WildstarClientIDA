//----- (00000001402CE3E0) ----------------------------------------------------
void __fastcall sub_1402CE3E0(__int64 a1, unsigned __int64 a2)
{
	char* v3; // rdx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int128 v7[4]; // [rsp+20h] [rbp-48h] BYREF

	v3 = *(char**)(a1 + 16);
	v5 = *(_QWORD*)(a1 + 8);
	v6 = (__int64)&v3[-v5] >> 6;
	if (a2 >= v6)
		sub_1402CEAA0(a1, v3, a2 - v6, v7);
	else
		*(_QWORD*)(a1 + 16) += -64 * ((__int64)&v3[-v5 + -64 * a2] >> 6);
}
// 1402CE3E0: using guessed type __int128 var_48[4];

