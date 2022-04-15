//----- (000000014001C310) ----------------------------------------------------
_QWORD* __fastcall sub_14001C310(_QWORD* a1, int* a2, int* a3)
{
	__int64 v5; // r9
	unsigned __int64 v6; // rbx
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx
	__int64* v9; // rax
	__int64 v10; // r15
	int* v11; // rax
	_WORD* v12; // r8
	_WORD* v13; // rdx
	int* v14; // rbp
	int* i; // rdi
	unsigned __int64 v16; // rbx
	_WORD* v17; // rbx
	__int64 v18; // rcx
	__int64 v20; // rbx
	_WORD* v21; // rcx
	unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
	unsigned __int64 v23; // [rsp+58h] [rbp+10h] BYREF

	if (a2 == a3)
		return a1;
	v5 = a1[2];
	v6 = ((char*)a3 - (char*)a2) >> 1;
	v7 = (v5 - a1[1]) >> 1;
	v8 = (__int64)(a1[3] - a1[1]) >> 1;
	v23 = v7;
	if (v6 + v7 <= v8 - 1)
	{
		sub_1407DB590((int*)(v5 + 2), (int*)((char*)a2 + 2), 2 * (((char*)a3 - ((char*)a2 + 2)) >> 1));
		v20 = 2 * v6;
		v21 = (_WORD*)(v20 + a1[2]);
		if (v21)
			*v21 = 0;
		*(_WORD*)a1[2] = *(_WORD*)a2;
		a1[2] += v20;
		return a1;
	}
	else
	{
		v9 = (__int64*)&v22;
		v22 = v6;
		if (v7 >= v6)
			v9 = (__int64*)&v23;
		v10 = 2 * (*v9 + v7 + 1);
		v11 = sub_14018B280(v10, 0);
		v12 = (_WORD*)a1[2];
		v13 = (_WORD*)a1[1];
		v14 = v11;
		for (i = v11; v13 != v12; i = (int*)((char*)i + 2))
		{
			if (i)
				*(_WORD*)i = *v13;
			++v13;
		}
		v16 = 2 * v6;
		sub_1407DB590(i, a2, v16);
		v17 = (_WORD*)((char*)i + v16);
		if (v17)
			*v17 = 0;
		v18 = a1[1];
		if (v18)
			sub_14018B900(v18, 0);
		a1[1] = v14;
		a1[3] = (char*)v14 + v10;
		a1[2] = v17;
		return a1;
	}
}

