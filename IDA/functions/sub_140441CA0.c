//----- (0000000140441CA0) ----------------------------------------------------
__int64* __fastcall sub_140441CA0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v4; // rbp
	__int64* v5; // r15
	_QWORD*** v6; // rsi
	_QWORD*** v7; // rbx
	__int64 v8; // r8
	unsigned __int64 v9; // r14
	int* v10; // r12
	__int64* v11; // rsi
	__int64* j; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	unsigned __int64 v15; // rdx
	__int64 v16; // rax
	__int64* v17; // rsi
	__int64* i; // rbx

	v4 = (a2 - a1) >> 5;
	if (v4 > 0)
	{
		v5 = (__int64*)(a1 + 8);
		do
		{
			if (v5 - 1 != a3)
			{
				v6 = (_QWORD***)v5[1];
				v7 = (_QWORD***)*v5;
				v8 = a3[1];
				v9 = ((__int64)v6 - *v5) / 80;
				if (v9 <= (a3[3] - v8) / 80)
				{
					v14 = *v5;
					v15 = (a3[2] - v8) / 80;
					if (v15 < v9)
					{
						sub_140441E90(v14, (__int64)&v7[10 * v15], v8);
						sub_140441B60((_QWORD***)(*v5 + 80 * ((a3[2] - a3[1]) / 80)), (_QWORD***)v5[1], a3[2]);
					}
					else
					{
						v16 = sub_140441E90(v14, v5[1], v8);
						v17 = (__int64*)a3[2];
						for (i = (__int64*)v16; i != v17; i += 10)
							sub_1404400D0(i);
					}
				}
				else
				{
					v10 = sub_14018B280(80 * v9, 0);
					sub_140441B60(v7, v6, (__int64)v10);
					v11 = (__int64*)a3[2];
					for (j = (__int64*)a3[1]; j != v11; j += 10)
						sub_1404400D0(j);
					v13 = a3[1];
					if (v13)
						sub_14018B900(v13, 0);
					a3[1] = (__int64)v10;
					a3[3] = (__int64)&v10[20 * v9];
				}
				a3[2] = a3[1] + 80 * v9;
			}
			--v4;
			a3 += 4;
			v5 += 4;
		} while (v4 > 0);
	}
	return a3;
}

