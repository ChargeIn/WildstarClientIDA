#include "../winhttp.h"

//----- (00000001405F3C50) ----------------------------------------------------
__int64 __fastcall sub_1405F3C50(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // rdi
	__int64 v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v13; // rax

	v2 = *(_QWORD**)(a1 + 96);
	v5 = (_QWORD*)v2[2];
	if (v5 != v2)
	{
		do
		{
			v6 = v5[5];
			if (v6
				&& (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 368i64))(v5[5]) != a2
				&& ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 376i64))(v6) & 8) != 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 440i64))(v6);
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 248i64))(v6))
				{
					v7 = *(_QWORD*)(qword_140C65898 + 29504);
					v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 320i64))(v6);
					Apollo_LUAEvent(v7, "PublicEventObjectiveUpdate", byte_1409ED1AC, v8);
				}
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 344i64))(v6);
				sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 320, v9);
			}
			v10 = v5[3];
			if (v10)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v10 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
		} while (v5 != *(_QWORD**)(a1 + 96));
	}
	v13 = qword_140C65898;
	*(_DWORD*)(a1 + 184) = a2;
	*(_DWORD*)(v13 + 28568) = 1;
	return 0i64;
}
// 1409ED1AC: using guessed type _BYTE byte_1409ED1AC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

