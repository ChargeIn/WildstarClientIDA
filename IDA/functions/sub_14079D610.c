//----- (000000014079D610) ----------------------------------------------------
void __fastcall sub_14079D610(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	*a1 = off_140B78380;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
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
		} while (v3 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	sub_140008410((__int64)(a1 + 1));
	sub_14018B900(a1[2], 0);
}
// 140B78380: using guessed type __int64 (__fastcall *off_140B78380[2])();

