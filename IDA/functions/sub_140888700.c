#include "../winhttp.h"

//----- (0000000140888700) ----------------------------------------------------
_QWORD* __fastcall sub_140888700(_QWORD* a1, __int64 a2, char a3)
{
	_QWORD* result; // rax
	_QWORD* v6; // rdx
	_QWORD* v7; // rcx
	bool v8; // zf
	_QWORD* v9; // rcx
	_QWORD* v10; // rdx

	if ((*(_DWORD*)(a2 + 20) & 7) == 2)
	{
		v9 = (_QWORD*)a1[27];
		v10 = 0i64;
		result = v9;
		if (v9)
		{
			while (result != (_QWORD*)a2)
			{
				v10 = result;
				result = (_QWORD*)*result;
				if (!result)
					return result;
			}
			v8 = result == v9;
			result = (_QWORD*)*result;
			if (v8)
				a1[27] = result;
			else
				*v10 = result;
		}
	}
	else if (a3 || (result = (_QWORD*)a1[25], result == (_QWORD*)a2))
	{
		result = (_QWORD*)a1[25];
		if (result)
		{
			result = (_QWORD*)*result;
			if (result)
			{
				a1[25] = result;
			}
			else
			{
				a1[25] = 0i64;
				a1[26] = 0i64;
			}
		}
	}
	else
	{
		v6 = 0i64;
		v7 = (_QWORD*)a1[25];
		if (result)
		{
			while (v7 != (_QWORD*)a2)
			{
				v6 = v7;
				v7 = (_QWORD*)*v7;
				if (!v7)
					return result;
			}
			v8 = v7 == result;
			result = (_QWORD*)*v7;
			if (v8)
				a1[25] = result;
			else
				*v6 = result;
			if (v7 == (_QWORD*)a1[26])
				a1[26] = v6;
		}
	}
	return result;
}

