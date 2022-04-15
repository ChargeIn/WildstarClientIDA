//----- (000000014017A290) ----------------------------------------------------
void __fastcall sub_14017A290(_QWORD* a1, __int64 a2, char a3)
{
	_QWORD* v3; // rdi
	int v7; // ebp
	__int64 v8; // rsi
	__int64 v9; // rax
	_QWORD* v10; // rcx
	int* v11; // rdx
	int* v12; // rdx
	__int64 v13; // rcx
	_QWORD* v14; // [rsp+40h] [rbp+8h] BYREF

	v3 = a1 + 150;
	if ((unsigned __int64)((__int64)(a1[152] - a1[151]) >> 3) <= 1)
	{
		sub_14017B020(a1 + 150, a2 + 1200);
		v7 = 0;
		if ((int)((__int64)(v3[2] - v3[1]) >> 3) > 0)
		{
			v14 = a1;
			v8 = 0i64;
			do
			{
				v9 = a1[151];
				v10 = (_QWORD*)(*(_QWORD*)(v9 + v8) + 1200i64);
				v11 = *(int**)(*(_QWORD*)(v9 + v8) + 1216i64);
				if (v11 == *(int**)(*(_QWORD*)(v9 + v8) + 1224i64))
				{
					sub_1400B9430(v10, v11, &v14);
				}
				else
				{
					if (v11)
						*(_QWORD*)v11 = a1;
					v10[2] += 8i64;
				}
				sub_1401795D0(*(_QWORD*)(a1[151] + v8));
				++v7;
				v8 += 8i64;
			} while (v7 < (int)((__int64)(v3[2] - v3[1]) >> 3));
		}
		v12 = (int*)v3[2];
		v14 = a1;
		if (v12 == (int*)v3[3])
		{
			sub_1400B9430(v3, v12, &v14);
		}
		else
		{
			if (v12)
				*(_QWORD*)v12 = a1;
			v3[2] += 8i64;
		}
		sub_1400CC680((__int64)a1, a2 + 64);
		v13 = a2;
		if (!a3)
			v13 = (__int64)a1;
		sub_1400D42F0(v13, 0, 1, 4.0);
		sub_1401795D0((__int64)a1);
	}
}

