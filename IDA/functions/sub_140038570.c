#include "../winhttp.h"

//----- (0000000140038570) ----------------------------------------------------
void __fastcall sub_140038570(__int64 a1, int* a2, int* a3)
{
	__int64 v6; // r15
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	__int64 v11; // rbp
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx

	if (a2 && a3)
	{
		v6 = *(_QWORD*)(a1 + 176);
		v7 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v7;
			while (*((_WORD*)a2 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*(_QWORD*)v8 = off_140B55060;
			*((_QWORD*)v8 + 1) = v7;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, a2, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		*(_QWORD*)(a1 + 176) = v9;
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		v11 = *(_QWORD*)(a1 + 184);
		v12 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v12;
			while (*((_WORD*)a3 + v12));
		}
		v13 = sub_14018B280(2 * v12 + 18, 0);
		if (v13)
		{
			*(_QWORD*)v13 = off_140B55060;
			*((_QWORD*)v13 + 1) = v12;
		}
		else
		{
			v13 = 0i64;
		}
		v14 = v13 + 4;
		v15 = 2 * v12;
		sub_1407DB590(v13 + 4, a3, v15);
		*(_WORD*)((char*)v14 + v15) = 0;
		*(_QWORD*)(a1 + 184) = v14;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		if (*(_DWORD*)(qword_140C635F0 + 5900) == 1)
		{
			if (*(_QWORD*)(a1 + 232))
			{
				sub_1400383A0(a1, 196357, 0);
			}
			else
			{
				sub_140039380(a1);
				*(_DWORD*)(a1 + 168) = 7;
			}
		}
		else
		{
			if ((int)sub_1400B4500(v16, *(int**)(a1 + 176), *(unsigned __int16**)(a1 + 184)) < 0)
				return;
			*(_DWORD*)(a1 + 168) = 3;
		}
		sub_14003E470(a1, 516353, 0i64);
	}
	else
	{
		sub_1400383A0(a1, 215, 0);
	}
}
// 1400386CD: variable 'v16' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

