#include "../winhttp.h"

//----- (000000014079D940) ----------------------------------------------------
void __fastcall sub_14079D940(__int64 a1, int a2)
{
	_QWORD** v2; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rdi
	_QWORD* v7; // rax
	_QWORD* v8; // rdi

	v2 = *(_QWORD***)(a1 + 16);
	v5 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v6 = v5[2];
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) || a2)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 8i64))(v6, 1i64);
				v7 = (_QWORD*)v5[1];
				v8 = (_QWORD*)*v5;
				*v7 = *v5;
				v8[1] = v7;
				sub_14018B900((__int64)v5, 0);
				v5 = v8;
			}
			else
			{
				v5 = (_QWORD*)*v5;
			}
		} while (v5 != *(_QWORD**)(a1 + 16));
	}
}

