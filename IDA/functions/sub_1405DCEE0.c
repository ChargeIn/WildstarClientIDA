#include "../winhttp.h"

//----- (00000001405DCEE0) ----------------------------------------------------
void __fastcall sub_1405DCEE0(unsigned int* a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
	unsigned __int64 i; // rdi
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // r9

	for (i = 0i64; i < *((_QWORD*)a1 + 14); ++i)
	{
		v10 = *(_QWORD*)(*((_QWORD*)a1 + 13) + 8 * i);
		if (v10)
		{
			sub_1400B6120(qword_140C65BA0 + 480, v10 + 8);
			v11 = *(_QWORD*)(v10 + 56);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			v12 = *(_QWORD*)(v10 + 48);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			sub_14018B900(v10, 0);
		}
	}
	*((_QWORD*)a1 + 14) = 0i64;
	if (a2)
	{
		v13 = qword_140C65898;
		v14 = *a1;
		a1[16] = 3;
		sub_1400EA3E0(*(_QWORD*)(v13 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, v14, a5, a6, a7);
	}
}
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA0: using guessed type __int64 qword_140C65BA0;

