//----- (00000001402F20C0) ----------------------------------------------------
void __fastcall sub_1402F20C0(_QWORD* a1)
{
	unsigned int i; // ebx
	__int64 v3; // rax
	__int64 v4; // rcx
	_QWORD* v5; // rsi

	for (i = 0; i < *((_DWORD*)a1 + 4); ++i)
	{
		v3 = a1[1];
		v4 = *(_QWORD*)(v3 + 8i64 * i);
		v5 = (_QWORD*)(v3 + 8i64 * i);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*v5 = 0i64;
		}
	}
	sub_14018B900(a1[1], 0);
	if (*a1)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = 0i64;
	}
	sub_14018B900(a1[3], 0);
	sub_14018B900(a1[4], 0);
}

