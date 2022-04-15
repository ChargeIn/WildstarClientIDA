#include "../winhttp.h"

//----- (0000000140067170) ----------------------------------------------------
__int64 __fastcall sub_140067170(__int64 a1, __int64 a2, int a3, int a4)
{
	int v8; // eax
	char* v9; // rdx
	bool v10; // zf
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rbp
	_DWORD* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // eax
	char* v18; // rdx
	__int64 v19; // rax
	const char* v21; // rax
	const char* v22; // rax
	const char* v23; // rax
	const char* v24; // rax
	__int64 v25[76]; // [rsp+20h] [rbp-298h] BYREF

	sub_140066040((_QWORD*)a1, (__int64)v25);
	*(_DWORD*)(v25[0] + 96) = a4;
	if (*(_DWORD*)(a1 + 16) != 40)
	{
		v8 = sub_1407DE7F8(40);
		v9 = aCharD;
		if (!v8)
			v9 = aC_16;
		v21 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v9, 40i64);
		v22 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v21);
		sub_140062CF0(a1, v22, *(_DWORD*)(a1 + 16));
	}
	v10 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v10)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v11 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v11;
	}
	if (a3)
	{
		v12 = *(_QWORD*)(a1 + 56);
		v13 = sub_140062650(v12, (unsigned __int64*)aSelf, 4ui64);
		v14 = sub_14005C630(v12, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v13);
		if (!v14[2])
		{
			*v14 = 1;
			v14[2] = 1;
		}
		sub_140065950(a1, v13, 0);
		v15 = *(_QWORD*)(a1 + 48);
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 48i64)
			+ 16i64 * *(unsigned __int16*)(v15 + 2i64 * (unsigned __int8)++ * (_BYTE*)(v15 + 74) + 194)
			+ 8) = *(_DWORD*)(v15 + 48);
	}
	sub_140066F20(a1);
	if (*(_DWORD*)(a1 + 16) != 41)
	{
		v17 = sub_1407DE7F8(41);
		v18 = aCharD;
		if (!v17)
			v18 = aC_16;
		v23 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v18, 41i64);
		v24 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v23);
		sub_140062CF0(a1, v24, *(_DWORD*)(a1 + 16));
	}
	v10 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v10)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v19 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v19;
	}
	sub_140069EC0(a1, v16);
	*(_DWORD*)(v25[0] + 100) = *(_DWORD*)(a1 + 4);
	sub_1400656B0(a1, 262, 265, a4);
	sub_140066140(a1);
	return sub_140065EC0(a1, v25, a2);
}
// 140067312: variable 'v16' is possibly undefined
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

