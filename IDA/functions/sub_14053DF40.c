//----- (000000014053DF40) ----------------------------------------------------
void __fastcall sub_14053DF40(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // esi
	__int64 v7; // rax
	int* v8; // rbp
	__int64 v9; // rdx
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rsi
	__int64 v18; // [rsp+40h] [rbp-18h] BYREF
	unsigned int v19; // [rsp+48h] [rbp-10h]

	if (a2 <= 0x14B)
		sub_140237240(a2);
	sub_1400035B0();
	v4 = *(_QWORD*)(a1 + 528);
	*(_DWORD*)(a1 + 844) = a2;
	*(_DWORD*)(a1 + 336) = 5;
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 88i64))(v4);
		v5 = *(_QWORD*)(a1 + 528);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 528) = 0i64;
		}
	}
	v6 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64);
	v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v8 = (int*)v7;
	if (v7)
	{
		if (v6 == 8)
		{
			v9 = *(_QWORD*)(a1 + 312);
			if (*(_QWORD*)(v9 + 88))
			{
				if (!*(_DWORD*)(a1 + 324) && *(_DWORD*)(a1 + 332))
					sub_14046B1E0(v7, v9, a1);
			}
		}
	}
	sub_14053FD20((const void***)a1);
	sub_14053FF40(a1, 0);
	v10 = *(_QWORD*)(a1 + 456);
	while (v10)
	{
		v11 = v10;
		v10 = *(_QWORD*)(v10 + 8);
		sub_140624200(v11);
	}
	if (v8)
	{
		v12 = sub_140561C30(qword_140C65B70, v8[1408]);
		if (!v12 && *(int**)(qword_140C65898 + 120) == v8)
		{
			v13 = sub_14039DF50(qword_140C65898);
			if (v13)
				v12 = sub_1404695E0(v13);
			else
				v12 = 0i64;
		}
		if (v12 == a1)
		{
			v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64);
			if (v14 != 2 && v14 != 7)
				sub_1404698A0((__int64)v8);
		}
	}
	v19 = a2;
	v18 = a1;
	v15 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v15 && *(_DWORD*)(a1 + 340) == *(_DWORD*)(v15 + 8))
	{
		v16 = *(_QWORD*)(qword_140C65898 + 27856);
		if (v16)
		{
			do
			{
				v17 = *(_QWORD*)(v16 + 40);
				*(_QWORD*)(v16 + 48) = 0i64;
				*(_QWORD*)(v16 + 56) = &v18;
				if (*(_DWORD*)v16)
				{
					if (*(_DWORD*)v16 == 1)
						(*(void(__fastcall**)(_QWORD, _QWORD))(v16 + 16))(*(_QWORD*)(v16 + 8), *(_QWORD*)(v16 + 24));
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(v16 + 16))(*(_QWORD*)(v16 + 8));
				}
				*(_QWORD*)(v16 + 48) = 0i64;
				*(_QWORD*)(v16 + 56) = 0i64;
				v16 = v17;
			} while (v17);
		}
		if (!v8[1417])
		{
			v8[1416] = 0;
			sub_140195D70((__int64)(v8 + 1418));
		}
	}
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

