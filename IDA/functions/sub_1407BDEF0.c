//----- (00000001407BDEF0) ----------------------------------------------------
void __fastcall sub_1407BDEF0(unsigned int* a1)
{
	__int64 v1; // r9
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // rdi
	__int64 v5; // rax
	int* v6; // rbp
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // r14
	int* v10; // r15
	int* v11; // rcx
	_QWORD* v12; // r9
	int* v13; // r10
	int v14; // edx
	int* v15; // r8
	unsigned __int64 v16; // rax
	unsigned __int64 v17[2]; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int64 v18; // [rsp+40h] [rbp-38h] BYREF
	unsigned __int64 v19; // [rsp+48h] [rbp-30h]
	_QWORD* v20; // [rsp+50h] [rbp-28h]

	v1 = *((_QWORD*)a1 + 1);
	v17[1] = *a1;
	v17[0] = 0i64;
	sub_1401D3110(&v18, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1407BE6B0, v17, v1, 26);
	v3 = v19;
	v4 = (unsigned int)v19;
	v5 = 4i64 * (unsigned int)v19;
	if (!is_mul_ok((unsigned int)v19, 4ui64))
		v5 = -1i64;
	v6 = sub_14018B280(v5, 0);
	v7 = 12 * v4;
	if (!is_mul_ok(v4, 0xCui64))
		v7 = -1i64;
	v8 = sub_14018B280(v7, 0);
	v9 = (__int64)v20;
	v10 = v8;
	if ((_DWORD)v3)
	{
		v11 = v8;
		v12 = v20;
		v13 = v6;
		do
		{
			v11 += 3;
			v14 = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * *v12);
			++v13;
			++v12;
			*(v13 - 1) = v14;
			v15 = (int*)(*((_QWORD*)a1 + 2) + 12i64 * *(v12 - 1));
			*(v11 - 3) = *v15;
			*(v11 - 2) = v15[1];
			*(v11 - 1) = v15[2];
			--v4;
		} while (v4);
	}
	sub_14018B900(*((_QWORD*)a1 + 1), 0);
	sub_14018B900(*((_QWORD*)a1 + 2), 0);
	v16 = v18;
	*a1 = v3;
	*((_QWORD*)a1 + 1) = v6;
	*((_QWORD*)a1 + 2) = v10;
	if (v16 < v3)
		sub_14018B900(v9 + 8 * v16, 0);
}

