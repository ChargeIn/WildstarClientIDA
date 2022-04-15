#include "../winhttp.h"

//----- (000000014085B660) ----------------------------------------------------
__int64 __fastcall sub_14085B660(_QWORD** a1, __int64 a2, __int64 a3, unsigned int a4)
{
	_QWORD** v4; // rdi
	_QWORD* v7; // rbx
	_QWORD** v9; // rsi
	__int64 result; // rax

	v4 = a1 + 17;
	v7 = a1[17];
	v9 = a1 + 14;
	if (v7 == a1[18])
	{
		if (v4 != v9)
		{
			v7 = *v9;
			v4 = a1 + 14;
		}
		if (v7 == v4[1])
			return 1i64;
	}
	while (1)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD*)*v7 + 152i64))(*v7, a2, a3, a4);
		if ((_DWORD)result != 1)
			break;
		if (++v7 == v4[1])
		{
			if (v4 != v9)
			{
				v7 = *v9;
				v4 = v9;
			}
			if (v7 == v4[1])
				break;
		}
	}
	return result;
}

