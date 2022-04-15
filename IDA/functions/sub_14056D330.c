#include "../winhttp.h"

//----- (000000014056D330) ----------------------------------------------------
__int64 __fastcall sub_14056D330(__int64 a1)
{
	unsigned int v1; // ebx
	__int64 v2; // rdx
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	int* v15; // rdi
	__int64 v16; // rsi
	__int16* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rcx
	int* v20; // rdi
	__int64 v21; // rsi
	__int16* v22; // rax
	_DWORD* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx

	v1 = 0;
	v2 = **(_QWORD**)(a1 + 48);
	switch (*(_DWORD*)(v2 + 12))
	{
	case 2:
	case 0xE:
	case 0x10:
		return 100i64;
	case 3:
	case 0xF:
	case 0x1B:
		v8 = sub_140721EF0(a1, *(_DWORD*)(v2 + 20));
		if (!v8)
			goto LABEL_58;
		return *(unsigned int*)(v8 + 24);
	case 4:
		v5 = sub_1402237C0(*(_DWORD*)(v2 + 20));
		if (!v5)
			goto LABEL_58;
		return *(unsigned int*)(v5 + 12);
	case 5:
	case 6:
		v7 = sub_140223380(*(_DWORD*)(v2 + 20));
		if (!v7)
			goto LABEL_58;
		return *(unsigned int*)(v7 + 12);
	case 7:
		v6 = sub_140224480(*(_DWORD*)(v2 + 20));
		if (!v6)
			goto LABEL_58;
		return *(unsigned int*)(v6 + 12);
	case 0xD:
		v4 = sub_140721F50(a1, *(_DWORD*)(v2 + 20));
		if (!v4)
			goto LABEL_58;
		return (unsigned int)((__int64)(*(_QWORD*)(v4 + 32) - *(_QWORD*)(v4 + 24)) >> 3);
	case 0x11:
		v10 = sub_14021CD80(*(_DWORD*)(v2 + 20));
		if (!v10)
			goto LABEL_58;
		return *(unsigned int*)(v10 + 12);
	case 0x12:
		v11 = sub_14021E2C0(*(_DWORD*)(v2 + 20));
		if (!v11)
			goto LABEL_58;
		return *(unsigned int*)(v11 + 8);
	case 0x13:
		v9 = sub_140432960(qword_140C65960, *(_DWORD*)(v2 + 20));
		if (!v9)
			goto LABEL_58;
		return *(unsigned int*)(*(_QWORD*)(v9 + 8) + 32i64);
	case 0x14:
		v12 = sub_140220D40(*(_DWORD*)(v2 + 20));
		return sub_1405726F0(v12);
	case 0x15:
		v24 = sub_140221E40(*(_DWORD*)(v2 + 20));
		goto LABEL_56;
	case 0x17:
		v13 = sub_140221180(*(_DWORD*)(v2 + 20));
		if (!v13)
			goto LABEL_58;
		v15 = (int*)(v13 + 4);
		v16 = 10i64;
		do
		{
			if (*v15)
			{
				v17 = sub_14034BDD0(v14, *v15);
				if (v17)
				{
					if (*v17)
						++v1;
				}
			}
			++v15;
			--v16;
		} while (v16);
		result = v1;
		break;
	case 0x18:
		v25 = sub_140220080(*(_DWORD*)(v2 + 20));
		if (v25)
		{
			v24 = sub_1404A85E0(v26, *(_DWORD*)(v25 + 4));
		LABEL_56:
			if (v24)
				v1 = *(_DWORD*)(v24 + 16);
		}
		goto LABEL_58;
	case 0x19:
		v18 = sub_140222B00(*(_DWORD*)(v2 + 20));
		if (!v18)
			goto LABEL_58;
		v20 = (int*)(v18 + 4);
		v21 = 8i64;
		do
		{
			if (*v20)
			{
				v22 = sub_14034BDD0(v19, *v20);
				if (v22)
				{
					if (*v22)
						++v1;
				}
			}
			++v20;
			--v21;
		} while (v21);
		result = v1;
		break;
	case 0x1A:
		v23 = (_DWORD*)sub_140222F40(*(_DWORD*)(v2 + 20));
		if (!v23)
			goto LABEL_58;
		if (v23[1])
			v1 = 1;
		if (v23[2])
			++v1;
		if (v23[3])
			++v1;
		if (v23[4])
			++v1;
		if (v23[5])
			++v1;
		if (v23[6])
			++v1;
		if (v23[7])
			++v1;
		if (!v23[8])
			goto LABEL_58;
		result = v1 + 1;
		break;
	default:
	LABEL_58:
		result = v1;
		break;
	}
	return result;
}
// 14056D50B: variable 'v14' is possibly undefined
// 14056D558: variable 'v19' is possibly undefined
// 14056D605: variable 'v26' is possibly undefined
// 140C65960: using guessed type __int64 qword_140C65960;

