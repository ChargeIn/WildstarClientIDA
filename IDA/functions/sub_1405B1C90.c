#include "../winhttp.h"

//----- (00000001405B1C90) ----------------------------------------------------
_QWORD* __fastcall sub_1405B1C90(__int64 a1, _QWORD* a2, __int64 a3)
{
	_QWORD* v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // r14
	void(__fastcall * **v9)(_QWORD); // rcx
	_QWORD* i; // rdi
	_QWORD* result; // rax

	v6 = a2;
	v7 = (*(_QWORD*)(a1 + 16) - a3) >> 3;
	if (v7 > 0)
	{
		v8 = a3 - (_QWORD)a2;
		do
		{
			v9 = *(void(__fastcall****)(_QWORD))((char*)v6 + v8);
			if ((void(__fastcall***)(_QWORD)) * v6 != v9)
			{
				if (v9)
					(**v9)(v9);
				if (*v6)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
				*v6 = *(_QWORD*)((char*)v6 + v8);
			}
			--v7;
			++v6;
		} while (v7 > 0);
	}
	for (i = *(_QWORD**)(a1 + 16); v6 != i; ++v6)
	{
		if (*v6)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
	}
	result = a2;
	*(_QWORD*)(a1 + 16) += -8 * ((a3 - (__int64)a2) >> 3);
	return result;
}

