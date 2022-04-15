//----- (000000014002C930) ----------------------------------------------------
_WORD* __fastcall sub_14002C930(_QWORD* a1, _WORD* a2, _WORD* a3)
{
	_WORD* v4; // rdi
	unsigned __int64 v6; // rbx
	__int64 v7; // rbx
	int* v8; // rax
	_WORD* result; // rax

	v4 = a2;
	v6 = a3 - a2 + 1;
	if (v6 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = 2 * v6;
		v8 = sub_14018B280(v7, 0);
		a1[1] = v8;
		a1[2] = v8;
		a1[3] = (char*)v8 + v7;
	}
	for (result = (_WORD*)a1[1]; v4 != a3; ++result)
	{
		if (result)
			*result = *v4;
		++v4;
	}
	a1[2] = result;
	if (result)
		*result = 0;
	return result;
}

