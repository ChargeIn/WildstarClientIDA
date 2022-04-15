#include "../winhttp.h"

//----- (00000001405F3FA0) ----------------------------------------------------
__int64 __fastcall sub_1405F3FA0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	int v7; // esi
	__int64 v8; // rbx
	__int64 v9; // rax

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 136i64))(a1);
	v5 = v4;
	if (!v4)
		return 2147500037i64;
	v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 264i64))(v4, a3);
	if (v7 >= 0)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 248i64))(v5))
		{
			v8 = *(_QWORD*)(qword_140C65898 + 29504);
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 320i64))(v5);
			sub_1400EA3E0(v8, "PublicEventObjectiveLocationRemoved", byte_1409ED28C, v9);
		}
	}
	return (unsigned int)v7;
}
// 1409ED28C: using guessed type _BYTE byte_1409ED28C[4];
// 140C65898: using guessed type __int64 qword_140C65898;

