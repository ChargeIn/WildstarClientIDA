//----- (00000001401C8CE0) ----------------------------------------------------
__int64 __fastcall sub_1401C8CE0(int* a1)
{
	unsigned __int8* v2; // r8
	char* v3; // rcx
	__int64 v4; // r9
	int v5; // eax
	int v6; // edx
	char* v7; // rax
	__int64 v8; // rdx
	int v9; // ecx
	int v10; // r14d
	int v11; // r15d
	int v12; // r12d
	int v13; // r13d
	int v14; // esi
	int v15; // edi
	int v16; // r10d
	int v17; // r9d
	int v18; // r11d
	__int64 v19; // rbp
	int v20; // r8d
	int v21; // ecx
	int v22; // r9d
	int v23; // r8d
	__int64 v24; // rdx
	int v25; // r8d
	int v26; // r8d
	int v27; // ecx
	int v28; // r9d
	__int64 v29; // rdx
	int v30; // r8d
	int v31; // ecx
	int v32; // r9d
	int v33; // ecx
	__int64 v34; // rdx
	int v35; // eax
	int v36; // r8d
	int v37; // ecx
	int v38; // eax
	__int64 result; // rax
	int v41[2]; // [rsp+4h] [rbp-178h] BYREF
	char v42; // [rsp+Ch] [rbp-170h] BYREF

	v2 = (unsigned __int8*)a1 + 31;
	v3 = (char*)((char*)v41 - (char*)a1);
	v4 = 16i64;
	do
	{
		v5 = *v2;
		v6 = *(v2 - 1);
		v2 += 4;
		*(_DWORD*)&v2[(_QWORD)v3 - 35] = *(v2 - 2) | ((*(v2 - 3) | ((v5 | (v6 << 8)) << 8)) << 8);
		--v4;
	} while (v4);
	v7 = &v42;
	v8 = 64i64;
	do
	{
		v9 = *((_DWORD*)v7 + 11);
		v7 += 4;
		*((_DWORD*)v7 + 13) = __ROL4__(*((_DWORD*)v7 - 1) ^ *((_DWORD*)v7 - 3) ^ *((_DWORD*)v7 + 5) ^ v9, 1);
		--v8;
	} while (v8);
	v10 = *a1;
	v11 = a1[1];
	v12 = a1[2];
	v13 = a1[3];
	v14 = a1[4];
	v15 = *a1;
	v16 = v11;
	v17 = v12;
	v18 = v13;
	v19 = 0i64;
	do
	{
		v20 = v14 + 1518500249;
		v14 = v18;
		v21 = v16 & v17 | v18 & ~v16;
		v18 = v17;
		v22 = v16;
		++v19;
		v16 = v15;
		v17 = __ROR4__(v22, 2);
		v23 = v41[v19 - 1] + v21 + __ROL4__(v15, 5) + v20;
		v15 = v23;
	} while (v19 < 20);
	v24 = 20i64;
	do
	{
		v25 = v41[v24++] + __ROL4__(v23, 5);
		v26 = v14 + 1859775393 + v25;
		v27 = v16 ^ v17 ^ v18;
		v14 = v18;
		v18 = v17;
		v28 = v16;
		v23 = v27 + v26;
		v16 = v15;
		v15 = v23;
		v17 = __ROR4__(v28, 2);
	} while (v24 < 40);
	v29 = 40i64;
	do
	{
		v30 = v14 - 1894007588 + __ROL4__(v23, 5);
		v14 = v18;
		v31 = v16 & v17 | v18 & (v16 | v17);
		v18 = v17;
		v32 = v16;
		v33 = v41[v29++] + v31;
		v16 = v15;
		v17 = __ROR4__(v32, 2);
		v23 = v33 + v30;
		v15 = v23;
	} while (v29 < 60);
	v34 = 60i64;
	do
	{
		v35 = v41[v34];
		v36 = v14 - 899497514 + __ROL4__(v23, 5);
		v14 = v18;
		v37 = v17 ^ v18;
		v18 = v17;
		++v34;
		v17 = __ROR4__(v16, 2);
		v38 = (v16 ^ v37) + v35;
		v16 = v15;
		v23 = v38 + v36;
		v15 = v23;
	} while (v34 < 80);
	a1[4] += v14;
	*a1 = v10 + v23;
	a1[1] = v11 + v16;
	a1[2] = v12 + v17;
	a1[3] = v18 + v13;
	result = 0i64;
	*((_WORD*)a1 + 14) = 0;
	return result;
}

