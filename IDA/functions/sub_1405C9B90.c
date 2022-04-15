#include "../winhttp.h"

//----- (00000001405C9B90) ----------------------------------------------------
void __fastcall sub_1405C9B90(_DWORD* a1, unsigned int a2)
{
	_DWORD* v2; // r8
	__int64 v5; // rax
	__int64 v6; // r9
	unsigned __int64 v7; // r10
	unsigned __int64 v8; // rdx
	__int64 v9; // rcx
	unsigned int v10; // eax
	__int64 v12; // rcx
	__int64 v13; // rsi
	int v14; // edx
	__int64 v15; // rcx
	int v16; // eax
	__int64 v17; // rax
	int v18; // eax
	unsigned int v19; // ecx
	int v20; // eax
	unsigned int v21; // ecx
	int v22; // eax
	__int64 v23; // rax
	__int64 v24; // rcx
	int v25; // eax
	unsigned int v26; // r9d
	int v27; // r8d
	__int64 v28; // rdx
	__int64 v29; // rcx
	int v30; // eax
	__int64 v31; // rcx
	__int64 v32; // rsi
	int v33; // edx
	__int64 v34; // rcx
	int v35; // eax
	unsigned int v36; // [rsp+20h] [rbp-18h]
	__int64 v37; // [rsp+40h] [rbp+8h] BYREF

	v2 = a1;
	if (a2 - 1 > 1)
		v2 = 0i64;
	*(_QWORD*)(qword_140C65898 + 5352) = v2;
	switch ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 8i64))(a1))
	{
	case 1u:
		if (a1[81])
		{
			v5 = sub_140584690();
			v6 = v5;
			if (!v5)
				return;
			v7 = *(_QWORD*)(v5 + 656);
			v8 = 0i64;
			do
			{
				if (v8 >= v7)
					return;
				v9 = *(_QWORD*)(v6 + 648);
				v10 = a1[80];
			} while (*(_DWORD*)(v9 + 8 * v8++) != v10);
			sub_140399D40(v9, v10);
		}
		else
		{
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 72i64))(a1, a2);
		}
		return;
	case 2u:
		if (!a2)
			sub_1407784C0(*(_QWORD*)(qword_140C65898 + 29520), a1[83]);
		return;
	case 6u:
		if (a2)
			goto LABEL_40;
		a1[127] %= 0xCu;
		v31 = qword_140C65898;
		v32 = *(_QWORD*)(qword_140C65898 + 120);
		v33 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 264i64);
		if (*(_DWORD*)(v32 + 264) != v33)
		{
			v34 = *(_QWORD*)(qword_140C65898 + 120);
			*(_DWORD*)(v32 + 264) = v33;
			v35 = sub_14045A950(v34, v33);
			v31 = qword_140C65898;
			*(_DWORD*)(v32 + 268) = v35;
		}
		v18 = sub_14039AC90(v31, *(_QWORD*)(v31 + 120), a1[126], a1[127], a1[69]);
		goto LABEL_37;
	case 7u:
		v23 = sub_14039DFB0();
		v24 = v23;
		if (!v23 || (v25 = *(_DWORD*)(v23 + 128), v25 != 3) && v25 != 9)
			v24 = *(_QWORD*)(qword_140C65898 + 120);
		if (!a2)
		{
			v26 = a1[127];
			v27 = v26 / 0xC;
			v28 = v24;
			v29 = qword_140C65898;
			v26 %= 0xCu;
			v36 = a1[69];
			a1[127] = v26;
			v30 = sub_14039AC90(v29, v28, v27, v26, v36);
			if (v30)
			{
				if (v30 != 317)
					a1[82] = 1;
			}
		}
		return;
	case 9u:
		(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, a2);
		goto LABEL_40;
	case 0xAu:
		if (!a2)
		{
			a1[127] %= 0xCu;
			v12 = qword_140C65898;
			v13 = *(_QWORD*)(qword_140C65898 + 120);
			v14 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 264i64);
			if (*(_DWORD*)(v13 + 264) != v14)
			{
				v15 = *(_QWORD*)(qword_140C65898 + 120);
				*(_DWORD*)(v13 + 264) = v14;
				v16 = sub_14045A950(v15, v14);
				v12 = qword_140C65898;
				*(_DWORD*)(v13 + 268) = v16;
			}
			v17 = sub_1403D90D0(v12, a1[128]);
			if (!v17)
				goto LABEL_39;
			v18 = sub_14039AC90(qword_140C65898, v17, a1[126], a1[127], a1[69]);
		LABEL_37:
			if (v18 && v18 != 317)
				LABEL_39 :
				a1[82] = 1;
		}
		goto LABEL_40;
	case 0xBu:
		if (sub_1403D90D0(qword_140C65898, a1[128]) && !a2)
		{
			v19 = a1[127] % 0xCu;
			v37 = 0i64;
			v20 = a1[126];
			HIDWORD(v37) = v19;
			a1[127] = v19;
			LODWORD(v37) = v20;
			sub_1403F4900(qword_140C65898, 0x68Au, (__int64)&v37);
		}
		return;
	case 0xCu:
		if (!a2)
		{
			v21 = a1[127] % 0xCu;
			v37 = 0i64;
			v22 = a1[126];
			HIDWORD(v37) = v21;
			a1[127] = v21;
			LODWORD(v37) = v22;
			sub_1403F4900(qword_140C65898, 0x73u, (__int64)&v37);
		}
		return;
	default:
	LABEL_40:
		(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, a2);
		return;
	}
}
// 1405C9C4D: conditional instruction was optimized away because r8d.4==0
// 140C65898: using guessed type __int64 qword_140C65898;

