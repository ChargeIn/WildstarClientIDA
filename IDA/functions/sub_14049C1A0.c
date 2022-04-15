//----- (000000014049C1A0) ----------------------------------------------------
__int64 __fastcall sub_14049C1A0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v7; // rbx
	int* v8; // rdi
	__int64 v9; // rcx
	int* v10; // rsi
	int v11; // edx
	__int16* v12; // rax
	int* v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	int v16; // edx
	__int16* v17; // rax
	int* v18; // rdx
	__int64 v19; // rax
	__int16* v20; // rax
	int* v21; // r14
	__int64 v22; // rax
	int* v23; // rsi
	__int64 v24; // r15
	int* v25; // r9
	__int64* v26; // rax
	__int64 v27; // [rsp+20h] [rbp-58h] BYREF
	int* v28; // [rsp+28h] [rbp-50h]
	int* v29; // [rsp+30h] [rbp-48h]
	__int64 v30; // [rsp+38h] [rbp-40h]
	__int64 v31; // [rsp+40h] [rbp-38h] BYREF
	__int64 v32; // [rsp+48h] [rbp-30h]

	if (!a2)
		return 2147500037i64;
	v7 = sub_1402259C0(a2);
	if (!v7)
		return 2147500037i64;
	v8 = sub_14018B280(2i64, 0);
	v28 = v8;
	v30 = (__int64)v8 + 2;
	sub_1407DB590(v8, dword_1409F0724, 0i64);
	v10 = v8;
	v29 = v8;
	if (v8)
		*(_WORD*)v8 = 0;
	v11 = *(_DWORD*)(v7 + 56);
	if (v11)
	{
		v12 = sub_14034BDD0(v9, v11);
		v13 = (int*)&unk_1409F073C;
		if (v12)
			v13 = (int*)v12;
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
		if ((2 * v14) >> 1)
		{
			sub_14001C310(&v27, v13, (int*)((char*)v13 + 2 * v14));
			v10 = v29;
			v8 = v28;
		}
		else
		{
			sub_1407DB590(v8, v13, 0i64);
		}
	}
	if ((((char*)v10 - (char*)v8) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v15 = sub_140225E00(a3);
		if (v15)
		{
			v16 = *(_DWORD*)(v15 + 4);
			if (v16)
			{
				v17 = sub_14034BDD0(v9, v16);
				v18 = (int*)&unk_1409F0684;
				if (v17)
					v18 = (int*)v17;
				v19 = 0i64;
				if (*(_WORD*)v18)
				{
					do
						++v19;
					while (*((_WORD*)v18 + v19));
				}
				if ((2 * v19) >> 1)
				{
					sub_14001C310(&v27, v18, (int*)((char*)v18 + 2 * v19));
					v8 = v28;
				}
				else
				{
					sub_1407DB590(v8, v18, 0i64);
					v9 = (__int64)v8;
					if (v8 != v10)
						sub_1407DB590(v8, v10, 2ui64);
				}
			}
		}
	}
	if (a4)
	{
		v20 = sub_14034BDD0(v9, a4);
		v21 = (int*)&unk_1409F069C;
		if (v20)
			v21 = (int*)v20;
	}
	else
	{
		v21 = (int*)&unk_1409F06E4;
	}
	v22 = 0i64;
	v23 = 0i64;
	v28 = 0i64;
	v30 = 0i64;
	if (*(_WORD*)v21)
	{
		do
			++v22;
		while (*((_WORD*)v21 + v22));
	}
	v24 = (2 * v22) >> 1;
	if ((unsigned __int64)(v24 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v23 = sub_14018B280(2 * (v24 + 1), 0);
		v28 = v23;
		v30 = (__int64)v23 + 2 * v24 + 2;
	}
	sub_1407DB590(v23, v21, 2 * v24);
	v29 = (int*)((char*)v23 + 2 * v24);
	if (v29)
		*((_WORD*)v23 + v24) = 0;
	if (2 * v24)
	{
		v26 = sub_14018EFA0(&v31, (__int64)v23, v8);
		if (v26 != &v27)
		{
			sub_14001C480((__int64)&v27, (int*)v26[1], (int*)v26[2]);
			v23 = v28;
		}
		if (v32)
			sub_14018B900(v32, 0);
		v25 = v23;
	}
	else
	{
		v25 = v8;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PrereqFailureMessage", byte_1409E958C, v25);
	if (v23)
		sub_14018B900((__int64)v23, 0);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 0i64;
}
// 14049C254: variable 'v9' is possibly undefined
// 1409E958C: using guessed type _BYTE byte_1409E958C[104];
// 1409F0724: using guessed type int dword_1409F0724[6];
// 140C65898: using guessed type __int64 qword_140C65898;

