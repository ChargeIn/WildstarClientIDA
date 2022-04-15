//----- (0000000140132FC0) ----------------------------------------------------
void __fastcall sub_140132FC0(__int64 a1)
{
	__int64 v1; // rdx
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = qword_140C67260;
	v3 = *(_QWORD**)(qword_140C67260 + 16);
	if (v3 != (_QWORD*)qword_140C67260)
	{
		do
		{
			v4 = v3[5];
			if (*(_QWORD*)(v4 + 24) == a1)
			{
				sub_140195D70(v4 + 96);
				*(_DWORD*)(v4 + 72) = 0;
				*(_QWORD*)(v4 + 24) = 0i64;
				v1 = qword_140C67260;
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
		} while (v3 != (_QWORD*)v1);
	}
}
// 140C67260: using guessed type __int64 qword_140C67260;

