//----- (00000001400B7D60) ----------------------------------------------------
void __fastcall sub_1400B7D60(__int64* a1, int* a2, __int64 a3, int** a4)
{
	__int64 v7; // rax
	__int64 v8; // r8
	__int64 v9; // rbx
	int* v10; // r13
	int* v11; // rbp
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	int* v16; // r13
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	unsigned __int64 v20; // rbx
	__int64 v21; // rcx
	__int64 v22; // [rsp+50h] [rbp+8h]

	if (a3)
	{
		a1[1] = a3;
		a1[2] = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 160i64))(a3);
	}
	if ((unsigned __int64)a1[6] > 6)
	{
		v16 = *a4;
		if (a2)
		{
			v17 = 0i64;
			if (*(_WORD*)a2)
			{
				do
					++v17;
				while (*((_WORD*)a2 + v17));
			}
			v18 = sub_14018B280(2 * v17 + 18, 0);
			if (v18)
			{
				*((_QWORD*)v18 + 1) = v17;
				*(_QWORD*)v18 = off_140B55060;
			}
			else
			{
				v18 = 0i64;
			}
			v19 = v18 + 4;
			v20 = 2 * v17;
			sub_1407DB590(v18 + 4, a2, v20);
			*(_WORD*)((char*)v19 + v20) = 0;
			*a4 = v19;
		}
		else
		{
			*a4 = 0i64;
		}
		if (v16)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	}
	else
	{
		v7 = sub_1400B95F0(a1 + 5);
		v8 = *a1;
		v9 = v7;
		v22 = v7;
		a1[4] = a1[5] + 32 * v7;
		(*(void(__fastcall**)(__int64*, int*))(v8 + 56))(a1, a2);
		v10 = *a4;
		v11 = *(int**)(a1[4] + 8);
		if (v11)
		{
			v12 = 0i64;
			if (*(_WORD*)v11)
			{
				do
					++v12;
				while (*((_WORD*)v11 + v12));
			}
			v13 = sub_14018B280(2 * v12 + 18, 0);
			if (v13)
			{
				*((_QWORD*)v13 + 1) = v12;
				*(_QWORD*)v13 = off_140B55060;
			}
			else
			{
				v13 = 0i64;
			}
			v14 = v13 + 4;
			v15 = 2 * v12;
			sub_1407DB590(v13 + 4, v11, v15);
			*(_WORD*)((char*)v14 + v15) = 0;
			v9 = v22;
			*a4 = v14;
		}
		else
		{
			*a4 = 0i64;
		}
		if (v10)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
		sub_1400B9740(a1 + 5, v9);
	}
	v21 = a1[6];
	if (v21)
	{
		a1[4] = a1[5] - 32 + 32 * v21;
	}
	else
	{
		a1[4] = 0i64;
		a1[1] = 0i64;
		a1[2] = 0i64;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

