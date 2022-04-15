#include "../winhttp.h"

//----- (0000000140345310) ----------------------------------------------------
_DWORD* __fastcall sub_140345310(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
	unsigned int v6; // r14d
	unsigned int v7; // ebx
	__int64 v9; // r15
	unsigned int v12; // r12d
	__int64 v13; // rbp
	unsigned __int64 v14; // rdx
	__int64 v15; // rdi
	__int64 v16; // r15
	__int64 v17; // rbp
	int* v18; // r14
	int v19; // eax
	__int64 v20; // rcx
	_DWORD* result; // rax
	unsigned int v22; // ebx
	__int64 v25; // [rsp+A8h] [rbp+30h]

	v6 = a3;
	v7 = 0;
	if ((a4 & 0x10000) != 0)
		v7 = 0x10000;
	v9 = a2;
	if ((a4 & 0x20000) != 0)
		v7 |= 0x20000u;
	v12 = 0;
	v13 = 0i64;
	if (a6)
	{
		v14 = *(_QWORD*)(a6 + 24);
		if (v14)
		{
			if (*(_QWORD*)(a1 + 2544) < v14)
				sub_1401C2DF0((__int64*)(a1 + 2536), v14);
			v12 = *(_DWORD*)(a6 + 24);
			v13 = *(_QWORD*)(a1 + 2536);
			v25 = v13;
			if (v12)
			{
				v15 = v13 + 16;
				v16 = 0i64;
				v17 = v12;
				do
				{
					v18 = (int*)(v16 + *(_QWORD*)(a6 + 16));
					v19 = *v18;
					*(_DWORD*)(v15 - 12) = 1;
					*(_DWORD*)(v15 + 12) = 0;
					*(_DWORD*)(v15 - 16) = v19;
					v20 = *((_QWORD*)v18 + 66);
					if (v20)
					{
						*(_QWORD*)v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 32i64))(v20);
						*(_DWORD*)(v15 + 8) = (*(__int64(__fastcall**)(_QWORD))(**((_QWORD**)v18 + 66) + 16i64))(*((_QWORD*)v18 + 66));
						*(_QWORD*)(v15 - 8) = 0i64;
					}
					else
					{
						*(_QWORD*)v15 = 0i64;
						*(_DWORD*)(v15 + 8) = 0;
						*(_QWORD*)(v15 - 8) = v18 + 1;
					}
					v16 += 536i64;
					v15 += 32i64;
					--v17;
				} while (v17);
				v13 = v25;
				v6 = a3;
				v9 = a2;
			}
		}
	}
	if (a5 && *(_QWORD*)a5)
	{
		if ((a4 & 4) != 0)
			v7 |= 2u;
		if ((a4 & 2) != 0)
			v7 |= 4u;
		if ((a4 & 0x80u) != 0)
			v7 |= 0x80u;
		if ((a4 & 0x100) != 0)
			v7 |= 0x100u;
		if ((a4 & 0x200) != 0)
			v7 |= 0x200u;
		if ((a4 & 0x400) != 0)
			v7 |= 0x400u;
		if ((a4 & 0x800) != 0)
			v7 |= 0x800u;
		if ((a4 & 0x1000) != 0)
			v7 |= 0x1000u;
		if ((a4 & 0x2000) != 0)
			v7 |= 0x2000u;
		if ((a4 & 0x4000) != 0)
			v7 |= 0x4000u;
		if ((a4 & 0x80000001) != 0)
			v7 |= 1u;
		if ((dword_140DC11F8 & 1) == 0)
		{
			dword_140DC11F8 |= 1u;
			sub_1401AD620((__int64)&unk_140DC1200, L"WWise : Last Event");
		}
		sub_1401ADA40((__int64)&unk_140DC1200, v6);
		if ((a4 & 0x40000000) != 0)
			(*(void(__fastcall**)(__int64, _QWORD))a5)(0x40000000i64, *(_QWORD*)(a5 + 8));
		result = sub_140827B80(v6, v9, v7, (__int64)sub_1403451D0, a5, v12, v13, 0);
		v22 = (unsigned int)result;
		if (!(_DWORD)result && a4 < 0)
		{
			(*(void(__fastcall**)(__int64, _QWORD))a5)(0x80000000i64, *(_QWORD*)(a5 + 8));
			return (_DWORD*)v22;
		}
	}
	else
	{
		if ((dword_140DC11F8 & 2) == 0)
		{
			dword_140DC11F8 |= 2u;
			sub_1401AD620((__int64)&unk_140DC1320, L"WWise : Last Event");
		}
		sub_1401ADA40((__int64)&unk_140DC1320, v6);
		return sub_140827B80(v6, v9, 0, 0i64, 0i64, 0, 0i64, 0);
	}
	return result;
}
// 140AF44D8: using guessed type wchar_t aWwiseLastEvent_0[19];
// 140AF4500: using guessed type wchar_t aWwiseLastEvent[19];
// 140DC11F8: using guessed type int dword_140DC11F8;

