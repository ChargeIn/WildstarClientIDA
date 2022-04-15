//----- (00000001408AF5C0) ----------------------------------------------------
char __fastcall sub_1408AF5C0(_DWORD* a1, int* a2, unsigned int a3, char a4, int* a5)
{
	unsigned int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rdi
	int v13; // ebx

	if (!a2 || !a3)
		return 0;
	if (a4)
	{
		v9 = a1[3];
		if (!v9)
			return 0;
		v10 = a3;
		if (v9 < a3)
			v10 = v9;
		if (a3 != (_DWORD)v10)
			sub_1407E4830(&a2[v10], 0i64, 4 * (a3 - (unsigned int)v10));
	}
	else if (a1[3] < a3)
	{
		return 0;
	}
	v11 = (unsigned int)a1[2];
	v12 = (unsigned int)(*a1 - v11);
	if (a3 < (unsigned int)v12)
		v12 = a3;
	sub_1407DB590(a2, &a5[v11], (unsigned int)(4 * v12));
	v13 = a3 - v12;
	if (v13)
		sub_1407DB590(&a2[v12], a5, (unsigned int)(4 * v13));
	return 1;
}

