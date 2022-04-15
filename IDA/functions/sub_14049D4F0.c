//----- (000000014049D4F0) ----------------------------------------------------
__int64 __fastcall sub_14049D4F0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	_QWORD* v5; // rbx
	__int64 v6; // r9
	_QWORD* v7; // rax
	int v8; // r10d
	unsigned int v9; // edx
	int v10; // r10d

	if (!a4)
		return a3 == 2;
	v5 = (_QWORD*)sub_1403DEC00(qword_140C65898, a2);
	v7 = (_QWORD*)sub_1403DEC00(qword_140C65898, v6);
	if (v5 && v7)
	{
		v9 = 0;
		v10 = v8 - 1;
		if (!v10)
			return *v5 == *v7;
		if (v10 == 1)
		{
			LOBYTE(v9) = *v5 != *v7;
			return v9;
		}
	}
	else if (v8 == 2)
	{
		return 1i64;
	}
	return 0i64;
}
// 14049D539: variable 'v6' is possibly undefined
// 14049D557: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

