#include "../winhttp.h"

//----- (00000001405F4040) ----------------------------------------------------
__int64 __fastcall sub_1405F4040(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	int v9; // esi
	__int64 v10; // rbx
	__int64 v11; // rax

	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 136i64))(a1);
	v7 = v6;
	if (!v6)
		return 2147500037i64;
	v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v6 + 288i64))(v6, a3, a4);
	if (v9 >= 0)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 248i64))(v7))
		{
			v10 = *(_QWORD*)(qword_140C65898 + 29504);
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 320i64))(v7);
			Apollo_LUAEvent(v10, "PublicEventObjectiveLocationAdded", byte_1409ED2AC, v11);
		}
	}
	return (unsigned int)v9;
}
// 1409ED2AC: using guessed type _BYTE byte_1409ED2AC[4];
// 140C65898: using guessed type __int64 qword_140C65898;

