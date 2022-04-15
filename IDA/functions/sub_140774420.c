#include "../winhttp.h"

//----- (0000000140774420) ----------------------------------------------------
void __fastcall sub_140774420(__int64 a1, int a2)
{
	_QWORD** v2; // r9
	_QWORD* v3; // rbx
	unsigned __int64 v4; // r8
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rcx

	v2 = *(_QWORD***)(a1 + 56);
	v3 = *v2;
	if (*v2 != v2)
	{
		while (1)
		{
			v4 = v3[4];
			v5 = 0i64;
			if (v4)
				break;
		LABEL_6:
			v3 = (_QWORD*)*v3;
			if (v3 == v2)
				return;
		}
		v6 = (_QWORD*)v3[3];
		while (*(_DWORD*)(*v6 + 8i64) != a2)
		{
			++v5;
			++v6;
			if (v5 >= v4)
				goto LABEL_6;
		}
		(**(void(__fastcall***)(_QWORD, __int64)) * v6)(*v6, 1i64);
		sub_140007270((__int64)(v3 + 3), v5);
		if (!v3[4])
		{
			v7 = (_QWORD*)*v3;
			v8 = (_QWORD*)v3[1];
			*v8 = *v3;
			v7[1] = v8;
			v9 = v3[3];
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			sub_14018B900((__int64)v3, 0);
		}
	}
}

