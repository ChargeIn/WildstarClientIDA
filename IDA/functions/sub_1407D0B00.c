//----- (00000001407D0B00) ----------------------------------------------------
__int64 __fastcall sub_1407D0B00(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	int* v7; // rax
	__int64 v8; // rbx
	__int64* v9; // rbx
	__int64* v10; // rdx
	__int64 v11; // rax
	unsigned __int64 v12; // rbp
	int** v13; // r15
	int* v14; // rax
	int* v15; // rcx

	v2 = a1 + 6640;
	v5 = (*(__int64(__fastcall**)(int*))(a1 + 6664))(a2);
	v6 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v5 % *(_QWORD*)(v2 + 8)));
	if (!v6)
		goto LABEL_5;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32))(a2, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_5;
	}
	v9 = v6 + 3;
	if (v9)
	{
		v8 = *v9;
	}
	else
	{
	LABEL_5:
		v7 = sub_14018B280(32i64, 0);
		v8 = (__int64)v7;
		if (v7)
		{
			*((_QWORD*)v7 + 2) = 0i64;
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		v10 = (__int64*)(a1 + 6680);
		if (!*(_QWORD*)(v8 + 16))
		{
			*(_QWORD*)(v8 + 16) = v10;
			*(_QWORD*)(v8 + 24) = *v10;
			*v10 = v8;
			v11 = *(_QWORD*)(v8 + 24);
			if (v11)
				*(_QWORD*)(v11 + 16) = v8 + 24;
		}
		if (*(_QWORD*)v2 == *(_QWORD*)(v2 + 8))
			sub_1400290D0(v2);
		v12 = (*(__int64(__fastcall**)(int*, __int64*))(v2 + 24))(a2, v10);
		v13 = (int**)(*(_QWORD*)(v2 + 16) + 8 * (v12 % *(_QWORD*)(v2 + 8)));
		v14 = sub_14018B280(32i64, 0);
		if (v14)
		{
			v15 = *v13;
			*(_QWORD*)v14 = v12;
			*((_QWORD*)v14 + 1) = v15;
			LODWORD(v15) = *a2;
			*((_QWORD*)v14 + 3) = v8;
			v14[4] = (int)v15;
		}
		else
		{
			v14 = 0i64;
		}
		*v13 = v14;
		++* (_QWORD*)v2;
	}
	sub_1403514F0(v8, a2, (__int64)&off_140AD5FB8);
	return 0i64;
}
// 1407D0BD3: variable 'v10' is possibly undefined
// 140AD5FB8: using guessed type wchar_t *off_140AD5FB8;

