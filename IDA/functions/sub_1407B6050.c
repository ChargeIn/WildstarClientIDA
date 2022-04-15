//----- (00000001407B6050) ----------------------------------------------------
__int64 __fastcall sub_1407B6050(__int64 a1, int** a2)
{
	int* v2; // r15
	int* v3; // rsi
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx

	v2 = *a2;
	v3 = *(int**)(a1 + 24);
	if (v3)
	{
		v5 = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v5;
			while (*((_WORD*)v3 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v3, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*a2 = v7;
	}
	else
	{
		*a2 = 0i64;
	}
	if (v2)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 4);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

