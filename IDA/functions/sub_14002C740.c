//----- (000000014002C740) ----------------------------------------------------
char __fastcall sub_14002C740(__int64 a1, _WORD* a2)
{
	unsigned __int64 v2; // rax
	__int64 v3; // r10
	unsigned __int64 v4; // rcx
	__int64 v5; // r10

	v2 = 0i64;
	if (*a2)
	{
		do
			++v2;
		while (a2[v2]);
	}
	v3 = *(_QWORD*)(a1 + 8);
	if ((*(_QWORD*)(a1 + 16) - v3) >> 1 == v2)
	{
		v4 = 0i64;
		if (!v2)
			return 1;
		v5 = v3 - (_QWORD)a2;
		while (*(_WORD*)((char*)a2 + v5) == *a2)
		{
			++v4;
			++a2;
			if (v4 >= v2)
				return 1;
		}
	}
	return 0;
}
// 14002C7AF: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

