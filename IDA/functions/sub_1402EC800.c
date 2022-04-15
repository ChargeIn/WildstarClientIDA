//----- (00000001402EC800) ----------------------------------------------------
__int64 __fastcall sub_1402EC800(__int64 a1, __int64 a2, _QWORD* a3)
{
	int* v7; // rax
	_QWORD* v8; // rbx
	bool v9; // zf
	_QWORD* v10; // rdx
	__int64 v11; // rax

	if (!a2)
		return 2147942487i64;
	v7 = sub_14018B280(520i64, 0);
	if (v7)
		v8 = (_QWORD*)sub_14030D310((__int64)v7);
	else
		v8 = 0i64;
	v9 = v8[16] == 0i64;
	v8[2] = a1;
	v10 = (_QWORD*)(a1 + 48);
	if (v9)
	{
		v8[16] = v10;
		v8[17] = *v10;
		*v10 = v8;
		v11 = v8[17];
		if (v11)
			*(_QWORD*)(v11 + 128) = v8 + 17;
	}
	v8[6] = 0i64;
	v8[7] = a2;
	sub_14030DBB0((__int64)v8);
	*a3 = v8;
	return 0i64;
}

