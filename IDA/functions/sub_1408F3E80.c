//----- (00000001408F3E80) ----------------------------------------------------
__int64 __fastcall sub_1408F3E80(__int64 a1, int** a2)
{
	int* v2; // rdi
	unsigned __int16 v5; // si
	int v6; // edx
	int* v7; // rdi
	unsigned int v8; // eax
	__int64 result; // rax

	v2 = *a2;
	v5 = *((_WORD*)*a2 + 2);
	v6 = **a2;
	v7 = (int*)((char*)v2 + 6);
	if (v5)
	{
		v8 = sub_1408F3F40(a1, v6);
		result = sub_140837E30(16i64 * v8 + a1 + 8, v7, v5, 0);
		if ((_DWORD)result == 52)
			return result;
		v7 += 3 * v5;
	}
	*a2 = v7;
	return 1i64;
}

