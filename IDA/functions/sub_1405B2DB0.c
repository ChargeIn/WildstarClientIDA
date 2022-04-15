//----- (00000001405B2DB0) ----------------------------------------------------
void __fastcall sub_1405B2DB0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v4; // rsi
	int** v5; // rdi
	int* v6; // rax
	int* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	if (a2)
	{
		v9 = a1;
		if (a3)
		{
			v9 = a2;
			if (qword_140C4A3A8 == qword_140C4A3B0)
				sub_1400290D0((__int64)&qword_140C4A3A8);
			v4 = qword_140C4A3C0(&v9);
			v5 = (int**)(qword_140C4A3B8 + 8 * (v4 % qword_140C4A3B0));
			v6 = sub_14018B280(32i64, 0);
			if (v6)
			{
				v7 = *v5;
				*(_QWORD*)v6 = v4;
				*((_QWORD*)v6 + 1) = v7;
				v8 = v9;
				*((_QWORD*)v6 + 3) = a3;
				*((_QWORD*)v6 + 2) = v8;
			}
			*v5 = v6;
			++qword_140C4A3A8;
		}
	}
}
// 140C4A3A8: using guessed type __int64 qword_140C4A3A8;
// 140C4A3B0: using guessed type __int64 qword_140C4A3B0;
// 140C4A3B8: using guessed type __int64 qword_140C4A3B8;
// 140C4A3C0: using guessed type __int64 (__fastcall *qword_140C4A3C0)(_QWORD);

