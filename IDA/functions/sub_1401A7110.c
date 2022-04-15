#include "../winhttp.h"

//----- (00000001401A7110) ----------------------------------------------------
bool __fastcall sub_1401A7110(_QWORD* a1, __int64(__fastcall*** a2)(_QWORD))
{
	_QWORD* v3; // rsi
	_WORD* v4; // rbx
	_WORD* v5; // rax
	int v6; // ecx
	bool v7; // zf
	__int64 v8; // rdi
	__int64 v9; // rsi
	_WORD* v10; // rbx
	_WORD* v11; // rax
	int v12; // ecx
	bool v13; // zf

	v3 = (_QWORD*)(**a2)(a2);
	if (!v3)
		return 0;
	v4 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 48i64))(a1) ? 0i64 : (_WORD*)sub_1401A4F40((__int64)(a1 + 3));
	v5 = (*(__int64(__fastcall**)(_QWORD*))(*v3 + 48i64))(v3) ? 0i64 : (_WORD*)sub_1401A4F40((__int64)(v3 + 3));
	if (v5 != v4)
	{
		v6 = 0;
		if (!*v5)
			goto LABEL_38;
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
		if (!v7)
		{
		LABEL_38:
			if (*v5 || *v4)
				return 0;
		}
	}
	v8 = a1[12];
	v9 = v3[12];
	if (v8)
	{
		while (v9)
		{
			v10 = (_WORD*)sub_1401A4F40(v9 + 32);
			v11 = (_WORD*)sub_1401A4F40(v8 + 32);
			if (v11 != v10)
			{
				v12 = 0;
				if (!*v11)
					goto LABEL_39;
				do
				{
					if (!*v10 || *v11 != *v10)
						break;
					v13 = v12 == 0x7FFFFFFF;
					if (v12 == 0x7FFFFFFF)
						goto LABEL_27;
					++v11;
					++v10;
					++v12;
				} while (*v11);
				v13 = v12 == 0x7FFFFFFF;
			LABEL_27:
				if (!v13)
				{
				LABEL_39:
					if (*v11 || *v10)
						return 0;
				}
			}
			v8 = *(_QWORD*)(v8 + 56);
			v9 = *(_QWORD*)(v9 + 56);
			if (!v8)
				return v9 == 0;
		}
		return v8 == 0;
	}
	else
	{
		return v9 == 0;
	}
}

