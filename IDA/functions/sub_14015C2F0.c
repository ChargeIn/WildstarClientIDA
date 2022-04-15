//----- (000000014015C2F0) ----------------------------------------------------
int* __fastcall sub_14015C2F0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rdi
	__int64 v10; // rax
	wchar_t* v11; // rax
	int* result; // rax
	bool v13; // [rsp+40h] [rbp-A8h] BYREF
	_OWORD v14[6]; // [rsp+50h] [rbp-98h] BYREF

	sub_1400D45E0((__int64)v14, a1, a2, a5, 0i64);
	v9 = 0i64;
	v13 = 0;
	v10 = sub_1401A6B80(a5, word_1409DC0A4);
	if (v10)
	{
		v11 = (wchar_t*)sub_1401A4F40(v10 + 32);
		sub_1401A52E0(v11, &v13);
		if (v13)
			v9 = 1i64;
	}
	result = sub_14018B280(1072i64, 0);
	if (result)
		return (int*)sub_14015BA00(result, a1, a2, a3, v14, a4, v9);
	return result;
}
// 1409DC0A4: using guessed type _WORD word_1409DC0A4[292];
// 140A35940: using guessed type void *off_140A35940;
// 14015C2F0: using guessed type _OWORD var_98[6];

