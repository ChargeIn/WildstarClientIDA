//----- (0000000140029000) ----------------------------------------------------
__int64 __fastcall sub_140029000(__int64 a1, int* a2)
{
	unsigned __int64 v4; // rbp
	int** v5; // rsi
	int* v6; // rax
	int* v7; // rdi
	int* v8; // rcx
	int* v9; // rax

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v4 = (*(__int64(__fastcall**)(int*))(a1 + 24))(a2);
	v5 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8)));
	v6 = sub_14018B280(56i64, 0);
	v7 = v6;
	if (v6)
	{
		v8 = *v5;
		*(_QWORD*)v6 = v4;
		*((_QWORD*)v6 + 1) = v8;
		v6[4] = *a2;
		v9 = sub_14018B280(72i64, 0);
		*((_QWORD*)v7 + 5) = 0i64;
		*((_QWORD*)v7 + 4) = v9;
		*(_BYTE*)v9 = 0;
		*(_QWORD*)(*((_QWORD*)v7 + 4) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v7 + 4) + 16i64) = *((_QWORD*)v7 + 4);
		*(_QWORD*)(*((_QWORD*)v7 + 4) + 24i64) = *((_QWORD*)v7 + 4);
	}
	else
	{
		v7 = 0i64;
	}
	*v5 = v7;
	++* (_QWORD*)a1;
	return (__int64)(*v5 + 6);
}

