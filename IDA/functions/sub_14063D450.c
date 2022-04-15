//----- (000000014063D450) ----------------------------------------------------
void sub_14063D450()
{
	int* v0; // rbp
	__int64 v1; // r14
	int* v2; // rbx
	signed __int64 v3; // rbx
	bool v4; // zf
	_BYTE* v5; // rbx
	char v6; // di
	__int64(__fastcall * v7)(); // rax
	char* v8; // rbx
	int* v9; // rdi
	char v10[8]; // [rsp+30h] [rbp-58h] BYREF
	char* v11; // [rsp+38h] [rbp-50h]
	_BYTE* v12; // [rsp+40h] [rbp-48h]
	__int64 v13; // [rsp+48h] [rbp-40h]
	__int64 v14; // [rsp+50h] [rbp-38h] BYREF
	int* v15; // [rsp+58h] [rbp-30h]
	__int64(__fastcall * v16)(); // [rsp+60h] [rbp-28h]
	__int64 v17; // [rsp+68h] [rbp-20h]
	int v18; // [rsp+90h] [rbp+8h] BYREF

	if (((qword_140C7E658 - qword_140C7E648) >> 5)
		+ ((qword_140C7E668 - qword_140C7E670) >> 5)
		+ 15 * (((qword_140C7E680 - qword_140C7E660) >> 3) - 1))
	{
		v0 = *(int**)(qword_140C7E648 + 8);
		v1 = *(_QWORD*)(qword_140C7E648 + 16);
		v2 = 0i64;
		v13 = 0i64;
		v11 = 0i64;
		if (v1 - (_QWORD)v0 != -2)
		{
			v2 = sub_14018B280(v1 - (_QWORD)v0 + 1, 0);
			v11 = (char*)v2;
			v13 = (__int64)v2 + v1 - (_QWORD)v0 + 1;
		}
		sub_1407DB590(v2, v0, v1 - (_QWORD)v0);
		v3 = (char*)v2 - (char*)v0;
		v4 = v1 + v3 == 0;
		v5 = (_BYTE*)(v1 + v3);
		v12 = v5;
		if (!v4)
			*v5 = 0;
		sub_14063F5F0();
		v18 = 16;
		v6 = sub_14063D320((__int64)v10, &v18);
		if (((qword_140C7E658 - qword_140C7E648) >> 5)
			+ ((qword_140C7E668 - qword_140C7E670) >> 5)
			+ 15 * (((qword_140C7E680 - qword_140C7E660) >> 3) - 1))
		{
			v7 = sub_14063FB00;
			v15 = (int*)sub_14063D450;
			if (!sub_14063D450)
				v7 = 0i64;
			LODWORD(v14) = 0;
			v17 = 0i64;
			v16 = v7;
			sub_140195960((__int64)aEvnt, v18, (__int64)&v14, 4);
		}
		else
		{
			sub_140195D70((__int64)aEvnt);
		}
		v8 = v11;
		if (!v6)
		{
			sub_14018F2D0(&v14, v11);
			v9 = v15;
			sub_14011B780(&v14, *(_QWORD*)(qword_140C65898 + 29504), v15);
			if (v15)
				sub_14018B900((__int64)v15, 0);
			if (v9)
				sub_14018B900((__int64)v9, 0);
		}
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
}
// 14063FB00: using guessed type __int64 __fastcall sub_14063FB00();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;
// 140C7E668: using guessed type __int64 qword_140C7E668;
// 140C7E670: using guessed type __int64 qword_140C7E670;
// 140C7E680: using guessed type __int64 qword_140C7E680;
// 14063D450: using guessed type char var_58[8];

