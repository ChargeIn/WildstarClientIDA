#include "../winhttp.h"

//----- (0000000140839150) ----------------------------------------------------
__int64* __fastcall sub_140839150(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v4; // rdx
	_QWORD* v5; // r8
	__int64* result; // rax
	_QWORD* v7; // rdx
	_QWORD* v8; // r8
	bool v9; // zf
	__int64 v10; // rax
	__int64 v11; // rcx

	v2 = *(_QWORD**)(a1 + 4664);
	v4 = 0i64;
	v5 = v2;
	if (v2)
	{
		while (v5[1] != a2)
		{
			v4 = v5;
			v5 = (_QWORD*)*v5;
			if (!v5)
				goto LABEL_4;
		}
		v9 = v5 == v2;
		v10 = *v5;
		if (v9)
			*(_QWORD*)(a1 + 4664) = v10;
		else
			*v4 = v10;
		if (v5 == *(_QWORD**)(a1 + 4672))
			*(_QWORD*)(a1 + 4672) = v4;
		result = *(__int64**)(a1 + 4680);
		*v5 = result;
		--* (_DWORD*)(a1 + 4696);
		*(_QWORD*)(a1 + 4680) = v5;
	}
	else
	{
	LABEL_4:
		for (result = *(__int64**)(a1 + 4712); result; result = (__int64*)*result)
		{
			v7 = (_QWORD*)result[4];
			v8 = 0i64;
			if (v7)
			{
				while (v7[1] != a2)
				{
					v8 = v7;
					v7 = (_QWORD*)*v7;
					if (!v7)
						goto LABEL_9;
				}
				v11 = *v7;
				if (v7 == (_QWORD*)result[4])
					result[4] = v11;
				else
					*v8 = v11;
				if (v7 == (_QWORD*)result[5])
					result[5] = (__int64)v8;
				*v7 = result[6];
				--* ((_DWORD*)result + 16);
				result[6] = (__int64)v7;
				return result;
			}
		LABEL_9:
			;
		}
	}
	return result;
}

