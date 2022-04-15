//----- (0000000140110EE0) ----------------------------------------------------
void __fastcall sub_140110EE0(_QWORD* a1, int* a2)
{
	unsigned __int64 v4; // rbx
	__int64 v5; // rax
	int* v6; // rbp
	__int64 v7; // r14
	_WORD* v8; // rax
	__int64 v9; // [rsp+20h] [rbp-38h] BYREF
	int* v10; // [rsp+28h] [rbp-30h]
	_WORD* v11; // [rsp+30h] [rbp-28h]
	__int64 v12; // [rsp+38h] [rbp-20h]

	if (a2 && *(_WORD*)a2)
	{
		v4 = a1[162];
		if (!v4 || !sub_14002C740(32 * v4 + a1[161] - 32i64, a2))
		{
			if (v4 >= 0x64)
				sub_1400B9740(a1 + 161, 0i64);
			v5 = 0i64;
			v6 = 0i64;
			v10 = 0i64;
			v12 = 0i64;
			if (*(_WORD*)a2)
			{
				do
					++v5;
				while (*((_WORD*)a2 + v5));
			}
			v7 = (2 * v5) >> 1;
			if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v6 = sub_14018B280(2 * (v7 + 1), 0);
				v10 = v6;
				v12 = (__int64)v6 + 2 * v7 + 2;
			}
			sub_1407DB590(v6, a2, 2 * v7);
			v8 = (_WORD*)v6 + v7;
			v11 = v8;
			if (v8)
				*v8 = 0;
			sub_140115DF0(a1 + 161, &v9);
			if (v10)
				sub_14018B900((__int64)v10, 0);
		}
		a1[160] = a1[162];
	}
}

