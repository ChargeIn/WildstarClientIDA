#include "../winhttp.h"

//----- (000000014067B840) ----------------------------------------------------
__int64 __fastcall sub_14067B840(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int16* v4; // rax
	int* v5; // r14
	unsigned __int64 v6; // rdi
	int* v7; // rax
	unsigned __int16* v8; // rbx
	unsigned __int64 v9; // rdi
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = sub_14034BDD0(**(_QWORD**)(v3 + 48), *(_DWORD*)(**(_QWORD**)(v3 + 48) + 24i64));
		v5 = (int*)v4;
		if (v4)
		{
			v6 = 0i64;
			if (*v4)
			{
				do
					++v6;
				while (v4[v6]);
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
			v8 = (unsigned __int16*)(v7 + 4);
			v9 = v6;
			sub_1407DB590(v7 + 4, v5, v9 * 2);
			v8[v9] = 0;
		}
		else
		{
			v8 = 0i64;
		}
		v10 = (unsigned __int64*)sub_14018F0E0(&v15, v8)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v16)
			sub_14018B900(v16, 0);
		if (v8)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 8);
	}
	else
	{
		v12 = (unsigned __int64*)sub_14018F0E0(&v15, word_1409F510C)[1];
		if (v12)
		{
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v12 + v13));
			sub_140058710((__int64)a1, v12, v13);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v16)
			sub_14018B900(v16, 0);
	}
	return 1i64;
}
// 1409F510C: using guessed type unsigned __int16 word_1409F510C[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

