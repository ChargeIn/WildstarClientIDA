#include "../winhttp.h"

//----- (00000001406156F0) ----------------------------------------------------
__int64 __fastcall sub_1406156F0(__int64 a1)
{
	unsigned int v1; // edi
	int* v3; // rsi
	__int64 v4; // rax
	__int64 v6; // r14
	__int64 v7; // rbp
	__int64 v8; // rsi
	unsigned __int64 v9; // rbx
	int v10; // edx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // r14
	__int64 v14; // r15
	unsigned int v15; // eax
	unsigned int v16; // ebx
	unsigned int v17; // eax
	unsigned int v18; // ebx
	__int64 v19; // rdi
	__int64 v20; // rbx
	__int64 v21; // rbx
	__int64 v22; // rdi
	__int64 v23; // rdi
	__int64 v24; // rdi
	__int64 v25; // rdi
	__int64 i; // rdi
	__int64 j; // rbx
	__int64 v28; // rcx
	char v30[8]; // [rsp+40h] [rbp-58h] BYREF
	int* v31; // [rsp+48h] [rbp-50h]
	__int64 v33; // [rsp+58h] [rbp-40h]
	char v34[8]; // [rsp+60h] [rbp-38h] BYREF
	__int64 v35; // [rsp+68h] [rbp-30h]
	__int64 v36; // [rsp+70h] [rbp-28h]

	v1 = 0;
	v3 = 0i64;
	v31 = 0i64;
	v33 = 0i64;
	v4 = 0i64;
	while (asc_140B243F4[++v4] != 0)
		;
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v31 = v3;
		v33 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t", 2 * v6);
	if ((int*)((char*)v3 + 2 * v6))
		*((_WORD*)v3 + v6) = 0;
	sub_14018F570((__int64)v34, a1, (__int64)v30, 34, 92);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v7 = v36;
	v8 = v35;
	v9 = (v36 - v35) >> 5;
	if (!v9)
	{
	LABEL_28:
		v21 = qword_140C63748;
		v22 = *(_QWORD*)(qword_140C63748 + 56);
		if (v22 != *(_QWORD*)(qword_140C63748 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v22 + 8))(*(_QWORD*)v22, L"usage: soundtarget <type> ");
				v22 += 16i64;
			} while (v22 != *(_QWORD*)(v21 + 64));
			v21 = qword_140C63748;
		}
		v23 = *(_QWORD*)(v21 + 56);
		if (v23 != *(_QWORD*)(v21 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v23 + 8))(*(_QWORD*)v23, L"       type = play <event id>");
				v23 += 16i64;
			} while (v23 != *(_QWORD*)(v21 + 64));
			v21 = qword_140C63748;
		}
		v24 = *(_QWORD*)(v21 + 56);
		if (v24 != *(_QWORD*)(v21 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v24 + 8))(*(_QWORD*)v24, L"       type = stop");
				v24 += 16i64;
			} while (v24 != *(_QWORD*)(v21 + 64));
			v21 = qword_140C63748;
		}
		v25 = *(_QWORD*)(v21 + 56);
		if (v25 != *(_QWORD*)(v21 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v25 + 8))(
					*(_QWORD*)v25,
					L"       type = switch <group name> <selection name>");
				v25 += 16i64;
			} while (v25 != *(_QWORD*)(v21 + 64));
			v21 = qword_140C63748;
		}
		for (i = *(_QWORD*)(v21 + 56); i != *(_QWORD*)(v21 + 64); i += 16i64)
			(*(void(__fastcall**)(_QWORD, const wchar_t*))(i + 8))(
				*(_QWORD*)i,
				L"       type = rtpc <name> <value (number)>");
		v1 = -2147024809;
		goto LABEL_43;
	}
	v10 = 0;
	v11 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v11)
		v10 = *(_DWORD*)(v11 + 264);
	v12 = sub_1403D90D0(qword_140C65898, v10);
	if (v12)
	{
		v13 = *(_QWORD*)(v12 + 5512);
		if (v13)
		{
			v14 = *(_QWORD*)(v8 + 8);
			if (!(unsigned int)sub_14018E2C0(v14, L"stop"))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 48i64))(v13);
				goto LABEL_43;
			}
			if ((unsigned int)sub_14018E2C0(v14, L"play"))
			{
				if ((unsigned int)sub_14018E2C0(v14, L"switch"))
				{
					if (!(unsigned int)sub_14018E2C0(v14, L"rtpc") && v9 > 2)
					{
						v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 112i64))(
							qword_140C65848,
							*(_QWORD*)(v8 + 40));
						sub_1407DFE80(*(WCHAR**)(v8 + 72), 0i64);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 80i64))(v13, v18);
						goto LABEL_43;
					}
				}
				else if (v9 > 2)
				{
					v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 112i64))(
						qword_140C65848,
						*(_QWORD*)(v8 + 40));
					v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 112i64))(
						qword_140C65848,
						*(_QWORD*)(v8 + 72));
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v13 + 72i64))(v13, v16, v17);
					goto LABEL_43;
				}
			}
			else if (v9 > 1)
			{
				v15 = sub_14018E820(*(WCHAR**)(v8 + 40));
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v13 + 16i64))(
					v13,
					v15,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
				goto LABEL_43;
			}
			goto LABEL_28;
		}
	}
	v19 = qword_140C63748;
	v20 = *(_QWORD*)(qword_140C63748 + 56);
	if (v20 != *(_QWORD*)(qword_140C63748 + 64))
	{
		do
		{
			(*(void(__fastcall**)(_QWORD, const wchar_t*))(v20 + 8))(*(_QWORD*)v20, L"Unable to find target for sounds");
			v20 += 16i64;
		} while (v20 != *(_QWORD*)(v19 + 64));
	}
	v1 = -2147467259;
LABEL_43:
	for (j = v8; j != v7; j += 32i64)
	{
		v28 = *(_QWORD*)(j + 8);
		if (v28)
			sub_14018B900(v28, 0);
	}
	if (v8)
		sub_14018B900(v8, 0);
	return v1;
}
// 140B243F4: using guessed type wchar_t asc_140B243F4[3];
// 140B26F78: using guessed type wchar_t aUsageSoundtarg[27];
// 140B270F0: using guessed type wchar_t aRtpc[5];
// 140B27100: using guessed type wchar_t aPlay[5];
// 140B27110: using guessed type wchar_t aSwitch[7];
// 140B27120: using guessed type wchar_t aUnableToFindTa[33];
// 140B27168: using guessed type wchar_t aStop[5];
// 140B27248: using guessed type wchar_t aTypeStop[19];
// 140B27270: using guessed type wchar_t aTypeSwitchGrou[51];
// 140B27330: using guessed type wchar_t aTypeRtpcNameVa[43];
// 140B27388: using guessed type wchar_t aTypePlayEventI[30];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406156F0: using guessed type char var_58[8];
// 1406156F0: using guessed type char var_38[8];

