#include "../winhttp.h"

//----- (00000001408EB380) ----------------------------------------------------
__int64 __fastcall sub_1408EB380(__int64 a1)
{
	__int64 v1; // rdi
	int v2; // edx
	__int64 v3; // rcx
	__int64 result; // rax
	unsigned int v5; // ebx
	unsigned int v6; // ebx
	__int64 v7; // rax
	int v8; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+24h] [rbp-14h]
	bool v10; // [rsp+40h] [rbp+8h] BYREF

	v1 = a1;
	if ((*(_BYTE*)(a1 + 126) & 4) != 0)
	{
		if ((*(_BYTE*)(a1 + 32) & 2) != 0)
		{
			v2 = *(_DWORD*)(a1 + 104);
			v3 = *(_QWORD*)(a1 + 88);
			goto LABEL_14;
		}
		return 1i64;
	}
	if (!*(_QWORD*)(a1 + 88) || *(int*)(a1 + 136) >= 3)
	{
		v8 = 0;
		v9 = 2048i64;
		result = sub_140880730(a1, (__int64)&v8, 0);
		if ((_DWORD)result != 1)
			return result;
		v5 = sub_140880920(v1, &v10);
		if (v5 != 1)
			return v5;
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 88) + 88i64))(*(_QWORD*)(v1 + 88));
		if ((_DWORD)result != 1)
			return result;
		if (v10)
		{
			v7 = *(_QWORD*)(v1 + 24);
			*(_DWORD*)(v1 + 44) = 0;
			*(_WORD*)(v1 + 84) = *(_WORD*)(v7 + 376);
			result = sub_1408EA800(v1);
			v5 = result;
			if ((_DWORD)result != 1)
				return result;
			sub_1408EB6F0(v1, 0);
			return v5;
		}
		a1 = v1;
	}
	v5 = sub_1408EB160(a1);
	if (v5 != 1)
		return v5;
	if ((*(_BYTE*)(v1 + 32) & 2) == 0)
		return 1i64;
	v2 = *(_DWORD*)(v1 + 104);
	v3 = *(_QWORD*)(v1 + 88);
LABEL_14:
	v6 = sub_1408790B0(v3, v2);
	if (v6 == 46)
		return 63i64;
	if (v6 == 45)
		return 1;
	return v6;
}

