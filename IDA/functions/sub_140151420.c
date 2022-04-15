#include "../winhttp.h"

//----- (0000000140151420) ----------------------------------------------------
__int64 __fastcall sub_140151420(__int64 a1, int* a2)
{
	__int64 result; // rax
	int v3; // r8d
	__int64 v4; // rdx
	_QWORD* v5; // r9
	int v6; // ecx
	_QWORD* v7; // rax

	result = sub_140151290(a1, a2);
	if (result)
	{
		v3 = *(_DWORD*)(result + 48);
		v4 = 0i64;
		if (v3 >= 0)
		{
			v5 = *(_QWORD**)(result + 8);
			v6 = 0;
			v7 = (_QWORD*)*v5;
			if ((_QWORD*)*v5 != v5)
			{
				while (v6 != v3)
				{
					v7 = (_QWORD*)*v7;
					++v6;
					if (v7 == v5)
						return 0i64;
				}
				return v7[2];
			}
		}
		return v4;
	}
	return result;
}

