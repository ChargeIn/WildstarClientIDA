#include "../winhttp.h"

//----- (00000001403B6A80) ----------------------------------------------------
__int64 __fastcall sub_1403B6A80(__int64 a1, int* a2)
{
	int v2; // edi
	__int64 v3; // rbx
	int v5; // esi
	int* v6; // rax
	int v7; // r8d
	int v8; // edi
	int* v10; // rax
	__int64 v11; // rcx
	int* v12; // rdi
	__int16* v13; // rax
	int v14; // ebx
	int** v15; // rbp
	__int64 v16; // rax

	v2 = *a2;
	v3 = 0i64;
	switch (a2[1])
	{
	case 6:
		v5 = 584168;
		v2 = 0;
		break;
	case 7:
		v5 = 680846;
		v2 = 0;
		break;
	case 8:
		v5 = 584165;
		v2 = 0;
		break;
	case 12:
		v5 = 584167;
		v2 = 0;
		break;
	case 15:
		v5 = 584166;
		v2 = 0;
		break;
	case 16:
		v5 = 617189;
		v2 = 0;
		break;
	case 19:
		v5 = 730766;
		v2 = 0;
		break;
	case 20:
		v5 = 734720;
		v2 = 0;
		break;
	default:
		v5 = 143475;
		break;
	}
	sub_1403FA730(a1);
	sub_1403FA3D0(a1);
	sub_140016480(qword_140C635F0);
	if (v2)
	{
		v6 = sub_14018B280(720i64, 0);
		if (v6)
			v3 = sub_140020730((__int64)v6);
		v8 = sub_140020BC0(v3, *(void(__fastcall****)(_QWORD))(a1 + 31016), v7);
		if (v8 >= 0)
		{
			v8 = sub_140048100(a1, v3, 1);
			if (v8 >= 0)
			{
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "LogOut", &unk_1409D11FD);
				if (v3)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
					return 0i64;
				}
				return 0i64;
			}
		}
		if (v3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		return (unsigned int)v8;
	}
	else
	{
		v10 = sub_14018B280(136i64, 0);
		v12 = v10;
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55048;
			v10[2] = 1;
			*((_QWORD*)v10 + 3) = 0i64;
			*((_QWORD*)v10 + 4) = 0i64;
			*((_QWORD*)v10 + 6) = 0i64;
			v10[14] = 0;
			*((_QWORD*)v10 + 2) = 0i64;
			v10[10] = 0;
			v10[19] = 0;
			*((_QWORD*)v10 + 11) = 0i64;
			*((_QWORD*)v10 + 10) = 0i64;
			*((_QWORD*)v10 + 13) = 0i64;
			*(_QWORD*)v10 = off_140B555D0;
			*((_QWORD*)v10 + 14) = 0i64;
			*((_QWORD*)v10 + 15) = 0i64;
			*((_QWORD*)v10 + 16) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = sub_14034BDD0(v11, v5);
		*((_QWORD*)v12 + 16) = *(_QWORD*)(a1 + 31016);
		v14 = sub_140033780((__int64)v12, (__int64)v13, 0i64);
		if (v14 >= 0)
		{
			v14 = sub_140048100(a1, (__int64)v12, 2);
			if (v14 >= 0)
			{
				v15 = (int**)(a1 + 25592);
				if (!*((_QWORD*)v12 + 14))
				{
					*((_QWORD*)v12 + 14) = v15;
					*((_QWORD*)v12 + 15) = *v15;
					*v15 = v12;
					v16 = *((_QWORD*)v12 + 15);
					if (v16)
						*(_QWORD*)(v16 + 112) = v12 + 30;
				}
				(*(void(__fastcall**)(int*))(*(_QWORD*)v12 + 8i64))(v12);
				return 0i64;
			}
		}
		(*(void(__fastcall**)(int*))(*(_QWORD*)v12 + 8i64))(v12);
		return (unsigned int)v14;
	}
}
// 1403B6B52: variable 'v7' is possibly undefined
// 1403B6C2E: variable 'v11' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B555D0: using guessed type __int64 (__fastcall *off_140B555D0[9])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

