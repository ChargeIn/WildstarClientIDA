//----- (00000001400B9740) ----------------------------------------------------
void __fastcall sub_1400B9740(__int64* a1, __int64 a2)
{
	unsigned __int64 v3; // rbp
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	__int64 v7; // rbx
	_QWORD* v8; // r8
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int* v13; // rax
	int* v14; // r15
	__int64* v15; // rbx
	__int64 v16; // r14
	unsigned __int64 v17; // rsi
	_QWORD* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx

	v3 = a1[1] - 1;
	v5 = *(_QWORD*)(*a1 + 32 * a2 + 8);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a2 + 1;
	if (v6 < a1[1])
	{
		v7 = 32 * v6;
		do
		{
			v8 = (_QWORD*)(v7 + *a1);
			v9 = v8 - 4;
			if (v8 != (_QWORD*)32)
			{
				v9[1] = 0i64;
				v9[2] = 0i64;
				v9[3] = 0i64;
				v9[1] = v8[1];
				v8[1] = 0i64;
				v10 = v9[2];
				v9[2] = v8[2];
				v8[2] = v10;
				v11 = v9[3];
				v9[3] = v8[3];
				v8[3] = v11;
			}
			v12 = *(_QWORD*)(v7 + *a1 + 8);
			if (v12)
				sub_14018B900(v12, 0);
			++v6;
			v7 += 32i64;
		} while (v6 < a1[1]);
	}
	v13 = sub_14018DB00(*a1, v3, 32i64);
	v14 = v13;
	if ((int*)*a1 != v13)
	{
		if (v3)
		{
			v15 = (__int64*)(v13 + 4);
			v16 = -16i64 - (_QWORD)v13;
			v17 = v3;
			do
			{
				if (v15 != (__int64*)16)
				{
					v18 = (__int64*)((char*)v15 + v16 + *a1);
					*(v15 - 1) = 0i64;
					*v15 = 0i64;
					v15[1] = 0i64;
					*(v15 - 1) = v18[1];
					v18[1] = 0i64;
					v19 = *v15;
					*v15 = v18[2];
					v18[2] = v19;
					v20 = v15[1];
					v15[1] = v18[3];
					v18[3] = v20;
				}
				v21 = *(__int64*)((char*)v15 + v16 + *a1 + 8);
				if (v21)
					sub_14018B900(v21, 0);
				v15 += 4;
				--v17;
			} while (v17);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v14;
	}
	a1[1] = v3;
}

