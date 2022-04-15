//----- (00000001402ED3E0) ----------------------------------------------------
void __fastcall sub_1402ED3E0(unsigned int* a1)
{
	__int64 v2; // rax
	bool v3; // cf
	__int64 v4; // rax
	int* v5; // rax
	int* v6; // rdi
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	__int64 v9; // rcx

	if (*a1 != 1)
	{
		v2 = 200i64;
		if (!is_mul_ok(1ui64, 0xC8ui64))
			v2 = -1i64;
		v3 = __CFADD__(v2, 8i64);
		v4 = v2 + 8;
		if (v3)
			v4 = -1i64;
		v5 = sub_14018B280(v4, 2u);
		if (v5)
		{
			v6 = v5 + 2;
			*v5 = 1;
			*((_QWORD*)v5 + 2) = 0i64;
			*((_QWORD*)v5 + 3) = 0i64;
			*((_QWORD*)v5 + 8) = 0i64;
			*((_QWORD*)v5 + 9) = 0i64;
			*((_QWORD*)v5 + 10) = 0i64;
			*((_QWORD*)v5 + 11) = 0i64;
			*((_QWORD*)v5 + 12) = 0i64;
			*((_QWORD*)v5 + 13) = 0i64;
			*((_QWORD*)v5 + 15) = 0i64;
			*((_QWORD*)v5 + 16) = 0i64;
			*((_QWORD*)v5 + 17) = 0i64;
			*((_QWORD*)v5 + 18) = 0i64;
			*((_QWORD*)v5 + 20) = 0i64;
			*((_QWORD*)v5 + 21) = 0i64;
			*((_QWORD*)v5 + 22) = 0i64;
			*((_QWORD*)v5 + 23) = 0i64;
			*((_QWORD*)v5 + 24) = 0i64;
			*((_QWORD*)v5 + 25) = 0i64;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = 1i64;
		if (!*a1)
			v7 = *a1;
		v8 = 200 * v7;
		sub_1407DB590(v6, *((int**)a1 + 1), v8);
		sub_1407E4830(*((int**)a1 + 1), 0i64, v8);
		v9 = *((_QWORD*)a1 + 1);
		if (v9)
			sub_1402EDDA0(v9);
		*a1 = 1;
		*((_QWORD*)a1 + 1) = v6;
	}
}

