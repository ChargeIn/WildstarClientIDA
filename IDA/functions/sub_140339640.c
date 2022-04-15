//----- (0000000140339640) ----------------------------------------------------
__int64 __fastcall sub_140339640(__int64 a1, __int64* a2)
{
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	_QWORD* v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rcx

	sub_14033ECE0(*a2);
	v4 = *(_QWORD***)(a1 + 32);
	v5 = *v4;
	if (*v4 == v4)
	{
	LABEL_4:
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 2147500037i64;
	}
	else
	{
		while (v5[2] != *a2)
		{
			v5 = (_QWORD*)*v5;
			if (v5 == v4)
				goto LABEL_4;
		}
		v7 = (_QWORD*)*v5;
		v8 = (_QWORD*)v5[1];
		*v8 = *v5;
		v7[1] = v8;
		v9 = v5[2];
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		sub_14018B900((__int64)v5, 0);
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 0i64;
	}
}

