#include "../winhttp.h"

//----- (000000014043F130) ----------------------------------------------------
__int64 __fastcall sub_14043F130(_DWORD* a1)
{
	unsigned int v2; // esi
	int v3; // ecx
	int v4; // ecx
	int v5; // ecx
	unsigned int v6; // ebx
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+24h] [rbp-24h]
	int v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+2Ch] [rbp-1Ch]
	__int64 v17; // [rsp+34h] [rbp-14h]
	int v18; // [rsp+3Ch] [rbp-Ch]

	v2 = 0;
	v3 = a1[2] - 3;
	if (!v3)
	{
		v2 = 1118;
		switch (a1[3])
		{
		case 4:
			v6 = 1112;
			break;
		case 5:
			v6 = 1115;
			break;
		case 0xB:
			v6 = 6672;
			break;
		default:
			goto LABEL_31;
		}
		goto LABEL_29;
	}
	v4 = v3 - 1;
	if (!v4)
	{
		v7 = a1[3];
		v2 = 1120;
		switch (v7)
		{
		case 3:
			v6 = 1109;
			break;
		case 5:
			v6 = 1116;
			break;
		case 11:
			v6 = 6673;
			break;
		default:
			goto LABEL_31;
		}
		goto LABEL_29;
	}
	v5 = v4 - 1;
	if (!v5)
	{
		v2 = 1122;
		switch (a1[3])
		{
		case 3:
			v6 = 1110;
			break;
		case 4:
			v6 = 1113;
			break;
		case 0xB:
			v6 = 6674;
			break;
		default:
			goto LABEL_31;
		}
		goto LABEL_29;
	}
	if (v5 == 6)
	{
		v2 = 6670;
		switch (a1[3])
		{
		case 3:
			v6 = 6667;
			break;
		case 4:
			v6 = 6668;
			break;
		case 5:
			v6 = 6669;
			break;
		default:
			goto LABEL_31;
		}
	LABEL_29:
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)a1 + 336i64))(*(_QWORD*)a1);
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 408i64))(v8, v6))
		{
			v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)a1 + 336i64))(*(_QWORD*)a1);
			v13 = v6;
			v14 = 0;
			v16 = 0i64;
			v17 = 0i64;
			v15 = 1065353216;
			v18 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, unsigned int*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v13);
			a1[4] = 1;
			return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)a1 + 304i64))(*(_QWORD*)a1, v2);
		}
	LABEL_31:
		v10 = *(_QWORD*)a1;
		a1[3] = a1[2];
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 336i64))(v10);
		v13 = v2;
		v14 = 0;
		v15 = 1065353216;
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, unsigned int*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v13);
		a1[4] = 0;
	}
	return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)a1 + 304i64))(*(_QWORD*)a1, v2);
}
// 14043F297: conditional instruction was optimized away because esi.4 is in (==45E|==460|==462|==1A0E)

