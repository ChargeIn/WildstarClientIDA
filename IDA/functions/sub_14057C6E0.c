#include "../winhttp.h"

//----- (000000014057C6E0) ----------------------------------------------------
__int64 __fastcall sub_14057C6E0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	int* v3; // rbp
	__int64 v4; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v10; // rcx
	unsigned int v11; // edx
	__int64 v13; // [rsp+20h] [rbp-18h]

	v3 = *(int**)(a2 + 16);
	v13 = v2;
	v4 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		v6 = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v6;
			while (*((_WORD*)v3 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v3, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 8) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	if (*(_DWORD*)(a1 + 16) == 1)
	{
		sub_140404090((unsigned int)(*(_DWORD*)(a1 + 16) - 1), 0xFu, *(_QWORD*)a1, *(int**)(a1 + 8));
		v11 = 16;
		goto LABEL_19;
	}
	v10 = (unsigned int)(*(_DWORD*)(a1 + 16) - 2);
	if (*(_DWORD*)(a1 + 16) == 2)
	{
		v11 = 17;
		goto LABEL_19;
	}
	v10 = (unsigned int)(*(_DWORD*)(a1 + 16) - 3);
	if (*(_DWORD*)(a1 + 16) == 3)
	{
		sub_140404090(v10, 0x1Du, *(_QWORD*)a1, *(int**)(a1 + 8));
		v11 = 30;
		goto LABEL_19;
	}
	if (*(_DWORD*)(a1 + 16) == 7)
	{
		v11 = 47;
	LABEL_19:
		sub_140404090(v10, v11, *(_QWORD*)a1, *(int**)(a1 + 8));
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildName", byte_1409EA944, a1, v13);
	return 0i64;
}
// 14057C6E0: could not find valid save-restore pair for r15
// 14057C6F7: variable 'v2' is possibly undefined
// 14057C7F4: variable 'v10' is possibly undefined
// 1409EA944: using guessed type _BYTE byte_1409EA944[40];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

