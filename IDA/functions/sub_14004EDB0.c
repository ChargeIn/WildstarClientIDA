//----- (000000014004EDB0) ----------------------------------------------------
_QWORD* __fastcall sub_14004EDB0(_QWORD* a1, __int64 a2)
{
	int* v4; // rcx
	int* v5; // rbp
	__int64 v6; // rdi
	unsigned __int64 v7; // rsi
	int* v8; // r14
	__int64 v9; // rcx
	int* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // r8

	if ((_QWORD*)a2 != a1)
	{
		v4 = (int*)a1[1];
		v5 = *(int**)(a2 + 8);
		v6 = *(_QWORD*)(a2 + 16);
		v7 = (v6 - (__int64)v5) >> 2;
		if (v7 <= (__int64)(a1[3] - (_QWORD)v4) >> 2)
		{
			v10 = *(int**)(a2 + 8);
			v11 = (__int64)(a1[2] - (_QWORD)v4) >> 2;
			if (v11 < v7)
			{
				sub_1407DB590(v4, v5, 4 * v11);
				v4 = (int*)a1[2];
				v10 = (int*)(*(_QWORD*)(a2 + 8) + 4 * (((__int64)v4 - a1[1]) >> 2));
				v12 = (*(_QWORD*)(a2 + 16) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFFCui64;
			}
			else
			{
				v12 = (v6 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCui64;
			}
			sub_1407DB590(v4, v10, v12);
		}
		else
		{
			v8 = sub_14018B280(4 * v7, 0);
			sub_1407DB590(v8, v5, (v6 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCui64);
			v9 = a1[1];
			if (v9)
				sub_14018B900(v9, 0);
			a1[1] = v8;
			a1[3] = &v8[v7];
		}
		a1[2] = a1[1] + 4 * v7;
	}
	return a1;
}

