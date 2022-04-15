//----- (0000000140616D70) ----------------------------------------------------
void __fastcall sub_140616D70(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64* v4; // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 40);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (__int64*)v3[5];
			if (v4)
				sub_140616E30(v4);
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
		} while (v3 != *(_QWORD**)(a1 + 40));
	}
	sub_140008410(a1 + 32);
	sub_140008410(a1 + 32);
	sub_14018B900(*(_QWORD*)(a1 + 40), 0);
	sub_140008410(a1);
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
}

