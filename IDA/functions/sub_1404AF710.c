//----- (00000001404AF710) ----------------------------------------------------
__int64 __fastcall sub_1404AF710(__int64 a1, __int64 a2)
{
	_QWORD* v3; // r9
	_QWORD** v4; // rdi
	_QWORD* v5; // r8
	_QWORD* v6; // rbx
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64* v9; // rcx
	__int64 v10; // rdx
	__int64* v11; // rax
	_QWORD** v13; // [rsp+40h] [rbp+8h] BYREF

	if (a1 == a2)
		return a1;
	v3 = *(_QWORD**)(a2 + 8);
	v4 = *(_QWORD***)(a1 + 8);
	v5 = (_QWORD*)*v3;
	v6 = *v4;
	if (*v4 == v4)
	{
	LABEL_5:
		if (v5 != v3)
		{
			v13 = v4;
			sub_14001FDD0(a1, (__int64*)&v13, v5, v3);
			return a1;
		}
	}
	else
	{
		while (v5 != v3)
		{
			v7 = v5[2];
			v5 = (_QWORD*)*v5;
			v8 = v6;
			v6 = (_QWORD*)*v6;
			v8[2] = v7;
			if (v6 == v4)
				goto LABEL_5;
		}
	}
	while (v6 != v4)
	{
		v9 = v6;
		v6 = (_QWORD*)*v6;
		v10 = *v9;
		v11 = (__int64*)v9[1];
		*v11 = *v9;
		*(_QWORD*)(v10 + 8) = v11;
		sub_14018B900((__int64)v9, 0);
	}
	return a1;
}

