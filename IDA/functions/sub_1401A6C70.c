#include "../winhttp.h"

//----- (00000001401A6C70) ----------------------------------------------------
__int64 __fastcall sub_1401A6C70(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	__int64 v5; // rsi
	int* v6; // rbx
	int* v7; // rax
	int v8; // ecx
	bool v9; // zf
	__int64 v10; // rbx

	v2 = *(_QWORD*)(a1 + 96);
	v5 = 0i64;
	if (v2)
	{
		while (1)
		{
			v6 = a2;
			v7 = (int*)sub_1401A4F40(v2 + 8);
			if (v7 == a2)
				return v2;
			v8 = 0;
			if (*(_WORD*)v7)
			{
				do
				{
					if (!*(_WORD*)v6 || *(_WORD*)v7 != *(_WORD*)v6)
						break;
					v9 = v8 == 0x7FFFFFFF;
					if (v8 == 0x7FFFFFFF)
						goto LABEL_9;
					v7 = (int*)((char*)v7 + 2);
					v6 = (int*)((char*)v6 + 2);
					++v8;
				} while (*(_WORD*)v7);
				v9 = v8 == 0x7FFFFFFF;
			LABEL_9:
				if (v9)
					return v2;
			}
			if (!*(_WORD*)v7 && !*(_WORD*)v6)
				return v2;
			v5 = v2;
			v2 = *(_QWORD*)(v2 + 56);
			if (!v2)
				goto LABEL_13;
		}
	}
	else
	{
	LABEL_13:
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 256i64) + 16i64))(*(_QWORD*)(a1 + 8) + 256i64);
		if (v10)
		{
			*(_QWORD*)v10 = off_140B5EB98;
			*(_DWORD*)(v10 + 8) = 0;
			*(_QWORD*)(v10 + 16) = 0i64;
			*(_QWORD*)(v10 + 24) = 0i64;
			*(_DWORD*)(v10 + 32) = 0;
			*(_QWORD*)(v10 + 40) = 0i64;
			*(_QWORD*)(v10 + 48) = 0i64;
			*(_QWORD*)(v10 + 56) = 0i64;
			*(_QWORD*)(v10 + 64) = 0i64;
		}
		else
		{
			v10 = 0i64;
		}
		*(_QWORD*)(v10 + 64) = *(_QWORD*)(a1 + 8) + 256i64;
		if (v5)
			*(_QWORD*)(v5 + 56) = v10;
		else
			*(_QWORD*)(a1 + 96) = v10;
		sub_1401A4C50(v10 + 8, a2);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 64) + 32i64))(*(_QWORD*)(v10 + 64));
		return v10;
	}
}
// 1401A6D4D: conditional instruction was optimized away because rdi.8!=0
// 140B5EB98: using guessed type __int64 (__fastcall *off_140B5EB98[18])();

