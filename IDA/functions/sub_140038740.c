#include "../winhttp.h"

//----- (0000000140038740) ----------------------------------------------------
void __fastcall sub_140038740(__int64 a1, unsigned __int16* a2, int* a3)
{
	__int64 v3; // r15
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // [rsp+20h] [rbp-38h] BYREF
	__int64 v14; // [rsp+28h] [rbp-30h]

	v3 = *(_QWORD*)(a1 + 176);
	if (a3)
	{
		v7 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v7;
			while (*((_WORD*)a3 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, a3, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		*(_QWORD*)(a1 + 176) = v9;
	}
	else
	{
		*(_QWORD*)(a1 + 176) = 0i64;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	*(_DWORD*)(a1 + 168) = 3;
	v11 = sub_14018F0E0(&v13, a2)[1];
	v12 = dword_140C67250;
	dword_140C67250 = 0;
	dword_140C67254 = v12;
	if ((_QWORD)xmmword_140C67080)
		sub_1400B4720(v11);
	if (v14)
		sub_14018B900(v14, 0);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67250: using guessed type int dword_140C67250;
// 140C67254: using guessed type int dword_140C67254;

