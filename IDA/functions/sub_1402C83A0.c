//----- (00000001402C83A0) ----------------------------------------------------
__int64 __fastcall sub_1402C83A0(__int64 a1, int* a2, _OWORD* a3, __int64* a4, int a5, __int64 a6)
{
	__int64 v6; // rbp
	unsigned __int64 v9; // rsi
	__int64 v10; // rdi
	_QWORD* v11; // rbx
	int* v12; // rax
	__int64 v13; // rbx
	__int64* v14; // rbx
	int* v15; // rax
	__int64 v16; // r8
	__int64 v17; // rcx
	int v19; // esi
	int* v20; // [rsp+48h] [rbp+10h] BYREF

	v20 = a2;
	v6 = qword_140C657F0;
	v9 = (*(__int64(__fastcall**)(int**))(qword_140C657F0 + 80))(&v20);
	v10 = 0i64;
	v11 = *(_QWORD**)(*(_QWORD*)(v6 + 72) + 8 * (v9 % *(_QWORD*)(v6 + 64)));
	if (!v11)
		goto LABEL_5;
	while (v9 != *v11 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v6 + 88))(&v20, v11 + 2))
	{
		v11 = (_QWORD*)v11[1];
		if (!v11)
			goto LABEL_5;
	}
	v14 = v11 + 3;
	if (v14)
	{
		v13 = *v14;
		(**(void(__fastcall***)(__int64))v13)(v13);
	}
	else
	{
	LABEL_5:
		v12 = sub_14018B280(128i64, 0);
		if (v12)
			v13 = sub_1402C9600((__int64)v12);
		else
			v13 = 0i64;
		v19 = sub_1402C9790(v13, v20);
		if (v19 < 0)
		{
			if (v13)
			{
				sub_1402C9680(v13);
				sub_14018B900(v13, 0);
			}
			return (unsigned int)v19;
		}
	}
	v15 = sub_14018B280(544i64, 0);
	if (v15)
		v10 = sub_1402CB050((__int64)v15);
	if (*(_QWORD*)(v10 + 24) != v13)
	{
		if (v13)
			(**(void(__fastcall***)(__int64))v13)(v13);
		v17 = *(_QWORD*)(v10 + 24);
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*(_QWORD*)(v10 + 24) = v13;
	}
	sub_1402CB390(v10, a3, v16, a6);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	*a4 = v10;
	return 0i64;
}
// 1402C8491: variable 'v16' is possibly undefined
// 140C657F0: using guessed type __int64 qword_140C657F0;

