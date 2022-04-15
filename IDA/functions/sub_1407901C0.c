//----- (00000001407901C0) ----------------------------------------------------
char* __fastcall sub_1407901C0(__int64 a1, _BYTE* a2, char* a3)
{
	unsigned __int64 v4; // rdx
	int v5; // r9d
	char* v6; // rbx
	int v7; // r8d
	int i; // eax
	int v9; // ecx

	if (!*a3 || !a3[1])
		sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aUnbalancedPatt);
	if (*a2 == *a3)
	{
		v4 = *(_QWORD*)(a1 + 8);
		v5 = a3[1];
		v6 = a2 + 1;
		v7 = *a3;
		for (i = 1; (unsigned __int64)v6 < v4; ++v6)
		{
			v9 = *v6;
			if (v9 == v5)
			{
				if (!--i)
					return v6 + 1;
			}
			else if (v9 == v7)
			{
				++i;
			}
		}
	}
	return 0i64;
}

