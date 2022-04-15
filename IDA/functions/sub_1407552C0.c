#include "../winhttp.h"

//----- (00000001407552C0) ----------------------------------------------------
__int64 __fastcall sub_1407552C0(__int64 a1)
{
	__int64 v3; // rcx
	float v4; // xmm0_4
	__int64 v5; // rax

	if (!qword_140C65898)
		return 0i64;
	v3 = *(_QWORD*)(qword_140C65898 + 29064);
	if (!v3)
		return 0i64;
	v4 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 64i64))(v3);
	v5 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (float)(v4 * 0.001);
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

