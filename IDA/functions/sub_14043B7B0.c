#include "../winhttp.h"

//----- (000000014043B7B0) ----------------------------------------------------
void __fastcall sub_14043B7B0(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rbx
	int* v8; // rax
	char v9[24]; // [rsp+20h] [rbp-68h] BYREF
	int* v10; // [rsp+38h] [rbp-50h]
	int* v11; // [rsp+40h] [rbp-48h]
	int* v12; // [rsp+48h] [rbp-40h]
	int v13; // [rsp+5Ch] [rbp-2Ch]

	v5 = sub_1401F4FA0(a2);
	v7 = (_DWORD*)v5;
	if (v5 && (*(_BYTE*)(v5 + 12) & 1) != 0)
	{
		if (*(_DWORD*)(v5 + 8))
		{
			sub_14043BD20(v6, v5);
		}
		else if (!a4 || !(unsigned int)sub_14043D3D0((__int64)dword_140C7CC70, (_DWORD*)v5))
		{
			v8 = sub_14018B280(16i64, 0);
			v10 = v8;
			v11 = v8;
			v12 = v8 + 4;
			if (v8)
				*(_WORD*)v8 = 0;
			sub_14043CC10(v7, (__int64)v9);
			v13 = 0;
			sub_14043BF30(dword_140C7CC70, (__int64)v9);
			if (v10)
				sub_14018B900((__int64)v10, 0);
		}
	}
}
// 14043B7F6: variable 'v6' is possibly undefined
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];

