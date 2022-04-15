//----- (00000001404CED10) ----------------------------------------------------
void __fastcall sub_1404CED10(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (_QWORD*)v3[5];
			if (v4)
			{
				*v4 = 0i64;
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
		} while (v3 != *(_QWORD**)(a1 + 56));
	}
	sub_140008410(a1 + 48);
}

