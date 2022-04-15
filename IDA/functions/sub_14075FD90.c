#include "../winhttp.h"

//----- (000000014075FD90) ----------------------------------------------------
__int64 __fastcall sub_14075FD90(_QWORD* a1, __int64 a2)
{
	int v5; // eax
	const char** v6; // rax
	_DWORD* v7; // r13
	_DWORD* v8; // rcx
	int v9; // eax
	_DWORD* v10; // rax
	unsigned __int64 v11; // r15
	int* v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	_DWORD* v17; // rdx
	__int64 v18; // r8
	_DWORD* v19; // rcx
	unsigned __int64 v20; // rdx
	int v21; // eax
	__int64 v22; // rcx
	BOOL v23; // eax
	__int64 v24; // rdx
	int* v25; // rax
	unsigned __int64 v26; // r8
	int* v27; // rbx
	__int64 v28; // rdx
	const char** v29; // rax
	_DWORD* v30; // rcx
	int v31; // eax
	_DWORD* v32; // rcx
	int v33; // eax
	int v34; // eax
	unsigned int v35; // eax
	const char** v36; // rax
	__int64 v37[3]; // [rsp+20h] [rbp-49h] BYREF
	__int64(__fastcall * *v38)(); // [rsp+38h] [rbp-31h] BYREF
	int v39; // [rsp+40h] [rbp-29h]
	_QWORD* v40; // [rsp+48h] [rbp-21h]
	int v41; // [rsp+50h] [rbp-19h]
	__int64(__fastcall * *v42)(); // [rsp+58h] [rbp-11h] BYREF
	int v43; // [rsp+60h] [rbp-9h]
	_QWORD* v44; // [rsp+68h] [rbp-1h]
	__int64(__fastcall * **v45)(); // [rsp+70h] [rbp+7h]
	__int64(__fastcall * *v46)(); // [rsp+78h] [rbp+Fh] BYREF
	int v47; // [rsp+80h] [rbp+17h]
	__int64 v48; // [rsp+88h] [rbp+1Fh]
	int v49; // [rsp+90h] [rbp+27h]
	unsigned __int64 v50; // [rsp+D8h] [rbp+6Fh] BYREF

	if (!*(_DWORD*)a2 && !*(_DWORD*)(a2 + 4) && !*(_DWORD*)(a2 + 8) && !*(_DWORD*)(a2 + 12))
		return 0i64;
	*(_DWORD*)(a2 + 52) = sub_140056D60(a1, 2u);
	v5 = sub_140056D60(a1, 3u);
	*(_DWORD*)(a2 + 44) = v5;
	if (v5 >= 4)
	{
		v6 = (const char**)sub_14018DED0(&v50, (__int64)"invalid sort type: %d", (unsigned int)v5);
		sub_140056570(a1, 3u, *v6);
	}
	v7 = dword_140A12138;
	v8 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
		v8 = (_DWORD*)(a1[3] + 48i64);
	v9 = v8[2];
	if (v9 && (v9 != 1 || *v8))
		*(_DWORD*)(a2 + 40) |= 1u;
	v10 = (_DWORD*)(a1[3] + 64i64);
	v11 = 0i64;
	v12 = 0i64;
	if ((unsigned __int64)v10 < a1[2] && v10 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
	{
		v13 = a1[4];
		v40 = a1;
		v38 = off_140B569F0;
		v41 = 1;
		v39 = -2;
		if (*(_QWORD*)(v13 + 120) >= *(_QWORD*)(v13 + 112))
			sub_14005E2C0((__int64)a1);
		v14 = a1[2];
		v15 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		a1[2] += 16i64;
		v16 = sub_1400578C0((__int64)a1);
		v39 = v16;
		v17 = (_DWORD*)(v40[3] + 64i64);
		if ((unsigned __int64)v17 >= v40[2] || v17 == dword_140A12138 || *(_DWORD*)(v40[3] + 72i64) != 5)
			sub_140056570(a1, 5u, "must be a table of filter tables");
		sub_1400579E0((__int64)v40, (__int64)v17, v16);
		v18 = (__int64)v40;
		v19 = dword_140A12138;
		v20 = v40[2];
		if (v40[3] + 64i64 < v20)
			v19 = (_DWORD*)(v40[3] + 64i64);
		*(_QWORD*)v20 = *(_QWORD*)v19;
		*(_DWORD*)(v20 + 8) = v19[2];
		*(_QWORD*)(v18 + 16) += 16i64;
		v21 = sub_1400578C0((__int64)v40);
		v22 = (__int64)v40;
		v42 = off_140B56A08;
		v39 = v21;
		v44 = v40;
		v43 = -2;
		v45 = &v38;
		*(_DWORD*)(v40[2] + 8i64) = 0;
		*(_QWORD*)(v22 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v42[2])(&v42, 0xFFFFFFFFi64);
		v40[2] -= 16i64;
		while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v45)[1])(v45)
			&& (unsigned int)sub_1400FCBA0((__int64)&v42)
			&& v11 < 6)
		{
			v48 = 0i64;
			v49 = 1;
			v47 = -2;
			v46 = off_140B569F0;
			if ((int)sub_1400FC6C0((__int64)&v42, (__int64)&v46) < 0
				|| (v23 = sub_14075F140((__int64)&v46, (__int64)v37), v23 < 0))
			{
				sub_140056570(a1, 5u, "must be a table of filter tables");
			}
			if (!v23)
			{
				v25 = sub_14018DB00((__int64)v12, v11 + 1, 24i64);
				v26 = 6 * v11;
				v27 = v25;
				*(_QWORD*)&v25[v26] = v37[0];
				*(_QWORD*)&v25[v26 + 2] = v37[1];
				*(_QWORD*)&v25[v26 + 4] = v37[2];
				if (v12 != v25)
				{
					sub_1407DB590(v25, v12, v26 * 4);
					if (v12)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
					v12 = v27;
				}
				++v11;
			}
			v46 = off_140B56A08;
			if (v48)
				sub_1400579E0(v48, v24, v47);
		}
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v45)[1])(v45)
			&& (unsigned int)sub_1400FCBA0((__int64)&v42))
		{
			v29 = (const char**)sub_14018DED0(&v50, (__int64)"number of filters may not exceed %d", 6i64);
			sub_140056570(a1, 5u, *v29);
		}
		*(_DWORD*)(a2 + 24) = v11;
		if ((_DWORD)v11)
			*(_QWORD*)(a2 + 32) = v12;
		v42 = off_140B56A08;
		if (v44)
			sub_1400579E0((__int64)v44, v28, v43);
		v38 = off_140B56A08;
		if (v40)
			sub_1400579E0((__int64)v40, v28, v39);
		v7 = dword_140A12138;
	}
	v30 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 80i64) < a1[2])
		v30 = (_DWORD*)(a1[3] + 80i64);
	v31 = v30[2];
	if (v31 && (v31 != 1 || *v30))
		*(_DWORD*)(a2 + 40) |= 2u;
	v32 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 96i64) < a1[2])
		v32 = (_DWORD*)(a1[3] + 96i64);
	v33 = v32[2];
	if (v33 && (v33 != 1 || *v32))
		*(_DWORD*)(a2 + 40) |= 4u;
	if (*(_DWORD*)(a2 + 44) == 3)
	{
		if ((unsigned __int64)(a1[3] + 112i64) < a1[2])
			v7 = (_DWORD*)(a1[3] + 112i64);
		v34 = v7[2];
		if (v34 != 3 && (v34 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), &v50)))
			sub_140056570(a1, 8u, "sort type 'AuctionSort.Property' requires a property to sort by");
		v35 = sub_140056D60(a1, 8u);
		if (v35 > 0xC4)
		{
			v36 = (const char**)sub_14018DED0(&v50, (__int64)"invalid sort property type: %d", v35);
			sub_140056570(a1, 8u, *v36);
		}
		*(_DWORD*)(a2 + 48) = v35;
	}
	sub_1403F4900(qword_140C65898, 0x7DCu, a2);
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	return 0i64;
}
// 1407600B7: variable 'v24' is possibly undefined
// 140760185: variable 'v28' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

