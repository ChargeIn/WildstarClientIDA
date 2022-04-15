//----- (0000000140156AE0) ----------------------------------------------------
void __fastcall sub_140156AE0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rdi
	__int64 v4; // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	_QWORD** v8; // rax
	_QWORD* v9; // rdi
	__int64 v10; // rcx
	_QWORD** v11; // rax
	_QWORD* v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rcx

	*a1 = &off_140B5C880;
	sub_140156C20(a1);
	v2 = (_QWORD**)a1[13];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != (_QWORD*)a1[13]);
	}
	*(_QWORD*)a1[13] = a1[13];
	*(_QWORD*)(a1[13] + 8i64) = a1[13];
	sub_14018B900(a1[13], 0);
	v5 = (_QWORD**)a1[11];
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != (_QWORD*)a1[11]);
	}
	*(_QWORD*)a1[11] = a1[11];
	*(_QWORD*)(a1[11] + 8i64) = a1[11];
	sub_14018B900(a1[11], 0);
	v8 = (_QWORD**)a1[9];
	v9 = *v8;
	if (*v8 != v8)
	{
		do
		{
			v10 = (__int64)v9;
			v9 = (_QWORD*)*v9;
			sub_14018B900(v10, 0);
		} while (v9 != (_QWORD*)a1[9]);
	}
	*(_QWORD*)a1[9] = a1[9];
	*(_QWORD*)(a1[9] + 8i64) = a1[9];
	sub_14018B900(a1[9], 0);
	v11 = (_QWORD**)a1[7];
	v12 = *v11;
	if (*v11 != v11)
	{
		do
		{
			v13 = (__int64)v12;
			v12 = (_QWORD*)*v12;
			sub_14018B900(v13, 0);
		} while (v12 != (_QWORD*)a1[7]);
	}
	*(_QWORD*)a1[7] = a1[7];
	*(_QWORD*)(a1[7] + 8i64) = a1[7];
	sub_14018B900(a1[7], 0);
	v14 = a1[3];
	if (v14)
		sub_14018B900(v14, 0);
}
// 140B5C880: using guessed type __int64 (__fastcall *off_140B5C880)();

