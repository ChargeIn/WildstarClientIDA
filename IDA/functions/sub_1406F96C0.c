#include "../winhttp.h"

//----- (00000001406F96C0) ----------------------------------------------------
__int64 __fastcall sub_1406F96C0(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // rdx
	_QWORD* v3; // rsi
	__int64 v4; // r14
	_DWORD* v5; // rbx
	__int64 v6; // rdx
	unsigned __int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // rbx
	int v11; // edi
	_QWORD* v12; // rax
	__int64 v13; // rdx
	_QWORD** v14; // rax
	__int64 v15; // rdx
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	unsigned int v18; // r15d
	__int64 v19; // r12
	int v20; // ebx
	__int64 v21; // rax
	int v22; // r13d
	__int64* v23; // rsi
	__int64* v24; // rdi
	__int64 v25; // rax
	__int64 v26; // rax
	unsigned int v27; // ebx
	__int64 v28; // rax
	int v29; // ecx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	unsigned __int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // r8
	_QWORD* v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rbx
	__int64 v40; // rax
	__int64 v41; // r9
	__int64 v43; // [rsp+30h] [rbp-69h] BYREF
	__int64 v44; // [rsp+38h] [rbp-61h]
	__int64 v45; // [rsp+40h] [rbp-59h]
	__int64(__fastcall * *v46)(); // [rsp+48h] [rbp-51h] BYREF
	int v47; // [rsp+50h] [rbp-49h]
	__int64 v48; // [rsp+58h] [rbp-41h]
	int v49; // [rsp+60h] [rbp-39h]
	__int64(__fastcall * *v50)(); // [rsp+68h] [rbp-31h] BYREF
	int v51; // [rsp+70h] [rbp-29h]
	__int64 v52; // [rsp+78h] [rbp-21h]
	__int64(__fastcall * **v53)(); // [rsp+80h] [rbp-19h]
	__int64 v54[13]; // [rsp+88h] [rbp-11h] BYREF
	_QWORD* v55; // [rsp+100h] [rbp+67h]
	unsigned int v56; // [rsp+108h] [rbp+6Fh]
	__int64 v57; // [rsp+110h] [rbp+77h]

	v55 = (_QWORD*)a1;
	v1 = *(_DWORD**)(a1 + 24);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = (_QWORD*)a1;
	v4 = 0i64;
	if ((unsigned __int64)v1 >= v2 || (v5 = dword_140A12138, v1 == dword_140A12138) || v1[2] != 5)
	{
		v17 = (_QWORD*)sub_140417660(a1, 1);
		v54[0] = (__int64)v17;
		if (!v17 || !*v17 || !*(_QWORD*)*v17)
			goto LABEL_23;
		v4 = 1i64;
		v56 = 1;
	}
	else
	{
		v49 = 1;
		v47 = -2;
		v46 = off_140B569F0;
		v48 = a1;
		if ((unsigned __int64)v1 < v2 && v1 != dword_140A12138 && v1[2] == 5)
		{
			sub_1400579E0(a1, v2, -2);
			v6 = v48;
			v7 = *(_QWORD*)(v48 + 16);
			if (*(_QWORD*)(v48 + 24) < v7)
				v5 = *(_DWORD**)(v48 + 24);
			*(_QWORD*)v7 = *(_QWORD*)v5;
			*(_DWORD*)(v7 + 8) = v5[2];
			*(_QWORD*)(v6 + 16) += 16i64;
			v8 = sub_1400578C0(v48);
			a1 = v48;
			v47 = v8;
		}
		v52 = a1;
		v51 = -2;
		v53 = &v46;
		v50 = off_140B56A08;
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v50[2])(&v50, 0xFFFFFFFFi64);
		*(_QWORD*)(v48 + 16) -= 16i64;
		do
		{
			if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v53)[1])(v53)
				|| !(unsigned int)sub_1400FCBA0((__int64)&v50))
			{
				break;
			}
			sub_1400FB8D0((__int64)&v50, (__int64)&v43);
			v10 = v45;
			v11 = v44;
			v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v45 + 32) + 160i64), v44);
			v13 = *(_QWORD*)(v10 + 16);
			*(_QWORD*)v13 = *v12;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
			*(_QWORD*)(v10 + 16) += 16i64;
			v14 = (_QWORD**)sub_140417660((__int64)v3, -1);
			v3[2] -= 16i64;
			v54[v4] = (__int64)v14;
			if (v14)
			{
				v16 = *v14;
				if (v16)
				{
					if (*v16)
						v4 = (unsigned int)(v4 + 1);
				}
			}
			sub_1400579E0(v10, v15, v11);
		} while ((unsigned int)v4 < 6);
		v56 = v4;
		v50 = off_140B56A08;
		if (v52)
			sub_1400579E0(v52, v9, v51);
		v46 = off_140B56A08;
		if (v48)
			sub_1400579E0(v48, v9, v47);
		if (!(_DWORD)v4)
			LABEL_23:
		sub_140056570(v3, 1u, "item instance or table of item instances expected");
	}
	v18 = 0;
	v19 = 0i64;
	do
	{
		v20 = sub_140056D60(v3, v18 + 2);
		if (v20 <= 0)
			goto LABEL_61;
		if (qword_140C63840)
		{
			v21 = qword_140C63840(off_140A6A168, (unsigned int)v20, qword_140C63858);
		}
		else
		{
			if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
				LABEL_60:
			sub_140056570(v3, v18 + 2, "Bad dye color");
			v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(
				qword_140C63AE0,
				(unsigned int)v20);
		}
		v57 = v21;
		if (!v21)
			goto LABEL_60;
		v22 = __ROL4__(1, v18);
		if (!(_DWORD)v4)
			goto LABEL_61;
		v23 = v54;
		do
		{
			v24 = (__int64*)*v23;
			v25 = *(_QWORD*)*v23;
			if (v25 && *(_DWORD*)(v25 + 1184))
				v26 = *(_QWORD*)(v25 + 8);
			else
				v26 = 0i64;
			v27 = *(_DWORD*)(v26 + 388);
			if (qword_140C63840)
			{
				v28 = qword_140C63840(off_140A6ADA8, v27, qword_140C63858);
			}
			else
			{
				if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
				{
				LABEL_49:
					v29 = 0;
					goto LABEL_50;
				}
				v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v27);
			}
			if (!v28)
				goto LABEL_49;
			v29 = *(_DWORD*)(v28 + 248);
		LABEL_50:
			if ((v22 & v29) != 0)
			{
				v30 = *v24;
				v43 = 0i64;
				v44 = 1i64;
				v45 = 0i64;
				if (v30 && *(_DWORD*)(v30 + 1184))
					v31 = *(_QWORD*)(v30 + 8);
				else
					v31 = 0i64;
				if (qword_140C65898 && (unsigned int)sub_14070C8C0(v31, &v43, qword_140C65898, v18, *(float*)(v57 + 16)))
					v19 += v43;
			}
			++v23;
			--v4;
		} while (v4);
		v3 = v55;
	LABEL_61:
		v4 = v56;
		++v18;
	} while (v18 < 3);
	v32 = v3[4];
	v44 = 1i64;
	v33 = *(_QWORD*)(v32 + 112);
	v45 = 0i64;
	if (*(_QWORD*)(v32 + 120) >= v33)
		sub_14005E2C0((__int64)v3);
	v34 = v3[5];
	if (v34 == v3[10])
		v35 = v3[15];
	else
		v35 = *(_QWORD*)(**(_QWORD**)(v34 + 8) + 24i64);
	v36 = (_QWORD*)sub_1400627D0((__int64)v3, 0x18ui64, v35);
	v37 = v3[2];
	*(_QWORD*)v37 = v36;
	*(_DWORD*)(v37 + 8) = 7;
	v3[2] += 16i64;
	v38 = v44;
	v36[6] = v19;
	v36[7] = v38;
	v36[8] = v45;
	v39 = v3[4];
	v40 = sub_140062650((__int64)v3, (unsigned __int64*)"Game.Money", 0xAui64);
	v41 = v3[2];
	v43 = v40;
	LODWORD(v44) = 4;
	sub_14005E8E0((__int64)v3, v39 + 160, (int*)&v43, v41);
	v3[2] += 16i64;
	sub_140058BF0((__int64)v3, -2);
	return 1i64;
}
// 1406F984A: variable 'v15' is possibly undefined
// 1406F986E: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406F96C0: using guessed type __int64 var_68[13];

