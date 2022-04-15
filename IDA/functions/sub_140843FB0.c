#include "../winhttp.h"

//----- (0000000140843FB0) ----------------------------------------------------
__int64 __fastcall sub_140843FB0(float a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD* a6, char a7)
{
	char v7; // r14
	float v8; // xmm7_4
	__int64 v9; // rbx
	unsigned int v10; // r12d
	__int64 v11; // rdi
	char v12; // r15
	unsigned int v13; // r13d
	int v15; // esi
	float v16; // xmm6_4
	char v17; // al
	int v18; // eax
	int v20; // [rsp+80h] [rbp+8h] BYREF

	v7 = a5;
	v8 = 101.0;
	v9 = qword_140C61F90;
	v10 = 2;
	v11 = 0i64;
	v12 = a4;
	v13 = a3;
	v15 = 2;
	if (qword_140C61F90)
	{
		while (1)
		{
			if (a2 && *(_QWORD*)(v9 + 176) != a2)
				goto LABEL_15;
			v16 = *(float*)(v9 + 388);
			if (v16 >= v8 && (!v12 || v16 != v8))
				goto LABEL_15;
			if ((*(_BYTE*)(v9 + 382) & 1) != 0)
				goto LABEL_15;
			v17 = *(_BYTE*)(v9 + 383);
			if ((v17 & 0x10) != 0 || (v17 & 0x40) != 0 || !sub_14085F1F0(v9, v13))
				goto LABEL_15;
			if (!v7)
				goto LABEL_14;
			v18 = sub_14085EAC0(v9, &v20);
			if (v18)
				break;
		LABEL_15:
			v9 = *(_QWORD*)(v9 + 24);
			if (!v9)
				goto LABEL_16;
		}
		v15 = v18;
	LABEL_14:
		v11 = v9;
		v8 = v16;
		goto LABEL_15;
	}
LABEL_16:
	if (a1 < v8 || v12 && a1 == v8 || !v11)
	{
		if (v7)
			return 80;
		return v10;
	}
	else
	{
		*a6 = *(_QWORD*)(v11 + 160);
		if (!v7 || v15 == 1)
			sub_14085F2E0(v11, a7, a3, a4);
		return 1i64;
	}
}
// 1408440E0: variable 'a3' is possibly undefined
// 1408440E0: variable 'a4' is possibly undefined
// 140C61F90: using guessed type __int64 qword_140C61F90;

