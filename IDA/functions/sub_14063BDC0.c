//----- (000000014063BDC0) ----------------------------------------------------
void __fastcall sub_14063BDC0(__int64 a1)
{
	int* v1; // rsi
	int* v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // rax
	int* v7; // rax
	int* v8; // rdi
	int* v9; // r14
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rbx
	unsigned __int64 v12; // rbx
	__int64 v13; // rbx
	__int64 v14; // rbx
	void* v15; // rax
	int* v16; // [rsp+20h] [rbp-98h] BYREF
	void* v17; // [rsp+28h] [rbp-90h]
	__int64 v18; // [rsp+30h] [rbp-88h] BYREF
	__int64 v19; // [rsp+38h] [rbp-80h]
	__int64 v20; // [rsp+50h] [rbp-68h] BYREF
	int* v21; // [rsp+58h] [rbp-60h]
	int* v22; // [rsp+60h] [rbp-58h]
	void* v23; // [rsp+78h] [rbp-40h]
	__int64 v24; // [rsp+98h] [rbp-20h]

	sub_14040B680(&v18, a1, 0);
	v1 = v21;
	v2 = v22;
	if (v21 == v22)
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C65898 + 25744);
		v5 = 0;
		if (v4)
			v5 = *(_DWORD*)(v4 + 264);
		v6 = sub_1403D90D0(qword_140C65898, v5);
		if (!v6 || *(_DWORD*)(v6 + 128) != 20)
			goto LABEL_19;
		v7 = *(int**)(v6 + 16);
		v8 = (int*)&word_140B7B704;
		if (v7)
			v8 = v7;
		if (*(_WORD*)v8)
		{
			do
				++v3;
			while (*((_WORD*)v8 + v3));
		}
		v9 = (int*)((char*)v8 + 2 * v3);
		v10 = ((char*)v2 - (char*)v1) >> 1;
		v11 = (2 * v3) >> 1;
		if (v11 > v10)
		{
			v13 = 2 * v10;
			sub_1407DB590(v1, v8, 2 * v10);
			sub_14001C310(&v20, (int*)((char*)v8 + v13), v9);
			v1 = v21;
		}
		else
		{
			v12 = 2 * v11;
			sub_1407DB590(v1, v8, v12);
			if ((int*)((char*)v1 + v12) != v2)
				sub_1407DB590((int*)((char*)v1 + v12), v2, 2ui64);
		}
	}
	if (!v1 || !*(_WORD*)v1)
	{
	LABEL_19:
		v14 = (__int64)v23;
		goto LABEL_20;
	}
	v14 = (__int64)v23;
	v16 = 0i64;
	v17 = 0i64;
	v15 = &unk_1409F3C7C;
	if (v23)
		v15 = v23;
	v16 = v1;
	v17 = v15;
	sub_1403F4900(qword_140C65898, 0x422u, (__int64)&v16);
LABEL_20:
	if (v24)
		sub_14018B900(v24, 0);
	if (v14)
		sub_14018B900(v14, 0);
	if (v1)
		sub_14018B900((__int64)v1, 0);
	if (v19)
		sub_14018B900(v19, 0);
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

