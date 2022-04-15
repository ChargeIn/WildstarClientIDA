#include "../winhttp.h"

//----- (0000000140840DA0) ----------------------------------------------------
__int64 __fastcall sub_140840DA0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // rdi
	__int64 result; // rax
	int v7; // eax
	char v8; // al
	int v9; // ecx
	__int64 v10; // rax
	int* v11; // rdx
	unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

	v4 = a2;
	if (!a2)
		return 1i64;
	if (*(_DWORD*)(a3 + 44) == -1)
	{
		v7 = sub_140881BC0(0i64, a2, a2, 9, 0x10u);
		*(_DWORD*)(a3 + 44) = v7;
		if (v7 == -1)
			return 52i64;
		*(_BYTE*)(a3 + 48) = 1;
	}
	result = sub_1408816F0(*(_DWORD*)(a3 + 44));
	if ((_DWORD)result != 1)
		return result;
	v8 = sub_1408817F0(*(_DWORD*)(a3 + 44));
	v9 = *(_DWORD*)(a3 + 44);
	if ((v8 & 8) != 0)
	{
		if ((unsigned int)sub_1408817D0(v9) < (unsigned int)v4)
			goto LABEL_13;
		v10 = (__int64)sub_140881790(*(_DWORD*)(a3 + 44));
	}
	else
	{
		v10 = sub_1408819F0(v9, v4);
	}
	*(_QWORD*)(a3 + 32) = v10;
LABEL_13:
	v11 = *(int**)(a3 + 32);
	if (!v11)
		return 52i64;
	*(_DWORD*)(a3 + 40) = v4;
	v12 = 0;
	result = sub_14083C410(a1, v11, v4, &v12);
	if ((_DWORD)result == 1 && v12 != (_DWORD)v4)
		return 7i64;
	return result;
}

