#include "../winhttp.h"

//----- (000000014033AD30) ----------------------------------------------------
void __fastcall sub_14033AD30(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = *(_QWORD*)(a1 + 192);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 200), 0);
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	v3 = *(_QWORD**)(a1 + 224);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 232);
	v4 = *(_QWORD*)(a1 + 232);
	if (v4)
		*(_QWORD*)(v4 + 224) = *(_QWORD*)(a1 + 224);
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	v5 = *(_QWORD**)(a1 + 208);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 216);
	v6 = *(_QWORD*)(a1 + 216);
	if (v6)
		*(_QWORD*)(v6 + 208) = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v7 = *(_QWORD*)(a1 + 192);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
}

