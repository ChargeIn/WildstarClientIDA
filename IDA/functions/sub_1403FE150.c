#include "../winhttp.h"

//----- (00000001403FE150) ----------------------------------------------------
void __fastcall sub_1403FE150(_QWORD* a1, _QWORD* a2)
{
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	if (a1 != a2)
	{
		v3 = a1;
		do
		{
			if (*v3)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = 0i64;
			}
			v4 = v3[3];
			if (v4)
				sub_14018B900(v4, 0);
			v3 += 6;
		} while (v3 != a2);
	}
}

