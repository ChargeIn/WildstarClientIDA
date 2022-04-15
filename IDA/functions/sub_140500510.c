//----- (0000000140500510) ----------------------------------------------------
_QWORD* __fastcall sub_140500510(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	int* v6; // rax
	_QWORD* v7; // r8
	_QWORD* v8; // rdx
	_QWORD* i; // rax

	v4 = (__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 3;
	if (v4)
	{
		v5 = 2 * v4;
		v6 = sub_14018B280(v5 * 4, 0);
		a1[1] = v6;
		a1[2] = v6;
		a1[3] = &v6[v5];
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
	}
	v7 = *(_QWORD**)(a2 + 16);
	v8 = *(_QWORD**)(a2 + 8);
	for (i = (_QWORD*)a1[1]; v8 != v7; ++i)
	{
		if (i)
			*i = *v8;
		++v8;
	}
	a1[2] = i;
	return a1;
}

