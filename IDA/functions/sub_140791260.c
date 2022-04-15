#include "../winhttp.h"

//----- (0000000140791260) ----------------------------------------------------
void __fastcall sub_140791260(__int64 a1, __int64 a2, char* a3, __int64 a4)
{
	_QWORD* v4; // rdi
	_DWORD* v6; // rdx
	unsigned __int64 v10; // rsi
	unsigned __int64 v11; // r15
	__int64 v12; // rbp
	int v13; // ecx
	char v14; // al

	v4 = *(_QWORD**)(a1 + 16);
	v6 = dword_140A12138;
	if ((unsigned __int64)(v4[3] + 32i64) < v4[2])
		v6 = (_DWORD*)(v4[3] + 32i64);
	v10 = 0i64;
	if (v6[2] != 4)
	{
		if (!(unsigned int)sub_14005E620(*(_QWORD*)(a1 + 16), (__int64)v6))
		{
			v11 = 0i64;
			v12 = 0i64;
			goto LABEL_11;
		}
		if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
			sub_14005E2C0((__int64)v4);
		v6 = dword_140A12138;
		if ((unsigned __int64)(v4[3] + 32i64) < v4[2])
			v6 = (_DWORD*)(v4[3] + 32i64);
	}
	v11 = *(_QWORD*)(*(_QWORD*)v6 + 16i64);
	v12 = *(_QWORD*)v6 + 32i64;
LABEL_11:
	if (v11)
	{
		do
		{
			if (*(_BYTE*)(v10 + v12) == 37
				&& (v13 = *(unsigned __int8*)(v10 + v12 + 1), ++v10, (unsigned int)sub_1407DE874(v13)))
			{
				v14 = *(_BYTE*)(v10 + v12);
				if (v14 == 48)
				{
					sub_1400576C0(a2, a3, a4 - (_QWORD)a3);
				}
				else
				{
					sub_140790910(a1, v14 - 49, (unsigned __int64*)a3, a4);
					sub_1400577A0(a2);
				}
			}
			else
			{
				if (*(_QWORD*)a2 >= (unsigned __int64)(a2 + 536) && *(_QWORD*)a2 - a2 != 24)
				{
					sub_140058710(*(_QWORD*)(a2 + 16), (unsigned __int64*)(a2 + 24), *(_QWORD*)a2 - a2 - 24);
					++* (_DWORD*)(a2 + 8);
					*(_QWORD*)a2 = a2 + 24;
					sub_1400575B0(a2);
				}
				*(_BYTE*)(*(_QWORD*)a2)++ = *(_BYTE*)(v10 + v12);
			}
			++v10;
		} while (v10 < v11);
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

