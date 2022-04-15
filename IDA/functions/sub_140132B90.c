//----- (0000000140132B90) ----------------------------------------------------
void __fastcall sub_140132B90(__int64 a1, int* a2, unsigned int* a3)
{
	__int64 v4; // rax
	int* v7; // rsi
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	char* v10; // rbx
	int v11; // ebp
	wchar_t** v12; // r11
	__int64 v13; // rbx
	char* v14; // rcx
	unsigned __int64 v15; // rax
	unsigned __int64 v16; // rdx
	signed __int64 v17; // r10
	unsigned __int64 v18; // rdi
	__m128* v19; // rdi
	__int64 v20; // rbx

	if (!a2)
		return;
	v4 = 0i64;
	v7 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v8 = (2 * v4) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v7 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v7, a2, v9);
	v10 = (char*)v7 + v9;
	if (v10)
		*(_WORD*)v10 = 0;
	v11 = 0;
	v12 = off_140A20FB0;
	v13 = (v10 - (char*)v7) >> 1;
	while (1)
	{
		v14 = (char*)*v12;
		v15 = 0i64;
		if (**v12)
		{
			do
				++v15;
			while (*(_WORD*)&v14[2 * v15]);
		}
		if (v13 == v15)
			break;
	LABEL_18:
		++v12;
		++v11;
		if ((__int64)v12 >= (__int64)L"Picture")
		{
			sub_1400D3240(a1, (unsigned __int16*)a2, a3);
			goto LABEL_20;
		}
	}
	v16 = 0i64;
	if (v15)
	{
		v17 = (char*)v7 - v14;
		while (*(_WORD*)&v14[v17] == *(_WORD*)v14)
		{
			++v16;
			v14 += 2;
			if (v16 >= v15)
				goto LABEL_16;
		}
		goto LABEL_18;
	}
LABEL_16:
	v18 = *a3;
	if (v18 >= *(_QWORD*)(qword_140C63678 + 48))
		v19 = *(__m128**)(qword_140C63678 + 40);
	else
		v19 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v18);
	v20 = a1 + 4i64 * v11;
	sub_1401429A0(qword_140C63678, *(_DWORD*)(v20 + 1536));
	*(_DWORD*)(v20 + 1536) = sub_140141F10(qword_140C63678, v19);
LABEL_20:
	if (v7)
		sub_14018B900((__int64)v7, 0);
}
// 140132CB8: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140A20FB0: using guessed type wchar_t *off_140A20FB0[6];
// 140A20FE0: using guessed type wchar_t aPicture_0[8];
// 140C63678: using guessed type __int64 qword_140C63678;

