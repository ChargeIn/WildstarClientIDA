//----- (00000001403F6E00) ----------------------------------------------------
__int64 __fastcall sub_1403F6E00(__int64 a1, __int64 a2)
{
	__int64 v4; // r14
	int** v5; // rdi
	__int64 v6; // rbp
	int* v7; // rax
	int* v8; // rbx
	__int64 v9; // rsi
	int* v10; // rax

	if (a2 != a1)
		sub_14001C480(a1, *(int**)(a2 + 8), *(int**)(a2 + 16));
	v4 = a2 - a1;
	v5 = (int**)(a1 + 32);
	v6 = 10i64;
	do
	{
		v7 = sub_14018B280(48i64, 0);
		v8 = v7;
		if (v7)
		{
			v9 = *(__int64*)((char*)v5 + v4);
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 4) = 0i64;
			*((_QWORD*)v7 + 5) = 0i64;
			v10 = sub_14018B280(16i64, 0);
			*((_QWORD*)v8 + 3) = v10;
			*((_QWORD*)v8 + 4) = v10;
			*((_QWORD*)v8 + 5) = v10 + 4;
			if (v10)
				*(_WORD*)v10 = 0;
			if (*(_QWORD*)v9)
				(***(void(__fastcall****)(_QWORD))v9)(*(_QWORD*)v9);
			*(_QWORD*)v8 = *(_QWORD*)v9;
			v8[2] = *(_DWORD*)(v9 + 8);
		}
		else
		{
			v8 = 0i64;
		}
		*v5++ = v8;
		--v6;
	} while (v6);
	return a1;
}

