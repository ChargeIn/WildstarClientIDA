//----- (000000014077D790) ----------------------------------------------------
__int64 __fastcall sub_14077D790(unsigned int** a1, __int64 a2)
{
	int v5; // eax
	unsigned int* v6; // rdx
	unsigned int* v7; // rcx
	int v8; // eax
	unsigned int* v9; // rbx
	int v10; // ebp
	int* v11; // rax
	int v12; // eax
	unsigned int* v13; // rbx
	int v14; // edi
	int* v15; // rax

	if (!a2)
		return 2147500037i64;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	v6 = a1[2];
	v7 = *(unsigned int**)v6;
	if (*(unsigned int**)v6 != v6)
	{
		do
		{
			if (v7[4] == v5)
				break;
			v7 = *(unsigned int**)v7;
		} while (v7 != v6);
		if (v7 != v6)
			return 1i64;
	}
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	v9 = a1[2];
	v10 = v8;
	v11 = sub_14018B280(24i64, 0);
	if (v11 != (int*)-16i64)
		v11[4] = v10;
	*(_QWORD*)v11 = v9;
	*((_QWORD*)v11 + 1) = *((_QWORD*)v9 + 1);
	**((_QWORD**)v9 + 1) = v11;
	*((_QWORD*)v9 + 1) = v11;
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 200i64))(a2, **a1))
	{
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		v13 = a1[4];
		v14 = v12;
		v15 = sub_14018B280(24i64, 0);
		if (v15 != (int*)-16i64)
			v15[4] = v14;
		*(_QWORD*)v15 = v13;
		*((_QWORD*)v15 + 1) = *((_QWORD*)v13 + 1);
		**((_QWORD**)v13 + 1) = v15;
		*((_QWORD*)v13 + 1) = v15;
	}
	return 0i64;
}

