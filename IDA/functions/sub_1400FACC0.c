#include "../winhttp.h"

//----- (00000001400FACC0) ----------------------------------------------------
__int64 __fastcall sub_1400FACC0(__int64 a1, unsigned __int16* a2)
{
	__int64* v4; // rax
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 v7; // rdx
	unsigned __int16* v8; // r11

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	v7 = *v4;
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v7, a2, v8);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FACEA: variable 'v5' is possibly undefined
// 1400FAD0A: variable 'v8' is possibly undefined

