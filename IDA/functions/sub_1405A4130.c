//----- (00000001405A4130) ----------------------------------------------------
void __fastcall sub_1405A4130(__int64* a1, __int64* a2, unsigned __int8(__fastcall* a3)(__int64*, __int64*))
{
	_QWORD* v3; // r13
	__int64* v7; // rsi
	__int64 v8; // rbx
	__int64* v9; // rbp
	_QWORD* v10; // rax
	__int64 i; // rdx
	__int64 v12; // rcx
	__int64* v13; // rdi
	__int64* j; // rbx
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]
	__int64 v17; // [rsp+60h] [rbp+8h]

	if (a1 != a2)
	{
		v3 = a1 + 2;
		v7 = a1 + 2;
		if (a1 + 2 != a2)
		{
			v8 = 16i64 - (_QWORD)a1;
			v9 = a1;
			v17 = 16i64 - (_QWORD)a1;
			do
			{
				v15 = *v7;
				v16 = v7[1];
				if (a3(&v15, a1))
				{
					v10 = (_QWORD*)((char*)v3 + (_QWORD)v9 + v8);
					for (i = ((__int64)v9 + v8) >> 4; i > 0; v10[1] = *(v10 - 1))
					{
						v12 = *(v10 - 4);
						v10 -= 2;
						--i;
						*v10 = v12;
					}
					*a1 = v15;
					a1[1] = v16;
				}
				else
				{
					v13 = v7;
					for (j = v9; a3(&v15, j); j -= 2)
					{
						*v13 = *j;
						v13[1] = j[1];
						v13 = j;
					}
					v8 = v17;
					*v13 = v15;
					v13[1] = v16;
				}
				v7 += 2;
				v9 += 2;
			} while (v7 != a2);
		}
	}
}

