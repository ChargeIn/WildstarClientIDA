//----- (00000001404B11B0) ----------------------------------------------------
_BOOL8 sub_1404B11B0()
{
	__int64 v0; // rsi
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v0 = qword_140C659D8;
	sub_140008410(qword_140C659D8 + 96);
	v1 = *(_QWORD**)(v0 + 136);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = v2[5];
			if (v3)
			{
				sub_140008410(v2[5]);
				sub_14018B900(*(_QWORD*)(v3 + 8), 0);
				sub_14018B900(v3, 0);
			}
			v4 = v2[3];
			if (v4)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != *(_QWORD**)(v0 + 136));
	}
	sub_140008410(v0 + 128);
	return sub_1404B2680(v0);
}
// 140C659D8: using guessed type __int64 qword_140C659D8;

