#include "../winhttp.h"

//----- (000000014048D860) ----------------------------------------------------
void __fastcall sub_14048D860(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 176);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = *(_QWORD**)(qword_140C65920 + 8);
			if (v4)
			{
				while (v4[9] != v3[5])
				{
					v4 = (_QWORD*)v4[4];
					if (!v4)
						goto LABEL_7;
				}
				(*(void(__fastcall**)(_QWORD*))(*v4 + 8i64))(v4);
				(*(void(__fastcall**)(_QWORD*, __int64)) * v4)(v4, 1i64);
			}
		LABEL_7:
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
		} while (v3 != *(_QWORD**)(a1 + 176));
	}
	sub_140008410(a1 + 168);
}
// 140C65920: using guessed type __int64 qword_140C65920;

