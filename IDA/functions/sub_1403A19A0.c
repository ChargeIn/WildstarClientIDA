//----- (00000001403A19A0) ----------------------------------------------------
void __fastcall sub_1403A19A0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rsi
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 27952);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				sub_140195D70(v4 + 8);
				*(_DWORD*)(v4 + 8) = 0;
				v5 = *(_QWORD**)(v4 + 24);
				if (v5)
					*v5 = *(_QWORD*)(v4 + 32);
				v6 = *(_QWORD**)(v4 + 32);
				if (v6)
					*v6 = *(_QWORD*)(v4 + 24);
				*(_QWORD*)(v4 + 24) = 0i64;
				*(_QWORD*)(v4 + 32) = 0i64;
				sub_14018B900(v4, 0);
			}
			v7 = v3[3];
			if (v7)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v7 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 27952));
	}
	sub_140008410(a1 + 27944);
}

