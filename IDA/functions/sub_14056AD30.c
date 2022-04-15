//----- (000000014056AD30) ----------------------------------------------------
_QWORD* __fastcall sub_14056AD30(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int* v4; // rax
	int* v5; // rdi
	int v6; // ecx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r14
	int* v10; // rax
	int* v11; // rsi
	_WORD* v12; // rax
	int* v13; // rax
	__int64 v15[2]; // [rsp+40h] [rbp-98h] BYREF
	__int64 v16[2]; // [rsp+50h] [rbp-88h] BYREF
	int v17[20]; // [rsp+60h] [rbp-78h] BYREF

	v2 = 0i64;
	if (*(_QWORD*)(a1 + 112))
	{
		v15[1] = *(_QWORD*)(a1 + 112);
		v16[0] = a1;
		v6 = *(_DWORD*)(qword_140C635F0 + 5760);
		v16[1] = (__int64)nullsub_1;
		LODWORD(v15[0]) = v6;
		if ((unsigned int)sub_1403F82F0(qword_140C65898, 9, v15, v17, 0x21u, v16, 0i64))
		{
			v8 = 0i64;
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			if (LOWORD(v17[0]))
			{
				do
					++v8;
				while (*((_WORD*)v17 + v8));
			}
			v9 = (2 * v8) >> 1;
			if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v10 = sub_14018B280(2 * (v9 + 1), 0);
				a2[1] = v10;
				a2[2] = v10;
				a2[3] = (char*)v10 + 2 * v9 + 2;
			}
			v11 = (int*)a2[1];
			sub_1407DB590(v11, v17, 2 * v9);
			v12 = (_WORD*)v11 + v9;
			a2[2] = v12;
			if (v12)
				*v12 = 0;
		}
		else
		{
			v13 = (int*)sub_14034BDD0(v7, 479255);
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v2;
				while (*((_WORD*)v13 + v2));
			}
			sub_14001C1B0(a2, v13, (__int64)v13 + 2 * v2);
		}
	}
	else
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v4 = sub_14018B280(2i64, 0);
		a2[3] = (char*)v4 + 2;
		v5 = v4;
		a2[1] = v4;
		a2[2] = v4;
		sub_1407DB590(v4, dword_1409F2A34, 0i64);
		a2[2] = v5;
		if (v5)
			*(_WORD*)v5 = 0;
	}
	return a2;
}
// 14056AEC1: variable 'v7' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409F2A34: using guessed type int dword_1409F2A34[90];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

