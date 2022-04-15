#include "../winhttp.h"

//----- (000000014006A7E0) ----------------------------------------------------
__int64 __fastcall sub_14006A7E0(__int64 a1, int* a2, int a3)
{
	__int64 result; // rax
	int v7; // edx
	__int64 v8; // xmm0_8
	int v9; // eax
	int v10; // r8d
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // edx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

	sub_14006A700(a1, a2);
	result = *a2 - 1;
	switch (*a2)
	{
	case 1:
		result = sub_140069F90(a1, a3, 1);
		goto LABEL_11;
	case 2:
	case 3:
		v7 = ((a3 | ((*a2 == 2) << 17)) << 6) | 2;
		goto LABEL_9;
	case 4:
		v7 = ((a3 | (a2[2] << 8)) << 6) | 1;
		goto LABEL_9;
	case 5:
		v8 = *((_QWORD*)a2 + 1);
		v15 = 3;
		v14 = v8;
		v9 = sub_14006A4A0((unsigned int*)a1, (int*)&v14, (__int64)&v14);
		v10 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
		v7 = ((a3 | (v9 << 8)) << 6) | 1;
		goto LABEL_10;
	case 11:
		v11 = a2[2];
		v12 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		*(_DWORD*)(v12 + 4 * v11) &= 0xFFFFC03F;
		result = (unsigned __int8)a3 << 6;
		*(_DWORD*)(v12 + 4 * v11) |= result;
		goto LABEL_11;
	case 12:
		v13 = a2[2];
		if (a3 == v13)
			goto LABEL_11;
		v7 = (a3 | (v13 << 17)) << 6;
	LABEL_9:
		v10 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
	LABEL_10:
		result = sub_14006BBF0(a1, v7, v10);
	LABEL_11:
		a2[2] = a3;
		*a2 = 12;
		return result;
	default:
		return result;
	}
}

