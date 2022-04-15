//----- (00000001403DEC70) ----------------------------------------------------
void __fastcall sub_1403DEC70(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 28400);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
				sub_14018B900(v4, 0);
			}
			v6 = v3[3];
			if (v6)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 28400));
	}
	sub_140008410(a1 + 28392);
}

