//----- (0000000140158AD0) ----------------------------------------------------
__int64 __fastcall sub_140158AD0(__int64 a1, int* a2, int* a3)
{
	__int64 v3; // rbx
	__int64 v6; // rax

	v3 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v6;
		while (*((_WORD*)a2 + v6));
	}
	sub_14001C480(a1 + 160, a2, (int*)((char*)a2 + 2 * v6));
	if (*(_WORD*)a3)
	{
		do
			++v3;
		while (*((_WORD*)a3 + v3));
	}
	return sub_14001C480(a1 + 192, a3, (int*)((char*)a3 + 2 * v3));
}

