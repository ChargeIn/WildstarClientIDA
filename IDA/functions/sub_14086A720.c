//----- (000000014086A720) ----------------------------------------------------
__int64 __fastcall sub_14086A720(__int64 a1, int a2, char a3)
{
	__int64* v3; // r9
	unsigned int** v5; // rdi
	unsigned int* v6; // rbx

	if (!*(_DWORD*)(a1 + 16))
		return 1i64;
	v3 = *(__int64**)(a1 + 40);
	if (!v3)
		return 1i64;
	while (*((_DWORD*)v3 + 2) != a2)
	{
		v3 = (__int64*)*v3;
		if (!v3)
			return 1i64;
	}
	v5 = (unsigned int**)(v3 + 2);
	if (a3)
		return sub_14086B390(a1 - 224, (__int64)(v3 + 2));
	v6 = *v5;
	if (v3[2] != v3[3])
	{
		do
			sub_1408552B0(*v6++);
		while (v6 != v5[1]);
	}
	return 1i64;
}
// 14086A74E: conditional instruction was optimized away because r9.8!=0

