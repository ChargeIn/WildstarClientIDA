//----- (000000014013A630) ----------------------------------------------------
__int64 __fastcall sub_14013A630(__int64 a1, int* a2)
{
	__int64 v5; // rbp
	__int64 v6; // rax
	int* v7; // r14
	__int64 v8; // rbx
	signed __int64 v9; // rbx
	unsigned int v10; // r15d
	unsigned int v11; // r11d
	__int64 v12; // rsi
	__int64 v13; // rdi
	__int64 v14; // rbx
	char* v15; // rcx
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // rdx
	signed __int64 v18; // r10

	if (!a2)
		return 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v6;
		while (*((_WORD*)a2 + v6));
	}
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v7 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v7, a2, v9);
	if ((int*)((char*)v7 + v9))
		*(_WORD*)((char*)v7 + v9) = 0;
	v10 = *(_DWORD*)(a1 + 24);
	v11 = 0;
	if (v10)
	{
		v12 = *(_QWORD*)(a1 + 16);
		v13 = v9 >> 1;
		v14 = v12;
		do
		{
			v15 = *(char**)(*(_QWORD*)v14 + 24i64);
			v16 = 0i64;
			if (*(_WORD*)v15)
			{
				do
					++v16;
				while (*(_WORD*)&v15[2 * v16]);
			}
			if (v13 == v16)
			{
				v17 = 0i64;
				if (!v16)
				{
				LABEL_18:
					v5 = *(_QWORD*)(v12 + 8i64 * (int)v11);
					break;
				}
				v18 = (char*)v7 - v15;
				while (*(_WORD*)&v15[v18] == *(_WORD*)v15)
				{
					++v17;
					v15 += 2;
					if (v17 >= v16)
						goto LABEL_18;
				}
			}
			++v11;
			v14 += 8i64;
		} while (v11 < v10);
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return v5;
}
// 14013A783: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

