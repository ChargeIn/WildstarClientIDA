#include "../winhttp.h"

//----- (00000001406D50F0) ----------------------------------------------------
char __fastcall sub_1406D50F0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // r14
	int* v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rsi
	bool v11; // zf
	__int64 v12; // rax
	__int64 v13; // rsi
	int v14; // eax
	__int64 v15; // r15
	__int64 v16; // rax
	_QWORD* v17; // rcx
	int v18; // ebx
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	_QWORD* v22; // rsi
	__int64 v23; // rax
	int v24; // ebx
	int* v25; // rsi
	int* v26; // rax
	int v27; // edx
	int v28; // eax
	int v29; // eax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r8
	__int64 v33; // rax
	__int64 v35; // [rsp+20h] [rbp-20h] BYREF
	__int64 v36; // [rsp+28h] [rbp-18h]
	__int64 v37; // [rsp+30h] [rbp-10h]
	int v38; // [rsp+60h] [rbp+20h] BYREF
	int v39; // [rsp+64h] [rbp+24h]

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 664i64))(a1);
	v5 = *(_QWORD*)(a1 + 32) + 3368i64;
	v6 = (int*)v4;
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 352i64))(a1, a2) != 3)
	{
		v7 = *(_QWORD*)(v5 + 72);
		v8 = *(_QWORD*)(v5 + 80) - v7;
		if (v8 != 22 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v7, (__int64)"DDUseItemWithInventory", 0x16ui64))
		{
			if (v8 == 16 && *(_QWORD*)v7 == 0x70536D6574494444i64 && *(_QWORD*)(v7 + 8) == 0x6B6361745374696Ci64)
			{
				v13 = *(_QWORD*)(v5 + 120);
				v38 = BYTE1(v13);
				v39 = (unsigned __int8)v13;
				if (!v6)
					return 0;
				v14 = v6[2];
				if (v14 == 1)
				{
					v15 = qword_140C65898;
					v16 = sub_1403AC780(qword_140C65898 + 160, &v38);
					v17 = (_QWORD*)v16;
					if (!v16)
						return 0;
					v18 = 1;
					if (*(_DWORD*)(v16 + 120))
						v18 = *(_DWORD*)(v16 + 120);
					if (WORD1(v13) == v18)
					{
						sub_1403C17D0(v15, &v38, v6 + 3, 0);
						return 0;
					}
					v35 = 0i64;
					v36 = 0i64;
					v37 = 0i64;
					v19 = *(_QWORD*)v16;
				}
				else
				{
					if (v14 != 2)
						return 0;
					v20 = qword_140C65898;
					v21 = sub_1403AC780(qword_140C65898 + 160, &v38);
					v38 = v6[3];
					v22 = (_QWORD*)v21;
					v39 = v6[4];
					if (*(_DWORD*)(*(_QWORD*)(v21 + 64) + 324i64) != *(_DWORD*)(*(_QWORD*)(sub_1403AC780(v20 + 160, &v38) + 64)
						+ 324i64))
						return 0;
					v17 = v22;
					v35 = 0i64;
					v36 = 0i64;
					v37 = 0i64;
					v19 = *v22;
				}
				v35 = (*(__int64(__fastcall**)(_QWORD*))(v19 + 48))(v17);
				LODWORD(v37) = *(unsigned __int16*)(v5 + 122);
				v36 = *(_QWORD*)(v6 + 3);
				sub_1403F4900(qword_140C65898, 0x17Du, (__int64)&v35);
				return 0;
			}
			if (v8 != 19 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v7, (__int64)"DDSupplySatchelItem", 0x13ui64))
			{
				if (v8 == 9 && *(_QWORD*)v7 == 0x6574496761424444i64 && *(_BYTE*)(v7 + 8) == 109)
				{
					v27 = (unsigned __int8)BYTE1(*(_QWORD*)(v5 + 120));
					v28 = (unsigned __int8)*(_QWORD*)(v5 + 120);
					v39 = v28;
					v38 = v27;
					if (v6 && (v6[3] != v27 || v6[4] != v28) && v27 != 8)
					{
						v29 = *(_DWORD*)(a1 + 1100);
						if (v27 == 5)
							v27 = 1;
						if (v29 == 5)
							v29 = 1;
						if (*(_DWORD*)(a1 + 2084) && v29 == v27)
						{
							v30 = qword_140C65898;
							v31 = sub_1403AC780(qword_140C65898 + 160, &v38);
							if (v31)
							{
								if (*(_QWORD*)v6)
								{
									v32 = *(_QWORD*)(*(_QWORD*)v6 + 64i64);
									if ((*(_BYTE*)(v32 + 340) & 4) != 0 && *(_DWORD*)v32 == **(_DWORD**)(v31 + 64))
										sub_1403C17D0(v30, &v38, v6 + 3, 0);
								}
							}
						}
						else
						{
							sub_1403C17D0(qword_140C65898, &v38, v6 + 3, 0);
						}
					}
				}
				else
				{
					if (v8 != 15 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v7, (__int64)"DDGuildBankItem", 0xFui64))
					{
						if (v8 != 18
							|| *(_QWORD*)v7 != 0x7261507261574444i64
							|| *(_QWORD*)(v7 + 8) != 0x74496B6E61427974i64
							|| *(_WORD*)(v7 + 16) != 28005
							|| !v6
							|| (unsigned int)(v6[2] - 1) > 1)
						{
							return 0;
						}
						v33 = sub_140584690();
					}
					else
					{
						if (!v6 || (unsigned int)(v6[2] - 1) > 1)
							return 0;
						v33 = sub_140584660();
					}
					if (v33)
					{
						v38 = v6[3];
						v39 = v6[4];
						sub_14057F730(v33, &v38);
					}
				}
			}
			else
			{
				v23 = *(_QWORD*)(v5 + 120);
				v24 = (unsigned __int8)v23;
				v39 = (unsigned __int8)v23;
				v38 = BYTE1(v23);
				v25 = sub_1403ACAB0(qword_140C65898 + 160, &v38);
				if (v25)
				{
					HIDWORD(v35) = *(unsigned __int16*)(v5 + 122);
					v36 = 0i64;
					LODWORD(v35) = v24;
					if (v6 && v6[2] == 2)
					{
						v26 = sub_1403ACAB0(qword_140C65898 + 160, v6 + 3);
						if (v26 && *v26 == *v25)
							v36 = *(_QWORD*)(v6 + 3);
					}
					else
					{
						v36 = -4294966996i64;
					}
					sub_1403F4900(qword_140C65898, 0x184u, (__int64)&v35);
				}
			}
		}
		else
		{
			v9 = *(_QWORD*)(v5 + 120);
			v10 = qword_140C65898;
			v11 = *(_QWORD*)(qword_140C65898 + 120) == 0i64;
			v38 = BYTE1(v9);
			v39 = (unsigned __int8)v9;
			if (v11)
				goto LABEL_8;
			v12 = sub_1403AC780(qword_140C65898 + 160, &v38);
			if (!v12)
				goto LABEL_8;
			if ((unsigned int)sub_14056A070(v12, 0i64, 1, v6 + 3))
			{
				v10 = qword_140C65898;
			LABEL_8:
				sub_1403998E0(v10, &v38, 1, v6 + 3);
			}
		}
	}
	return 0;
}
// 140B3C258: using guessed type __int64 qword_140B3C258;
// 140B3C2F0: using guessed type __int64 qword_140B3C2F0;
// 140C65898: using guessed type __int64 qword_140C65898;

