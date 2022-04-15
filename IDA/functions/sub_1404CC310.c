//----- (00000001404CC310) ----------------------------------------------------
void __fastcall sub_1404CC310(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v9; // rdi
	__int64 v10; // rsi
	__int64 v11; // rbx

	v2 = a1 + 5;
	v3 = 28i64;
	*a1 = off_140B68EE0;
	do
	{
		if (*v2)
			(**(void(__fastcall***)(_QWORD, __int64)) * v2)(*v2, 1i64);
		*v2++ = 0i64;
		--v3;
	} while (v3);
	*a1 = off_140B78380;
	v4 = (_QWORD*)a1[2];
	v5 = (_QWORD*)v4[2];
	if (v5 != v4)
	{
		do
		{
			sub_14018B900(v5[5], 0);
			v6 = v5[3];
			if (v6)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
		} while (v5 != (_QWORD*)a1[2]);
	}
	v9 = (__int64)(a1 + 1);
	if (a1[3])
	{
		v10 = *(_QWORD*)(a1[2] + 8i64);
		if (v10)
		{
			do
			{
				sub_1400083B0(v9, *(_QWORD*)(v10 + 24));
				v11 = *(_QWORD*)(v10 + 16);
				sub_14018B900(v10, 0);
				v10 = v11;
			} while (v11);
		}
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 16i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 24i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(v9 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v9 + 8), 0);
}
// 140B68EE0: using guessed type __int64 (__fastcall *off_140B68EE0[15])();
// 140B78380: using guessed type __int64 (__fastcall *off_140B78380[2])();

