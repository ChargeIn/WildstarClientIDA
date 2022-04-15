//----- (000000014040B320) ----------------------------------------------------
char __fastcall sub_14040B320(char* a1, __int64 a2)
{
	unsigned __int64 v2; // rax
	char* v5; // rdx
	unsigned __int64 v6; // rcx
	signed __int64 v7; // r8

	v2 = 0i64;
	if (*(_WORD*)a1)
	{
		do
			++v2;
		while (*(_WORD*)&a1[2 * v2]);
	}
	v5 = *(char**)(a2 + 8);
	if (v2 == (__int64)(*(_QWORD*)(a2 + 16) - (_QWORD)v5) >> 1)
	{
		v6 = 0i64;
		if (!v2)
			return 1;
		v7 = a1 - v5;
		while (*(_WORD*)&v5[v7] == *(_WORD*)v5)
		{
			++v6;
			v5 += 2;
			if (v6 >= v2)
				return 1;
		}
	}
	return 0;
}
// 14040B38F: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

