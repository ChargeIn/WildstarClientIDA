//----- (000000014001C1B0) ----------------------------------------------------
_WORD* __fastcall sub_14001C1B0(_QWORD* a1, int* a2, __int64 a3)
{
	__int64 v5; // r14
	int* v6; // rax
	int* v7; // rdi
	_WORD* result; // rax

	v5 = (a3 - (__int64)a2) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v5 + 1), 0);
		a1[1] = v6;
		a1[2] = v6;
		a1[3] = (char*)v6 + 2 * v5 + 2;
	}
	v7 = (int*)a1[1];
	sub_1407DB590(v7, a2, 2 * v5);
	result = (_WORD*)v7 + v5;
	a1[2] = result;
	if (result)
		*result = 0;
	return result;
}

