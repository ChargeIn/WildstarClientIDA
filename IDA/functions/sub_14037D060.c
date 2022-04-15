#include "../winhttp.h"

//----- (000000014037D060) ----------------------------------------------------
__int64 __fastcall sub_14037D060(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	char v7; // si
	__int64 v8; // rdi
	__int64 v9; // rcx
	unsigned int v10; // esi
	_QWORD* v11; // rdi
	__int64 v12; // rcx
	unsigned int v13; // edi
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned int v16; // ebp
	__int64* v17; // rsi
	__int64 v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // rcx
	_QWORD* v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rcx
	int v24[10]; // [rsp+20h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 40) & 1) == 0)
	{
		if (*(_QWORD*)(a1 + 1448))
		{
			result = sub_14037CC30(a1, a2);
			if (!(_DWORD)result)
				return result;
		}
		*(_DWORD*)(a1 + 40) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 40) & 2) == 0)
	{
		sub_14037E410(a1);
		*(_DWORD*)(a1 + 40) |= 2u;
	}
	if ((*(_BYTE*)(a1 + 40) & 4) == 0)
	{
		sub_14037EAB0(a1);
		*(_DWORD*)(a1 + 40) |= 4u;
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
	}
	if ((*(_BYTE*)(a1 + 40) & 8) == 0)
	{
		sub_14037EBE0(a1);
		*(_DWORD*)(a1 + 40) |= 8u;
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
	}
	if ((*(_BYTE*)(a1 + 40) & 0x10) == 0)
	{
		sub_14037ED10(a1);
		*(_DWORD*)(a1 + 40) |= 0x10u;
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
	}
	if ((*(_BYTE*)(a1 + 40) & 0x20) == 0)
	{
		sub_14037EE40(a1);
		*(_DWORD*)(a1 + 40) |= 0x20u;
	}
	if ((*(_BYTE*)(a1 + 40) & 0x40) == 0)
	{
		sub_14037EF80(a1);
		*(_DWORD*)(a1 + 40) |= 0x40u;
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
	}
	if (*(char*)(a1 + 40) >= 0)
	{
		sub_14037F250(a1);
		*(_DWORD*)(a1 + 40) |= 0x80u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x100) == 0)
	{
		sub_14037F370(a1);
		*(_DWORD*)(a1 + 40) |= 0x100u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x200) == 0)
	{
		v7 = 1;
		if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 0x60) == 0)
			goto LABEL_31;
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48i64);
		if (!v8)
			goto LABEL_31;
		do
		{
			v9 = *(_QWORD*)(v8 + 8);
			if (a3)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 40i64))(v9, a2))
					return 0i64;
			}
			else
			{
				v24[0] = 0;
				if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v9 + 40i64))(v9, v24))
					v7 = 0;
			}
			v8 = *(_QWORD*)(v8 + 24);
		} while (v8);
		if (v7)
			LABEL_31:
		*(_DWORD*)(a1 + 40) |= 0x200u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x400) == 0)
	{
		if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 4) != 0)
		{
			v10 = 0;
			v11 = (_QWORD*)(a1 + 120);
			do
			{
				v12 = *(v11 - 4);
				if (v12)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 32i64))(v12, a2))
						return 0i64;
				}
				if (*v11 && !(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v11 + 32i64))(*v11, a2))
					return 0i64;
				++v10;
				++v11;
			} while (v10 < 4);
		}
		*(_DWORD*)(a1 + 40) |= 0x400u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x800) == 0)
	{
		sub_14037F750(a1);
		*(_DWORD*)(a1 + 40) |= 0x800u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x1000) == 0)
	{
		if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 0x10) != 0)
		{
			v13 = 0;
			if (*(_QWORD*)(a1 + 1032))
			{
				v14 = 0i64;
				do
				{
					v15 = *(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v14);
					if (v15)
					{
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 40i64))(v15, a2))
							return 0i64;
					}
					v14 = ++v13;
				} while ((unsigned __int64)v13 < *(_QWORD*)(a1 + 1032));
			}
		}
		*(_DWORD*)(a1 + 40) |= 0x1000u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x2000) == 0)
	{
		sub_1403829C0(a1);
		*(_DWORD*)(a1 + 40) |= 0x2000u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x4000) == 0)
	{
		sub_140382AF0(a1);
		*(_DWORD*)(a1 + 40) |= 0x4000u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x8000) == 0)
	{
		if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 0x10) != 0)
		{
			v16 = 0;
			v17 = (__int64*)(a1 + 1128);
			do
			{
				v18 = *v17;
				if (*v17 && !*(_DWORD*)(v18 + 32))
				{
					v19 = *(_QWORD*)(v18 + 80);
					if (v19 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 32i64))(v19, a2))
						return 0i64;
					v20 = *(_QWORD*)(v18 + 88);
					if (v20)
					{
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v20 + 32i64))(v20, a2))
							return 0i64;
					}
					*(_DWORD*)(v18 + 32) = 1;
				}
				++v16;
				++v17;
			} while (v16 < 4);
		}
		*(_DWORD*)(a1 + 40) |= 0x8000u;
	}
	if ((*(_DWORD*)(a1 + 40) & 0x10000) == 0)
	{
		sub_140382C20(a1);
		*(_DWORD*)(a1 + 40) |= 0x10000u;
	}
	v21 = *(_QWORD**)(a1 + 1464);
	if (v21)
		*v21 = *(_QWORD*)(a1 + 1472);
	v22 = *(_QWORD*)(a1 + 1472);
	if (v22)
		*(_QWORD*)(v22 + 1464) = *(_QWORD*)(a1 + 1464);
	v23 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 1464) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	--* (_DWORD*)(v23 + 2168);
	return 1i64;
}
// 14037D060: using guessed type int var_28[10];

