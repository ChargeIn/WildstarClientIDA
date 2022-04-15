#include "../winhttp.h"

//----- (000000014010EE40) ----------------------------------------------------
_QWORD* __fastcall sub_14010EE40(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	unsigned __int64 v2; // r11
	_QWORD* v4; // r9
	_QWORD* result; // rax
	unsigned __int64* v6; // rcx
	_QWORD* v7; // r10
	_QWORD* v8; // rcx
	_QWORD* v9; // rax
	unsigned __int64* v10; // r9
	unsigned __int64* v11; // rdx
	bool v12; // cl

	v1 = a1[130];
	v2 = a1[131];
	if (v1 == v2)
	{
		v4 = (_QWORD*)a1[153];
		for (result = (_QWORD*)*v4; result != v4; result = (_QWORD*)*result)
		{
			v6 = (unsigned __int64*)result[2];
			if (v1 >= *v6 && v1 < v6[1])
			{
				result = (_QWORD*)*v6;
				if (*v6 != v1)
				{
					a1[130] = result;
					result = (_QWORD*)v6[1];
					a1[129] = v1;
					a1[131] = result;
					a1[128] = result;
				}
				return result;
			}
		}
	}
	else
	{
		v7 = (_QWORD*)a1[153];
		v8 = (_QWORD*)*v7;
		v9 = (_QWORD*)*v7;
		if ((_QWORD*)*v7 == v7)
		{
		LABEL_13:
			v10 = 0i64;
		}
		else
		{
			while (1)
			{
				v10 = (unsigned __int64*)v9[2];
				if (v1 >= *v10 && v1 < v10[1])
					break;
				v9 = (_QWORD*)*v9;
				if (v9 == v7)
					goto LABEL_13;
			}
		}
		if (v8 == v7)
		{
		LABEL_18:
			v11 = 0i64;
		}
		else
		{
			while (1)
			{
				v11 = (unsigned __int64*)v8[2];
				if (v2 >= *v11 && v2 < v11[1])
					break;
				v8 = (_QWORD*)*v8;
				if (v8 == v7)
					goto LABEL_18;
			}
		}
		v12 = a1[128] == v2;
		if (v10)
			a1[130] = *v10;
		if (v11)
			a1[131] = v11[1];
		if (v12)
			result = (_QWORD*)a1[131];
		else
			result = (_QWORD*)a1[130];
		a1[128] = result;
	}
	return result;
}

