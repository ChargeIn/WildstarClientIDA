//----- (00000001403F6CE0) ----------------------------------------------------
_QWORD* __fastcall sub_1403F6CE0(_QWORD* a1, __int64 a2)
{
	int* v4; // rax
	int** v5; // rdi
	__int64 v6; // r15
	__int64 v7; // r14
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rsi
	int* v11; // rax

	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v4 = sub_14018B280(16i64, 0);
	a1[1] = v4;
	a1[2] = v4;
	a1[3] = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	if ((_QWORD*)a2 != a1)
		sub_14001C480((__int64)a1, *(int**)(a2 + 8), *(int**)(a2 + 16));
	v5 = (int**)(a1 + 4);
	v6 = a2 - (_QWORD)a1;
	v7 = 10i64;
	do
	{
		v8 = sub_14018B280(48i64, 0);
		v9 = v8;
		if (v8)
		{
			v10 = *(__int64*)((char*)v5 + v6);
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 5) = 0i64;
			v11 = sub_14018B280(16i64, 0);
			*((_QWORD*)v9 + 3) = v11;
			*((_QWORD*)v9 + 4) = v11;
			*((_QWORD*)v9 + 5) = v11 + 4;
			if (v11)
				*(_WORD*)v11 = 0;
			if (*(_QWORD*)v10)
				(***(void(__fastcall****)(_QWORD))v10)(*(_QWORD*)v10);
			*(_QWORD*)v9 = *(_QWORD*)v10;
			v9[2] = *(_DWORD*)(v10 + 8);
		}
		else
		{
			v9 = 0i64;
		}
		*v5++ = v9;
		--v7;
	} while (v7);
	return a1;
}

