#include "../winhttp.h"

//----- (00000001404C72B0) ----------------------------------------------------
_DWORD* __fastcall sub_1404C72B0(__int64 a1, _DWORD* a2, __int64 a3, int a4)
{
	__int64 v8; // rbx
	int v9; // eax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	unsigned int v15; // ecx
	__int64 v16; // rax
	int v17; // eax
	int* v18; // rax
	int* v19; // rax
	unsigned __int64 v20; // r8
	__int64 v21; // rax
	__int64 v22; // rdx
	_QWORD* v23; // rcx
	unsigned int v24; // ecx
	int* v25; // rax
	int* v26; // r10
	__int64 v27; // r9
	__int64 v28; // rdx
	__int64 v29; // r8
	unsigned int v30; // r8d
	__int64 v31; // rax
	int* v32; // rdx
	__int64 v33; // rcx
	int v34; // ecx
	int v35; // ecx
	__int64 v36; // rdx
	__int64 v37; // rax
	int* v38; // rax
	int* v40; // [rsp+20h] [rbp-38h] BYREF
	int* v41; // [rsp+28h] [rbp-30h] BYREF
	_QWORD v42[5]; // [rsp+30h] [rbp-28h] BYREF

	v8 = 0i64;
	LODWORD(v40) = 0;
	if (!(unsigned int)sub_1404C7160(a1, a3, &v40))
	{
		v9 = (int)v40;
		goto LABEL_74;
	}
	switch (*(_DWORD*)(a3 + 48))
	{
	case 1:
	case 2:
	case 7:
		v10 = sub_14018B280(848i64, 0);
		if (v10)
			v8 = sub_1404C0060((__int64)v10, a1, a3, a4);
		break;
	case 3:
		v18 = sub_14018B280(864i64, 0);
		v8 = (__int64)v18;
		if (!v18)
			goto LABEL_22;
		sub_1404C0060((__int64)v18, a1, a3, a4);
		*(_QWORD*)(v8 + 848) = 0i64;
		*(_QWORD*)(v8 + 856) = 0i64;
		*(_QWORD*)v8 = off_140B6D010;
		break;
	case 4:
		v14 = sub_14018B280(928i64, 0);
		v8 = (__int64)v14;
		if (!v14)
			goto LABEL_22;
		sub_1404C0060((__int64)v14, a1, a3, a4);
		v15 = *(_DWORD*)(v8 + 108);
		*(_QWORD*)v8 = off_140B74530;
		*(_QWORD*)(v8 + 848) = 0i64;
		*(_QWORD*)(v8 + 856) = 0i64;
		v16 = sub_140207D60(v15);
		if (v16)
		{
			v17 = *(_DWORD*)(v16 + 24);
			if (((v17 & 0x340) == 0 || v17 == *(_DWORD*)(v8 + 116)) && (v17 & 0x342) != 0)
				sub_140724500(*(_DWORD*)(a1 + 20));
		}
		break;
	case 5:
		v11 = sub_14018B280(848i64, 0);
		v8 = (__int64)v11;
		if (!v11)
			goto LABEL_22;
		sub_1404C0060((__int64)v11, a1, a3, a4);
		*(_QWORD*)v8 = off_140B68DA0;
		break;
	case 6:
		v12 = sub_14018B280(848i64, 0);
		v8 = (__int64)v12;
		if (!v12)
			goto LABEL_22;
		sub_1404C0060((__int64)v12, a1, a3, a4);
		*(_QWORD*)v8 = off_140B68B20;
		break;
	case 9:
		v13 = sub_14018B280(848i64, 0);
		v8 = (__int64)v13;
		if (!v13)
			goto LABEL_22;
		sub_1404C0060((__int64)v13, a1, a3, a4);
		*(_QWORD*)v8 = off_140B68C60;
		break;
	case 0xA:
		v19 = sub_14018B280(848i64, 0);
		v8 = (__int64)v19;
		if (v19)
		{
			sub_1404C0060((__int64)v19, a1, a3, a4);
			*(_QWORD*)v8 = off_140B6E290;
		}
		else
		{
		LABEL_22:
			v8 = 0i64;
		}
		break;
	default:
		break;
	}
	v20 = *(_QWORD*)(v8 + 88);
	if (v20)
	{
		v21 = *(_QWORD*)(a1 + 56);
		v22 = v21;
		v23 = *(_QWORD**)(v21 + 8);
		while (v23)
		{
			if (v23[4] < v20)
			{
				v23 = (_QWORD*)v23[3];
			}
			else
			{
				v22 = (__int64)v23;
				v23 = (_QWORD*)v23[2];
			}
		}
		if (v22 == v21 || (v40 = (int*)v22, v20 < *(_QWORD*)(v22 + 32)))
			v40 = (int*)v21;
		if (v40 == (int*)v21)
			*(_QWORD*)sub_1404CB3D0(a1 + 48, (unsigned __int64*)(v8 + 88)) = v8;
	}
	v24 = *(_DWORD*)(v8 + 496);
	if (v24)
	{
		v25 = *(int**)(a1 + 88);
		v26 = v25;
		v27 = (__int64)v25;
		v28 = *((_QWORD*)v25 + 1);
		v29 = v28;
		while (v29)
		{
			if (*(_DWORD*)(v29 + 32) < v24)
			{
				v29 = *(_QWORD*)(v29 + 24);
			}
			else
			{
				v27 = v29;
				v29 = *(_QWORD*)(v29 + 16);
			}
		}
		if ((int*)v27 == v25 || (v40 = (int*)v27, v24 < *(_DWORD*)(v27 + 32)))
			v40 = v25;
		if (v40 == v25)
		{
			while (v28)
			{
				if (*(_DWORD*)(v28 + 32) < v24)
				{
					v28 = *(_QWORD*)(v28 + 24);
				}
				else
				{
					v25 = (int*)v28;
					v28 = *(_QWORD*)(v28 + 16);
				}
			}
			if (v25 == v26 || v24 < v25[8])
			{
				LODWORD(v42[0]) = v24;
				v42[1] = 0i64;
				v40 = v25;
				sub_140055C60(a1 + 80, &v41, (__int64*)&v40, v42);
				v25 = v41;
			}
			*((_QWORD*)v25 + 5) = v8;
		}
	}
	v30 = *(_DWORD*)(v8 + 104);
	if (v30)
	{
		v31 = *(_QWORD*)(a1 + 120);
		v32 = (int*)v31;
		v33 = *(_QWORD*)(v31 + 8);
		while (v33)
		{
			if (*(_DWORD*)(v33 + 32) < v30)
			{
				v33 = *(_QWORD*)(v33 + 24);
			}
			else
			{
				v32 = (int*)v33;
				v33 = *(_QWORD*)(v33 + 16);
			}
		}
		if (v32 == (int*)v31 || (v41 = v32, v30 < v32[8]))
			v41 = (int*)v31;
		if (v41 == (int*)v31)
			*(_QWORD*)sub_140055BE0(a1 + 112, (_DWORD*)(v8 + 104)) = v8;
	}
	v34 = *(_DWORD*)(a1 + 40);
	if (v34)
	{
		v35 = v34 - 1;
		if (!v35)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v8 + 24i64))(v8, 0i64, *(unsigned int*)(a1 + 20));
			v36 = *(unsigned int*)(a1 + 40);
			goto LABEL_68;
		}
		if (v35 != 1)
			goto LABEL_69;
	}
	v36 = 0i64;
LABEL_68:
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 24i64))(v8, v36, *(unsigned int*)(a1 + 20));
LABEL_69:
	if (((*(_DWORD*)(v8 + 128) - 5) & 0xFFFFFFFA) == 0)
	{
		v37 = sub_140203DA0(*(_DWORD*)(v8 + 96));
		if (v37)
		{
			if (*(_DWORD*)(v37 + 44))
			{
				v38 = sub_140032640(a1 + 200, (_DWORD*)(v37 + 44));
				++* v38;
			}
		}
	}
	v9 = *(_DWORD*)(v8 + 496);
LABEL_74:
	*a2 = v9;
	return a2;
}
// 140B68B20: using guessed type __int64 (__fastcall *off_140B68B20[39])();
// 140B68C60: using guessed type __int64 (__fastcall *off_140B68C60[39])();
// 140B68DA0: using guessed type __int64 (__fastcall *off_140B68DA0[39])();
// 140B6D010: using guessed type __int64 (__fastcall *off_140B6D010[39])();
// 140B6E290: using guessed type __int64 (__fastcall *off_140B6E290[39])();
// 140B74530: using guessed type __int64 (__fastcall *off_140B74530[39])();

