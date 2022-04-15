#include "../winhttp.h"

//----- (0000000140855080) ----------------------------------------------------
__int64 __fastcall sub_140855080(__int64 a1, __int64 a2, float a3, __int64 a4, int a5)
{
	unsigned __int8* v5; // r10
	int v6; // ebp
	unsigned int v8; // r11d
	int v9; // ecx
	__int64 v10; // r8
	__int64 v11; // rbx
	__int64 result; // rax
	__int64* v13; // rdx
	int v14; // xmm0_4
	__int64 v15[2]; // [rsp+40h] [rbp-48h] BYREF
	int v16; // [rsp+50h] [rbp-38h]
	float v17; // [rsp+54h] [rbp-34h]
	int v18; // [rsp+58h] [rbp-30h]
	int v19; // [rsp+5Ch] [rbp-2Ch]
	__int16 v20; // [rsp+60h] [rbp-28h]

	v5 = *(unsigned __int8**)(a2 + 24);
	v6 = a4;
	if (!v5)
		goto LABEL_7;
	v8 = *v5;
	v9 = 0;
	while (1)
	{
		v10 = (unsigned int)(v9 + 1);
		if (v5[v10] == 10)
			break;
		++v9;
		if ((unsigned int)v10 >= v8)
			goto LABEL_7;
	}
	v11 = (__int64)&v5[16 * v9 + ((v8 + 4) & 0xFFFFFFFC)];
	if (!v11)
	{
	LABEL_7:
		result = sub_140829BE0((__int64*)(a2 + 24), 10);
		v11 = result;
		if (!result)
			return result;
		*(_DWORD*)result = 1065353216;
		*(_QWORD*)(result + 8) = 0i64;
	}
	v13 = *(__int64**)(v11 + 8);
	if (v13)
		return sub_14083AB80(qword_140C61B70, v13, 10i64, a3, a5, v6, 0);
	if (a5)
	{
		v14 = *(_DWORD*)v11;
		v17 = a3;
		v16 = v14;
		v15[0] = a2;
		v15[1] = 10i64;
		v18 = a5;
		v19 = v6;
		v20 = 256;
		result = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)v15, 1, 0);
		*(_QWORD*)(v11 + 8) = result;
	}
	else
	{
		LOBYTE(a4) = 1;
		return (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))a2)(a2, 10i64, v10, a4);
	}
	return result;
}
// 14085519E: variable 'v10' is possibly undefined
// 14085519E: variable 'a4' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;

