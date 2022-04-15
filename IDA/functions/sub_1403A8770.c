//----- (00000001403A8770) ----------------------------------------------------
void __fastcall sub_1403A8770(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 32400);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			sub_14018B900(v3[5], 0);
			v4 = v3[3];
			if (v4)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 32400));
	}
	sub_140008410(a1 + 32392);
}

