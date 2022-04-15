#include "../winhttp.h"

//----- (000000014086E130) ----------------------------------------------------
__int64 __fastcall sub_14086E130(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	_QWORD* v5; // r8
	__int64 result; // rax
	__int64 v7; // rdx
	_QWORD** v8; // r10
	_QWORD* v9; // rcx
	_QWORD* v10; // r9

	sub_1408509F0(a1, a2);
	v4 = a1 + 200;
	v5 = 0i64;
	result = 31 * ((unsigned int)a2 / 0x1F);
	v7 = (unsigned int)a2 % 0x1F;
	v8 = (_QWORD**)(v4 + 8 * v7);
	v9 = *v8;
	if (*v8)
	{
		while (v9[1] != a2)
		{
			v5 = v9;
			v9 = (_QWORD*)v9[2];
			if (!v9)
				return result;
		}
		v10 = (_QWORD*)v9[2];
		if (!v10)
		{
			do
				v7 = (unsigned int)(v7 + 1);
			while ((unsigned int)v7 < 0x1F && !*(_QWORD*)(v4 + 8 * v7));
		}
		if (v5)
			v5[2] = v10;
		else
			*v8 = v10;
		--* (_DWORD*)(v4 + 248);
		return (*(__int64(__fastcall**)(_QWORD*))(*v9 + 8i64))(v9);
	}
	return result;
}

