#include "../winhttp.h"

//----- (00000001405FA6C0) ----------------------------------------------------
__int64 __fastcall sub_1405FA6C0(__int64 a1, unsigned int** a2)
{
	_QWORD** v4; // rbx
	_QWORD* v5; // rcx
	_QWORD* v6; // rdi
	_QWORD* v7; // rax

	sub_1405FA070(a1, *a2);
	sub_1405FA3B0(a1);
	v4 = *(_QWORD***)(a1 + 8);
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (_QWORD*)*v5;
			if ((unsigned int**)v5[2] == a2)
			{
				v7 = (_QWORD*)v5[1];
				*v7 = v6;
				v6[1] = v7;
				sub_14018B900((__int64)v5, 0);
			}
			v5 = v6;
		} while (v6 != v4);
	}
	return sub_1403A1940((__int64)a2);
}

