#include "../winhttp.h"

//----- (00000001401A5BC0) ----------------------------------------------------
__int64 __fastcall sub_1401A5BC0(__int64 a1, _WORD* a2)
{
	_QWORD* v2; // rbx
	__int64 v4; // rsi
	_WORD* v5; // rax
	_WORD* v6; // rcx
	int v7; // edx
	bool v8; // zf

	v2 = *(_QWORD**)(a1 + 72);
	if (!v2)
		return 0i64;
	while (1)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD*)) * v2)(v2);
		if (v4)
		{
			if (!a2)
				return v4;
			v5 = (*(__int64(__fastcall**)(_QWORD*))(*v2 + 48i64))(v2) ? 0i64 : (_WORD*)sub_1401A4F40((__int64)(v2 + 3));
			v6 = a2;
			if (a2 == v5)
				return v4;
			v7 = 0;
			if (*a2)
			{
				do
				{
					if (!*v5 || *v6 != *v5)
						break;
					v8 = v7 == 0x7FFFFFFF;
					if (v7 == 0x7FFFFFFF)
						goto LABEL_14;
					++v6;
					++v5;
					++v7;
				} while (*v6);
				v8 = v7 == 0x7FFFFFFF;
			LABEL_14:
				if (v8)
					return v4;
			}
			if (!*v6 && !*v5)
				return v4;
		}
		v2 = (_QWORD*)v2[9];
		if (!v2)
			return 0i64;
	}
}

