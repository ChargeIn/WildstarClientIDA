#include "../winhttp.h"

//----- (0000000140892A90) ----------------------------------------------------
__int64 __fastcall sub_140892A90(__int64 a1, __int64 a2, __int64* a3, unsigned int a4)
{
	__int64* v4; // rdi
	unsigned int v6; // ebx
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rbx
	int v10; // eax
	__int64 v12; // rax
	__int64 v13; // rdi
	int v14; // edi
	int v15; // ebx
	int v16; // [rsp+20h] [rbp-28h]

	v4 = a3;
	v6 = 0;
	v16 = 0;
	if (!a4)
		return 1i64;
	while (1)
	{
		v7 = *v4;
		*v4 += 28i64;
		if (*(_DWORD*)v7)
			break;
		v8 = sub_1408819F0(dword_140C10F20, 80i64);
		v9 = v8;
		if (!v8)
			return 2i64;
		*(_QWORD*)(v8 + 8) = a2;
		*(_DWORD*)(v8 + 24) = 50000;
		*(_DWORD*)(v8 + 16) = 0;
		*(_QWORD*)v8 = off_1409A8A78;
		*(_QWORD*)(v8 + 32) = 0i64;
		*(_QWORD*)(v8 + 40) = 0i64;
		*(_DWORD*)(v8 + 48) = 0;
		*(_DWORD*)(v8 + 56) = 0;
		*(_QWORD*)(v8 + 64) = 0i64;
		*(_WORD*)(v8 + 72) = 256;
		*(_BYTE*)(v8 + 74) = 0;
		*(_WORD*)(v8 + 76) = 0;
		if (!sub_140892A10(a2 + 32, v8))
		{
			v14 = dword_140C10F20;
			(**(void(__fastcall***)(__int64, _QWORD))v9)(v9, 0i64);
			sub_140881720(v14, v9);
			return 2i64;
		}
		*(_WORD*)(v9 + 76) = *(_WORD*)(v7 + 24);
		*(_WORD*)(v9 + 20) = *(_WORD*)(v7 + 16);
		*(_DWORD*)(v9 + 24) = *(_DWORD*)(v7 + 20);
		v10 = *(_DWORD*)(v7 + 12);
		*(_BYTE*)(v9 + 72) = 0;
		*(_DWORD*)(v9 + 56) = v10;
		*(_BYTE*)(v9 + 73) = *(_BYTE*)(v7 + 27);
		*(_DWORD*)(v9 + 16) = *(_DWORD*)(v7 + 4);
		if (*(_DWORD*)(v7 + 8) && (unsigned int)sub_140892A90(a1, v9, v4) != 1)
			return 2i64;
		v6 = v16;
	LABEL_8:
		if (*(_DWORD*)(v7 + 20) != 50000)
			*(_BYTE*)(a2 + 72) = 1;
		v16 = ++v6;
		if (v6 >= a4)
			return 1i64;
	}
	v12 = sub_1408819F0(dword_140C10F20, 40i64);
	v13 = v12;
	if (!v12)
		return 2i64;
	*(_QWORD*)(v12 + 8) = a2;
	*(_DWORD*)(v12 + 16) = 0;
	*(_QWORD*)v12 = off_1409A8A88;
	*(_DWORD*)(v12 + 24) = 50000;
	if (sub_140892A10(a2 + 32, v12))
	{
		*(_WORD*)(v13 + 20) = *(_WORD*)(v7 + 16);
		*(_DWORD*)(v13 + 24) = *(_DWORD*)(v7 + 20);
		*(_DWORD*)(v13 + 32) = *(_DWORD*)v7;
		*(_DWORD*)(v13 + 16) = *(_DWORD*)(v7 + 4);
		sub_140898080(a2);
		v4 = a3;
		goto LABEL_8;
	}
	v15 = dword_140C10F20;
	(**(void(__fastcall***)(__int64, _QWORD))v13)(v13, 0i64);
	sub_140881720(v15, v13);
	return 2i64;
}
// 1409A8A78: using guessed type __int64 (__fastcall *off_1409A8A78[4])();
// 1409A8A88: using guessed type __int64 (__fastcall *off_1409A8A88[2])();
// 140C10F20: using guessed type int dword_140C10F20;

