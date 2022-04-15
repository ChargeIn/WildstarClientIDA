//----- (000000014018FFE0) ----------------------------------------------------
__int64 __fastcall sub_14018FFE0(_QWORD* a1, __int64 a2, __int64 a3, char a4)
{
	__int16* v4; // rdi
	__int16* v5; // r15
	_WORD* v6; // rbx
	_WORD* v7; // r14
	__int64 v10; // r12
	_WORD* i; // rbp
	int* v12; // rdx
	__int64 v13; // rdi
	int* v14; // r15
	__int64 v15; // rbp
	unsigned __int64* v16; // rax
	__int64 v17; // rdi
	int* v18; // rbx
	int* v19; // r14
	__int64 v20; // rax
	unsigned __int64 v21; // rdi
	int* v22; // rdi
	int* v23; // rdi
	__int64 v25; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int64 v26; // [rsp+80h] [rbp+8h] BYREF
	__int64 v27; // [rsp+88h] [rbp+10h]
	char v28; // [rsp+98h] [rbp+20h]

	v28 = a4;
	v27 = a2;
	v4 = *(__int16**)(a2 + 16);
	v5 = *(__int16**)(a2 + 8);
	v6 = (_WORD*)a1[2];
	v7 = (_WORD*)a1[1];
	v10 = 0i64;
	for (i = sub_14010A450(v7, v6, v5, v4);
		i != v6;
		i = sub_14010A450(&v7[v15 + ((__int64)(*(_QWORD*)(a3 + 16) - *(_QWORD*)(a3 + 8)) >> 1)], v6, v5, v4))
	{
		v12 = *(int**)(a3 + 8);
		v13 = (char*)v4 - (char*)v5;
		v14 = *(int**)(a3 + 16);
		v15 = i - v7;
		v25 = v13 >> 1;
		v16 = &v26;
		v26 = v6 - v7 - v15;
		if (v26 >= v13 >> 1)
			v16 = (unsigned __int64*)&v25;
		v17 = ((char*)v14 - (char*)v12) >> 1;
		v18 = (int*)&v7[v15 + *v16];
		v19 = (int*)&v7[v15];
		v20 = ((char*)v18 - (char*)v19) >> 1;
		if (v20 < v17)
		{
			v23 = (int*)((char*)v12 + 2 * v20);
			sub_1407DB590(v19, v12, 2 * ((2 * v20) >> 1));
			sub_1401905C0(a1, v18, v23, v14);
		}
		else
		{
			v21 = 2 * v17;
			sub_1407DB590(v19, v12, v21);
			v22 = (int*)((char*)v19 + v21);
			if (v22 != v18)
			{
				sub_1407DB590(v22, v18, 2 * ((__int64)(a1[2] - (_QWORD)v18) >> 1) + 2);
				a1[2] += -2 * (((char*)v18 - (char*)v22) >> 1);
			}
		}
		v4 = *(__int16**)(v27 + 16);
		v5 = *(__int16**)(v27 + 8);
		v7 = (_WORD*)a1[1];
		v6 = (_WORD*)a1[2];
		++v10;
	}
	return v10;
}

