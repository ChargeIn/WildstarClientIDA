//----- (00000001407A9570) ----------------------------------------------------
__int64 __fastcall sub_1407A9570(__int64 a1, int a2)
{
	unsigned __int64 v2; // r9
	int v3; // eax
	__int64 v4; // r10
	__int64 v5; // r8

	v2 = *(_QWORD*)(a1 + 144);
	v3 = 0;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 136);
	v5 = 0i64;
	while (**(_DWORD**)(v4 + 8 * v5) != a2)
	{
		v5 = (unsigned int)++v3;
		if ((unsigned int)v3 >= v2)
			return 0i64;
	}
	if (v3 >= 0)
		return *(unsigned int*)(*(_QWORD*)(v4 + 8i64 * v3) + 380i64);
	else
		return 0i64;
}

