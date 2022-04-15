//----- (0000000140038C80) ----------------------------------------------------
void __fastcall sub_140038C80(__int64 a1, int a2)
{
	__int64 v3; // r13
	__int64 v4; // rax
	__int64 v5; // r8
	int* v6; // rax
	int* v7; // rsi
	__int64 v8; // rdi
	int* v9; // rax
	int* v10; // rbx
	unsigned __int64 v11; // rdi
	__int64 v12; // r14
	__int64 v13; // rsi
	__int64 v15; // r15
	int** v16; // r13
	int* v17; // r14
	__int64 v18; // r12
	__int64 v19; // rbx
	__int64 v20; // rdi
	__int64 v23; // [rsp+80h] [rbp+18h] BYREF
	__int64 v24; // [rsp+88h] [rbp+20h]

	v3 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputText");
	v4 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputBackspace");
	v5 = *(_QWORD*)v3;
	v24 = v4;
	v6 = (int*)(*(__int64(__fastcall**)(__int64))(v5 + 112))(v3);
	v7 = v6;
	if (v6)
	{
		v8 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v8;
			while (*((_WORD*)v6 + v8));
		}
		v9 = sub_14018B280(2 * v8 + 18, 0);
		if (v9)
		{
			*((_QWORD*)v9 + 1) = v8;
			*(_QWORD*)v9 = off_140B55060;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		v11 = 2 * v8;
		sub_1407DB590(v9 + 4, v7, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
	}
	else
	{
		v10 = 0i64;
	}
	if (v10)
		v12 = *((_QWORD*)v10 - 1);
	else
		v12 = 0i64;
	v13 = 0i64;
	while (*((_WORD*)&unk_1409D0E94 + ++v13) != 0)
		;
	v15 = sub_14018D140(v10, v13 + v12);
	sub_1407DB590((int*)(v15 + 2 * v12), (int*)&unk_1409D0E94, 2 * v13);
	*(_WORD*)(v15 + 2 * (v13 + v12)) = 0;
	if (v10 != (int*)v15 && v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 80i64))(v3, v15);
	v16 = (int**)sub_14018D540(&v23, (__int64)L"%d", *(unsigned int*)(*(_QWORD*)(a1 + 208) + 4i64 * a2));
	if (*v16)
	{
		v17 = *(int**)(a1 + 192);
		v18 = v17 ? *((_QWORD*)v17 - 1) : 0i64;
		v19 = *((_QWORD*)*v16 - 1);
		v20 = sub_14018D140(v17, v19 + v18);
		sub_1407DB590((int*)(v20 + 2 * v18), *v16, 2 * v19);
		*(_WORD*)(v20 + 2 * (v19 + v18)) = 0;
		*(_QWORD*)(a1 + 192) = v20;
		if (v17 != (int*)v20)
		{
			if (v17)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
		}
	}
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	sub_1400D42F0(v24, 1, 0, 4.0);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
}
// 1409D230C: using guessed type wchar_t aD_1[3];
// 1409F5C80: using guessed type wchar_t aAuthoutputback_0[20];
// 1409F5CA8: using guessed type wchar_t aAuthoutputtext_0[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

