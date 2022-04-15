#include "../winhttp.h"

//----- (00000001404C91B0) ----------------------------------------------------
_DWORD* __fastcall sub_1404C91B0(__int64 a1, _DWORD* a2, int a3, int a4, __int128* a5)
{
	__int64 v5; // rsi
	unsigned __int64 v8; // rdi
	_QWORD* v9; // rbx
	unsigned __int64 v10; // rdi
	_QWORD* v11; // rbx
	__int64 v12; // rdi
	unsigned int v13; // ebp
	__int64 v14; // rax
	__int128* v15; // r11
	__int64 v16; // rbx
	unsigned __int64 v17; // rbp
	_QWORD* v18; // rbx
	__int128* v19; // r14
	__int64* v20; // rcx
	int* v21; // rax
	__int64 v22; // rbx
	unsigned __int64 v23; // r12
	int** v24; // rbp
	int* v25; // rax
	int* v26; // rcx
	__int64* v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // rax
	__int64 v30; // rdi
	int v31; // eax
	__int64 v33; // [rsp+30h] [rbp-48h]
	__int64 v34; // [rsp+38h] [rbp-40h]
	__int64 v35[7]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v36; // [rsp+80h] [rbp+8h] BYREF
	int v37; // [rsp+98h] [rbp+20h] BYREF

	v37 = a4;
	v36 = a1;
	v5 = qword_140C659F8;
	*a2 = 0;
	v8 = (*(__int64(__fastcall**)(int*))(v5 + 56))(&v37);
	v9 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v8 % *(_QWORD*)(v5 + 40)));
	if (!v9)
		goto LABEL_5;
	while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 64))(&v37, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			goto LABEL_5;
	}
	if (v9 != (_QWORD*)-24i64 && (v12 = v9[3], v13 = *(_DWORD*)(v12 + 20), v13 == a3))
	{
		v14 = sub_1404C7AC0(v12, (__int64)a5);
		v16 = v14;
		if (v14)
		{
			sub_1404C0BA0(v14, v15, v13);
			*a2 = *(_DWORD*)(v16 + 496);
		}
		else
		{
			*a2 = *sub_1404C72B0(v12, &v36, (__int64)v15, 1);
		}
	}
	else
	{
	LABEL_5:
		v10 = (*(__int64(__fastcall**)(int*))(v5 + 56))(&v37);
		v11 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v10 % *(_QWORD*)(v5 + 40)));
		if (!v11)
			goto LABEL_16;
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 64))(&v37, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				goto LABEL_16;
		}
		if (v11 == (_QWORD*)-24i64)
		{
		LABEL_16:
			v17 = (*(__int64(__fastcall**)(int*))(v5 + 96))(&v37);
			v18 = *(_QWORD**)(*(_QWORD*)(v5 + 88) + 8 * (v17 % *(_QWORD*)(v5 + 80)));
			if (!v18)
				goto LABEL_22;
			while (v17 != *v18 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 104))(&v37, v18 + 2))
			{
				v18 = (_QWORD*)v18[1];
				if (!v18)
					goto LABEL_22;
			}
			if (v18 == (_QWORD*)-24i64)
			{
			LABEL_22:
				v19 = a5;
				v20 = *(__int64**)a5;
				if (*(_QWORD*)a5)
				{
					v33 = *v20;
					v34 = v20[1];
				}
				else
				{
					LODWORD(v33) = 0;
					v34 = 0i64;
				}
				v35[0] = v33;
				v35[1] = v34;
				v21 = sub_14018B280(232i64, 0);
				if (v21)
					v22 = sub_1404C6C90((__int64)v21, v37, v35, a3, ++ * (_DWORD*)(v5 + 216));
				else
					v22 = 0i64;
				if (*(_QWORD*)(v5 + 72) == *(_QWORD*)(v5 + 80))
					sub_1400290D0(v5 + 72);
				v23 = (*(__int64(__fastcall**)(int*))(v5 + 96))(&v37);
				v24 = (int**)(*(_QWORD*)(v5 + 88) + 8 * (v23 % *(_QWORD*)(v5 + 80)));
				v25 = sub_14018B280(32i64, 0);
				if (v25)
				{
					v26 = *v24;
					*(_QWORD*)v25 = v23;
					*((_QWORD*)v25 + 1) = v26;
					LODWORD(v26) = v37;
					*((_QWORD*)v25 + 3) = v22;
					v25[4] = (int)v26;
				}
				*v24 = v25;
				++* (_QWORD*)(v5 + 72);
				v27 = (__int64*)(v5 + 112);
				if (!*(_QWORD*)v22)
				{
					*(_QWORD*)v22 = v27;
					*(_QWORD*)(v22 + 8) = *v27;
					*v27 = v22;
					v28 = *(_QWORD**)(v22 + 8);
					if (v28)
						*v28 = v22 + 8;
				}
				v29 = sub_1404C7AC0(v22, (__int64)v19);
				v30 = v29;
				if (v29)
				{
					sub_1404C0BA0(v29, v19, *(_DWORD*)(v22 + 20));
					v31 = *(_DWORD*)(v30 + 496);
				}
				else
				{
					v31 = *sub_1404C72B0(v22, &v36, (__int64)v19, 1);
				}
				*a2 = v31;
				sub_1404CA720(v5, v22);
			}
		}
	}
	return a2;
}
// 1404C92A1: variable 'v15' is possibly undefined
// 1404C937B: variable 'v33' is possibly undefined
// 140C659F8: using guessed type __int64 qword_140C659F8;

