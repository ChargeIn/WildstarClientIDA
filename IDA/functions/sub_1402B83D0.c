//----- (00000001402B83D0) ----------------------------------------------------
__int64 __fastcall sub_1402B83D0(__int64* a1)
{
	unsigned __int16* v1; // rdx
	__int64 v2; // r10
	__int64 v3; // rax
	unsigned __int16* i; // r8
	__int64 v6; // rcx

	v1 = (unsigned __int16*)a1[1];
	v2 = a1[2];
	v3 = *a1;
	for (i = &v1[v2]; v1 < i; v3 = v6 + 2860486313i64 * v3)
		v6 = *v1++;
	return *((unsigned int*)a1 + 6) + 2860486313i64 * (v2 + 2860486313i64 * v3);
}

