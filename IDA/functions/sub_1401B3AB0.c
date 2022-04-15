//----- (00000001401B3AB0) ----------------------------------------------------
int** __fastcall sub_1401B3AB0(int** a1, __int16* a2)
{
	__int16* v2; // r14
	unsigned __int64 v4; // rbx
	int* v5; // rax
	__int16 v6; // si
	__int64 v7; // r13
	int* v8; // rbx
	__int64 v9; // rbp
	__int64 v10; // rax

	v2 = a2;
	v4 = 0i64;
	*a1 = 0i64;
	if (*a2)
	{
		do
			++v4;
		while (a2[v4]);
	}
	v5 = sub_14018D250(0i64, v4);
	*a1 = v5;
	*((_WORD*)v5 + v4) = 0;
	v6 = *v2;
	if (*v2)
	{
		v7 = 0x87FFFFFE03FFi64;
		do
		{
			++v2;
			if ((unsigned __int16)(v6 - 48) <= 0x2Fu && _bittest64(&v7, (unsigned __int16)(v6 - 48))
				|| (unsigned __int16)(v6 - 97) <= 0x19u)
			{
				v8 = *a1;
				if (*a1)
					v9 = *((_QWORD*)v8 - 1);
				else
					v9 = 0i64;
				v10 = sub_14018D140(*a1, v9 + 1);
				*a1 = (int*)v10;
				*(_WORD*)(v10 + 2 * v9) = v6;
				*(_WORD*)(v10 + 2 * v9 + 2) = 0;
				if (v8 != (int*)v10 && v8)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
			}
			v6 = *v2;
		} while (*v2);
	}
	return a1;
}

