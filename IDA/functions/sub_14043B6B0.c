//----- (000000014043B6B0) ----------------------------------------------------
void __fastcall sub_14043B6B0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	_QWORD** v6; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v2 = *(_QWORD**)(a2 + 8);
	v4 = (_QWORD*)v2[2];
	if (v4 != v2)
	{
		do
		{
			v5 = v4[5];
			if (v5)
			{
				v6 = *(_QWORD***)(v5 + 8);
				v7 = *v6;
				if (*v6 != v6)
				{
					do
					{
						v8 = (__int64)v7;
						v7 = (_QWORD*)*v7;
						sub_14018B900(v8, 0);
					} while (v7 != *(_QWORD**)(v5 + 8));
				}
				**(_QWORD**)(v5 + 8) = *(_QWORD*)(v5 + 8);
				*(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) = *(_QWORD*)(v5 + 8);
				sub_14018B900(*(_QWORD*)(v5 + 8), 0);
				sub_14018B900(v5, 0);
			}
			v9 = v4[3];
			if (v9)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		} while (v4 != *(_QWORD**)(a2 + 8));
	}
	sub_140008410(a2);
}

