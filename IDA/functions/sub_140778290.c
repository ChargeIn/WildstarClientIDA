//----- (0000000140778290) ----------------------------------------------------
void __fastcall sub_140778290(__int64 a1, __int64* a2)
{
	int* v4; // rax
	int* v5; // rdi
	__int64 v6; // rsi
	int* v7; // rdx
	__int64 v8; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // r8
	char* v12; // r8
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rdx
	int* v15; // rax
	signed __int64 v16; // r8
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v20; // [rsp+20h] [rbp-38h] BYREF
	int* v21; // [rsp+28h] [rbp-30h]
	int* v22; // [rsp+30h] [rbp-28h]
	int* v23; // [rsp+38h] [rbp-20h]

	v4 = sub_14018B280(16i64, 0);
	v5 = v4;
	v21 = v4;
	v6 = (__int64)v4;
	v22 = v4;
	v23 = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v7 = (int*)&unk_1409F9C94;
	if (*(_QWORD*)(qword_140C65898 + 136))
		v7 = *(int**)(qword_140C65898 + 136);
	v8 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	if ((2 * v8) >> 1)
	{
		sub_14001C310(&v20, v7, (int*)((char*)v7 + 2 * v8));
		v6 = (__int64)v22;
		v5 = v21;
	}
	else
	{
		sub_1407DB590(v5, v7, 0i64);
	}
	sub_1400523E0(a2);
	v9 = *(_QWORD**)(a1 + 32);
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = v10[5];
			if (!*(_BYTE*)(v11 + 4))
			{
				v12 = *(char**)(v11 + 80);
				v13 = 0i64;
				if (*(_WORD*)v12)
				{
					do
						++v13;
					while (*(_WORD*)&v12[2 * v13]);
				}
				if (v13 != (v6 - (__int64)v5) >> 1)
					goto LABEL_22;
				v14 = 0i64;
				if (v13)
				{
					v15 = v5;
					v16 = v12 - (char*)v5;
					while (*(_WORD*)((char*)v15 + v16) == *(_WORD*)v15)
					{
						++v14;
						v15 = (int*)((char*)v15 + 2);
						if (v14 >= v13)
							goto LABEL_21;
					}
					goto LABEL_22;
				}
			}
		LABEL_21:
			sub_140033260(a2, v10 + 5);
		LABEL_22:
			v17 = v10[3];
			if (v17)
			{
				v10 = (_QWORD*)v10[3];
				for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
					v10 = i;
			}
			else
			{
				for (j = v10[1]; v10 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = (_QWORD*)j;
				if (v10[3] != j)
					v10 = (_QWORD*)j;
			}
		} while (v10 != *(_QWORD**)(a1 + 32));
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
}
// 14077841C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140C65898: using guessed type __int64 qword_140C65898;

