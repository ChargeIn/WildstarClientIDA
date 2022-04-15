//----- (00000001405BE670) ----------------------------------------------------
void __fastcall sub_1405BE670(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	*a1 = off_140B6DCD8;
	v2 = (_QWORD*)a1[18];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			*(_QWORD*)(v3[5] + 8i64) = 0i64;
			v4 = (_QWORD*)v3[5];
			if (v4)
			{
				if (*v4)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v4 - 16i64) + 8i64))(*v4 - 16i64);
				sub_14018B900((__int64)v4, 0);
			}
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[18]);
	}
	sub_140008410((__int64)(a1 + 17));
	sub_140008410((__int64)(a1 + 25));
	v8 = a1[33];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v9 = a1[31];
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	v10 = a1[29];
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	sub_140008410((__int64)(a1 + 25));
	sub_14018B900(a1[26], 0);
	sub_14079DC00(a1);
}
// 140B6DCD8: using guessed type __int64 (__fastcall *off_140B6DCD8[152])();

