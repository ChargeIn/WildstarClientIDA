#include "../winhttp.h"

//----- (000000014078E4F0) ----------------------------------------------------
__int64 __fastcall sub_14078E4F0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebx
	double v4; // xmm7_8
	__int64* v5; // rax
	int v6; // ecx
	double v7; // xmm6_8
	_DWORD* v8; // rax
	int v9; // ecx
	_DWORD* v10; // rax
	const char* v11; // r10
	__int64 v12; // rax
	const char* v13; // r9
	const char* v14; // rax
	__int64 v15; // rcx
	__int64 result; // rax
	__int64 v17; // [rsp+20h] [rbp-58h] BYREF
	int v18; // [rsp+28h] [rbp-50h]
	__int64 v19; // [rsp+80h] [rbp+8h] BYREF
	unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF

	v2 = (__int64)(a1[2] - a1[3]) >> 4;
	v3 = 2;
	v4 = sub_140056C40(a1, 1u);
	while (v3 <= (int)v2)
	{
		v5 = (__int64*)sub_1400580E0((__int64)a1, v3);
		v6 = *((_DWORD*)v5 + 2);
		if (v6 != 3)
		{
			if (v6 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v19))
			{
				v7 = 0.0;
			LABEL_7:
				v8 = sub_1400580E0((__int64)a1, v3);
				v9 = v8[2];
				if (v9 != 3 && (v9 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v20)))
				{
					v10 = sub_1400580E0((__int64)a1, v3);
					if (v10 == dword_140A12138 || (v12 = (int)v10[2], (_DWORD)v12 == -1))
						v13 = aNoValue;
					else
						v13 = off_140A123B0[v12];
					v14 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v11, v13);
					sub_140056570(a1, v3, v14);
				}
				goto LABEL_16;
			}
			v18 = 3;
			v5 = &v17;
			v17 = v19;
		}
		v7 = *(double*)v5;
		if (*(double*)v5 == 0.0)
			goto LABEL_7;
	LABEL_16:
		if (v7 < v4)
			v4 = v7;
		++v3;
	}
	v15 = a1[2];
	result = 1i64;
	*(_DWORD*)(v15 + 8) = 3;
	*(double*)v15 = v4;
	a1[2] += 16i64;
	return result;
}
// 14078E61F: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

