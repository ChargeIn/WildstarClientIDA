#include "../winhttp.h"

//----- (00000001401A6500) ----------------------------------------------------
bool __fastcall sub_1401A6500(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	_WORD* v4; // rbx
	_WORD* v5; // rax
	int v6; // ecx
	bool v7; // zf

	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 32i64))(a2);
	if (!v3)
		return 0;
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1) ? 0i64 : (_WORD*)sub_1401A4F40(a1 + 24);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3) ? 0i64 : (_WORD*)sub_1401A4F40(v3 + 24);
	if (v5 == v4)
		return 1;
	v6 = 0;
	if (*v5)
	{
		do
		{
			if (!*v4 || *v5 != *v4)
				break;
			v7 = v6 == 0x7FFFFFFF;
			if (v6 == 0x7FFFFFFF)
				goto LABEL_15;
			++v5;
			++v4;
			++v6;
		} while (*v5);
		v7 = v6 == 0x7FFFFFFF;
	LABEL_15:
		if (v7)
			return 1;
	}
	return !*v5 && !*v4;
}

