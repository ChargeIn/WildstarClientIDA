//----- (00000001405CEAE0) ----------------------------------------------------
void __fastcall sub_1405CEAE0(__int64 a1, _DWORD* a2)
{
	int* v4; // rax
	__int64 v5; // rbx
	__int64* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rsi
	unsigned __int64 v9; // r15
	int** v10; // r14
	int* v11; // rax
	int* v12; // rcx

	v4 = sub_14018B280(32i64, 0);
	v5 = (__int64)v4;
	if (v4)
	{
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*(_QWORD*)v4 = 0i64;
		v4[2] = 0;
	}
	else
	{
		v5 = 0i64;
	}
	if ((int)sub_1405CB9E0(v5, a1, a2) >= 0)
	{
		v6 = (__int64*)(a1 + 680);
		if (!*(_QWORD*)(v5 + 16))
		{
			*(_QWORD*)(v5 + 16) = v6;
			*(_QWORD*)(v5 + 24) = *v6;
			*v6 = v5;
			v7 = *(_QWORD*)(v5 + 24);
			if (v7)
				*(_QWORD*)(v7 + 16) = v5 + 24;
		}
		v8 = a1 + 688;
		if (*(_QWORD*)v8 == *(_QWORD*)(v8 + 8))
			sub_1400290D0(v8);
		v9 = (*(__int64(__fastcall**)(_DWORD*))(v8 + 24))(a2 + 5);
		v10 = (int**)(*(_QWORD*)(v8 + 16) + 8 * (v9 % *(_QWORD*)(v8 + 8)));
		v11 = sub_14018B280(32i64, 0);
		if (v11)
		{
			v12 = *v10;
			*(_QWORD*)v11 = v9;
			*((_QWORD*)v11 + 1) = v12;
			LODWORD(v12) = a2[5];
			*((_QWORD*)v11 + 3) = v5;
			v11[4] = (int)v12;
		}
		*v10 = v11;
		++* (_QWORD*)v8;
	}
	else if (v5)
	{
		sub_1405CB900(v5);
		sub_14018B900(v5, 0);
	}
}

