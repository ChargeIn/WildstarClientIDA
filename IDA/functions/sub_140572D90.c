#include "../winhttp.h"

//----- (0000000140572D90) ----------------------------------------------------
void __fastcall sub_140572D90(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	*a1 = off_140B6C8F8;
	v2 = (_QWORD*)a1[2];
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
		} while (v3 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	sub_140008410((__int64)(a1 + 5));
	sub_140008410((__int64)(a1 + 5));
	sub_14018B900(a1[6], 0);
	sub_140008410((__int64)(a1 + 1));
	sub_14018B900(a1[2], 0);
}
// 140B6C8F8: using guessed type __int64 (__fastcall *off_140B6C8F8[10])();

