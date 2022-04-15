#include "../winhttp.h"

//----- (000000014015A980) ----------------------------------------------------
bool __fastcall sub_14015A980(__m128* a1, __int64* a2, _WORD* a3)
{
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 i; // rsi
	__int64 v8; // rdi
	const wchar_t* v9; // rbx
	wchar_t* v10; // rax
	int v11; // ecx
	bool v12; // zf
	_WORD* v13; // rbx
	_WORD* v14; // rax
	int v15; // ecx
	bool v16; // zf

	if (!*a2)
		return 0;
	v5 = sub_1401A5AE0(*a2, L"Menus");
	if (!v5)
		return 0;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	if (!v6)
		return 0;
	for (i = sub_1401A5AE0(v6, L"Menu"); i; i = sub_1401A5BC0(i, L"Menu"))
	{
		v8 = *(_QWORD*)(i + 96);
		if (v8)
		{
			while (1)
			{
				v9 = L"Name";
				v10 = (wchar_t*)sub_1401A4F40(v8 + 8);
				if (v10 == L"Name")
					break;
				v11 = 0;
				if (*v10)
				{
					do
					{
						if (!*v9 || *v10 != *v9)
							break;
						v12 = v11 == 0x7FFFFFFF;
						if (v11 == 0x7FFFFFFF)
							goto LABEL_13;
						++v10;
						++v9;
						++v11;
					} while (*v10);
					v12 = v11 == 0x7FFFFFFF;
				LABEL_13:
					if (v12)
						break;
				}
				if (!*v10 && !*v9)
					break;
				v8 = *(_QWORD*)(v8 + 56);
				if (!v8)
					goto LABEL_31;
			}
			if (!a3)
				goto LABEL_36;
			v13 = a3;
			v14 = (_WORD*)sub_1401A4F40(v8 + 32);
			if (v14 == a3)
				goto LABEL_36;
			v15 = 0;
			if (*v14)
			{
				do
				{
					if (!*v13 || *v14 != *v13)
						break;
					v16 = v15 == 0x7FFFFFFF;
					if (v15 == 0x7FFFFFFF)
						goto LABEL_26;
					++v14;
					++v13;
					++v15;
				} while (*v14);
				v16 = v15 == 0x7FFFFFFF;
			LABEL_26:
				if (v16)
					goto LABEL_36;
			}
			if (!*v14 && !*v13)
			{
			LABEL_36:
				if (sub_1401A4F40(v8 + 32))
					sub_140159840(a1, i);
			}
		}
	LABEL_31:
		;
	}
	return (int)((__int64)(a1[3].m128_u64[0] - a1[2].m128_u64[1]) >> 3) > 0;
}
// 14015AA6C: conditional instruction was optimized away because rdi.8!=0
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A355F0: using guessed type wchar_t aMenu[5];
// 140A35600: using guessed type wchar_t aMenus[6];

