#include "../winhttp.h"

//----- (000000014082A8E0) ----------------------------------------------------
_DWORD* __fastcall sub_14082A8E0(_QWORD* a1, __int64 a2, int a3)
{
	_QWORD* v3; // rax
	_QWORD* v4; // r9
	_DWORD* v6; // rbx
	_DWORD* result; // rax
	__int64 v8; // rax

	v3 = (_QWORD*)*a1;
	v4 = (_QWORD*)a1[1];
	if ((_QWORD*)*a1 != v4)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 = (_QWORD*)((char*)v3 + 12);
		} while (v3 != v4);
	}
	if (v3 == v4)
	{
		v6 = 0i64;
	}
	else
	{
		v6 = v3 + 1;
		if (v3 != (_QWORD*)-8i64)
		{
			*v6 = a3;
			return v6;
		}
	}
	v8 = sub_140829D40((__int64)a1);
	if (!v8)
		return v6;
	result = (_DWORD*)(v8 + 8);
	*((_QWORD*)result - 1) = a2;
	*result = a3;
	return result;
}

