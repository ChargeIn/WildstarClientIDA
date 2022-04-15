//----- (00000001400C35B0) ----------------------------------------------------
__int64 __fastcall sub_1400C35B0(__int64 a1, int* a2)
{
	int* v2; // r9
	__int64 v3; // rax

	v2 = (int*)&word_140B7B704;
	if (a2)
		v2 = a2;
	v3 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v3;
		while (*((_WORD*)v2 + v3));
	}
	return sub_14001C480(a1 + 776, v2, (int*)((char*)v2 + 2 * v3));
}
// 140B7B704: using guessed type __int16 word_140B7B704;

