#include "../winhttp.h"

//----- (0000000140870EF0) ----------------------------------------------------
__int16 __fastcall sub_140870EF0(__int64* a1, __int64 a2, int a3)
{
	int v3; // r15d
	__int64 v4; // rdi
	__int64* v6; // r13
	__int64 v7; // rdi
	__int64 v8; // r14
	int v9; // r9d
	int v10; // ecx
	unsigned __int64 v11; // rcx
	__int64 v12; // rax
	signed __int64 v13; // rax
	void* v14; // rsp
	char v15; // cl
	void* v16; // rsp
	int* v17; // r11
	bool v18; // r10
	__int64 v19; // rax
	__int64 v20; // r8
	__int16 v21; // cx
	int v22; // edx
	__int16 v23; // ax
	int v24; // ecx
	__int16 v25; // ax
	unsigned __int8 v26; // al
	unsigned int v27; // r12d
	unsigned int v28; // edx
	int v29; // r8d
	__int64 v30; // r9
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rcx
	int v35; // r15d
	__int64 v36; // rdi
	__int64 v37; // rax
	__int64 v38; // r14
	__int64 v39; // rcx
	__int64 v40; // r14
	int v41; // r13d
	int v42; // ecx
	int v44; // [rsp+20h] [rbp+0h] BYREF
	int* v45; // [rsp+28h] [rbp+8h]
	__int64 v46; // [rsp+30h] [rbp+10h]
	__int64 v47; // [rsp+40h] [rbp+20h] BYREF
	int v48; // [rsp+48h] [rbp+28h]
	__int16 v49; // [rsp+50h] [rbp+30h]
	__int16 v50; // [rsp+52h] [rbp+32h]
	__int16 v51; // [rsp+58h] [rbp+38h]
	__int64 v52; // [rsp+60h] [rbp+40h]
	unsigned __int8 v54; // [rsp+D8h] [rbp+B8h]
	bool v56; // [rsp+E8h] [rbp+C8h]

	v3 = a3;
	v4 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16i64);
	v6 = a1;
	if (v4)
		v7 = *(_QWORD*)(v4 + 24);
	else
		v7 = 0i64;
	if ((*(_BYTE*)(v7 + 382) & 0x40) == 0)
		sub_1408605D0(v7);
	v8 = *(_QWORD*)(v7 + 496);
	v9 = 0;
	v44 = 0;
	v10 = *(unsigned __int16*)(v8 + 52);
	v46 = v8;
	if (v10)
	{
		do
		{
			++v9;
			v10 &= v10 - 1;
		} while (v10);
		v44 = v9;
	}
	v11 = (unsigned __int64)(v9 * (unsigned int)*((unsigned __int8*)v6 + 24)) << 6;
	v12 = v11 + 15;
	if (v11 + 15 <= v11)
		v12 = 0xFFFFFFFFFFFFFF0i64;
	v13 = v12 & 0xFFFFFFFFFFFFFFF0ui64;
	v14 = alloca(v13);
	v15 = *(_BYTE*)(v7 + 379);
	v16 = alloca(v13);
	v17 = &v44;
	v45 = &v44;
	v18 = (v15 & 0xC) == 4 && (v15 & 3) == 1;
	v19 = *(_QWORD*)(a2 + 80);
	v47 = 0i64;
	v51 = 0;
	v52 = 0i64;
	v20 = *(_QWORD*)v19;
	v56 = v18;
	if (*(_QWORD*)v19)
	{
		v21 = *(_WORD*)(v19 + 16);
		v22 = *(unsigned __int16*)(v8 + 52);
		v23 = *(_WORD*)(v19 + 18);
		v49 = v21;
		v48 = v22;
		v47 = v20;
	}
	else
	{
		v24 = *(unsigned __int16*)(v8 + 52);
		v47 = *(_QWORD*)a2;
		v25 = *(_WORD*)(a2 + 16);
		v48 = v24;
		v49 = v25;
		v23 = *(_WORD*)(a2 + 18);
	}
	v50 = v23;
	if (!v18)
	{
		sub_140870CF0(v8, 0, (__int64)&v44);
		v9 = v44;
		v18 = v56;
		v17 = v45;
	}
	v26 = 0;
	v27 = 0;
	v54 = 0;
	if (*((_BYTE*)v6 + 24))
	{
		while (!_bittest(&v3, v26))
		{
			v27 += *((unsigned __int8*)v6 + 25);
			v26 = v54;
		LABEL_46:
			v9 = v44;
			v18 = v56;
			v17 = v45;
			v54 = ++v26;
			if (v26 >= *((_BYTE*)v6 + 24))
				return sub_140870860(v8);
		}
		if (v18)
		{
			v28 = 0;
			v29 = v26 * (*(_WORD*)(v8 + 54) & 7);
			if ((*(_WORD*)(v8 + 54) & 7) != 0)
			{
				v30 = (unsigned int)v26 * v9;
				do
				{
					v31 = v28 + v29;
					v32 = v28++;
					v33 = (v30 + v32) << 6;
					v34 = (v31 + 1) << 6;
					*(_OWORD*)((char*)v17 + v33) = *(_OWORD*)(v34 + v8);
					*(_OWORD*)((char*)v17 + v33 + 16) = *(_OWORD*)(v34 + v8 + 16);
					*(_OWORD*)((char*)v17 + v33 + 32) = *(_OWORD*)(v34 + v8 + 32);
					*(_OWORD*)((char*)v17 + v33 + 48) = *(_OWORD*)(v34 + v8 + 48);
				} while (v28 < (*(_WORD*)(v8 + 54) & 7u));
			}
			v26 = v54;
		}
		v35 = 0;
		if (!*((_BYTE*)v6 + 25))
		{
		LABEL_45:
			v3 = a3;
			goto LABEL_46;
		}
		while (1)
		{
			v36 = *v6;
			if (*(_QWORD*)(*v6 + 24i64 * v27 + 8))
			{
				if (!*(_QWORD*)(v36 + 24i64 * v27))
				{
					v37 = sub_1408819F0(dword_140C10F28, 1088i64);
					v38 = v37;
					*(_QWORD*)(v36 + 24i64 * v27) = v37;
					if (v37)
					{
						sub_140862A10(v37);
						*(_QWORD*)(v38 + 1056) = 0i64;
					}
					v39 = *(_QWORD*)(v36 + 24i64 * v27);
					if (!v39)
						goto LABEL_43;
					if ((unsigned int)sub_140862F90(v39, *(_DWORD*)(v36 + 24i64 * v27 + 20), 0x400u, 0i64) != 1)
					{
						v40 = *(_QWORD*)(v36 + 24i64 * v27);
						v41 = dword_140C10F28;
						if (v40)
						{
							sub_140862B80(*(_QWORD*)(v36 + 24i64 * v27));
							sub_140881720(v41, v40);
						}
						v6 = a1;
						*(_QWORD*)(v36 + 24i64 * v27) = 0i64;
						goto LABEL_43;
					}
					sub_140862BE0(*(_QWORD*)(v36 + 24i64 * v27));
					v18 = v56;
				}
				v42 = v54;
				if (!v18)
					v42 = 0;
				sub_140862C40(
					*(_QWORD*)(v36 + 24i64 * v27),
					(__int64)&v47,
					(__int64)&v45[16 * (unsigned __int64)(unsigned int)(v42 * v44)]);
			}
			++v27;
		LABEL_43:
			v18 = v56;
			if (++v35 >= (unsigned int)*((unsigned __int8*)v6 + 25))
			{
				v8 = v46;
				v26 = v54;
				goto LABEL_45;
			}
		}
	}
	return sub_140870860(v8);
}
// 140C10F28: using guessed type int dword_140C10F28;

