//----- (0000000140038E90) ----------------------------------------------------
void __fastcall sub_140038E90(__int64 a1)
{
	__int64 v2; // r14
	__int64 v3; // rax
	int* v4; // rsi
	unsigned __int64 v5; // r15
	__int64 v6; // r12
	unsigned __int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	int* v11; // rax
	int* v12; // rbx
	int* v13; // rdi
	int* v14; // rax
	int* v15; // rsi
	unsigned __int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rdi
	int* v19; // rax
	unsigned __int64 v20; // rdi

	v2 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputText");
	v3 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputBackspace");
	v4 = *(int**)(a1 + 192);
	v5 = *((_QWORD*)v4 - 1);
	v6 = v3;
	if (v4 && v5)
	{
		v7 = v5 - 1;
		v8 = sub_14018B280(2 * (v5 - 1) + 18, 0);
		if (v8)
		{
			*(_QWORD*)v8 = off_140B55060;
			*((_QWORD*)v8 + 1) = v7;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, v4, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		*(_QWORD*)(a1 + 192) = v9;
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	}
	v11 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 112i64))(v2);
	v12 = 0i64;
	v13 = v11;
	if (v11)
	{
		if (*(_WORD*)v11)
		{
			do
				v12 = (int*)((char*)v12 + 1);
			while (*((_WORD*)v11 + (_QWORD)v12));
		}
		v14 = sub_14018B280(2i64 * (_QWORD)v12 + 18, 0);
		if (v14)
		{
			*(_QWORD*)v14 = off_140B55060;
			*((_QWORD*)v14 + 1) = v12;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = v14 + 4;
		v16 = 2i64 * (_QWORD)v12;
		sub_1407DB590(v14 + 4, v13, v16);
		*(_WORD*)((char*)v15 + v16) = 0;
		v12 = v15;
		if (v15)
		{
			v17 = *((_QWORD*)v15 - 1);
			if (v17)
			{
				v18 = v17 - 1;
				v19 = sub_14018B280(2 * (v17 - 1) + 18, 0);
				if (v19)
				{
					*(_QWORD*)v19 = off_140B55060;
					*((_QWORD*)v19 + 1) = v18;
				}
				else
				{
					v19 = 0i64;
				}
				v12 = v19 + 4;
				v20 = 2 * v18;
				sub_1407DB590(v19 + 4, v15, v20);
				*(_WORD*)((char*)v12 + v20) = 0;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
			}
		}
	}
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 80i64))(v2, v12);
	sub_1400D42F0(v6, v5 > 1, 0, 4.0);
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
}
// 140038F3C: conditional instruction was optimized away because rsi.8!=0
// 1409F5CC8: using guessed type wchar_t aAuthoutputback_1[20];
// 1409F5CF0: using guessed type wchar_t aAuthoutputtext_1[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

