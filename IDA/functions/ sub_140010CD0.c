//----- (0000000140010CD0) ----------------------------------------------------
__int64 __fastcall sub_140010CD0(__int64 a1, unsigned __int64 a2, int** a3)
{
	int* v3; // rbx
	unsigned __int64 v4; // r15
	__int64 v5; // rdi
	int* v7; // rax
	int* v8; // rax
	unsigned __int64 i; // r13
	__m128i* v10; // r14
	int* v11; // rdi
	__int64 v12; // rsi
	__int64 v13; // rax
	const __m128i* v14; // rax
	int* v15; // rdi
	__int64 v16; // rsi
	__int64 v17; // rax
	int* v18; // r15
	__int64 v19; // rax
	__int64 j; // rbx
	__int64 v21; // rsi
	__int64 v22; // rdi
	int* v23; // rdi
	__int64 v24; // rsi
	__int64 v25; // rax
	BOOL v29; // [rsp+80h] [rbp+18h]
	__int64 v30; // [rsp+88h] [rbp+20h]

	v3 = *a3;
	v4 = a2;
	v5 = a1;
	v7 = sub_14018B280(18i64, 0);
	if (v7)
	{
		*((_QWORD*)v7 + 1) = 0i64;
		*(_QWORD*)v7 = off_140B55060;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = v7 + 4;
	*(_WORD*)v8 = 0;
	*a3 = v8;
	if (v3)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
	for (i = 0i64; i < v4; ++i)
	{
		v10 = *(__m128i**)(v5 + 8 * i);
		if (i)
		{
			v11 = *a3;
			v12 = *a3 ? *((_QWORD*)v11 - 1) : 0i64;
			v13 = sub_14018D140(*a3, v12 + 1);
			*(_DWORD*)(v13 + 2 * v12) = 32;
			*a3 = (int*)v13;
			if (v11 != (int*)v13)
			{
				if (v11)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
			}
		}
		v14 = sub_1407DD988(v10, 0x20u);
		v29 = v14 != 0i64;
		if (v14)
		{
			v15 = *a3;
			v16 = *a3 ? *((_QWORD*)v15 - 1) : 0i64;
			v17 = sub_14018D140(*a3, v16 + 1);
			*(_DWORD*)(v17 + 2 * v16) = 34;
			*a3 = (int*)v17;
			if (v15 != (int*)v17)
			{
				if (v15)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
			}
		}
		if (v10)
		{
			v18 = *a3;
			if (*a3)
				v19 = *((_QWORD*)v18 - 1);
			else
				v19 = 0i64;
			v30 = v19;
			for (j = 0i64; v10->m128i_i16[j]; ++j)
				;
			v21 = j + v19;
			v22 = sub_14018D140(v18, j + v19);
			sub_1407DB590((int*)(v22 + 2 * v30), v10->m128i_i32, 2 * j);
			*(_WORD*)(v22 + 2 * v21) = 0;
			*a3 = (int*)v22;
			if (v18 != (int*)v22 && v18)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
			v4 = a2;
		}
		if (v29)
		{
			v23 = *a3;
			if (*a3)
				v24 = *((_QWORD*)v23 - 1);
			else
				v24 = 0i64;
			v25 = sub_14018D140(*a3, v24 + 1);
			*(_DWORD*)(v25 + 2 * v24) = 34;
			*a3 = (int*)v25;
			if (v23 != (int*)v25 && v23)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
		}
		v5 = a1;
	}
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

