#include "../winhttp.h"

//----- (0000000140886EA0) ----------------------------------------------------
__int64 __fastcall sub_140886EA0(__int64 a1, _QWORD* a2, _QWORD* a3, char a4)
{
	char v7; // al
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rax
	__int64 v10; // rcx
	unsigned __int64 v11; // rdx
	char v12; // r8
	unsigned int v13; // eax
	__int64 v14; // rax
	__int64 v15; // rbp
	unsigned __int64 v16; // rdx
	unsigned int v17; // ecx
	unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

	*a2 = *(_QWORD*)(a1 + 40);
	*a3 = 0i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v7 = *(_BYTE*)(a1 + 117);
	if ((v7 & 8) != 0 || (v7 & 0x40) == 0 || *(_QWORD*)(a1 + 200))
		goto LABEL_20;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	v9 = *(unsigned int*)(a1 + 148);
	if ((_DWORD)v9 && v8 >= v9)
		v8 = *(unsigned int*)(a1 + 144);
	v10 = *(unsigned int*)(a1 + 152);
	v11 = **(_QWORD**)(a1 + 40);
	if (v8 + v10 > v11)
	{
		v12 = 1;
		if (v8 >= v11)
			LODWORD(v10) = 0;
		else
			LODWORD(v10) = v11 - v8;
	}
	else
	{
		v12 = 0;
	}
	v13 = *(_DWORD*)(a1 + 160);
	v19 = v10;
	if (v13 < (unsigned int)v10)
		LODWORD(v10) = v13;
	v14 = sub_140886650(
		*(_QWORD*)(a1 + 96),
		a1,
		*(_DWORD*)(a1 + 136),
		v8,
		v10,
		*(_DWORD*)(a1 + 164),
		v12,
		a4,
		&v19,
		a3);
	v15 = v14;
	if (!v14)
	{
	LABEL_20:
		v15 = 0i64;
	}
	else
	{
		v16 = *(unsigned int*)(a1 + 148);
		*(_QWORD*)(a1 + 200) = v14;
		if (v8 >= v16)
		{
			v17 = v19;
		}
		else
		{
			v17 = v19;
			if (v8 + v19 > v16)
			{
				v17 = v16 - v8;
				v19 = v16 - v8;
			}
		}
		*(_DWORD*)(a1 + 156) += v17;
		sub_140885F10(a1);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 112i64);
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	return v15;
}

