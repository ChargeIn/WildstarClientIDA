//----- (000000014003CD40) ----------------------------------------------------
int** __fastcall sub_14003CD40(int** a1, int** a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rdi
	unsigned __int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx

	if (*a2)
	{
		v4 = *((_QWORD*)*a2 - 1);
		v5 = sub_14018B280(2 * v4 + 18, 0);
		if (v5)
		{
			*(_QWORD*)v5 = off_140B55060;
			*((_QWORD*)v5 + 1) = v4;
		}
		else
		{
			v5 = 0i64;
		}
		v6 = v5 + 4;
		v7 = 2 * v4;
		sub_1407DB590(v5 + 4, *a2, v7);
		*(_WORD*)((char*)v6 + v7) = 0;
		*a1 = v6;
	}
	else
	{
		*a1 = 0i64;
	}
	v8 = a2[1];
	if (v8)
	{
		v9 = *((_QWORD*)v8 - 1);
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55060;
			*((_QWORD*)v10 + 1) = v9;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, a2[1], v12);
		*(_WORD*)((char*)v11 + v12) = 0;
		a1[1] = v11;
	}
	else
	{
		a1[1] = 0i64;
	}
	v13 = a2[2];
	if (v13)
	{
		v14 = *((_QWORD*)v13 - 1);
		v15 = sub_14018B280(2 * v14 + 18, 0);
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55060;
			*((_QWORD*)v15 + 1) = v14;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		v17 = 2 * v14;
		sub_1407DB590(v15 + 4, a2[2], v17);
		*(_WORD*)((char*)v16 + v17) = 0;
		a1[2] = v16;
	}
	else
	{
		a1[2] = 0i64;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

