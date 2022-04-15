#include "../winhttp.h"

//----- (00000001404D47C0) ----------------------------------------------------
__int64 __fastcall sub_1404D47C0(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	*a1 = off_140B69058;
	v2 = (_QWORD*)a1[10];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = v3[5];
			if (v4)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 24i64))(v4, 1i64);
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
		} while (v3 != (_QWORD*)a1[10]);
	}
	sub_140008410((__int64)(a1 + 9));
	sub_140008410((__int64)(a1 + 9));
	sub_14018B900(a1[10], 0);
	return sub_1404D4EC0(a1 + 4);
}
// 140B69058: using guessed type __int64 (__fastcall *off_140B69058[16])();

