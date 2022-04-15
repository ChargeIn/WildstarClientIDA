//----- (00000001400F0C90) ----------------------------------------------------
_QWORD* __fastcall sub_1400F0C90(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rax
	int* v6; // rdi
	int* v7; // rdx
	__int64 v8; // rax

	v2 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v5 = sub_14018B280(16i64, 0);
	a1[1] = v5;
	a1[2] = v5;
	a1[3] = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v6 = (int*)&word_140B7B704;
	v7 = (int*)&word_140B7B704;
	v8 = 0i64;
	if (*(_QWORD*)(qword_140C63650 + 784))
		v7 = *(int**)(qword_140C63650 + 784);
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	sub_14001C480((__int64)a1, v7, (int*)((char*)v7 + 2 * v8));
	if (a2)
	{
		if (*(_QWORD*)(a2 + 160))
			v6 = *(int**)(a2 + 160);
		if (*(_WORD*)v6)
		{
			do
				++v2;
			while (*((_WORD*)v6 + v2));
		}
		sub_14001C480(qword_140C63650 + 776, v6, (int*)((char*)v6 + 2 * v2));
	}
	return a1;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;

