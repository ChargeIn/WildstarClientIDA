#include "../winhttp.h"

//----- (0000000140869BE0) ----------------------------------------------------
void __fastcall sub_140869BE0(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 v3; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		v3 = *(_QWORD*)(*i + 56i64);
		if (v3)
		{
			if (*(_WORD*)(v3 + 72))
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 408i64))(*i);
		}
	}
}

