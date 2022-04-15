#include "../winhttp.h"

//----- (00000001404D3470) ----------------------------------------------------
__int64 __fastcall sub_1404D3470(__int64 a1, __int64 a2)
{
	int* v4; // rsi
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	unsigned __int64 v9; // r15
	__int64 v10; // r12
	__int64 v11; // r13
	int* v12; // rsi
	__int64 v13; // rbx
	int* v14; // rax
	__int64 v15; // rdi
	unsigned __int64 v16; // rbx
	__int64 v18; // [rsp+20h] [rbp-48h] BYREF
	int v19; // [rsp+28h] [rbp-40h]
	__int64* v21; // [rsp+78h] [rbp+10h]

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	v4 = *(int**)(a2 + 24);
	if (v4)
	{
		v5 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v5;
			while (*((_WORD*)v4 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v4, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 24) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v9 = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v21 = (__int64*)(a1 + 32);
	if (!*(_DWORD*)(a2 + 32))
		return a1;
	v10 = 0i64;
	do
	{
		v11 = *(_QWORD*)(a2 + 40);
		v12 = *(int**)(v11 + v10);
		if (v12)
		{
			v13 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			v14 = sub_14018B280(2 * v13 + 18, 0);
			if (v14)
			{
				*(_QWORD*)v14 = off_140B55060;
				*((_QWORD*)v14 + 1) = v13;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = (__int64)(v14 + 4);
			v16 = 2 * v13;
			sub_1407DB590(v14 + 4, v12, v16);
			*(_WORD*)(v16 + v15) = 0;
			v18 = v15;
		}
		else
		{
			v18 = 0i64;
		}
		v19 = *(_DWORD*)(v11 + v10 + 8);
		sub_1404D4C70(v21, (__int64)&v18);
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
		++v9;
		v10 += 16i64;
	} while (v9 < *(unsigned int*)(a2 + 32));
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

