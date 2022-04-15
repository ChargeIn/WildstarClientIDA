#include "../winhttp.h"

//----- (000000014033F940) ----------------------------------------------------
__int64 __fastcall sub_14033F940(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rcx
	_QWORD* v5; // rdx
	__int64 v6; // rdx
	__int64* v7; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx

	while (*(_QWORD*)(a1 + 112))
	{
		(**(void(__fastcall***)(__int64, _QWORD))(a1 + 112))(2i64, *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64));
		v4 = *(_QWORD*)(a1 + 112);
		if (v4)
		{
			v5 = *(_QWORD**)(v4 + 16);
			if (v5)
				*v5 = *(_QWORD*)(v4 + 24);
			v6 = *(_QWORD*)(v4 + 24);
			if (v6)
				*(_QWORD*)(v6 + 16) = *(_QWORD*)(v4 + 16);
			*(_QWORD*)(v4 + 16) = 0i64;
			*(_QWORD*)(v4 + 24) = 0i64;
			sub_14018B900(v4, 0);
		}
	}
	if (!a2)
		a2 = (_QWORD*)(a1 + 80);
	v7 = *(__int64**)(a1 + 88);
	if (*a2 != *v7)
		return 2147942487i64;
	sub_140198F50(*v7, (int*)L"sound");
	*a2 = 0i64;
	qword_140C65858 = *(_QWORD*)(a1 + 104);
	if (*(_BYTE*)(a1 + 72))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 408i64))(*(_QWORD*)(a1 + 96));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 408i64))(*(_QWORD*)(a1 + 104));
	sub_140347A10();
	sub_14033FDE0();
	v9 = *(_QWORD*)(a1 + 96);
	if (v9)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 168i64))(v9, 1i64);
	v10 = *(_QWORD*)(a1 + 104);
	if (v10)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 168i64))(v10, 1i64);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	return 0i64;
}
// 140AF4230: using guessed type wchar_t aSound_2[6];
// 140C65858: using guessed type __int64 qword_140C65858;

