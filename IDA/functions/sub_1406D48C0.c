#include "../winhttp.h"

//----- (00000001406D48C0) ----------------------------------------------------
__int64 __fastcall sub_1406D48C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rbp
	_DWORD* v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rcx
	unsigned int v13; // edx
	__int64 v14; // r14
	__int64 v15; // rdx
	BOOL v16; // eax
	int* v17; // rbx
	__int64 v18; // r15
	__int64 v19; // rsi
	int v20; // ebx
	int v21; // eax
	__int64 v22; // rax
	__int64 v23; // rcx
	int v24; // ebx
	bool v26; // zf
	int* v27; // rax
	__int64 v28; // rdx
	int* v29; // rbx
	int* v30; // rax
	int v31; // r10d
	int v32; // r10d
	int v33; // r11d
	__int64 v34; // rcx
	__int64 v35; // rax
	int v36; // ecx
	__int64 v37[2]; // [rsp+40h] [rbp-48h] BYREF
	int v38; // [rsp+50h] [rbp-38h]
	__int64 v39; // [rsp+54h] [rbp-34h]
	int v40; // [rsp+5Ch] [rbp-2Ch]
	int v41; // [rsp+90h] [rbp+8h] BYREF
	int v42; // [rsp+94h] [rbp+Ch]
	int v43; // [rsp+A0h] [rbp+18h] BYREF
	int v44; // [rsp+A4h] [rbp+1Ch]

	v2 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 664i64))(a1);
	v4 = a1[4] + 3368i64;
	v5 = (_DWORD*)v2;
	v6 = *(_QWORD*)(a1[4] + 3440i64);
	v7 = *(_QWORD*)(v4 + 80) - v6;
	if (v7 != 22 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v6, (__int64)"DDUseItemWithInventory", 0x16ui64))
	{
		if (v7 == 16 && *(_QWORD*)v6 == 0x70536D6574494444i64 && *(_QWORD*)(v6 + 8) == 0x6B6361745374696Ci64)
		{
			if (!v5)
				return 3i64;
			v26 = v5[2] == 1;
		}
		else if (v7 != 19 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v6, (__int64)"DDSupplySatchelItem", 0x13ui64))
		{
			if (v7 == 15 && !(unsigned int)sub_1407E6AF0((unsigned __int64*)v6, (__int64)"DDGuildBankItem", 0xFui64)
				|| v7 == 18
				&& *(_QWORD*)v6 == 0x7261507261574444i64
				&& *(_QWORD*)(v6 + 8) == 0x74496B6E61427974i64
				&& *(_WORD*)(v6 + 16) == 28005)
			{
				return 3 - (unsigned int)(v5 != 0i64);
			}
			if (v7 != 9 || *(_QWORD*)v6 != 0x6574496761424444i64 || *(_BYTE*)(v6 + 8) != 109)
				return 1i64;
			if (!v5 || (v31 = v5[4], v41 = v5[3], v42 = v31, !sub_14053BC30(v3, (__int64)&v41)))
			{
				v34 = *(_QWORD*)(v4 + 120);
				v41 = BYTE1(v34);
				v42 = (unsigned __int8)v34;
				v35 = sub_1403AC780(qword_140C65898 + 160, &v41);
				if (!v5)
					return 2i64;
				if (v5[3] != 10)
					return 2i64;
				if ((*(_DWORD*)(*(_QWORD*)(v35 + 64) + 332i64) & 0x40000) != 0)
					return 2i64;
				v36 = *(_DWORD*)(v35 + 128);
				if ((v36 & 0x40) != 0 || (v36 & 1) == 0 && !(unsigned int)sub_14056A3F0(v35))
					return 2i64;
				return 3i64;
			}
			if (v33 != (unsigned __int8)BYTE1(*(_QWORD*)(v4 + 120)))
				return 3i64;
			v26 = v32 == (unsigned __int8)*(_QWORD*)(v4 + 120);
		}
		else
		{
			if (!v5)
				return 3i64;
			if (v5[2] == 1)
				return 2i64;
			v27 = sub_1403ACAB0(qword_140C65898 + 160, v5 + 3);
			v28 = *(_QWORD*)(v4 + 120);
			v29 = v27;
			v41 = BYTE1(v28);
			v42 = (unsigned __int8)v28;
			v30 = sub_1403ACAB0(qword_140C65898 + 160, &v41);
			if (!v29 || !v30)
				return 3i64;
			v26 = *v29 == *v30;
		}
		if (v26)
			return 2i64;
		return 3i64;
	}
	if (!v5)
		return 3i64;
	v8 = *(_QWORD*)(v4 + 120);
	v43 = v5[3];
	v44 = v5[4];
	v41 = BYTE1(v8);
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	v42 = (unsigned __int8)v8;
	if (!v9)
		return 3i64;
	v10 = sub_1403AC780(qword_140C65898 + 160, &v41);
	v11 = v10;
	if (!v10)
		return 3i64;
	v12 = *(_QWORD*)(v10 + 80);
	if (!v12)
		v12 = *(_QWORD*)(v10 + 64) + 156i64;
	v13 = *(_DWORD*)(v12 + 128);
	if (!v13)
		return 3i64;
	v14 = sub_1403ACD90(qword_140C65B70, v13, v9);
	if (!v14)
		return 3i64;
	v15 = *(_QWORD*)(v11 + 64);
	v16 = (*(_DWORD*)(v15 + 340) & 0x400) == 0 || !*(_DWORD*)(v15 + 384) || *(_DWORD*)(v11 + 32) == 0;
	if ((*(_DWORD*)(v15 + 340) & 0x200) == 0 && !v16)
		return 3i64;
	v17 = *(int**)(v14 + 112);
	if (v17[31] != 6)
		return 3i64;
	v18 = qword_140C65898;
	if (!sub_1403AC780(qword_140C65898 + 160, &v43))
		return 3i64;
	v19 = *(_QWORD*)(v18 + 120);
	v20 = *v17;
	v21 = *(_DWORD*)(v19 + 8);
	v37[0] = 0i64;
	v39 = 0i64;
	v38 = 0;
	v40 = 96;
	v37[1] = 0i64;
	v22 = sub_14055BDC0(v18, v19, v14, 1, v21);
	v24 = sub_1403986F0(v23, v20, v19, v22, (int*)(v18 + 27920), v11, (__int64)v37, 0);
	if (v37[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37[0] - 16) + 8i64))(v37[0] - 16);
	if (!v24)
		return 2i64;
	else
		return 3i64;
}
// 1406D4AAF: variable 'v23' is possibly undefined
// 1406D4C7D: variable 'v3' is possibly undefined
// 1406D4C9A: variable 'v33' is possibly undefined
// 1406D4CA0: variable 'v32' is possibly undefined
// 140B3C258: using guessed type __int64 qword_140B3C258;
// 140B3C2F0: using guessed type __int64 qword_140B3C2F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

