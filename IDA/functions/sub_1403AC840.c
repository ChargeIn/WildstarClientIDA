#include "../winhttp.h"

//----- (00000001403AC840) ----------------------------------------------------
__int64 __fastcall sub_1403AC840(__int64 a1, __int16 a2, unsigned int a3)
{
	int v3; // ebp
	unsigned int v7; // ebx
	unsigned int v8; // eax
	__int64* v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rcx
	int v12; // eax
	int v13; // ecx
	unsigned int v14; // eax
	int v15; // r9d
	__int64* v16; // rdx
	__int64 v17; // r8
	__int64 v18; // rcx
	int v19; // eax
	int v20; // ecx
	int* v21; // rax
	__int64 v22; // rax
	int v23; // ecx
	unsigned int v24; // eax
	int v25; // r9d
	__int64* v26; // rdx
	__int64 v27; // r8
	__int64 v28; // rcx
	int v29; // eax
	int v30; // ecx
	unsigned int v31; // eax
	int v32; // r9d
	__int64* v33; // rdx
	__int64 v34; // r8
	__int64 v35; // rcx
	int v36; // eax
	int v37; // ecx
	unsigned int v38; // eax
	int v39; // r9d
	__int64* v40; // rdx
	__int64 v41; // r8
	__int64 v42; // rcx
	int v43; // eax
	int v44; // ecx
	unsigned int v45; // eax
	int v46; // r9d
	__int64* v47; // rdx
	__int64 v48; // r8
	__int64 v49; // rcx
	int v50; // eax
	int v51; // ecx
	unsigned int v52; // eax
	__int64* v53; // r8
	__int64 v54; // r9
	__int64 v55; // rcx
	int v56; // ecx
	int v57; // edx

	v3 = 0;
	v7 = 0;
	if ((a2 & 1) != 0)
	{
		v8 = *(_DWORD*)(a1 + 4);
		if (v8)
		{
			v9 = *(__int64**)(a1 + 16);
			v10 = v8;
			do
			{
				v11 = *v9;
				if (*v9 && **(_DWORD**)(v11 + 64) == a3)
				{
					v12 = *(_DWORD*)(v11 + 120);
					v13 = 1;
					if (v12)
						v13 = v12;
					v7 += v13;
				}
				++v9;
				--v10;
			} while (v10);
		}
	}
	if ((a2 & 2) != 0)
	{
		v14 = *(_DWORD*)(a1 + 28);
		v15 = 0;
		if (v14)
		{
			v16 = *(__int64**)(a1 + 40);
			v17 = v14;
			do
			{
				v18 = *v16;
				if (*v16 && **(_DWORD**)(v18 + 64) == a3)
				{
					v19 = *(_DWORD*)(v18 + 120);
					v20 = 1;
					if (v19)
						v20 = v19;
					v15 += v20;
				}
				++v16;
				--v17;
			} while (v17);
		}
		v7 += v15;
	}
	if ((a2 & 0x42) != 0)
	{
		v21 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
		if (v21 && (v22 = (unsigned int)v21[114], (_DWORD)v22))
			v23 = *(unsigned __int16*)(a1 + 2 * v22 + 168);
		else
			v23 = 0;
		v7 += v23;
	}
	if ((a2 & 4) != 0)
	{
		v24 = *(_DWORD*)(a1 + 52);
		v25 = 0;
		if (v24)
		{
			v26 = *(__int64**)(a1 + 64);
			v27 = v24;
			do
			{
				v28 = *v26;
				if (*v26 && **(_DWORD**)(v28 + 64) == a3)
				{
					v29 = *(_DWORD*)(v28 + 120);
					v30 = 1;
					if (v29)
						v30 = v29;
					v25 += v30;
				}
				++v26;
				--v27;
			} while (v27);
		}
		v7 += v25;
	}
	if ((a2 & 0x400) != 0)
	{
		v31 = *(_DWORD*)(a1 + 76);
		v32 = 0;
		if (v31)
		{
			v33 = *(__int64**)(a1 + 88);
			v34 = v31;
			do
			{
				v35 = *v33;
				if (*v33 && **(_DWORD**)(v35 + 64) == a3)
				{
					v36 = *(_DWORD*)(v35 + 120);
					v37 = 1;
					if (v36)
						v37 = v36;
					v32 += v37;
				}
				++v33;
				--v34;
			} while (v34);
		}
		v7 += v32;
	}
	if ((a2 & 0x20) != 0)
	{
		v38 = *(_DWORD*)(a1 + 100);
		v39 = 0;
		if (v38)
		{
			v40 = *(__int64**)(a1 + 112);
			v41 = v38;
			do
			{
				v42 = *v40;
				if (*v40 && **(_DWORD**)(v42 + 64) == a3)
				{
					v43 = *(_DWORD*)(v42 + 120);
					v44 = 1;
					if (v43)
						v44 = v43;
					v39 += v44;
				}
				++v40;
				--v41;
			} while (v41);
		}
		v7 += v39;
	}
	if ((a2 & 0x100) != 0)
	{
		v45 = *(_DWORD*)(a1 + 124);
		v46 = 0;
		if (v45)
		{
			v47 = *(__int64**)(a1 + 136);
			v48 = v45;
			do
			{
				v49 = *v47;
				if (*v47 && **(_DWORD**)(v49 + 64) == a3)
				{
					v50 = *(_DWORD*)(v49 + 120);
					v51 = 1;
					if (v50)
						v51 = v50;
					v46 += v51;
				}
				++v47;
				--v48;
			} while (v48);
		}
		v7 += v46;
	}
	if ((a2 & 0x200) == 0)
		return v7;
	v52 = *(_DWORD*)(a1 + 148);
	if (v52)
	{
		v53 = *(__int64**)(a1 + 160);
		v54 = v52;
		do
		{
			v55 = *v53;
			if (*v53 && **(_DWORD**)(v55 + 64) == a3)
			{
				v56 = *(_DWORD*)(v55 + 120);
				v57 = 1;
				if (v56)
					v57 = v56;
				v3 += v57;
			}
			++v53;
			--v54;
		} while (v54);
	}
	return v7 + v3;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

