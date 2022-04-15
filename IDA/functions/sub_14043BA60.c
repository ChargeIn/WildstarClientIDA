//----- (000000014043BA60) ----------------------------------------------------
void __fastcall sub_14043BA60(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
{
	int* v7; // rax
	int* v8; // rbp
	int* v9; // rbx
	int* v10; // rax
	__int64 v11; // r8
	int* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16; // eax
	__int64 v17; // rax
	__int64 v18; // rdx
	int v19; // [rsp+30h] [rbp-88h] BYREF
	__int64 v20; // [rsp+38h] [rbp-80h]
	__int64 v21; // [rsp+50h] [rbp-68h] BYREF
	int v22; // [rsp+58h] [rbp-60h]
	__int64 v23; // [rsp+68h] [rbp-50h]
	__int64 v24; // [rsp+70h] [rbp-48h]
	__int64 v25; // [rsp+78h] [rbp-40h]
	__int64 v26; // [rsp+80h] [rbp-38h]
	int v27; // [rsp+88h] [rbp-30h]
	__int64 v28; // [rsp+8Ch] [rbp-2Ch]
	__int64 v29; // [rsp+94h] [rbp-24h]
	__int64 v30; // [rsp+9Ch] [rbp-1Ch]

	v7 = sub_14018B280(16i64, 0);
	v8 = v7 + 4;
	v9 = v7;
	if (v7)
		*(_WORD*)v7 = 0;
	v21 = 0i64;
	v22 = a2;
	v26 = 0i64;
	v10 = (int*)sub_1404835C0(qword_140C65918, a2);
	v12 = sub_14054F9E0(&v19, a3, v11, 0i64, v10, 0i64);
	v13 = *((_QWORD*)v12 + 1);
	*((_QWORD*)v12 + 1) = v9;
	v23 = v13;
	v14 = *((_QWORD*)v12 + 2);
	*((_QWORD*)v12 + 2) = v9;
	v24 = v14;
	v15 = *((_QWORD*)v12 + 3);
	*((_QWORD*)v12 + 3) = v8;
	v25 = v15;
	if (v20)
		sub_14018B900(v20, 0);
	v16 = a5;
	if (!a5)
	{
		v17 = sub_140211280(a3);
		v18 = v17;
		if (v17)
		{
			if ((*(_DWORD*)(v17 + 24) & *(_DWORD*)(qword_140C63628 + 1524)) == 0
				|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
				|| (v16 = *(_DWORD*)(v17 + 8)) == 0)
			{
				v16 = *(_DWORD*)(v18 + 4);
			}
		}
		else
		{
			v16 = 0;
		}
	}
	v27 = v16;
	v28 = 1i64;
	v29 = 0i64;
	v30 = 0i64;
	sub_14043BF30(dword_140C7CC70, (__int64)&v21);
	if (v23)
		sub_14018B900(v23, 0);
}
// 14043BAD2: variable 'v11' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];

