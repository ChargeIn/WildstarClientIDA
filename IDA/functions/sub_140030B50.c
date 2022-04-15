//----- (0000000140030B50) ----------------------------------------------------
unsigned __int64 __fastcall sub_140030B50(_QWORD* a1, unsigned __int64 a2)
{
	char* v2; // rbx
	unsigned __int64 result; // rax
	char* v5; // rsi
	__int64 v6; // r15
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // r14
	signed __int64 v10; // rdx
	__int64 v11; // rcx

	v2 = (char*)a1[1];
	result = (__int64)(a1[3] - (_QWORD)v2) >> 3;
	if (result < a2)
	{
		v5 = (char*)a1[2];
		v6 = 2 * a2;
		v7 = (v5 - v2) >> 3;
		v8 = sub_14018B280(8 * a2, 0);
		v9 = v8;
		if (v2 != v5)
		{
			v10 = (char*)v8 - v2;
			do
			{
				if (&v2[v10])
					*(_QWORD*)&v2[v10] = *(_QWORD*)v2;
				v2 += 8;
			} while (v2 != v5);
		}
		v11 = a1[1];
		if (v11)
			sub_14018B900(v11, 0);
		a1[1] = v9;
		a1[2] = &v9[2 * v7];
		result = (unsigned __int64)&v9[v6];
		a1[3] = &v9[v6];
	}
	return result;
}

