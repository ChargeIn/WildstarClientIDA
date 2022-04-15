#include "../winhttp.h"

//----- (000000014079C8C0) ----------------------------------------------------
__int64 __fastcall sub_14079C8C0(__int64 a1, _WORD* a2, __int64 a3, __int64* a4)
{
	__int64 v5; // rsi
	int* v6; // rax
	__int64 v7; // r15
	int* v8; // rdi
	unsigned __int64 v9; // r14
	unsigned __int64 v10; // rbp
	int* v11; // rbx
	unsigned __int64 v12; // r12
	__int16 v13; // si
	unsigned __int64 v14; // rsi
	int* v15; // rax
	unsigned __int64 v16; // r14
	int* v17; // rdi
	int* v18; // r14
	__int64 v19; // rdi
	unsigned __int64 v20; // rbp
	unsigned __int64 v21; // r12
	__int64 v22; // rax
	__int64 v23; // r13
	char* v24; // rdi
	_WORD* v25; // rax
	unsigned __int64 v26; // r10
	unsigned __int64 v27; // r14
	signed __int64 v28; // r11
	unsigned __int64 v29; // rdx
	unsigned __int16* v30; // rcx
	int v31; // r8d
	unsigned __int64 v32; // rbp
	__int64 v33; // rsi
	unsigned __int64 v34; // rcx
	unsigned __int64* v35; // r8
	unsigned __int64 v36; // rdx
	__int64 v37; // rdi
	__int64 v38; // r12
	int* v39; // rax
	int* v40; // r15
	_WORD* v41; // rdi
	unsigned __int64 v42; // r10
	char* v43; // r11
	unsigned __int64 v44; // rdx
	unsigned __int16* v45; // rax
	int v46; // r8d
	int* v48; // [rsp+20h] [rbp-68h]
	unsigned __int64 v49; // [rsp+28h] [rbp-60h]
	__int64 v50; // [rsp+30h] [rbp-58h]
	__int64 v51; // [rsp+38h] [rbp-50h]
	unsigned __int64 v52; // [rsp+38h] [rbp-50h]
	int v54; // [rsp+98h] [rbp+10h]

	v5 = a1;
	v6 = sub_14018B280(18i64, 0);
	v7 = 0i64;
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*(_QWORD*)v6 = off_140B55060;
	}
	else
	{
		v6 = 0i64;
	}
	v8 = v6 + 4;
	v54 = 0;
	v9 = 0i64;
	*((_WORD*)v6 + 8) = 0;
	v49 = 0i64;
	v48 = 0i64;
	v10 = 0i64;
	if (*a2)
	{
		do
			++v10;
		while (a2[v10]);
	}
	v11 = sub_14018D250(v6 + 4, v10);
	*((_WORD*)v11 + v10) = 0;
	if (v8 != v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	v12 = 0i64;
	if (v10)
	{
		do
		{
			v13 = a2[v12];
			if ((unsigned __int16)(v13 - 19968) <= 0x51FFu
				|| (unsigned __int16)(v13 + 256) <= 0xEFu
				|| (unsigned __int16)(v13 - 12448) <= 0x8Fu
				|| (unsigned __int16)(v13 - 12800) <= 0xFFu
				|| sub_1403E09D0(v13)
				|| (unsigned __int16)(v13 - 48) <= 9u)
			{
				v18 = v11;
				if (v11)
					v7 = *((_QWORD*)v11 - 1);
				v19 = v7 + 1;
				v11 = (int*)sub_14018D140(v11, v7 + 1);
				*((_WORD*)v11 + v7) = v13;
				v7 = 0i64;
				*((_WORD*)v11 + v19) = 0;
				if (v18 != v11 && v18)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
				v9 = v49;
			}
			else
			{
				LOWORD(v51) = v13;
				v14 = v9 + 1;
				v15 = sub_14018DB00((__int64)v48, v9 + 1, 16i64);
				v16 = 4 * v9;
				v17 = v15;
				*(_QWORD*)&v15[v16] = v51;
				*(_QWORD*)&v15[v16 + 2] = v12;
				if (v48 != v15)
				{
					sub_1407DB590(v15, v48, v16 * 4);
					if (v48)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v48 - 2) + 8i64))(v48 - 4);
					v48 = v17;
				}
				v9 = v14;
				v49 = v14;
			}
			++v12;
		} while (v12 < v10);
		v5 = a1;
	}
	v20 = *((_QWORD*)v11 - 1);
	if (v20)
	{
		v21 = 0i64;
		v50 = 0i64;
		v52 = *(_QWORD*)(v5 + 16);
		if (v52)
		{
			while (1)
			{
				v22 = *(_QWORD*)(v5 + 8);
				v23 = 0i64;
				v24 = *(char**)(v22 + 8 * v21);
				if (*(_WORD*)v24)
				{
					v25 = *(_WORD**)(v22 + 8 * v21);
					do
					{
						++v25;
						++v23;
					} while (*v25);
				}
				v26 = 0i64;
				if (!*(_WORD*)v24)
					break;
				do
					++v26;
				while (*(_WORD*)&v24[2 * v26]);
				if (v20 >= v26)
					break;
			LABEL_74:
				v50 = ++v21;
				if (v21 >= v52)
					goto LABEL_75;
			}
			v27 = 0i64;
			v28 = (char*)v11 - v24;
			while (1)
			{
				v29 = 0i64;
				if (v26)
				{
					v30 = (unsigned __int16*)v24;
					while (1)
					{
						v31 = *(unsigned __int16*)((char*)v30 + v28) - *v30;
						if (v31)
							break;
						if (*(unsigned __int16*)((char*)v30 + v28))
						{
							++v29;
							++v30;
							if (v29 < v26)
								continue;
						}
						goto LABEL_42;
					}
				}
				else
				{
				LABEL_42:
					v31 = -*(unsigned __int16*)&v24[2 * v26];
				}
				if (!v31)
					break;
				++v27;
				v28 += 2i64;
				if (v27 > v20 - v26)
				{
				LABEL_73:
					v5 = a1;
					goto LABEL_74;
				}
			}
			v54 = 1;
			while (1)
			{
				v32 = v27;
				v33 = v23;
				v34 = 0i64;
				if (v49)
				{
					v35 = (unsigned __int64*)(v48 + 2);
					do
					{
						v36 = *v35;
						if (*v35 < v34 + v27 + 1)
							++v32;
						if (v36 > v34 + v27 && v36 < v27 + v34 + v23)
							++v33;
						++v34;
						v35 += 2;
					} while (v34 < v49);
				}
				if (!a4)
					break;
				v37 = a4[1];
				v38 = v37 + 1;
				v39 = sub_14018DB00(*a4, v37 + 1, 16i64);
				v37 *= 2i64;
				*(_QWORD*)&v39[2 * v37] = v32;
				*(_QWORD*)&v39[2 * v37 + 2] = v33;
				v40 = v39;
				if ((int*)*a4 != v39)
				{
					sub_1407DB590(v39, (int*)*a4, 16 * a4[1]);
					if (*a4)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16) + 8i64))(*a4 - 16);
					*a4 = (__int64)v40;
				}
				a4[1] = v38;
				v5 = a1;
				v21 = v50;
				v20 = *((_QWORD*)v11 - 1);
				v41 = *(_WORD**)(*(_QWORD*)(a1 + 8) + 8 * v50);
				v42 = 0i64;
				if (*v41)
				{
					do
						++v42;
					while (v41[v42]);
					if (v20 < v42)
						goto LABEL_74;
				}
				if (++v27 > v20 - v42)
					goto LABEL_73;
				v43 = (char*)v11 + 2 * v27 - (_QWORD)v41;
				while (1)
				{
					v44 = 0i64;
					if (v42)
					{
						v45 = *(unsigned __int16**)(*(_QWORD*)(a1 + 8) + 8 * v50);
						while (1)
						{
							v46 = *(unsigned __int16*)((char*)v45 + (_QWORD)v43) - *v45;
							if (v46)
								break;
							if (*(unsigned __int16*)((char*)v45 + (_QWORD)v43))
							{
								++v44;
								++v45;
								if (v44 < v42)
									continue;
							}
							goto LABEL_70;
						}
					}
					else
					{
					LABEL_70:
						v46 = -(unsigned __int16)v41[v42];
					}
					if (!v46)
						break;
					++v27;
					v43 += 2;
					if (v27 > v20 - v42)
						goto LABEL_73;
				}
			}
			LODWORD(v7) = 1;
		}
		else
		{
		LABEL_75:
			LODWORD(v7) = v54;
		}
	}
	if (v48)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v48 - 2) + 8i64))(v48 - 4);
	(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return (unsigned int)v7;
}
// 14079CA15: variable 'v51' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

