//----- (0000000140575930) ----------------------------------------------------
void __fastcall sub_140575930(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	*a1 = &off_140B6C8D8;
	v2 = (_QWORD*)a1[8];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
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
		} while (v3 != (_QWORD*)a1[8]);
	}
	sub_140008410((__int64)(a1 + 7));
	a1[11] = 0i64;
	sub_140008410((__int64)(a1 + 12));
	sub_14018B900(a1[13], 0);
	sub_140008410((__int64)(a1 + 7));
	sub_14018B900(a1[8], 0);
}
// 140B6C8D8: using guessed type __int64 (__fastcall *off_140B6C8D8)();

