//----- (0000000140538AB0) ----------------------------------------------------
void __fastcall sub_140538AB0(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // rcx
	int* v10; // rax
	unsigned __int64 v11; // rdx
	int* v12; // r13
	int* v13; // rdi
	unsigned __int64 v14; // rsi
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rsi
	__int64 v17; // r15
	char* v18; // rdi
	char* v19; // rdi
	__int64 v20; // rcx
	__int64 v21; // rcx

	v2 = a1[1];
	if (v2 <= a2)
	{
		v10 = sub_14018DB00(*a1, a2, 96i64);
		v11 = a1[1];
		v12 = v10;
		if (v11 < a2)
		{
			v13 = &v10[24 * v11];
			v14 = a2 - v11;
			do
			{
				if (v13)
					sub_140538C70(v13);
				v13 += 24;
				--v14;
			} while (v14);
		}
		if ((int*)*a1 != v12)
		{
			v15 = 0i64;
			if (a1[1])
			{
				v16 = v12 + 12;
				v17 = -48i64 - (_QWORD)v12;
				do
				{
					if (v16 != (_QWORD*)48)
					{
						v18 = (char*)v16 + v17 + *a1;
						*((_OWORD*)v16 - 3) = *(_OWORD*)v18;
						*((_OWORD*)v16 - 2) = *((_OWORD*)v18 + 1);
						*(v16 - 1) = 0i64;
						*v16 = 0i64;
						v16[1] = 0i64;
						sub_14001C1B0(v16 - 2, *((int**)v18 + 5), *((_QWORD*)v18 + 6));
						v16[3] = 0i64;
						v16[4] = 0i64;
						v16[5] = 0i64;
						sub_14001C1B0(v16 + 2, *((int**)v18 + 9), *((_QWORD*)v18 + 10));
					}
					v19 = (char*)v16 + v17 + *a1;
					v20 = *((_QWORD*)v19 + 9);
					if (v20)
						sub_14018B900(v20, 0);
					v21 = *((_QWORD*)v19 + 5);
					if (v21)
						sub_14018B900(v21, 0);
					++v15;
					v16 += 12;
				} while (v15 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v12;
		}
		a1[1] = a2;
	}
	else
	{
		v5 = a2;
		if (a2 >= v2)
		{
			a1[1] = a2;
		}
		else
		{
			v6 = 96 * a2;
			do
			{
				v7 = *a1;
				v8 = *(_QWORD*)(*a1 + v6 + 72);
				if (v8)
					sub_14018B900(v8, 0);
				v9 = *(_QWORD*)(v7 + v6 + 40);
				if (v9)
					sub_14018B900(v9, 0);
				++v5;
				v6 += 96i64;
			} while (v5 < a1[1]);
			a1[1] = a2;
		}
	}
}

