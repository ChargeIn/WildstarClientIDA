#include "../winhttp.h"

//----- (0000000140869730) ----------------------------------------------------
void __fastcall sub_140869730(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
	_QWORD* i; // rbx
	__int64 v8; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		if (!a4 || !*(_QWORD*)(*i + 72i64))
		{
			v8 = *(_QWORD*)(*i + 56i64);
			if (v8)
			{
				if (*(_WORD*)(v8 + 72))
					(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD*)*i + 192i64))(*i, a2, a3, a4);
			}
		}
	}
}
// 140869795: variable 'a2' is possibly undefined

