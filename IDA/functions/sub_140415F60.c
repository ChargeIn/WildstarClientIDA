#include "../winhttp.h"

//----- (0000000140415F60) ----------------------------------------------------
__int64 __fastcall sub_140415F60(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD** v2; // rax
	_QWORD* v3; // rdi
	_QWORD* v4; // rbx
	__int64 v5; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v2 = (_QWORD**)sub_140056AB0(a1, 1u);
		v3 = v2;
		if (v2)
		{
			v4 = *v2;
			if (*v2)
			{
				if (*v4)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
					*v4 = 0i64;
				}
				v5 = v4[96];
				if (v5)
					sub_14018B900(v5, 0);
				sub_14018B900((__int64)v4, 0);
			}
			*v3 = 0i64;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

