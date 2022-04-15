//----- (0000000140150CE0) ----------------------------------------------------
void __fastcall sub_140150CE0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rdi

	v1 = *(_QWORD**)(a1 + 8);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[8];
			if (v4)
			{
				sub_1401508F0(v3[8]);
				sub_14018B900(v4, 0);
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
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	if (*(_QWORD*)(a1 + 16))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64);
		if (v8)
		{
			do
			{
				sub_140044CA0(a1, *(_QWORD**)(v8 + 24));
				v9 = *(_QWORD*)(v8 + 40);
				v10 = *(_QWORD*)(v8 + 16);
				if (v9)
					sub_14018B900(v9, 0);
				sub_14018B900(v8, 0);
				v8 = v10;
			} while (v10);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
}

