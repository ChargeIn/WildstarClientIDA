#include "../winhttp.h"

//----- (000000014048D060) ----------------------------------------------------
__int64 __fastcall sub_14048D060(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 48);
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
		} while (v3 != *(_QWORD**)(a1 + 48));
	}
	sub_140008410(a1 + 40);
	sub_140008410(a1 + 72);
	sub_14048D860(a1);
	result = qword_140C65898;
	if (qword_140C65898)
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

