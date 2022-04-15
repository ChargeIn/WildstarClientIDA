//----- (00000001402AFD30) ----------------------------------------------------
int* __fastcall sub_1402AFD30(
	__int64 a1,
	int* a2,
	unsigned int a3,
	int a4,
	int a5,
	unsigned int a6,
	int a7,
	unsigned int a8)
{
	int* v10; // rdi
	void(__fastcall * v13)(int*, int*, _QWORD); // r12
	int* v14; // rbp
	int* v15; // rbx
	int* v16; // rsi
	int* v17; // [rsp+20h] [rbp-38h] BYREF

	v10 = a2;
	if (a5 == a7)
		return a2;
	v13 = (void(__fastcall*)(int*, int*, _QWORD))qword_140C38410[a5];
	if (a6 < a8)
	{
		v17 = sub_14018B280(a8 * a4, 0);
		sub_140033260((__int64*)(a1 + 408), &v17);
		v14 = v17;
	}
	else
	{
		v14 = a2;
	}
	v15 = v14;
	v16 = (int*)((char*)v14 + a8 * a4);
	if (v14 < v16)
	{
		do
		{
			v13(v15, v10, a3);
			v15 = (int*)((char*)v15 + a8);
			v10 = (int*)((char*)v10 + a6);
		} while (v15 < v16);
	}
	return v14;
}
// 140C38410: using guessed type _QWORD qword_140C38410[2];

