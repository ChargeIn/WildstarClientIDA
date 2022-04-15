#include "../winhttp.h"

//----- (000000014037A3F0) ----------------------------------------------------
void __fastcall sub_14037A3F0(__int64 a1)
{
	bool v1; // zf
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx

	v1 = *(_QWORD*)(a1 + 224) == 0i64;
	*(_QWORD*)a1 = off_140B65C68;
	if (!v1)
	{
		do
		{
			v3 = *(_QWORD**)(a1 + 224);
			if (v3)
			{
				sub_1403902B0(v3);
				sub_14018B900(v4, 0);
			}
		} while (*(_QWORD*)(a1 + 224));
	}
	v5 = *(_QWORD**)(a1 + 248);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 256);
	v6 = *(_QWORD*)(a1 + 256);
	if (v6)
		*(_QWORD*)(v6 + 248) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	v7 = *(_QWORD**)(a1 + 232);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 240);
	v8 = *(_QWORD*)(a1 + 240);
	if (v8)
		*(_QWORD*)(v8 + 232) = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	if (*(_QWORD*)(a1 + 224))
		sub_1401A4A00((const void***)(a1 + 224));
}
// 14037A424: variable 'v4' is possibly undefined
// 140B65C68: using guessed type __int64 (__fastcall *off_140B65C68[10])();

