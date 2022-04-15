#include "../winhttp.h"

//----- (00000001402CB170) ----------------------------------------------------
void __fastcall sub_1402CB170(__int64 a1)
{
	bool v1; // zf
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rcx
	__int64 v13; // rcx
	unsigned __int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx

	v1 = *(_QWORD*)(a1 + 496) == 0i64;
	*(_QWORD*)a1 = off_140B628D0;
	if (!v1)
	{
		do
		{
			v3 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 496);
			if (v3)
				(**v3)(v3, 1i64);
		} while (*(_QWORD*)(a1 + 496));
	}
	v4 = *(_QWORD**)(a1 + 520);
	v5 = 0i64;
	if (v4)
	{
		*v4 = *(_QWORD*)(a1 + 528);
		v6 = *(_QWORD*)(a1 + 528);
		if (v6)
			*(_QWORD*)(v6 + 520) = *(_QWORD*)(a1 + 520);
		*(_QWORD*)(a1 + 520) = 0i64;
		*(_QWORD*)(a1 + 528) = 0i64;
	}
	v7 = *(_QWORD**)(a1 + 520);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 528);
	v8 = *(_QWORD*)(a1 + 528);
	if (v8)
		*(_QWORD*)(v8 + 520) = *(_QWORD*)(a1 + 520);
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	v9 = *(_QWORD**)(a1 + 504);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 512);
	v10 = *(_QWORD*)(a1 + 512);
	if (v10)
		*(_QWORD*)(v10 + 504) = *(_QWORD*)(a1 + 504);
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	if (*(_QWORD*)(a1 + 496))
		sub_1401A4A00((const void***)(a1 + 496));
	v11 = *(_QWORD*)(a1 + 488);
	if (v11)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 8i64))(v11, v5);
	v12 = *(_QWORD*)(a1 + 400);
	if (v12 < *(_QWORD*)(a1 + 408))
		sub_14018B900(*(_QWORD*)(a1 + 416) + 8 * v12, 0);
	v13 = *(_QWORD*)(a1 + 384);
	if (v13)
		(**(void(__fastcall***)(__int64, __int64))(v13 - 16))(v13 - 16, v5);
	v14 = *(_QWORD*)(a1 + 360);
	if (v14 < *(_QWORD*)(a1 + 368))
		sub_14018B900(*(_QWORD*)(a1 + 376) + 8 * v14, 0);
	v15 = *(_QWORD*)(a1 + 344);
	if (v15)
		(**(void(__fastcall***)(__int64, __int64))(v15 - 16))(v15 - 16, v5);
	v16 = *(_QWORD*)(a1 + 320);
	if (v16)
		sub_14018B900(v16, 0);
	sub_1402CED90(*(_QWORD**)(a1 + 288), *(_QWORD**)(a1 + 296));
	v17 = *(_QWORD*)(a1 + 288);
	if (v17)
		sub_14018B900(v17, 0);
	sub_1402CE6F0((_QWORD*)(a1 + 264));
	sub_1402CE560((_QWORD*)(a1 + 248));
	v18 = *(_QWORD*)(a1 + 32);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v19 = *(_QWORD*)(a1 + 24);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	v20 = *(_QWORD*)(a1 + 16);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
}
// 1402CB291: variable 'v5' is possibly undefined
// 140B628D0: using guessed type __int64 (__fastcall *off_140B628D0[55])();

