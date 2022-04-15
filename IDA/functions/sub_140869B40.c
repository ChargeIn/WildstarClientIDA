#include "../winhttp.h"

//----- (0000000140869B40) ----------------------------------------------------
void __fastcall sub_140869B40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 i; // rbx
	_QWORD* v9; // rcx
	__int64 v10; // rax

	for (i = *(_QWORD*)(a1 + 168); i != *(_QWORD*)(a1 + 176); i += 8i64)
	{
		v9 = *(_QWORD**)i;
		if ((*(_BYTE*)(*(_QWORD*)i + 91i64) & 0x10) == 0)
		{
			v10 = v9[7];
			if (v10)
			{
				if (*(_WORD*)(v10 + 72))
					(*(void(__fastcall**)(_QWORD*, __int64, _QWORD, __int64, __int64))(*v9 + 200i64))(v9, a2, a3, a4, a5);
			}
		}
	}
}
// 140869BAA: variable 'a2' is possibly undefined

