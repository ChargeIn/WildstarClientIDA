//----- (00000001400D7C30) ----------------------------------------------------
__int64 __fastcall sub_1400D7C30(_QWORD* a1)
{
	unsigned int v1; // edx
	unsigned __int64 v2; // r8
	__int64 v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // rbx
	_QWORD** v6; // rcx
	_QWORD* i; // rax
	_QWORD** v8; // rcx
	_QWORD* j; // rax
	_QWORD** v10; // rcx
	_QWORD* k; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v3) + 400i64) == a1)
				break;
			v3 = ++v1;
		} while (v1 < v2);
	}
	v4 = sub_1400D66A0(a1, 1u);
	v5 = (_QWORD*)v4;
	if (v4)
	{
		sub_1400C6D00(v4);
		v6 = (_QWORD**)v5[70];
		for (i = *v6; i != v6; i = (_QWORD*)*i)
			;
		v8 = (_QWORD**)v5[74];
		for (j = *v8; j != v8; j = (_QWORD*)*j)
			;
		v10 = (_QWORD**)v5[72];
		for (k = *v10; k != v10; k = (_QWORD*)*k)
			;
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

