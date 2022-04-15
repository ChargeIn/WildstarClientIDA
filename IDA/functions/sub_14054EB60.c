#include "../winhttp.h"

//----- (000000014054EB60) ----------------------------------------------------
__int64 __fastcall sub_14054EB60(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
	int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rsi
	int v14; // r13d
	int v15; // r12d
	__int64 v16; // rax
	int v17; // ecx
	__int64 v18; // r11
	__int64 v19; // r8
	__int64 v20; // r10
	__int64 v21; // r9
	_DWORD* v22; // rbx
	__int64 v23; // r15
	__int64 v24; // r14
	__int64 v25; // rbp
	__int64 v26; // rcx
	int v27; // edx
	__int64 v28; // rcx
	int v29; // edx
	__int64 v30; // rcx
	int v31; // edx
	int v32; // r9d
	int v33; // r8d
	_DWORD* v34; // rax
	int v35; // edx
	__int64 result; // rax
	__int64 v37; // [rsp+30h] [rbp-48h]
	__int64 v38; // [rsp+38h] [rbp-40h]
	__int64 v39; // [rsp+40h] [rbp-38h]
	__int64 v40; // [rsp+48h] [rbp-30h]

	sub_1407E4830((int*)a1, 0i64, 0x98ui64);
	v9 = 0;
	v10 = *(_QWORD*)(qword_140C65898 + 120);
	if (v10)
		LOBYTE(v9) = a3 == *(_DWORD*)(v10 + 8);
	v11 = sub_1403D90D0(qword_140C65898, a3);
	v12 = sub_1403D90D0(qword_140C65898, a2);
	v13 = a6;
	*(_DWORD*)a1 = *(_DWORD*)(a6 + 36);
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(v13 + 40);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(v13 + 44);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v13 + 24);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(v13 + 28);
	if ((*(_BYTE*)(v13 + 52) & 4) != 0 || *(_DWORD*)(v13 + 40) == -1)
		*(_DWORD*)(a1 + 12) = 1;
	if ((*(_BYTE*)(v13 + 52) & 8) != 0)
		*(_DWORD*)(a1 + 24) = 1;
	if ((*(_DWORD*)(v13 + 52) & 0x2000) != 0)
		*(_DWORD*)(a1 + 28) = 1;
	*(_DWORD*)(a1 + 52) = (*(_DWORD*)(v13 + 16) >> 13) & 1;
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(v13 + 52) & 0x10;
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(v13 + 52) & 0x20;
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(v13 + 52) & 0x40;
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(v13 + 52) & 0x80;
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(v13 + 52) & 0x100;
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(v13 + 52) & 0x200;
	if (v11)
		v14 = *(_DWORD*)(v11 + 5520);
	else
		v14 = 0;
	if (v12)
		v15 = *(_DWORD*)(v12 + 5524);
	else
		v15 = 0;
	v16 = *(_QWORD*)(v13 + 144);
	if (v16)
		v17 = *(_DWORD*)(v16 + 120);
	else
		v17 = 0;
	v18 = v9;
	v19 = -36 - a1;
	v20 = -60 - a1;
	v21 = 12 - a1;
	*(_DWORD*)(a1 + 132) = v17;
	v22 = (_DWORD*)(a1 + 84);
	v23 = -84 - a1;
	v37 = -36 - a1;
	v39 = -60 - a1;
	v38 = 12 - a1;
	v24 = -12 - a1;
	v40 = v18;
	v25 = 6i64;
	do
	{
		v26 = *(_QWORD*)(v13 + 144);
		if (v26)
			v27 = *(_DWORD*)((char*)v22 + v24 + v26);
		else
			v27 = 0;
		v22[6] = v27;
		if (v18
			|| ((v28 = *(_QWORD*)(v13 + 144)) == 0 ? (LOBYTE(v29) = 0) : (v29 = *(_DWORD*)((char*)v22 + v23 + v28)),
				(v29 & 2) == 0))
		{
			v30 = *(_QWORD*)(v13 + 144);
			if (v30)
				v31 = *(_DWORD*)((char*)v22 + v23 + v30);
			else
				LOBYTE(v31) = 0;
			if ((v31 & 1) != 0)
			{
				if (!v30 || (v32 = *(_DWORD*)((char*)v22 + v19 + v30)) == 0)
					v32 = v15;
				if (!v30 || (v33 = *(_DWORD*)((char*)v22 + v20 + v30)) == 0)
					v33 = v14;
				v34 = sub_1400513C0(qword_140C63628, &a6, v33, v32);
				v19 = v37;
				v21 = v38;
				v20 = v39;
				v18 = v40;
				*v22 = *v34;
			}
			else
			{
				if (v30)
					v35 = *(_DWORD*)((char*)v22 + v21 + v30);
				else
					v35 = 0;
				*v22 = v35;
			}
		}
		else
		{
			*v22 = 0;
		}
		++v22;
		--v25;
	} while (v25);
	*(_DWORD*)(a1 + 136) = a4;
	result = a5;
	*(_QWORD*)(a1 + 144) = a5;
	return result;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;

