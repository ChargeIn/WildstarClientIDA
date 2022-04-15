#include "../winhttp.h"

//----- (0000000140718120) ----------------------------------------------------
__int64 __fastcall sub_140718120(__int64 a1, unsigned int* a2)
{
	__int64 v5; // rax
	__int64 v6; // rbp
	int* v7; // rax
	unsigned int v8; // edi
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	unsigned int v20; // ecx
	unsigned int v21; // eax
	__int64 v22; // rax
	unsigned int v23; // ecx
	__int64 v24; // rax
	unsigned int v25; // eax
	int* v26; // rax
	int* v27; // rax
	int* v28; // rax
	int* v29; // rax
	int* v30; // rax
	int* v31; // rax
	int* v32; // rax
	int* v33; // rax
	int* v34; // rax
	int* v35; // rax
	int* v36; // rax
	int* v37; // rax
	int* v38; // rax
	int* v39; // rax
	unsigned int v40; // ecx
	__int64(__fastcall * *v41)(); // [rsp+58h] [rbp+10h] BYREF

	if (!a2)
		return 2147500037i64;
	v5 = sub_1404E1C50(a1, *a2, *(_QWORD*)(qword_140C65898 + 120));
	v6 = v5;
	if (!v5)
		return 2147500037i64;
	switch (*(_DWORD*)(v5 + 16))
	{
	case 3:
		v7 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v7;
		if (!v7)
			goto LABEL_96;
		sub_1405D65A0((__int64)v7);
		*(_QWORD*)v9 = off_140B73D40;
		break;
	case 4:
		v34 = sub_14018B280(344i64, 0);
		v9 = (__int64)v34;
		if (v34)
		{
			sub_1405D65A0((__int64)v34);
			v8 = 0;
			*(_QWORD*)v9 = off_140B6E1F0;
			*(_DWORD*)(v9 + 340) = 0;
		}
		else
		{
			v8 = 0;
			v9 = 0i64;
		}
		if ((int)sub_1405D86A0(v9, a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 8:
	case 0xC:
	case 0x21:
	case 0x8A:
		v11 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v11;
		if (v11)
		{
			sub_1405D65A0((__int64)v11);
			*(_QWORD*)v9 = off_140B73DE0;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D77A0(v9, a2, a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0xA:
	case 0x76:
		v10 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v10;
		if (v10)
		{
			sub_1405D65A0((__int64)v10);
			*(_QWORD*)v9 = off_140B73D90;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D77A0(v9, a2, a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x12:
		v12 = sub_14018B280(352i64, 0);
		v8 = 0;
		v9 = (__int64)v12;
		if (v12)
		{
			sub_1405D65A0((__int64)v12);
			*(_QWORD*)v9 = off_140B6E1A0;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D8BD0(v9, a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x24:
		v33 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v33;
		if (v33)
		{
			sub_1405D65A0((__int64)v33);
			*(_QWORD*)v9 = off_140B6E000;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405DA180(v9, (__int64)a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x37:
		v13 = sub_14018B280(344i64, 0);
		v8 = 0;
		v9 = (__int64)v13;
		if (v13)
		{
			sub_1405D65A0((__int64)v13);
			*v14 = off_140B6E140;
			v14[42] = &off_140B6E190;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D6880(v9, (__int64)a2, (__int64*)a1) < 0)
			return 2147500037i64;
		v15 = *(unsigned int*)(v9 + 92);
		v16 = *(_QWORD*)(qword_140C65898 + 120);
		if (v16 && *(_DWORD*)(v16 + 8) == (_DWORD)v15
			|| (v17 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v17 + 8) == (_DWORD)v15)
		{
			v18 = *(unsigned int**)(v9 + 176);
			v41 = off_140B6DF00;
			sub_1405DA6B0(
				v15,
				qword_140C65B70,
				qword_140C65898,
				(__int64)v18,
				*v18,
				(void(__fastcall***)(_QWORD, _QWORD, __int64, __int64)) & v41);
		}
		goto LABEL_32;
	case 0x38:
		v26 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v26;
		if (v26)
		{
			sub_1405D65A0((__int64)v26);
			*(_QWORD*)v9 = off_140B6E050;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D91F0(v9, (__int64)a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x40:
		v37 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v37;
		if (!v37)
			goto LABEL_96;
		sub_1405D65A0((__int64)v37);
		*(_QWORD*)v9 = off_140B6DE60;
		break;
	case 0x49:
		v27 = sub_14018B280(344i64, 0);
		v8 = 0;
		v9 = (__int64)v27;
		if (v27)
		{
			sub_1405D65A0((__int64)v27);
			*(_QWORD*)v9 = off_140B6E0A0;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405D9850(v9, a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x4B:
		v29 = sub_14018B280(344i64, 0);
		v9 = (__int64)v29;
		if (!v29)
			goto LABEL_95;
		sub_1405D65A0((__int64)v29);
		v8 = 0;
		*(_QWORD*)v9 = off_140B6E0F0;
		*(_DWORD*)(v9 + 336) = 0;
		break;
	case 0x4C:
		v30 = sub_14018B280(368i64, 0);
		v9 = (__int64)v30;
		if (!v30)
			goto LABEL_95;
		sub_1405D65A0((__int64)v30);
		v8 = 0;
		*(_DWORD*)(v9 + 336) = 31;
		*(_QWORD*)(v9 + 340) = 0xFFFFFFFFi64;
		*(_QWORD*)v9 = off_140B6DF10;
		break;
	case 0x52:
		v31 = sub_14018B280(344i64, 0);
		v9 = (__int64)v31;
		if (v31)
		{
			sub_1405D65A0((__int64)v31);
			v8 = 0;
			*(_QWORD*)v9 = off_140B6DF60;
			*(_QWORD*)(v9 + 336) = 0i64;
		}
		else
		{
			v8 = 0;
			v9 = 0i64;
		}
		if ((int)sub_1405D9DB0(v9, (__int64)a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x5A:
		v36 = sub_14018B280(352i64, 0);
		v9 = (__int64)v36;
		if (v36)
		{
			sub_1405D65A0((__int64)v36);
			v8 = 0;
			*(_QWORD*)(v9 + 336) = 0i64;
			*(_DWORD*)(v9 + 344) = 0;
			*(_QWORD*)v9 = off_140B6DE10;
		}
		else
		{
			v8 = 0;
			v9 = 0i64;
		}
		if ((int)sub_1405DA3F0(v9, a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x5F:
		v35 = sub_14018B280(344i64, 0);
		v8 = 0;
		v9 = (__int64)v35;
		if (v35)
		{
			sub_1405D65A0((__int64)v35);
			*(_QWORD*)v9 = off_140B6DDC0;
		}
		else
		{
			v9 = 0i64;
		}
		if ((int)sub_1405DA280(v9, a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x63:
		v32 = sub_14018B280(344i64, 0);
		v9 = (__int64)v32;
		if (v32)
		{
			sub_1405D65A0((__int64)v32);
			v8 = 0;
			*(_QWORD*)v9 = off_140B6DFB0;
			*(_QWORD*)(v9 + 336) = 0i64;
		}
		else
		{
			v8 = 0;
			v9 = 0i64;
		}
		if ((int)sub_1405D9F80(v9, (__int64)a2, (__int64*)a1) >= 0)
			goto LABEL_32;
		return 2147500037i64;
	case 0x6C:
		v28 = sub_14018B280(336i64, 0);
		v8 = 0;
		v9 = (__int64)v28;
		if (!v28)
			goto LABEL_96;
		sub_1405D65A0((__int64)v28);
		*(_QWORD*)v9 = off_140B73E30;
		break;
	case 0x8E:
		v38 = sub_14018B280(352i64, 0);
		v9 = (__int64)v38;
		if (v38)
		{
			sub_1405D65A0((__int64)v38);
			v8 = 0;
			*(_QWORD*)(v9 + 336) = 0i64;
			*(_DWORD*)(v9 + 344) = 0;
			*(_QWORD*)v9 = off_140B6DEB0;
		}
		else
		{
		LABEL_95:
			v8 = 0;
		LABEL_96:
			v9 = 0i64;
		}
		break;
	default:
		v39 = sub_14018B280(336i64, 0);
		v8 = 0;
		if (!v39)
			goto LABEL_96;
		v9 = sub_1405D65A0((__int64)v39);
		break;
	}
	if ((int)sub_1405D6880(v9, (__int64)a2, (__int64*)a1) < 0)
		return 2147500037i64;
LABEL_32:
	v19 = *(_QWORD*)(v9 + 176);
	v20 = *(_DWORD*)(v9 + 188);
	if (v19 && (*(_BYTE*)(v19 + 60) & 2) != 0)
		v20 = -1;
	v21 = *(_DWORD*)(a1 + 72);
	if (v21 < v20)
		v21 = v20;
	*(_DWORD*)(a1 + 72) = v21;
	if ((*(_BYTE*)(v6 + 60) & 1) != 0)
	{
		v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 312i64) + 112i64);
		v23 = *(_DWORD*)(v22 + 56);
		if (v23 || (v23 = *(_DWORD*)(v22 + 84)) != 0)
		{
			v24 = sub_140237680(v23);
			if (v24)
				v8 = *(_DWORD*)(v24 + 72);
		}
		v25 = *(_DWORD*)(a1 + 76);
		if (v8 < v25)
			v25 = v8;
		*(_DWORD*)(a1 + 76) = v25;
	}
	else
	{
		v40 = *(_DWORD*)(a1 + 76);
		if (a2[2] < v40)
			v40 = a2[2];
		*(_DWORD*)(a1 + 76) = v40;
	}
	return 0i64;
}
// 1407182EF: variable 'v14' is possibly undefined
// 140B6DDC0: using guessed type __int64 (__fastcall *off_140B6DDC0[123])();
// 140B6DE10: using guessed type __int64 (__fastcall *off_140B6DE10[113])();
// 140B6DE60: using guessed type __int64 (__fastcall *off_140B6DE60[103])();
// 140B6DEB0: using guessed type __int64 (__fastcall *off_140B6DEB0[93])();
// 140B6DF00: using guessed type __int64 (__fastcall *off_140B6DF00[83])();
// 140B6DF10: using guessed type __int64 (__fastcall *off_140B6DF10[81])();
// 140B6DF60: using guessed type __int64 (__fastcall *off_140B6DF60[71])();
// 140B6DFB0: using guessed type __int64 (__fastcall *off_140B6DFB0[61])();
// 140B6E000: using guessed type __int64 (__fastcall *off_140B6E000[51])();
// 140B6E050: using guessed type __int64 (__fastcall *off_140B6E050[41])();
// 140B6E0A0: using guessed type __int64 (__fastcall *off_140B6E0A0[31])();
// 140B6E0F0: using guessed type __int64 (__fastcall *off_140B6E0F0[21])();
// 140B6E140: using guessed type __int64 (__fastcall *off_140B6E140[11])();
// 140B6E190: using guessed type __int64 (__fastcall *off_140B6E190)();
// 140B6E1A0: using guessed type __int64 (__fastcall *off_140B6E1A0[69])();
// 140B6E1F0: using guessed type __int64 (__fastcall *off_140B6E1F0[59])();
// 140B73D40: using guessed type __int64 (__fastcall *off_140B73D40[51])();
// 140B73D90: using guessed type __int64 (__fastcall *off_140B73D90[41])();
// 140B73DE0: using guessed type __int64 (__fastcall *off_140B73DE0[31])();
// 140B73E30: using guessed type __int64 (__fastcall *off_140B73E30[21])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

