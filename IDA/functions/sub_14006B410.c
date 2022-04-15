#include "../winhttp.h"

//----- (000000014006B410) ----------------------------------------------------
__int64 __fastcall sub_14006B410(__int64 a1, int a2, _DWORD* a3, _DWORD* a4)
{
	int v8; // ebp
	int v9; // edx
	int v10; // eax
	int v11; // ecx
	int v12; // ecx
	__int64 result; // rax

	if (((a2 - 18) & 0xFFFFFFFD) != 0)
		v8 = sub_14006ABD0(a1, (__int64)a4);
	else
		v8 = 0;
	v9 = sub_14006ABD0(a1, (__int64)a3);
	if (v9 <= v8)
	{
		if (*a4 == 12)
		{
			v12 = a4[2];
			if ((v12 & 0x100) == 0 && v12 >= *(unsigned __int8*)(a1 + 74))
				--* (_DWORD*)(a1 + 60);
		}
		if (*a3 == 12)
		{
			v11 = a3[2];
			goto LABEL_17;
		}
	}
	else
	{
		if (*a3 == 12)
		{
			v10 = a3[2];
			if ((v10 & 0x100) == 0 && v10 >= *(unsigned __int8*)(a1 + 74))
				--* (_DWORD*)(a1 + 60);
		}
		if (*a4 == 12)
		{
			v11 = a4[2];
		LABEL_17:
			if ((v11 & 0x100) == 0 && v11 >= *(unsigned __int8*)(a1 + 74))
				--* (_DWORD*)(a1 + 60);
		}
	}
	result = sub_14006BBF0(a1, a2 | ((v8 | (unsigned int)(v9 << 9)) << 14), *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	a3[2] = result;
	*a3 = 11;
	return result;
}

