//----- (00000001405D6880) ----------------------------------------------------
__int64 __fastcall sub_1405D6880(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v6; // rax
	bool v7; // zf
	__int64* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // r8
	__int64 v13; // rcx
	int v14; // edx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64* v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rax
	unsigned int v23; // eax
	unsigned int v24; // esi
	unsigned int v25; // ecx
	int v26; // ecx
	__int64 v27; // rax
	__int64 v28; // rax
	int v29; // edx
	int v31; // [rsp+20h] [rbp-28h] BYREF
	__int64 v32; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v33)(); // [rsp+30h] [rbp-18h]
	__int64 v34; // [rsp+38h] [rbp-10h]

	if (!a3)
		return 2147500037i64;
	if (!a2)
		return 2147500037i64;
	v6 = sub_1404E1C50(a1, *(_DWORD*)a2, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v6;
	if (!v6)
		return 2147500037i64;
	v7 = *(_QWORD*)(a1 + 8) == 0i64;
	v8 = a3 + 1;
	*(_QWORD*)(a1 + 96) = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 40);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(a1 + 152) = *(_QWORD*)(a2 + 56);
	*(_QWORD*)(a1 + 160) = *(_QWORD*)(a2 + 64);
	v9 = *(_QWORD*)(a2 + 72);
	*(_QWORD*)(a1 + 72) = a3;
	*(_QWORD*)(a1 + 168) = v9;
	if (v7)
	{
		*(_QWORD*)(a1 + 8) = v8;
		*(_QWORD*)(a1 + 16) = *v8;
		*v8 = a1;
		v10 = *(_QWORD*)(a1 + 16);
		if (v10)
			*(_QWORD*)(v10 + 8) = a1 + 16;
	}
	if (!*(_QWORD*)(a1 + 24))
	{
		*(_QWORD*)(a1 + 24) = a3;
		*(_QWORD*)(a1 + 32) = *a3;
		*a3 = a1;
		v11 = *(_QWORD*)(a1 + 32);
		if (v11)
			*(_QWORD*)(v11 + 24) = a1 + 32;
	}
	v12 = *(_QWORD*)(a1 + 72);
	v13 = *(_QWORD*)(v12 + 56);
	*(_QWORD*)(a1 + 80) = v13;
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 8);
	v14 = *(_DWORD*)(v13 + 340);
	v15 = qword_140C65898;
	*(_DWORD*)(a1 + 88) = v14;
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(v12 + 64);
	v16 = sub_1403D90D0(v15, v14);
	if (v16)
	{
		v17 = (__int64*)(v16 + 5592);
		if (!*(_QWORD*)(a1 + 56))
		{
			*(_QWORD*)(a1 + 56) = v17;
			*(_QWORD*)(a1 + 64) = *v17;
			*v17 = a1;
			v18 = *(_QWORD*)(a1 + 64);
			if (v18)
				*(_QWORD*)(v18 + 56) = a1 + 64;
		}
	}
	v19 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (v19)
	{
		v20 = (__int64*)(v19 + 5584);
		if (!*(_QWORD*)(a1 + 40))
		{
			*(_QWORD*)(a1 + 40) = v20;
			*(_QWORD*)(a1 + 48) = *v20;
			*v20 = a1;
			v21 = *(_QWORD*)(a1 + 48);
			if (v21)
				*(_QWORD*)(v21 + 40) = a1 + 48;
		}
	}
	v22 = *(_QWORD*)a1;
	if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 312i64) + 112i64) + 264i64) & 0x10000000) != 0)
	{
		v23 = (*(__int64(__fastcall**)(__int64, __int64*))(v22 + 72))(a1, v20);
		v24 = *(_DWORD*)(a1 + 184);
		v25 = v24;
		if (v24 < v23)
			v25 = v23;
		*(_DWORD*)(a1 + 188) = v25;
	}
	else
	{
		v24 = *(_DWORD*)(a1 + 184);
		*(_DWORD*)(a1 + 188) = v24 + (*(__int64(__fastcall**)(__int64, __int64*))(v22 + 72))(a1, v20);
	}
	v26 = *(_DWORD*)(a2 + 12);
	if (!v26)
		v26 = *(_DWORD*)(a1 + 188);
	v27 = *(_QWORD*)(a1 + 176);
	*(_DWORD*)(a1 + 188) = v26;
	if (v27)
	{
		if ((*(_BYTE*)(v27 + 60) & 2) != 0)
			v26 = -1;
		*(_DWORD*)(a1 + 188) = v26;
	}
	if (!v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v28 = *(_QWORD*)(a1 + 176);
	if (!v28 || (*(_BYTE*)(v28 + 60) & 2) == 0)
	{
		v29 = *(_DWORD*)(a1 + 188);
		v33 = sub_140252318;
		v31 = 0;
		v32 = a1;
		v34 = 0i64;
		sub_140195960(a1 + 192, v29, (__int64)&v31, 4);
	}
	return 0i64;
}
// 1405D6A3E: variable 'v20' is possibly undefined
// 140252318: using guessed type __int64 __fastcall sub_140252318();
// 140C65898: using guessed type __int64 qword_140C65898;

