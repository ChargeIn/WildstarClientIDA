//----- (00000001405F1540) ----------------------------------------------------
_QWORD* __fastcall sub_1405F1540(_QWORD* a1, __int64* a2)
{
	int* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // r14
	int* v8; // rax
	int* v9; // rsi
	_WORD* v10; // rax
	__int64 v12[2]; // [rsp+40h] [rbp-88h] BYREF
	int v13[20]; // [rsp+50h] [rbp-78h] BYREF

	if (!a2[1])
	{
		v3 = (int*)sub_14034BDD0((__int64)a1, 108);
		v4 = 0i64;
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v4;
			while (*((_WORD*)v3 + v4));
		}
	LABEL_14:
		sub_14001C1B0(a1, v3, (__int64)v3 + 2 * v4);
		return a1;
	}
	v4 = 0i64;
	v12[1] = 0i64;
	v12[0] = 0i64;
	if (!(unsigned int)sub_1403F82F0(qword_140C65898, 10, a2, v13, 0x21u, v12, 0i64))
	{
		v3 = (int*)sub_14034BDD0(v5, 591339);
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v4;
			while (*((_WORD*)v3 + v4));
		}
		goto LABEL_14;
	}
	v6 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (LOWORD(v13[0]))
	{
		do
			++v6;
		while (*((_WORD*)v13 + v6));
	}
	v7 = (2 * v6) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v7 + 1), 0);
		a1[1] = v8;
		a1[2] = v8;
		a1[3] = (char*)v8 + 2 * v7 + 2;
	}
	v9 = (int*)a1[1];
	sub_1407DB590(v9, v13, 2 * v7);
	v10 = (_WORD*)v9 + v7;
	a1[2] = v10;
	if (v10)
		*v10 = 0;
	return a1;
}
// 1405F16A4: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

