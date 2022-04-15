#include "../winhttp.h"

//----- (00000001408340B0) ----------------------------------------------------
__int64 sub_1408340B0()
{
	__int64 result; // rax
	int v1; // ecx
	int v2; // ebx
	int v3; // ecx
	int i; // edx
	__int64 v5; // rdx
	unsigned __int64 v6; // rsi
	int* v7; // rax
	__int64 v8; // rdi

	dword_140C61C54 = 0;
	if (!(unsigned __int8)sub_140881950() || !qword_140C62930)
		return 2i64;
	v1 = 48000;
	if (HIDWORD(xmmword_140C61C90) == 1)
		v1 = 24000;
	sub_1408640C0(v1);
	result = sub_1408313A0();
	if ((_DWORD)result == 1)
	{
		byte_140C61F48 = CoInitializeEx(0i64, 0) >= 0;
		sub_140834440();
		if (qword_140C61C60
			|| (qword_140C61C60 = sub_14085CA20((__int64)&hWnd)) != 0
			|| (qword_140C61C60 = sub_14085CB20()) != 0)
		{
			sub_14084B080();
			result = sub_14001D310();
			if ((_DWORD)result == 1)
			{
				result = sub_140858850();
				if ((_DWORD)result == 1)
				{
					sub_140864A80();
					result = sub_1408322A0();
					if ((_DWORD)result == 1)
					{
						v2 = *(_DWORD*)(qword_140C61C60 + 16);
						if (v2 == 1599)
							v2 = 63;
						result = sub_140863E80(qword_140C61CC0, v2);
						if ((_DWORD)result == 1)
						{
							v3 = v2;
							for (i = 0; v3; v3 &= v3 - 1)
								++i;
							v5 = (unsigned int)(i << 12);
							v6 = (unsigned int)v5;
							v7 = (int*)sub_140881960(dword_140C10F28, v5, 0x10u);
							v8 = (__int64)v7;
							if (v7)
							{
								sub_1407E4830(v7, 0i64, v6);
								dword_140C61CEC = 43;
								qword_140C61CE0 = v8;
								dword_140C61CF0 = 1024;
								dword_140C61CE8 = v2;
								return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 8i64))(qword_140C61C60);
							}
							else
							{
								return 52i64;
							}
						}
					}
				}
			}
			return result;
		}
		return 2i64;
	}
	return result;
}
// 140864A80: using guessed type __int64 sub_140864A80(void);
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61C54: using guessed type int dword_140C61C54;
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C61C90: using guessed type __int128 xmmword_140C61C90;
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CE0: using guessed type __int64 qword_140C61CE0;
// 140C61CE8: using guessed type int dword_140C61CE8;
// 140C61CEC: using guessed type int dword_140C61CEC;
// 140C61CF0: using guessed type int dword_140C61CF0;
// 140C61F48: using guessed type char byte_140C61F48;
// 140C62930: using guessed type __int64 qword_140C62930;

