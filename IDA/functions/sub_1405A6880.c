#include "../winhttp.h"

//----- (00000001405A6880) ----------------------------------------------------
void __fastcall sub_1405A6880(_QWORD* a1)
{
	unsigned __int64 i; // rbx
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned __int64 v5; // rdi
	__int64 v6; // r12
	unsigned __int64 j; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // edx
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // ebp
	__int64 v18; // r14
	bool v19; // cc
	__int64 v20; // rdi
	unsigned int* v21; // rdi
	__int64 k; // rsi
	unsigned int v23; // ebx
	__int64 v24; // rax
	unsigned __int64 v25; // rcx
	_WORD* v26; // rdx
	__int128 v27; // [rsp+20h] [rbp-58h] BYREF
	__int128 v28[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v29; // [rsp+80h] [rbp+8h] BYREF
	__int64 v30; // [rsp+88h] [rbp+10h] BYREF

	sub_1405A7700((__int64)(a1 + 3497));
	sub_140019490(a1 + 3497);
	for (i = 0i64; i < a1[339]; ++i)
	{
		v3 = *(_QWORD*)(a1[338] + 8 * i);
		if (v3)
		{
			v4 = sub_1405A4B80(v3, 1);
			if (v4)
			{
				*(_QWORD*)&v27 = sub_1405A5C90;
				DWORD2(v27) = 0;
				v28[0] = v27;
				sub_1405A5FE0((__int64)a1, v4, (__int64)v28);
			}
		}
	}
	v27 = 0ui64;
	sub_1403D6710((__int64)(a1 + 20), (__int64*)&v27);
	sub_1403D6710((__int64)(a1 + 23), (__int64*)&v27);
	sub_1403D6710((__int64)(a1 + 35), (__int64*)&v27);
	sub_1403D6710((__int64)(a1 + 38), (__int64*)&v27);
	v5 = *((_QWORD*)&v27 + 1);
	v6 = v27;
	for (j = 0i64; j < v5; ++j)
	{
		v8 = *(_QWORD*)(v6 + 8 * j);
		v9 = *(_QWORD*)(v8 + 80);
		if (!v9)
			v9 = *(_QWORD*)(v8 + 64) + 156i64;
		v10 = *(_DWORD*)(v9 + 128);
		if (v10)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898)
			{
				v11 = *(_QWORD*)(qword_140C65898 + 32024);
				v12 = v11;
				v13 = *(_QWORD*)(v11 + 8);
				while (v13)
				{
					if (*(_DWORD*)(v13 + 32) < v10)
					{
						v13 = *(_QWORD*)(v13 + 24);
					}
					else
					{
						v12 = v13;
						v13 = *(_QWORD*)(v13 + 16);
					}
				}
				if (v12 == v11 || v10 < *(_DWORD*)(v12 + 32))
				{
					v30 = *(_QWORD*)(qword_140C65898 + 32024);
					v14 = &v30;
				}
				else
				{
					v29 = v12;
					v14 = &v29;
				}
				v15 = *v14;
				if (v15 != v11)
				{
					v16 = *(_QWORD*)(v15 + 40);
					if (v16)
						goto LABEL_24;
				}
			}
			v16 = sub_1407A0FD0(qword_140C65B70, v10);
			if (v16)
			{
			LABEL_24:
				*(_QWORD*)&v27 = sub_1405A5C90;
				DWORD2(v27) = 0;
				v28[0] = v27;
				sub_1405A5FE0((__int64)a1, v16, (__int64)v28);
			}
		}
	}
	v17 = 0;
	v18 = 40i64;
	v19 = 1;
	do
	{
		if (v19)
		{
			v20 = *(_QWORD*)(v18 + qword_140C65A08);
			if (v20)
			{
				v21 = (unsigned int*)(v20 + 44);
				for (k = 3i64; k; --k)
				{
					v23 = *v21;
					if (*v21)
					{
						if (qword_140C63840)
						{
							v24 = qword_140C63840(off_140A6DFF8, v23, qword_140C63858);
							goto LABEL_36;
						}
						if (!dword_140C64C04 && (int)sub_140248CA0() >= 0)
						{
							v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(
								qword_140C63B40,
								v23);
						LABEL_36:
							if (v24)
							{
								v25 = *(_QWORD*)(v24 + 24);
								if (v25)
								{
									if (v25 <= qword_140C3FE70)
										v26 = (_WORD*)(v25 + qword_140C3FE68);
									else
										v26 = 0i64;
								}
								else
								{
									v26 = 0i64;
								}
								sub_1405A5C90((__int64)a1, v26);
							}
						}
					}
					++v21;
				}
			}
		}
		++v17;
		v18 += 8i64;
		v19 = v17 < 28;
	} while ((unsigned int)v17 < 0x1C);
	sub_1405A5C90((__int64)a1, L"Art\\FX\\Test\\SLee\\overkill_death.m3");
	sub_1405A5C90((__int64)a1, L"Art\\FX\\Model\\Props\\Explosion_Smoke\\Explosion_Smoke.m3");
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
}
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140B20F00: using guessed type wchar_t aArtFxModelProp_17[54];
// 140B20FC0: using guessed type wchar_t aArtFxTestSleeO[35];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;
// 140C65B70: using guessed type __int64 qword_140C65B70;

