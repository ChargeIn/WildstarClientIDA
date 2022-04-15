#include "../winhttp.h"

//----- (00000001407913C0) ----------------------------------------------------
void __fastcall sub_1407913C0(__int64 a1, __int64 a2, char* a3, __int64 a4)
{
	_QWORD* v4; // rbx
	unsigned __int64 v7; // rdx
	_DWORD* v9; // r8
	int v11; // eax
	_DWORD* v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	int v15; // eax
	_DWORD* v16; // rcx
	__int64 v17; // rax
	unsigned __int64 v18; // r8
	_DWORD* v19; // rdx

	v4 = *(_QWORD**)(a1 + 16);
	v7 = v4[2];
	v9 = (_DWORD*)(v4[3] + 32i64);
	if ((unsigned __int64)v9 < v7 && v9 != dword_140A12138)
	{
		v11 = *(_DWORD*)(v4[3] + 40i64);
		if (v11 >= 3)
		{
			if (v11 <= 4)
			{
				sub_140791260(a1, a2, a3, a4);
				return;
			}
			if (v11 == 5)
			{
				sub_140790910(a1, 0, (unsigned __int64*)a3, a4);
				v18 = v4[2];
				v19 = dword_140A12138;
				if (v4[3] + 32i64 < v18)
					v19 = (_DWORD*)(v4[3] + 32i64);
				sub_14005E8E0((__int64)v4, (__int64)v19, (int*)(v18 - 16), v18 - 16);
			}
			else if (v11 == 6)
			{
				v12 = dword_140A12138;
				if ((unsigned __int64)v9 < v7)
					v12 = (_DWORD*)(v4[3] + 32i64);
				*(_QWORD*)v7 = *(_QWORD*)v12;
				*(_DWORD*)(v7 + 8) = v12[2];
				v4[2] += 16i64;
				v13 = sub_1407909F0(a1, (unsigned __int64*)a3, a4);
				sub_140061D30((__int64)v4, (char*)(v4[2] - 16i64 * (v13 + 1)), 1);
			}
		}
	}
	v14 = v4[2];
	v15 = *(_DWORD*)(v14 - 8);
	v16 = (_DWORD*)(v14 - 16);
	if (v15 && (v15 != 1 || *v16))
	{
		if (v16 == dword_140A12138)
			goto LABEL_22;
		if ((unsigned int)(v15 - 3) > 1)
		{
			if (v16 != dword_140A12138)
			{
				v17 = (int)v16[2];
				if ((_DWORD)v17 != -1)
					sub_140056830(v4, (unsigned __int64*)"invalid replacement value (a %s)", off_140A123B0[v17]);
			}
		LABEL_22:
			sub_140056830(v4, (unsigned __int64*)"invalid replacement value (a %s)", aNoValue);
		}
	}
	else
	{
		v4[2] = v16;
		sub_140058710((__int64)v4, (unsigned __int64*)a3, a4 - (_QWORD)a3);
	}
	sub_1400577A0(a2);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

