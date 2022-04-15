//----- (0000000140450ED0) ----------------------------------------------------
_QWORD* __fastcall sub_140450ED0(_QWORD* a1, int* a2)
{
	__int64 v3; // rax
	int* v5; // r13
	__int64 v6; // rbx
	signed __int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rsi
	int v11; // r12d
	__int16 v12; // bx
	__int64* v13; // rax
	__int64 v14; // r14
	int* v15; // rsi
	char* v16; // rbx
	unsigned __int64 v17; // rcx
	int* v18; // rcx
	char* v19; // rdx
	__int64 v20; // rcx
	__int16 v21; // bx
	__int64* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64* v25; // rax
	__int64 v26; // rcx
	__int64 v28; // [rsp+20h] [rbp-58h]
	char v29; // [rsp+80h] [rbp+8h] BYREF
	unsigned __int64 v30; // [rsp+88h] [rbp+10h] BYREF
	__int64 v31; // [rsp+90h] [rbp+18h] BYREF
	__int64 v32; // [rsp+98h] [rbp+20h]

	v3 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v3;
		while (*((_WORD*)a2 + v3));
	}
	v6 = (2 * v3) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, a2, v7);
	if ((int*)((char*)v5 + v7))
		*(_WORD*)((char*)v5 + v7) = 0;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v8 = sub_14018B280(16i64, 0);
	a1[1] = v8;
	a1[2] = v8;
	a1[3] = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v9 = 0i64;
	v10 = v7 >> 1;
	v32 = v7 >> 1;
	v28 = (int)(v7 >> 1);
	if ((int)(v7 >> 1) > 0)
	{
		v11 = 1;
		do
		{
			v12 = *((_WORD*)v5 + v9);
			if (v12 == 37)
			{
				v13 = (__int64*)&v30;
				v31 = 2i64;
				v30 = v10 - v11;
				v14 = 2i64 * v11;
				if (v30 >= 2)
					v13 = &v31;
				v15 = 0i64;
				v16 = (char*)v5 + 2 * v11 + 2 * *v13;
				v17 = ((2 * (v11 + *v13) - v14) >> 1) + 1;
				if (v17 <= 0x7FFFFFFFFFFFFFFEi64)
					v15 = sub_14018B280(2 * v17, 0);
				v18 = v15;
				if ((char*)v5 + v14 != v16)
				{
					v19 = (char*)v5 + v14 - (_QWORD)v15;
					do
					{
						if (v18)
							*(_WORD*)v18 = *(_WORD*)&v19[(_QWORD)v18];
						v18 = (int*)((char*)v18 + 2);
					} while (&v19[(_QWORD)v18] != v16);
				}
				if (v18)
					*(_WORD*)v18 = 0;
				sub_1407DF3F0(v15, (__int64)L"%x", &v29);
				if (v15)
					sub_14018B900((__int64)v15, 0);
				v20 = a1[2];
				v21 = v29;
				if (v20 + 2 == a1[3])
				{
					v22 = (__int64*)&v30;
					v23 = (v20 - a1[1]) >> 1;
					v30 = 1i64;
					v31 = v23;
					if (v23)
						v22 = &v31;
					sub_1400A7F20(a1, v23 + *v22);
				}
				if (a1[2] != -2i64)
					*(_WORD*)(a1[2] + 2i64) = 0;
				v10 = v32;
				v11 += 2;
				*(_WORD*)a1[2] = v21;
				a1[2] += 2i64;
				v9 += 2i64;
			}
			else
			{
				v24 = a1[2];
				if (v24 + 2 == a1[3])
				{
					v25 = (__int64*)&v30;
					v26 = (v24 - a1[1]) >> 1;
					v30 = 1i64;
					v31 = v26;
					if (v26)
						v25 = &v31;
					sub_1400A7F20(a1, v26 + *v25);
				}
				if (a1[2] != -2i64)
					*(_WORD*)(a1[2] + 2i64) = 0;
				*(_WORD*)a1[2] = v12;
				a1[2] += 2i64;
			}
			++v9;
			++v11;
		} while (v9 < v28);
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return a1;
}
// 140B03244: using guessed type wchar_t asc_140B03244[3];

