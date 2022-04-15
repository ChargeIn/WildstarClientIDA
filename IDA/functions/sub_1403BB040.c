#include "../winhttp.h"

//----- (00000001403BB040) ----------------------------------------------------
__int64 __fastcall sub_1403BB040(__int64 a1, unsigned int a2)
{
	__int64 v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rbp
	__int64 v8; // r11
	int v9; // edx
	__int64 v10; // rax
	__int64 v11; // r11
	__int64 v12; // rbx
	__int64 v13; // r8
	__int64 v14; // rcx
	_DWORD* i; // rax
	unsigned __int8 v16; // al
	unsigned int v17; // ecx
	unsigned int v18; // ebx

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 120);
	if (!v4)
		return 0i64;
	result = sub_1403ACD90(qword_140C65B70, a2, v4);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)(a1 + 120);
		if (v8)
			v9 = *(_DWORD*)(v8 + 220);
		else
			v9 = 23;
		v10 = sub_1407A1630(v6, v9, a2);
		v12 = 0i64;
		if (!v10
			|| *(_DWORD*)(v10 + 8) <= *(_DWORD*)(v11 + 56)
			&& ((v13 = *(unsigned int*)(v10 + 16), !(_DWORD)v13)
				|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						v11,
						v13,
						0i64,
						0i64,
						0)))
		{
			v14 = *(_QWORD*)(v7 + 112);
			for (i = (_DWORD*)(v14 + 408); *i != 3; ++i)
			{
				if ((unsigned __int64)++v12 >= 5)
				{
					v16 = *(_BYTE*)(v14 + 8);
					if (v16 <= 0xAu)
						v17 = *(_DWORD*)(qword_140C65B70 + 4i64 * v16 + 1264);
					else
						v17 = -1;
					return v17 <= *(_DWORD*)(*(_QWORD*)(a1 + 120) + 56i64);
				}
			}
			v18 = sub_140491E90(v14, a2);
			return (unsigned int)sub_14047C450(*(_QWORD*)(a1 + 120)) >= v18;
		}
		return 0i64;
	}
	return result;
}
// 1403BB0AC: variable 'v6' is possibly undefined
// 1403BB0B8: variable 'v11' is possibly undefined
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

