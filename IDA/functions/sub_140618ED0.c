#include "../winhttp.h"

//----- (0000000140618ED0) ----------------------------------------------------
__int64 __fastcall sub_140618ED0(__int64 a1, int* a2)
{
	__int128 v2; // xmm6
	__int64 v3; // r12
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v9; // rax
	__int64 v10; // r14
	__int64 v11; // rax
	int* v12; // rdi
	__int64 v13; // rsi
	__int64* v14; // r15
	int* v15; // rbx
	unsigned __int64 v16; // rdx
	unsigned int v17; // ecx
	__int64 v18; // rax
	int* v19; // r14
	_QWORD* v20; // rdi
	unsigned __int64 v21; // r13
	_QWORD* i; // rbx
	int v23; // esi
	int* v24; // rax
	int* v25; // rbp
	unsigned __int64 j; // rsi
	unsigned __int64 v27; // rdx
	int v28; // edi
	unsigned int v29; // ecx
	__int64 v30; // rax
	__int64 v31; // rbx
	int* v32; // rax
	int* v33; // r12
	__int64 v34; // rdi
	__int64 v35; // rbp
	int* v36; // rbx
	__int64 v37; // rsi
	double v38; // xmm0_8
	int v39; // ecx
	__int64 v40; // rax
	__int64 v41; // rdx
	__int64 v42; // rcx
	__int128 v43; // [rsp+20h] [rbp-48h]
	__int64 v44; // [rsp+70h] [rbp+8h]
	__int64 v45; // [rsp+78h] [rbp+10h]

	v3 = qword_140C65950;
	v44 = qword_140C65950;
	v5 = sub_1403D90D0(qword_140C65898, *a2);
	v6 = v5;
	if (!v5)
		return 2147500037i64;
	v7 = *(_QWORD*)(v5 + 24);
	if (!v7 || !qword_140C65970)
		return 2147500037i64;
	v9 = sub_1404804A0(qword_140C65970, *(_DWORD*)(v7 + 120), 22);
	v10 = v9;
	v45 = v9;
	if (!v9)
		return 2147500037i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9))
		return 2147500037i64;
	v11 = sub_14048D310(v3, *(_DWORD*)(*(_QWORD*)(v6 + 24) + 120i64));
	*(_QWORD*)(v3 + 112) = v11;
	if (!v11)
		return 2147500037i64;
	v12 = a2 + 1;
	*(_QWORD*)(v3 + 80) = 0i64;
	v13 = 4i64;
	v14 = (__int64*)(v3 + 88);
	v15 = v12;
	*(_QWORD*)(v3 + 96) = 0i64;
	do
	{
		sub_140003460((__int64*)(v3 + 72), v15);
		v16 = *(_QWORD*)(v3 + 96);
		v17 = 0;
		if (v16)
		{
			v18 = 0i64;
			while (*(_DWORD*)(*v14 + 4 * v18) != *v12)
			{
				v18 = ++v17;
				if (v17 >= v16)
					goto LABEL_13;
			}
		}
		else
		{
		LABEL_13:
			sub_140003460((__int64*)(v3 + 88), v15);
		}
		++v15;
		++v12;
		--v13;
	} while (v13);
	if (*(_QWORD*)(v3 + 96) < 4ui64)
	{
		v19 = 0i64;
		v20 = *(_QWORD**)(*(_QWORD*)(v3 + 112) + 24i64);
		v21 = 0i64;
		for (i = (_QWORD*)*v20; i != v20; ++v21)
		{
			v23 = **(_DWORD**)(i[2] + 8i64);
			v24 = sub_14018DB00((__int64)v19, v21 + 1, 4i64);
			v24[v21] = v23;
			v25 = v24;
			if (v19 != v24)
			{
				sub_1407DB590(v24, v19, 4 * v21);
				if (v19)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
				v19 = v25;
			}
			i = (_QWORD*)*i;
		}
		sub_140617F70(v19, &v19[v21]);
		for (j = 0i64; j < v21; ++j)
		{
			v27 = *(_QWORD*)(v3 + 96);
			v28 = v19[j];
			v29 = 0;
			if (v27)
			{
				v30 = 0i64;
				while (*(_DWORD*)(*v14 + 4 * v30) != v28)
				{
					v30 = ++v29;
					if (v29 >= v27)
						goto LABEL_27;
				}
			}
			else
			{
			LABEL_27:
				v31 = v14[1];
				v32 = sub_14018DB00(*v14, v31 + 1, 4i64);
				v33 = v32;
				v32[v31] = v28;
				if ((int*)*v14 != v32)
				{
					sub_1407DB590(v32, (int*)*v14, 4 * v14[1]);
					if (*v14)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v14 - 16) + 8i64))(*v14 - 16);
					*v14 = (__int64)v33;
				}
				v3 = v44;
				v14[1] = v31 + 1;
				if (*(_QWORD*)(v44 + 96) == 4i64)
					break;
			}
		}
		if (v19)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
		v10 = v45;
	}
	v34 = *v14;
	v35 = *v14 + 4 * v14[1];
	if (*v14 != v35)
	{
		v36 = (int*)(v34 + 4);
		if (v34 + 4 != v35)
		{
			v43 = v2;
			v37 = 4i64;
			do
			{
				v38 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
				v39 = *v36;
				v40 = v37 >> 2;
				++v36;
				v37 += 4i64;
				v41 = (int)(v38 * ((double)(int)v40 + 1.0));
				*(v36 - 1) = *(_DWORD*)(v34 + 4 * v41);
				*(_DWORD*)(v34 + 4 * v41) = v39;
			} while (v36 != (int*)v35);
		}
	}
	v42 = qword_140C65898;
	*(_DWORD*)(v3 + 104) = 0;
	sub_1400EA3E0(*(_QWORD*)(v42 + 29504), "InvokeScientistExperimentation", byte_1409ED034, *(_QWORD*)(v10 + 48), v43);
	return 0i64;
}
// 140618ED0: could not find valid save-restore pair for xmm6
// 140619159: variable 'v2' is possibly undefined
// 1406191E5: variable 'v43' is possibly undefined
// 1409ED034: using guessed type _BYTE byte_1409ED034[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65950: using guessed type __int64 qword_140C65950;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C77890: using guessed type __int64 qword_140C77890;

