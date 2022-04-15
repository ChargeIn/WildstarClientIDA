#include "../winhttp.h"

//----- (00000001401D8AF0) ----------------------------------------------------
void __fastcall sub_1401D8AF0(__int64 a1, _OWORD* a2, _OWORD* a3, _OWORD* a4)
{
	unsigned int(__fastcall * v4)(_OWORD*, _OWORD*, _OWORD*, _QWORD); // rax
	int v9; // eax
	_OWORD* v10; // rax
	__int64 v11; // rcx

	v4 = *(unsigned int(__fastcall**)(_OWORD*, _OWORD*, _OWORD*, _QWORD))(a1 + 40);
	if (!v4 || v4(a2, a3, a4, *(_QWORD*)(a1 + 48)))
	{
		v9 = *(_DWORD*)(a1 + 16);
		if (*(_DWORD*)(a1 + 12) == v9)
		{
			if (v9)
				*(_DWORD*)(a1 + 16) = 2 * v9;
			else
				*(_DWORD*)(a1 + 16) = 16;
			*(_QWORD*)(a1 + 24) = sub_14018C320(*(_QWORD*)(a1 + 24), 48i64 * *(unsigned int*)(a1 + 16), 8u);
		}
		v10 = (_OWORD*)(*(_QWORD*)(a1 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a1 + 12)));
		*v10 = *a2;
		v10[1] = *a3;
		v10[2] = *a4;
		v11 = *(_QWORD*)(a1 + 32);
		++* (_DWORD*)(a1 + 12);
		if (v11)
		{
			sub_14018B900(v11, 0);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
	}
}

