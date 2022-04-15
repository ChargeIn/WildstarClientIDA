//----- (0000000140712C00) ----------------------------------------------------
__int64 __fastcall sub_140712C00(void(__fastcall*** a1)(_QWORD), int a2, __int64 a3, __int64 a4)
{
	int* v8; // rax
	int* v9; // rdi
	int* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax

	if (qword_140C65A28)
	{
		v8 = sub_14018B280(32i64, 0);
		v9 = v8;
		if (v8)
		{
			*v8 = a2;
			*((_QWORD*)v8 + 1) = a3;
			*((_QWORD*)v8 + 2) = a4;
			*((_QWORD*)v8 + 3) = a1;
			if (a1)
				(**a1)(a1);
		}
		else
		{
			v9 = 0i64;
		}
		v10 = sub_14018B280(56i64, 0);
		v12 = (__int64)v10;
		if (v10)
		{
			*(_QWORD*)v10 = 0i64;
			*((_QWORD*)v10 + 2) = 0i64;
			v10[6] = 0;
			v10[10] = 0;
			*((_QWORD*)v10 + 4) = sub_140712B60;
			*((_QWORD*)v10 + 6) = v9;
			v13 = sub_140225140(2u);
			if (v13)
				*(_QWORD*)(v12 + 16) = v13;
		}
		else
		{
			v12 = 0i64;
		}
		sub_1404CFA80(v11, v12);
	}
	return 0i64;
}
// 140712CB2: variable 'v11' is possibly undefined
// 140C65A28: using guessed type __int64 qword_140C65A28;

