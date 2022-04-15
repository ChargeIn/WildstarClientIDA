#include "../winhttp.h"

//----- (0000000140573E90) ----------------------------------------------------
__int64 __fastcall sub_140573E90(__int64 a1, __int64 a2, _DWORD* a3, _QWORD** a4, _DWORD* a5, int a6)
{
	__int64 v9; // rax
	__int64 result; // rax
	float v11; // xmm6_4
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rax
	int v15; // ebp
	float v16; // xmm0_4
	float v17; // xmm6_4
	int v18; // ecx
	__int64 v19; // rax
	__int64 v20; // rbp
	__int64 v21; // rax

	if (!a2)
		return 0i64;
	if (!a3)
		return 0i64;
	if (!a3[8])
		return 0i64;
	if (!*(_DWORD*)(a1 + 14164))
		return 0i64;
	v9 = *(_QWORD*)(a1 + 24);
	if (!v9 || !*(_QWORD*)(v9 + 392) && !*(_QWORD*)(v9 + 456))
		return 0i64;
	if ((*(_DWORD*)(a1 + 14160) & 4) != 0)
		return 0i64;
	if (a4 || !a3[5] && !a3[7])
	{
		if (!a3[4] && !a3[6] || (unsigned int)sub_140574C20(a2, a1, (__int64)a3))
			goto LABEL_17;
		return 0i64;
	}
	result = sub_140574B70(a2, a1, (__int64)a3);
	if (!(_DWORD)result)
		return result;
LABEL_17:
	v11 = 1.0;
	if (!a6 && a4)
	{
		v12 = *a4[6];
		v13 = *(_DWORD*)(v12 + 12);
		switch (v13)
		{
		case 2:
			v21 = sub_14021FC40(*(_DWORD*)(v12 + 20));
			if (!v21 || *(_DWORD*)(v21 + 48))
				return 0i64;
			if (!((unsigned int(__fastcall*)(_QWORD**))(*a4)[7])(a4))
				v11 = (float)((int(__fastcall*)(_QWORD**))(*a4)[8])(a4) * 0.0099999998;
			break;
		case 14:
			v19 = sub_14021FC40(*(_DWORD*)(v12 + 20));
			v20 = v19;
			if (!v19 || !*(_DWORD*)(v19 + 48))
				return 0i64;
			if (!((unsigned int(__fastcall*)(_QWORD**))(*a4)[7])(a4))
			{
				v17 = (float)((int(__fastcall*)(_QWORD**))(*a4)[9])(a4);
				v16 = (float)*(int*)(v20 + 48);
			LABEL_26:
				v11 = v17 / v16;
			}
			break;
		case 20:
			v14 = sub_140220D40(*(_DWORD*)(v12 + 20));
			if (!v14)
				return 0i64;
			v15 = sub_1405726F0(v14);
			if (!v15)
				return 0i64;
			if (((unsigned int(__fastcall*)(_QWORD**))(*a4)[7])(a4))
				break;
			v16 = (float)v15;
			v17 = (float)((int(__fastcall*)(_QWORD**))(*a4)[9])(a4);
			goto LABEL_26;
		default:
			break;
		}
	}
	v18 = sub_140574CF0(a1, (__int64)a3, v11);
	if (!v18)
		return 0i64;
	if (a5)
		*a5 = v18;
	return 1i64;
}

