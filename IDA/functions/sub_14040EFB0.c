//----- (000000014040EFB0) ----------------------------------------------------
__int64 __fastcall sub_14040EFB0(_DWORD* a1, unsigned int* a2, unsigned int* a3, unsigned int* a4, unsigned int* a5)
{
	unsigned int* v7; // rdi
	unsigned int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	unsigned int v17; // eax
	unsigned int v18; // ecx
	unsigned int v19; // eax

	v7 = a2;
	if (!a4)
		return 2147500037i64;
	v10 = 0;
	*a3 = 0;
	*a4 = 0;
	*a5 = 0;
	if ((unsigned int)(a1[80] - 1) > 1)
		return 0i64;
	if (!a2)
		v7 = a1 + 2;
	if ((dword_140C8ABA4 & 1) != 0)
	{
		if (dword_140C8ABAC)
		{
			v10 = dword_140C8ABA8;
			goto LABEL_13;
		}
	}
	else
	{
		dword_140C8ABA4 |= 1u;
	}
	dword_140C8ABAC = 1;
	v11 = sub_140200220(0x400u);
	if (v11)
		v10 = *(_DWORD*)(v11 + 8);
	dword_140C8ABA8 = v10;
LABEL_13:
	if (v7[1] >= v10)
	{
		v12 = sub_14020DF20(a1[92]);
		v13 = sub_14020CE20(*v7);
		v14 = v13;
		if (!v13)
			return 2147500037i64;
		if (v12)
			v15 = *(_DWORD*)(v12 + 4);
		else
			v15 = *(_DWORD*)(v13 + 36);
		*a3 = v7[75] + v15;
		if ((a1[83] & 0x100000) != 0 && (v7[8] & 8) != 0)
		{
			v16 = sub_140200220(0x94Eu);
			if (v16)
				v17 = *(_DWORD*)(v16 + 16);
			else
				v17 = 3;
		}
		else if (!v12 || (v17 = *(_DWORD*)(v12 + 48)) == 0)
		{
			v17 = v7[75] + *(_DWORD*)(v14 + 40);
		}
		*a4 = v17;
		v18 = 8;
		if (v17 < 8)
			v18 = v17;
		*a4 = v18;
		v19 = *a3;
		if (v18 < *a3)
			v19 = v18;
		*a3 = v19;
		*a5 = *a4;
	}
	return 0i64;
}
// 140C8ABA4: using guessed type int dword_140C8ABA4;
// 140C8ABA8: using guessed type int dword_140C8ABA8;
// 140C8ABAC: using guessed type int dword_140C8ABAC;

