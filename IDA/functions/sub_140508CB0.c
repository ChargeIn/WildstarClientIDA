//----- (0000000140508CB0) ----------------------------------------------------
_QWORD* __fastcall sub_140508CB0(_QWORD* a1)
{
	int** v2; // rbx
	int v3; // edi
	int* v4; // rax
	int v5; // xmm0_4

	v2 = (int**)(a1 + 9);
	v3 = 3;
	*a1 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	do
	{
		*(v2 - 1) = 0i64;
		*v2 = 0i64;
		v2[1] = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(v2 - 1) = v4;
		*v2 = v4;
		v2[1] = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = dword_140C63664;
		*(v2 - 4) = 0i64;
		*((_DWORD*)v2 - 5) = 1065353216;
		*((_DWORD*)v2 - 6) = v5;
		v2 += 6;
		--v3;
	} while (v3 >= 0);
	return a1;
}
// 140C63664: using guessed type int dword_140C63664;

