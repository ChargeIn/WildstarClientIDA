//----- (0000000140334160) ----------------------------------------------------
unsigned __int64 __fastcall sub_140334160(_QWORD* a1, unsigned __int64 a2)
{
	int* v2; // rbp
	unsigned __int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // r15
	int* v7; // rsi
	__int64 v8; // rcx

	v2 = (int*)a1[1];
	result = (__int64)(a1[3] - (_QWORD)v2) >> 3;
	if (result < a2)
	{
		v5 = a1[2];
		v6 = 2 * a2;
		v7 = sub_14018B280(8 * a2, 0);
		sub_1407DB590(v7, v2, (v5 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8ui64);
		v8 = a1[1];
		if (v8)
			sub_14018B900(v8, 0);
		a1[1] = v7;
		a1[2] = &v7[2 * ((v5 - (__int64)v2) >> 3)];
		result = (unsigned __int64)&v7[v6];
		a1[3] = &v7[v6];
	}
	return result;
}

