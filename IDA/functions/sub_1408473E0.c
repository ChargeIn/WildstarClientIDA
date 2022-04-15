#include "../winhttp.h"

//----- (00000001408473E0) ----------------------------------------------------
__int64 __fastcall sub_1408473E0(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rsi
	void(__fastcall * **v4)(_QWORD, _QWORD); // rdi
	int v5; // ebp

	v2 = (_QWORD*)(a1 + 448);
	v3 = 4i64;
	do
	{
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 72i64))(*v2);
			v4 = (void(__fastcall***)(_QWORD, _QWORD)) * v2;
			v5 = dword_140C10F28;
			if (*v2)
			{
				(**v4)(*v2, 0i64);
				sub_140881720(v5, (__int64)v4);
			}
			*v2 = 0i64;
		}
		++v2;
		--v3;
	} while (v3);
	sub_140861C80(a1);
	return sub_140872290(a1 + 240);
}
// 140C10F28: using guessed type int dword_140C10F28;

