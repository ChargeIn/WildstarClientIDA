#include "../winhttp.h"

//----- (0000000140155D30) ----------------------------------------------------
__int64 __fastcall sub_140155D30(__int64 a1, unsigned int a2)
{
	int(__fastcall * **v3)(_QWORD, void*, __int64*); // rcx
	__int64 v4; // rbx
	__int64 v6; // rcx
	_WORD* v7; // rax
	__int64 v8; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h] BYREF
	__int64 v11; // [rsp+50h] [rbp+18h] BYREF
	int(__fastcall * **v12)(_QWORD, void*, __int64*); // [rsp+58h] [rbp+20h] BYREF

	v3 = *(int(__fastcall****)(_QWORD, void*, __int64*))(qword_140C63650 + 672);
	v12 = 0i64;
	if ((**v3)(v3, &unk_140B5C788, &v11) >= 0)
	{
		(*(void(__fastcall**)(__int64, _QWORD, int(__fastcall****)(_QWORD, void*, __int64*)))(*(_QWORD*)v11 + 48i64))(
			v11,
			a2,
			&v12);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
	}
	v4 = (__int64)v12;
	if (!v12)
		return 2147942487i64;
	v9 = 0i64;
	if ((**v12)(v12, &unk_140B5C798, &v9) >= 0)
	{
		v6 = qword_140C63650;
		v7 = *(_WORD**)(qword_140C63650 + 272);
		if (v7 != *(_WORD**)(qword_140C63650 + 280))
		{
			*v7 = 0;
			*(_QWORD*)(v6 + 280) = *(_QWORD*)(v6 + 272);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	}
	v10 = 0i64;
	if ((**(int(__fastcall***)(__int64, void*, __int64*))v4)(v4, &unk_140B5C7B8, &v10) >= 0)
	{
		v8 = qword_140C63650;
		--* (_DWORD*)(qword_140C63650 + 656);
		if (*(int*)(v8 + 656) <= 0)
		{
			*(_DWORD*)(v8 + 648) = 0;
			*(_DWORD*)(v8 + 656) = 0;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

