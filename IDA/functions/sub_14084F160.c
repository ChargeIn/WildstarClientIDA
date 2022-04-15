#include "../winhttp.h"

//----- (000000014084F160) ----------------------------------------------------
char __fastcall sub_14084F160(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
	char result; // al
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // r9

	result = 0;
	if (a4 || (result = a2 == *(_DWORD*)(a1 + 24), a2 != *(_DWORD*)(a1 + 24)))
	{
		if ((_BYTE)a3 || (v8 = *(_QWORD*)(a1 + 72)) == 0 || (result = sub_14085AED0(v8, a2), LOBYTE(a3) = 1, !result))
		{
			v9 = *(_QWORD*)(a1 + 64);
			if (v9)
			{
				v10 = a4;
				if ((*(_BYTE*)(a1 + 90) & 8) != 0)
					v10 = 1i64;
				return sub_14084F160(v9, a2, a3, v10);
			}
		}
	}
	return result;
}
// 14084F1BF: variable 'a3' is possibly undefined

