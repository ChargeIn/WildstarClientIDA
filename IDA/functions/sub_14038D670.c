#include "../winhttp.h"

//----- (000000014038D670) ----------------------------------------------------
void __fastcall sub_14038D670(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx

	if (a1[4] != a2)
	{
		if (a2)
			(**(void(__fastcall***)(__int64))a2)(a2);
		v4 = a1[4];
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[4] = a2;
		if (a2 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 944i64))(a2))
			(*(void(__fastcall**)(_QWORD, _QWORD*))(*(_QWORD*)a1[4] + 72i64))(a1[4], a1 + 6);
		if (!a1[146])
		{
			v5 = (_QWORD*)(a1[2] + 5328i64);
			a1[146] = v5;
			a1[147] = *v5;
			*v5 = a1;
			v6 = a1[147];
			if (v6)
				*(_QWORD*)(v6 + 1168) = a1 + 147;
		}
		if (!a1[148])
		{
			v7 = (_QWORD*)(a1[2] + 5336i64);
			a1[148] = v7;
			a1[149] = *v7;
			*v7 = a1;
			v8 = a1[149];
			if (v8)
				*(_QWORD*)(v8 + 1184) = a1 + 149;
		}
		v9 = (_QWORD*)a1[130];
		if (v9)
			*v9 = a1[131];
		v10 = a1[131];
		if (v10)
			*(_QWORD*)(v10 + 1040) = a1[130];
		v11 = (_QWORD*)a1[144];
		a1[130] = 0i64;
		a1[131] = 0i64;
		if (v11)
			*v11 = a1[145];
		v12 = a1[145];
		if (v12)
			*(_QWORD*)(v12 + 1152) = a1[144];
		a1[144] = 0i64;
		a1[145] = 0i64;
		sub_140195D70((__int64)(a1 + 106));
	}
}

