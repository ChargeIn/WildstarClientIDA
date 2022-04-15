#include "../winhttp.h"

//----- (00000001408739F0) ----------------------------------------------------
__int64 __fastcall sub_1408739F0(_QWORD* a1, __int64 a2, float a3, char a4)
{
	unsigned __int8* v4; // r10
	int v6; // r11d
	unsigned int v7; // ebx
	int v8; // r8d
	__int64 v9; // rbx
	__int64 result; // rax
	__int64 v11; // r8
	_QWORD* v12; // rcx
	__int64 v13; // rax
	_QWORD* v14; // [rsp+30h] [rbp-28h] BYREF
	unsigned int v15; // [rsp+38h] [rbp-20h]

	v4 = (unsigned __int8*)a1[3];
	v6 = a2;
	if (v4)
	{
		v7 = *v4;
		v8 = 0;
		while (1)
		{
			a2 = (unsigned int)(v8 + 1);
			if (v4[a2] == (_BYTE)v6)
				break;
			++v8;
			if ((unsigned int)a2 >= v7)
				goto LABEL_5;
		}
		v9 = (__int64)&v4[16 * v8 + ((v7 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	if (v6 == 10)
	{
		v11 = a1[2];
		v15 = v15 & 0xFFFFFFFC | (v11 == 0);
		v12 = (_QWORD*)a1[1];
		v14 = v12;
		v13 = *v12;
		if (v11)
			result = (*(__int64(__fastcall**)(_QWORD*, __int64, __int64, _QWORD**, _BYTE))(v13 + 184))(
				v12,
				a2,
				v11,
				&v14,
				0);
		else
			result = (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD**, _QWORD))(v13 + 192))(v12, a2, &v14, 0i64);
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1[1] + 176i64))(
			a1[1],
			(unsigned int)dword_1409A3530[v6],
			*(_QWORD*)a1[1],
			a1[2],
			0i64);
	}
	*(float*)v9 = a3;
	if (a4)
		*(_QWORD*)(v9 + 8) = 0i64;
	return result;
}
// 1409A3530: using guessed type int dword_1409A3530[];

