//----- (0000000140014C60) ----------------------------------------------------
void __fastcall sub_140014C60(__int64 a1, __int64 a2, int a3)
{
	__int16* v4; // rax
	__int64 v5; // rdx
	int* v6; // rdi
	int* v7; // rsi
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx

	v4 = sub_14034BDD0(a1, a3);
	v5 = 0i64;
	v6 = (int*)v4;
	v7 = 0i64;
	if (*v4)
	{
		do
			++v5;
		while (v4[v5]);
	}
	v8 = (2 * v5) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v7 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v7, v6, v9);
	if ((int*)((char*)v7 + v9))
		*(_WORD*)((char*)v7 + v9) = 0;
	sub_140015EC0(a1, (__int64)v7, 0i64, 2);
	if (v7)
		sub_14018B900((__int64)v7, 0);
}

