#include "../winhttp.h"

//----- (00000001405765A0) ----------------------------------------------------
__int64 __fastcall sub_1405765A0(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // r14
	int* v6; // rax
	_QWORD* v7; // rbx
	int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rax

	v3 = (_QWORD*)qword_140C65B78;
	v6 = sub_14018B280(536i64, 8u);
	if (v6)
		v7 = (_QWORD*)sub_14071A210((__int64)v6);
	else
		v7 = 0i64;
	v8 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v7 + 88i64))(v7, a2);
	if (v8 >= 0)
	{
		if (!v7[3])
		{
			v7[3] = v3;
			v7[4] = *v3;
			*v3 = v7;
			v9 = v7[4];
			if (v9)
				*(_QWORD*)(v9 + 24) = v7 + 4;
		}
		if (a3)
		{
			if (!v7[1])
			{
				v7[1] = a3;
				v7[2] = *a3;
				*a3 = v7;
				v10 = v7[2];
				if (v10)
					*(_QWORD*)(v10 + 8) = v7 + 2;
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(_QWORD*, __int64)) * v7)(v7, 1i64);
	}
	return (unsigned int)v8;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

