#include "../winhttp.h"

//----- (00000001407058B0) ----------------------------------------------------
__int64 __fastcall sub_1407058B0(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // ebp
	_DWORD* v4; // rax
	unsigned __int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rbx
	int* v9; // r10
	void(__fastcall * **v10)(_QWORD); // rbx
	unsigned int v11; // edi
	char* v13; // rax
	int* v14; // rsi
	int* v15; // r14
	void(__fastcall * **v16)(_QWORD); // rbx
	int* v17; // rsi
	__int64 v18; // rax
	struct _FILETIME v19; // rax
	__int64 v20; // rbp
	int* v21; // rax
	_WORD* v22; // rax
	unsigned int v23; // ebx
	_QWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v25; // [rsp+50h] [rbp-48h]
	__int64 v26; // [rsp+60h] [rbp-38h] BYREF
	int* v27; // [rsp+68h] [rbp-30h]
	int* v28; // [rsp+70h] [rbp-28h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp+10h] BYREF
	struct _FILETIME v30; // [rsp+B0h] [rbp+18h] BYREF

	v2 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v3 = 1;
	else
		v3 = sub_140056D60(a1, 2u);
	v4 = (_DWORD*)a1[3];
	v5 = a1[2];
	if ((unsigned __int64)v4 >= v5)
		goto LABEL_31;
	if (v4 == dword_140A12138 || v4[2] != 3)
	{
		if ((unsigned __int64)v4 < v5 && v4 != dword_140A12138 && v4[2] == 4)
		{
			v13 = (char*)sub_140056BB0(a1, 1u, 0i64);
			sub_14018F2D0(&v26, v13);
			v14 = v27;
			if (v27 == v28)
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				if (v14)
					sub_14018B900((__int64)v14, 0);
				return 1i64;
			}
			else
			{
				v15 = sub_14018B280(104i64, 0);
				if (v15)
				{
					GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
					LODWORD(v24[0]) = 0;
					v24[1] = 0i64;
					v16 = (void(__fastcall***)(_QWORD))sub_14073DE90(
						(__int64)v15,
						v14,
						v14,
						v24,
						v3,
						0,
						*(_QWORD*)&SystemTimeAsFileTime);
				}
				else
				{
					v16 = 0i64;
				}
				v11 = sub_14073EB30(a1, v16);
				if (v16)
					(*v16)[1](v16);
				if (!v14)
					return v11;
				sub_14018B900((__int64)v14, 0);
				return v11;
			}
		}
	LABEL_31:
		v17 = sub_14018B280(104i64, 0);
		if (v17)
		{
			GetSystemTimeAsFileTime(&v30);
			*(_QWORD*)v17 = off_140B55048;
			v17[2] = 1;
			v17[4] = 0;
			LODWORD(v25) = 0;
			*(_QWORD*)v17 = off_140B74C90;
			v18 = v25;
			*((_QWORD*)v17 + 3) = 0i64;
			*((_QWORD*)v17 + 4) = 0i64;
			*((_QWORD*)v17 + 5) = 0i64;
			*((_QWORD*)v17 + 6) = 0i64;
			*((_QWORD*)v17 + 7) = v18;
			v19 = v30;
			v17[18] = v3;
			*((_QWORD*)v17 + 8) = 0i64;
			v17[19] = 0;
			*((_QWORD*)v17 + 10) = 0i64;
			*((struct _FILETIME*)v17 + 11) = v19;
			*((_QWORD*)v17 + 12) = 0i64;
			v20 = *((_QWORD*)v17 + 4);
			v21 = sub_14018B280(18i64, 0);
			if (v21)
			{
				*((_QWORD*)v21 + 1) = 0i64;
				*(_QWORD*)v21 = off_140B55060;
			}
			else
			{
				v21 = 0i64;
			}
			v22 = v21 + 4;
			*v22 = 0;
			*((_QWORD*)v17 + 4) = v22;
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			sub_14073E320((__int64)v17);
		}
		else
		{
			v17 = 0i64;
		}
		v23 = sub_14073EB30(a1, (void(__fastcall***)(_QWORD))v17);
		if (v17)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v17 + 8i64))(v17);
		return v23;
	}
	v6 = sub_140056D60(a1, 1u);
	v8 = sub_14070D100(v7, v6 - 1);
	if (v8)
	{
		v9 = sub_14018B280(104i64, 0);
		if (v9)
			v10 = (void(__fastcall***)(_QWORD))sub_14073E140(
				(__int64)v9,
				*(int**)(v8 + 24),
				0i64,
				v3,
				4,
				*(unsigned int*)(v8 + 16),
				(_QWORD*)(v8 + 32));
		else
			v10 = 0i64;
		v11 = sub_14073EB30(a1, v10);
		if (v10)
			(*v10)[1](v10);
		return v11;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 14070592F: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74C90: using guessed type __int64 (__fastcall *off_140B74C90[3])();

