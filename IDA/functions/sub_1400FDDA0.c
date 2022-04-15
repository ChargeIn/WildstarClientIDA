//----- (00000001400FDDA0) ----------------------------------------------------
__int64 __fastcall sub_1400FDDA0(__int64 a1, int* a2)
{
	int* v2; // r9
	__int64 v3; // rax

	v2 = (int*)&unk_1409D4FD4;
	if (a2)
		v2 = a2;
	v3 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v3;
		while (*((_WORD*)v2 + v3));
	}
	return sub_14001C480(a1 + 88, v2, (int*)((char*)v2 + 2 * v3));
}

