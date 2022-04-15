#include "../winhttp.h"

//----- (00000001401DF8F0) ----------------------------------------------------
__int64 __fastcall sub_1401DF8F0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v3; // rbx
	unsigned int v8; // ecx
	unsigned int v9; // ebp
	__int64 v10; // rax
	__int64 v11; // rsi
	int v12; // ecx
	bool v13; // zf
	int v14; // ecx
	unsigned __int64* v15; // rcx
	unsigned __int64 v16; // rcx
	_WORD* v17; // rdx
	bool v18; // cf
	void(__fastcall * *v19)(_QWORD*); // rax
	int v20; // eax
	__int128* v21; // rcx
	__int128 v22; // xmm0
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rcx
	int v26; // r14d
	_DWORD* v27; // rsi
	_QWORD* v28; // rbx
	__int64 v29; // r14
	unsigned int* v30; // rbx
	__int64* v31; // rsi
	__int64 v32; // r15
	__int64 v33; // rcx
	__int64 v34; // rdx
	int v35; // eax
	int v36; // eax
	unsigned int v37; // edx
	_DWORD* v38; // rax
	int v39; // xmm0_4
	_QWORD* v40; // rbx
	__int64 v41; // rcx
	unsigned __int64 i; // r14
	__int64 v43; // rsi
	void(__fastcall * **v44)(_QWORD); // rcx
	__int64 v45; // rcx
	__int64 v46; // rsi
	void(__fastcall * **v47)(_QWORD); // rcx
	__int64 v48; // [rsp+60h] [rbp+8h] BYREF

	v3 = a1 + 24;
	if (sub_1401DB030(a1 + 24, a3) && a2 == *(_QWORD**)(a1 + 280))
		return 0i64;
	v8 = *(_DWORD*)(a3 + 12);
	v9 = 0;
	if (v8)
		v10 = sub_14022D500(v8);
	else
		v10 = 0i64;
	*(_QWORD*)(a1 + 272) = v10;
	v11 = 1i64;
	if (v10 || (v12 = *(_DWORD*)(a3 + 8), v12 < 0) || (v13 = v12 == 1, v14 = 0, v13))
		v14 = 1;
	*(_DWORD*)(a1 + 2868) = v14;
	if (!v10 || *(_QWORD*)a3 && **(_WORD**)a3)
	{
		v17 = *(_WORD**)a3;
	}
	else
	{
		v15 = (unsigned __int64*)(v10 + 32);
		if (*(_DWORD*)(a3 + 16) != 1)
			v15 = (unsigned __int64*)(v10 + 24);
		v16 = *v15;
		if (v16)
		{
			if (v16 <= qword_140C3FE70)
				v17 = (_WORD*)(v16 + qword_140C3FE68);
			else
				v17 = 0i64;
		}
		else
		{
			v17 = 0i64;
		}
	}
	v18 = *(_DWORD*)(a3 + 168) != 0;
	v19 = (void(__fastcall**)(_QWORD*)) * a2;
	v48 = 0i64;
	v20 = ((__int64(__fastcall*)(_QWORD*, _WORD*, __int64*, _QWORD))v19[5])(a2, v17, &v48, (v18 ? 0x40 : 0) | 8u);
	if (v20 < 0)
		goto LABEL_82;
	v21 = (__int128*)a3;
	if ((((unsigned __int8)v3 | (unsigned __int8)a3) & 0xF) != 0)
	{
		sub_1407DB590((int*)v3, (int*)a3, 0xF0ui64);
	}
	else
	{
		do
		{
			v22 = *v21;
			v3 += 128i64;
			v21 += 8;
			*(_OWORD*)(v3 - 128) = v22;
			*(_OWORD*)(v3 - 112) = *(v21 - 7);
			*(_OWORD*)(v3 - 96) = *(v21 - 6);
			*(_OWORD*)(v3 - 80) = *(v21 - 5);
			*(_OWORD*)(v3 - 64) = *(v21 - 4);
			*(_OWORD*)(v3 - 48) = *(v21 - 3);
			*(_OWORD*)(v3 - 32) = *(v21 - 2);
			*(_OWORD*)(v3 - 16) = *(v21 - 1);
			--v11;
		} while (v11);
		*(_OWORD*)v3 = *v21;
		*(_OWORD*)(v3 + 16) = v21[1];
		*(_OWORD*)(v3 + 32) = v21[2];
		*(_OWORD*)(v3 + 48) = v21[3];
		*(_OWORD*)(v3 + 64) = v21[4];
		*(_OWORD*)(v3 + 80) = v21[5];
		*(_OWORD*)(v3 + 96) = v21[6];
	}
	v23 = v48;
	*(_DWORD*)(a1 + 312) = *(_DWORD*)(a3 + 24);
	if (*(_QWORD*)(a1 + 288) != v23)
	{
		if (v23)
		{
			(**(void(__fastcall***)(__int64))v23)(v23);
			v23 = v48;
		}
		v24 = *(_QWORD*)(a1 + 288);
		if (v24)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v24 + 8i64))(*(_QWORD*)(a1 + 288));
			v23 = v48;
		}
		*(_QWORD*)(a1 + 288) = v23;
	}
	if (*(_QWORD**)(a1 + 280) != a2)
	{
		(*(void(__fastcall**)(_QWORD*)) * a2)(a2);
		v25 = *(_QWORD*)(a1 + 280);
		if (v25)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		v23 = v48;
		*(_QWORD*)(a1 + 280) = a2;
	}
	v26 = 0;
	v27 = (_DWORD*)(a3 + 92);
	v28 = (_QWORD*)(a3 + 120);
	do
	{
		if (*v28 && *v27)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 784i64))(v23);
			v23 = v48;
		}
		++v26;
		++v28;
		++v27;
	} while ((unsigned __int64)v26 < 6);
	v29 = 4i64;
	v30 = (unsigned int*)(a1 + 2904);
	v31 = (__int64*)(a1 + 2872);
	v32 = 4i64;
	do
	{
		v33 = *v31;
		if (*v31)
		{
			v34 = *v30;
			if ((unsigned int)v34 < 7)
			{
				v35 = *(_DWORD*)(v33 + 4 * v34 + 1224);
				if (v35)
				{
					v36 = v35 - 1;
					*(_DWORD*)(v33 + 4 * v34 + 1224) = v36;
					if (!v36 && (unsigned int)v34 <= *(_DWORD*)(v33 + 1216))
					{
						v37 = v34 + 1;
						if (v37 < 7)
						{
							v38 = (_DWORD*)(v33 + 4 * (v37 + 306i64));
							do
							{
								if (*v38)
									break;
								++v37;
								++v38;
							} while (v37 < 7);
						}
						sub_1401E5690(v33, v37);
					}
				}
			}
			if (*v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v31 + 8i64))(*v31);
				*v31 = 0i64;
			}
			v39 = dword_140C3F4F8;
			*v30 = 7;
			v30[4] = 0;
			v30[40] = v39;
		}
		++v31;
		++v30;
		--v32;
	} while (v32);
	v40 = (_QWORD*)(a1 + 3000);
	if (*(_DWORD*)(a1 + 2868))
	{
		for (i = 0i64; i < 0x10; i += 4i64)
		{
			v43 = *(_QWORD*)(a1 + 16);
			v44 = *(void(__fastcall****)(_QWORD))(v43 + 80);
			if ((void(__fastcall***)(_QWORD)) * (v40 - 8) != v44)
			{
				if (v44)
					(**v44)(v44);
				v45 = *(v40 - 8);
				if (v45)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
				*(v40 - 8) = *(_QWORD*)(v43 + 80);
			}
			v46 = *(_QWORD*)(a1 + 16);
			v47 = *(void(__fastcall****)(_QWORD))(v46 + 88);
			if ((void(__fastcall***)(_QWORD)) * v40 != v47)
			{
				if (v47)
					(**v47)(v47);
				if (*v40)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v40 + 8i64))(*v40);
				*v40 = *(_QWORD*)(v46 + 88);
			}
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 776i64))(
				*(_QWORD*)(a1 + 288),
				*(unsigned int*)((char*)&unk_140C2D3F8 + i),
				*(v40 - 8));
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 776i64))(
				*(_QWORD*)(a1 + 288),
				*(unsigned int*)((char*)&unk_140C2D3E8 + i),
				*v40++);
		}
	}
	else
	{
		do
		{
			v41 = *(v40 - 8);
			if (v41)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
				*(v40 - 8) = 0i64;
			}
			if (*v40)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v40 + 8i64))(*v40);
				*v40 = 0i64;
			}
			++v40;
			--v29;
		} while (v29);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 808i64))(
		*(_QWORD*)(a1 + 288),
		*(_QWORD*)(a3 + 176),
		*(unsigned int*)(a3 + 184));
	(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD**)(a1 + 288) + 816i64))(
		*(_QWORD*)(a1 + 288),
		a3 + 188,
		a3 + 220,
		a3 + 228,
		8i64);
	if (!*(_QWORD*)(a1 + 272))
	{
		*(_DWORD*)(a1 + 3140) = 0;
		*(_QWORD*)(a1 + 3152) = 0i64;
		*(_QWORD*)(a1 + 3160) = 0i64;
	}
	v20 = sub_1401E1220(a1);
	if (v20 < 0)
	{
	LABEL_82:
		v9 = v20;
	}
	else
	{
		++* (_DWORD*)(a1 + 264);
		*(_DWORD*)(a1 + 2864) = 0;
		*(_DWORD*)(a1 + 3168) = 0;
	}
	if (v48)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
	return v9;
}
// 140C3F4F8: using guessed type int dword_140C3F4F8;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

