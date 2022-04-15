//----- (000000014012CE60) ----------------------------------------------------
_QWORD* __fastcall sub_14012CE60(_QWORD* a1, double a2)
{
	__int64 v3; // rdi
	unsigned __int64 v4; // r8
	unsigned __int64 v5; // rdx
	_WORD* v6; // rax
	__int64* v7; // rax
	int* v8; // rbp
	_WORD* v9; // rsi
	char* v10; // r15
	unsigned __int64 v11; // rbx
	__int64 v12; // rbx
	int* v13; // rbx
	__int64 v14; // rcx
	__int64 v16; // [rsp+20h] [rbp-48h] BYREF
	__int64 v17; // [rsp+28h] [rbp-40h]
	__int64 v18; // [rsp+30h] [rbp-38h]
	__int64 v19; // [rsp+70h] [rbp+8h] BYREF
	unsigned __int64 v20; // [rsp+80h] [rbp+18h] BYREF

	sub_14018EFA0(&v16, (__int64)L"%.13f", a2);
	v3 = v17;
	v4 = (v18 - v17) >> 1;
	v5 = v4;
	if (v4)
	{
		v6 = (_WORD*)(v17 - 2 + 2 * v4);
		do
		{
			if (*v6 != 48)
				break;
			--v6;
			--v5;
		} while (v5);
	}
	v7 = &v19;
	if (v4 >= v5)
		v7 = (__int64*)&v20;
	v20 = v5;
	v19 = (v18 - v17) >> 1;
	v8 = 0i64;
	v9 = (_WORD*)(v17 + 2 * *v7);
	v10 = 0i64;
	v11 = ((2 * *v7) >> 1) + 1;
	if (v11 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = 2 * v11;
		v8 = sub_14018B280(v12, 0);
		v10 = (char*)v8 + v12;
	}
	v13 = v8;
	if ((_WORD*)v3 != v9)
	{
		v14 = v3 - (_QWORD)v8;
		do
		{
			if (v13)
				*(_WORD*)v13 = *(_WORD*)((char*)v13 + v14);
			v13 = (int*)((char*)v13 + 2);
		} while ((_WORD*)((char*)v13 + v14) != v9);
	}
	if (v13)
		*(_WORD*)v13 = 0;
	if (v3)
		sub_14018B900(v3, 0);
	a1[1] = v8;
	a1[2] = v13;
	a1[3] = v10;
	return a1;
}
// 140A20960: using guessed type wchar_t a13f[6];

