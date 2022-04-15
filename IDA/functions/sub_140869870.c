#include "../winhttp.h"

//----- (0000000140869870) ----------------------------------------------------
void __fastcall sub_140869870(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 i; // rbx
	_BYTE* v10; // rcx
	__int64 v11; // rax

	for (i = *(_QWORD*)(a1 + 168); i != *(_QWORD*)(a1 + 176); i += 8i64)
	{
		v10 = *(_BYTE**)i;
		v11 = *(_QWORD*)(*(_QWORD*)i + 56i64);
		if (v11 && *(_WORD*)(v11 + 72) && (v10[91] & 0x40) == 0)
			(*(void(__fastcall**)(_BYTE*, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)v10 + 216i64))(v10, a2, a3, a4, a5);
	}
}

