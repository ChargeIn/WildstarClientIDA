#include "../winhttp.h"

//----- (000000014087A290) ----------------------------------------------------
__int64 __fastcall sub_14087A290(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 v3; // r14
	unsigned int v6; // ebx
	int i; // r8d
	__int64 result; // rax
	_WORD* v9; // rsi
	unsigned __int16 v10; // dx
	unsigned int v11; // ecx
	int v12; // ebp
	__int64 v13; // r15
	__int64 v14; // rdx
	unsigned __int16 v15; // [rsp+70h] [rbp+8h]
	int v16; // [rsp+80h] [rbp+18h]

	v2 = *(_QWORD*)(a1 + 24);
	v3 = 0i64;
	v6 = 0;
	v16 = *(_DWORD*)(v2 + 196) & 0x3FFFF;
	for (i = v16; i; i &= i - 1)
		++v6;
	result = sub_140832B30(v6 << 11);
	v9 = (_WORD*)result;
	*(_QWORD*)(a1 + 104) = result;
	if (result)
	{
		v10 = *(_WORD*)(a2 + 16);
		if (*(_WORD*)(a1 + 84) == 1)
			v11 = *(_DWORD*)(a1 + 40);
		else
			v11 = *(_DWORD*)(a1 + 60) + 1;
		if (*(_DWORD*)(a1 + 44) + (unsigned int)v10 > v11)
			v10 = v11 - *(_WORD*)(a1 + 44);
		v12 = v10 >> 6;
		v15 = v10 >> 6 << 6;
		if (v6)
		{
			v13 = v6;
			do
			{
				sub_140881150((__int16*)(v3 + *(_QWORD*)(a1 + 88)), v9++, v12, *(unsigned __int16*)(a1 + 96), v6);
				v3 += 36i64;
				--v13;
			} while (v13);
		}
		v14 = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 88) += v12 * (unsigned int)*(unsigned __int16*)(a1 + 96);
		return sub_1408803E0(a1, v14, v15, *(_DWORD*)(v2 + 192), v16, a2);
	}
	else
	{
		*(_DWORD*)(a2 + 56) = 2;
	}
	return result;
}

