#include "../winhttp.h"

//----- (00000001408887D0) ----------------------------------------------------
_QWORD* __fastcall sub_1408887D0(_QWORD* a1, __int64 a2, char a3)
{
	_QWORD* result; // rax
	_QWORD* v6; // rdx
	_QWORD* v7; // rcx
	bool v8; // zf
	_QWORD* v9; // rcx
	_QWORD* v10; // rdx

	if ((*(_DWORD*)(a2 + 20) & 7) == 2)
	{
		v9 = (_QWORD*)a1[25];
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
				a1[25] = result;
			else
				*v10 = result;
		}
	}
	else if (a3 || (result = (_QWORD*)a1[23], result == (_QWORD*)a2))
	{
		result = (_QWORD*)a1[23];
		if (result)
		{
			result = (_QWORD*)*result;
			if (result)
			{
				a1[23] = result;
			}
			else
			{
				a1[23] = 0i64;
				a1[24] = 0i64;
			}
		}
	}
	else
	{
		v6 = 0i64;
		v7 = (_QWORD*)a1[23];
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
				a1[23] = result;
			else
				*v6 = result;
			if (v7 == (_QWORD*)a1[24])
				a1[24] = v6;
		}
	}
	return result;
}

