//----- (0000000140852310) ----------------------------------------------------
__int64 __fastcall sub_140852310(__int64 a1, char a2)
{
	unsigned __int8* v2; // r8
	unsigned int v3; // r10d
	__int64 v4; // rcx
	char v5; // r9
	__int64 v6; // rdx

	v2 = *(unsigned __int8**)(a1 + 80);
	if (!v2)
		return 0i64;
	v3 = *v2;
	v4 = 0i64;
	v5 = a2 + 45;
	while (1)
	{
		v6 = (unsigned int)(v4 + 1);
		if (v2[v6] == v5)
			break;
		v4 = (unsigned int)v6;
		if ((unsigned int)v6 >= v3)
			return 0i64;
	}
	return (__int64)&v2[4 * v4 + ((v3 + 4) & 0xFFFFFFFC)];
}

