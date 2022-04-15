#include "../winhttp.h"

//----- (000000014046C8E0) ----------------------------------------------------
__int64 __fastcall sub_14046C8E0(__int64 a1, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
	__int64 v9; // r15
	_DWORD* v14; // rax
	__int64 v15; // r14
	BOOL v16; // r12d
	unsigned int v17; // esi
	char v18; // si
	int v19; // eax
	int v20; // esi
	char v21; // si
	int v22; // esi
	int v23; // eax
	unsigned __int64 v24; // rcx
	int v25; // r12d
	__int64 v26; // rax
	__int64 v27; // rcx
	void(__fastcall * v29)(__int64); // rax
	__int64 v30; // rcx
	__int64 v31; // rcx
	unsigned int v32; // esi
	_DWORD* v33; // rcx
	bool v34; // zf
	unsigned __int64 v35; // [rsp+20h] [rbp-20h] BYREF
	_QWORD v36[3]; // [rsp+28h] [rbp-18h]

	LODWORD(v9) = a3;
	if (!*(_QWORD*)(a1 + 5864) || a2 - 4 > 1)
		return 0i64;
	if (!a3)
	{
		if (a2 == 4)
		{
			v29 = sub_140470D80;
			v30 = a1 + 5016;
		}
		else
		{
			if (a2 != 5)
			{
			LABEL_57:
				a5 = 1065353216;
				v35 = 0i64;
				*(_QWORD*)((char*)v36 + 4) = 0i64;
				*(_QWORD*)((char*)&v36[1] + 4) = 0i64;
				goto LABEL_58;
			}
			v29 = sub_140471430;
			v30 = a1 + 5088;
		}
		LODWORD(v35) = 0;
		v36[0] = a1;
		v36[1] = v29;
		v36[2] = 0i64;
		sub_140195960(v30, 2000, (__int64)&v35, 4);
		goto LABEL_57;
	}
	if (a8)
		LODWORD(v9) = sub_140470540((_DWORD*)a1, a3);
	v14 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
		*(_QWORD*)(a1 + 5864),
		(unsigned int)v9,
		a4);
	v15 = (__int64)v14;
	if (*v14 == 150)
		return 0i64;
	v16 = *(_DWORD*)(a1 + 5160) == 63;
	if (a2 == 4)
	{
		sub_140470B80(a1, (v14[2] & 1) == 0, v14[2] & 8);
	}
	else if (a2 == 5)
	{
		sub_140471230(a1, (v14[2] & 1) == 0, v14[2] & 8);
	}
	if ((*(_DWORD*)(a1 + 5160) == 63) != v16)
	{
		v9 = (unsigned int)sub_140470540((_DWORD*)a1, a3);
		v15 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
			*(_QWORD*)(a1 + 5864),
			v9,
			a4);
		if (*(_DWORD*)v15 == 150)
		{
			v17 = a2 - 4;
			if (v17)
			{
				if (v17 == 1)
				{
					v18 = ~(unsigned __int8)*(_DWORD*)(a1 + 5160) & 0x10;
					if (*(_QWORD*)(a1 + 3264))
					{
						v19 = sub_140467ED0(a1);
						*(_DWORD*)(a1 + 5164) &= ~0x10u;
						v20 = v18 & 0x10;
						goto LABEL_20;
					}
				}
			}
			else
			{
				v21 = ~(unsigned __int8)*(_DWORD*)(a1 + 5160) & 4;
				if (*(_QWORD*)(a1 + 3264))
				{
					v19 = sub_140467ED0(a1);
					*(_DWORD*)(a1 + 5164) &= ~4u;
					v20 = v21 & 4;
				LABEL_20:
					*(_DWORD*)(a1 + 5164) |= v20;
					v22 = *(_DWORD*)(a1 + 5164);
					if ((v19 & 0xFFFFFFF6) == 0 && v19 != 1)
						v22 = 63;
					v23 = *(_DWORD*)(a1 + 5160);
					if (v23 != v22)
					{
						if (v22 == 63)
						{
							sub_140195D70(a1 + 5168);
							sub_140195D70(a1 + 5240);
							(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
								*(_QWORD*)(a1 + 3264),
								3i64,
								3i64);
							*(_DWORD*)(a1 + 5312) = 1;
							if (*(_QWORD*)(a1 + 5864))
							{
								sub_140471EF0(a1, 1, 1);
								sub_140471EF0(a1, 1, 0);
							}
						}
						else if (v23 == 63)
						{
							LODWORD(v35) = 0;
							v36[1] = sub_140471E50;
							v36[0] = a1;
							v36[2] = 0i64;
							sub_140195960(a1 + 5168, 150, (__int64)&v35, 4);
							v36[1] = sub_140471EA0;
							LODWORD(v35) = 0;
							v36[0] = a1;
							v36[2] = 0i64;
							sub_140195960(a1 + 5240, 150, (__int64)&v35, 4);
							*(_DWORD*)(a1 + 5312) = 1;
						}
						if ((v22 & 4) != 0)
							sub_140195D70(a1 + 5016);
						if ((v22 & 0x10) != 0)
							sub_140195D70(a1 + 5088);
						*(_DWORD*)(a1 + 5160) = v22;
					}
				}
			}
			return 0i64;
		}
	}
	v24 = *(int*)(v15 + 16);
	if (*(_DWORD*)v15 == a3)
	{
		if (v24 >= 8)
			v25 = 9;
		else
			v25 = dword_140B670F0[v24];
	}
	else if (v24 >= 8)
	{
		v25 = 13;
	}
	else
	{
		v25 = dword_140B67110[v24];
	}
	if (a2 == 4)
	{
		v26 = sub_1404695E0(a1);
		if (*(_DWORD*)(a1 + 4832))
		{
			if (*(float*)(a1 + 4820) == 0.0
				&& fabs(*(float*)(a1 + 4808)) > 0.0000099999997
				&& (!*(_DWORD*)(a1 + 4948)
					|| (*(_BYTE*)(v15 + 4) & 2) != 0
					|| v26 && (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 312) + 112i64) + 264i64) & 0x400000) != 0))
			{
				v27 = *(_QWORD*)(a1 + 5864);
				*(_DWORD*)(a1 + 4880) = 1;
				*(_DWORD*)(a1 + 4820) = 1041865114;
				v35 = 0i64;
				*(_OWORD*)((char*)v36 + 4) = 0ui64;
				LODWORD(v36[0]) = 1065353216;
				HIDWORD(v36[2]) = 0;
				(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v27 + 584i64))(v27, 7i64, &v35);
			}
		}
	}
	v35 = __PAIR64__(a4, v9);
	HIDWORD(v36[0]) = 0;
	LODWORD(v36[1]) = v25;
	HIDWORD(v36[1]) = a7 != 0 ? 2 : 0;
	LODWORD(v36[2]) = a6;
LABEL_58:
	v31 = *(_QWORD*)(a1 + 5864);
	LODWORD(v36[0]) = a5;
	HIDWORD(v36[2]) = 0;
	(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v31 + 584i64))(v31, a2, &v35);
	v32 = a2 - 4;
	if (!v32)
	{
		v33 = *(_DWORD**)(a1 + 5600);
		goto LABEL_62;
	}
	if (v32 == 1)
	{
		v33 = *(_DWORD**)(a1 + 5608);
	LABEL_62:
		if (v33)
		{
			if (v33[105])
			{
				v34 = v33[106] == 2;
				v33[105] = 0;
				if (v34 || !v33[126] || v33[127])
					(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v33 + 80i64))(v33, 1i64);
			}
		}
	}
	return 1i64;
}
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

