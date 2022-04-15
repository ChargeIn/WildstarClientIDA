#include "../winhttp.h"

//----- (00000001406007C0) ----------------------------------------------------
__int64 __fastcall sub_1406007C0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
	int* v8; // rax
	_QWORD* v9; // rdi
	__int64 v11; // rbx
	int* v12; // rax
	_QWORD* v13; // rax

	v8 = sub_14018B280(1648i64, 8u);
	if (v8)
		v9 = (_QWORD*)sub_140619900((__int64)v8);
	else
		v9 = 0i64;
	if ((int)sub_14061A840((__int64)v9, a2) >= 0)
	{
		v11 = *(_QWORD*)(a1 + 8);
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			*((_QWORD*)v12 + 2) = v9;
		*(_QWORD*)v12 = v11;
		*((_QWORD*)v12 + 1) = *(_QWORD*)(v11 + 8);
		**(_QWORD**)(v11 + 8) = v12;
		*(_QWORD*)(v11 + 8) = v12;
		if (a3)
		{
			if (!*v9)
			{
				*v9 = a3;
				v9[1] = *a3;
				*a3 = v9;
				v13 = (_QWORD*)v9[1];
				if (v13)
					*v13 = v9 + 1;
			}
		}
		if (a4)
			*a4 = v9;
		return 0i64;
	}
	else
	{
		if (v9)
		{
			sub_140619BB0((__int64)v9);
			sub_14018B900((__int64)v9, 0);
		}
		return 2147500037i64;
	}
}

