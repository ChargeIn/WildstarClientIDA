#include "../winhttp.h"

//----- (00000001401B13D0) ----------------------------------------------------
char __fastcall sub_1401B13D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	_WORD* v5; // rax
	_QWORD* v6; // rcx
	__int64 v7; // rdx
	int v9; // r8d
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rsi
	__int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

	if (!*(_BYTE*)(a1 + 12))
		return *(_BYTE*)(a1 + 12);
	if (*(_DWORD*)(a1 + 8))
	{
		if ((unsigned int)sub_1401B0BD0(a1, a2, *(_WORD**)(*(_QWORD*)(a1 + 136) + 40i64)))
		{
		LABEL_4:
			if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 48)
				|| (v4 = sub_1401A6B80(a2, *(_WORD**)(a1 + 40))) != 0
				&& (v5 = (_WORD*)sub_1401A4F40(v4 + 32)) != 0i64
				&& (*(_QWORD*)(a1 + 72) == *(_QWORD*)(a1 + 80) || sub_14002C740(a1 + 64, v5)))
			{
				v6 = *(_QWORD**)(a1 + 168);
				v14[1] = a2;
				v7 = v6[2];
				v14[0] = (__int64)off_140B68F20;
				if (v7 == v6[3])
				{
					sub_1401B16B0(v6, (char*)v7, (__int64)v14);
				}
				else
				{
					if (v7)
					{
						*(_QWORD*)v7 = off_140B68F20;
						*(_QWORD*)(v7 + 8) = a2;
					}
					v6[2] += 16i64;
				}
				if (*(_DWORD*)(a1 + 160))
					*(_BYTE*)(a1 + 12) = 0;
			}
		}
		return *(_BYTE*)(a1 + 12);
	}
	v9 = 0;
	v10 = a2;
	v11 = *(_QWORD*)(a1 + 24);
	v12 = 0i64;
	if (a2 != v11)
	{
		do
		{
			v10 = *(_QWORD*)(v10 + 16);
			v12 = (unsigned int)(v12 + 1);
		} while (v10 != v11);
	}
	v13 = (unsigned int)v12;
	LOBYTE(v9) = (unsigned __int64)(unsigned int)v12 > *(_QWORD*)(a1 + 16);
	if (!v9 && (unsigned int)sub_1401B0BD0(v12, a2, *(_WORD**)(32i64 * (unsigned int)v12 + *(_QWORD*)(a1 + 136) + 8)))
	{
		if (v13 == *(_QWORD*)(a1 + 16))
			goto LABEL_4;
		return *(_BYTE*)(a1 + 12);
	}
	return 0;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

