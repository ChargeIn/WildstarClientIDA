#include "../winhttp.h"

//----- (0000000140690C20) ----------------------------------------------------
__int64 __fastcall sub_140690C20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rsi
	int* v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // [rsp+20h] [rbp-108h] BYREF
	__int64 v20; // [rsp+28h] [rbp-100h]
	__int64 v21; // [rsp+40h] [rbp-E8h] BYREF
	char v22[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v23; // [rsp+50h] [rbp-D8h]
	_WORD* v24; // [rsp+58h] [rbp-D0h]
	__int64 v25; // [rsp+100h] [rbp-28h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5)
		&& (v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6)))
	{
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5) + 64))
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5);
			v8 = sub_14020FD40(*(_DWORD*)(v7 + 64));
			v9 = v8;
			if (v8)
			{
				if (*(_DWORD*)(v8 + 28))
				{
					sub_1404DDE90(&v21);
					v11 = sub_14018B280(96i64, 0);
					if (v11)
						v12 = (_QWORD*)sub_1404DB7E0((__int64)v11, *(_QWORD*)(qword_140C65898 + 120));
					else
						v12 = 0i64;
					sub_1400B7480((__int64)&v21, v12);
					v14 = (int*)sub_14034BDD0(v13, *(_DWORD*)(v9 + 28));
					if (v14)
					{
						v15 = 0i64;
						if (*(_WORD*)v14)
						{
							do
								++v15;
							while (*((_WORD*)v14 + v15));
						}
						sub_14001C480((__int64)v22, v14, (int*)((char*)v14 + 2 * v15));
					}
					else if (v23 != v24)
					{
						*v23 = 0;
						v24 = v23;
					}
					v16 = sub_1400B7660(&v21);
					v17 = (unsigned __int64*)sub_14018F0E0(&v19, *(unsigned __int16**)(v16 + 8))[1];
					if (v17)
					{
						v18 = -1i64;
						do
							++v18;
						while (*((_BYTE*)v17 + v18));
						sub_140058710((__int64)a1, v17, v18);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v20)
						sub_14018B900(v20, 0);
					if (v25)
						sub_14018B900(v25, 0);
					sub_1400B7390(&v21);
				}
				else
				{
					sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D153F, 0i64);
				}
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140690D9F: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140690C20: using guessed type char var_E0[8];

