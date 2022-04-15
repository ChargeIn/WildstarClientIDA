#include "../winhttp.h"

//----- (000000014010E2E0) ----------------------------------------------------
_QWORD* __fastcall sub_14010E2E0(_QWORD* a1, __int64 a2, unsigned __int16* a3)
{
	_QWORD* v5; // rdi
	__int64 i; // rsi
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	bool v17; // zf
	_QWORD* result; // rax

	v5 = a1;
	for (i = (a2 - (__int64)a1) >> 5; i > 0; v5 += 4)
	{
		if (*v5)
		{
			v7 = *(_QWORD*)(*v5 + 24i64);
			if (v7)
			{
				if (!(unsigned int)sub_14018E2C0(v7, a3))
					return v5;
			}
		}
		v8 = v5[1];
		if (v8)
		{
			v9 = *(_QWORD*)(v8 + 24);
			if (v9)
			{
				if (!(unsigned int)sub_14018E2C0(v9, a3))
					return v5 + 1;
			}
		}
		v10 = v5[2];
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 24);
			if (v11)
			{
				if (!(unsigned int)sub_14018E2C0(v11, a3))
					return v5 + 2;
			}
		}
		v12 = v5[3];
		if (v12)
		{
			v13 = *(_QWORD*)(v12 + 24);
			if (v13)
			{
				if (!(unsigned int)sub_14018E2C0(v13, a3))
					return v5 + 3;
			}
		}
		--i;
	}
	if ((a2 - (__int64)v5) >> 3 != 1)
	{
		if ((a2 - (__int64)v5) >> 3 != 2)
		{
			if ((a2 - (__int64)v5) >> 3 != 3)
				return (_QWORD*)a2;
			if (*v5)
			{
				v14 = *(_QWORD*)(*v5 + 24i64);
				if (v14)
				{
					if (!(unsigned int)sub_14018E2C0(v14, a3))
						return v5;
				}
			}
			++v5;
		}
		if (!*v5 || (v15 = *(_QWORD*)(*v5 + 24i64)) == 0 || (unsigned int)sub_14018E2C0(v15, a3))
		{
			++v5;
			goto LABEL_26;
		}
		return v5;
	}
LABEL_26:
	if (!*v5)
		return (_QWORD*)a2;
	v16 = *(_QWORD*)(*v5 + 24i64);
	if (!v16)
		return (_QWORD*)a2;
	v17 = (unsigned int)sub_14018E2C0(v16, a3) == 0;
	result = v5;
	if (!v17)
		return (_QWORD*)a2;
	return result;
}

