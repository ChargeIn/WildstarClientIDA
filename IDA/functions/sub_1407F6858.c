#include "../winhttp.h"

//----- (00000001407F6858) ----------------------------------------------------
__int64 __fastcall sub_1407F6858(int a1, _OWORD* a2)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	int v4; // eax
	__int64 result; // rax
	int v6; // ecx
	_QWORD* v7; // rax
	int v8; // eax
	bool v9; // zf
	__int128 v10; // [rsp+50h] [rbp-20h] BYREF
	__int64 v11; // [rsp+60h] [rbp-10h]
	char v12; // [rsp+68h] [rbp-8h]
	CHAR v13; // [rsp+80h] [rbp+10h] BYREF
	char v14; // [rsp+81h] [rbp+11h]
	char v15; // [rsp+82h] [rbp+12h]
	WCHAR v16; // [rsp+90h] [rbp+20h] BYREF

	v2 = a1;
	sub_1407DE348((__int64)&v10, a2);
	if ((unsigned int)v2 >= 0x100)
	{
		if (*(int*)(v10 + 212) > 1 && (unsigned int)sub_1407DFE88(BYTE1(v2), &v10))
		{
			v13 = BYTE1(v2);
			v14 = v2;
			v15 = 0;
			v6 = 2;
		}
		else
		{
			v7 = sub_1407DE1B0();
			v6 = 1;
			*(_DWORD*)v7 = 42;
			v13 = v2;
			v14 = 0;
		}
		v8 = sub_1407F09F8(&v10, *(_QWORD*)(v10 + 312), 0x100u, &v13, v6, &v16, 3, *(_DWORD*)(v10 + 4), 1);
		if (v8)
		{
			v9 = v8 == 1;
			result = (unsigned __int8)v16;
			if (!v9)
				result = HIBYTE(v16) | ((unsigned __int8)v16 << 8);
			goto LABEL_17;
		}
	}
	else
	{
		v3 = v10;
		if (*(int*)(v10 + 212) <= 1)
		{
			v4 = *(_WORD*)(*(_QWORD*)(v10 + 264) + 2 * v2) & 1;
		}
		else
		{
			v4 = sub_1407EA448(v2, 1, &v10);
			v3 = v10;
		}
		if (v4)
		{
			result = *(unsigned __int8*)(*(_QWORD*)(v3 + 272) + v2);
		LABEL_17:
			if (v12)
				*(_DWORD*)(v11 + 200) &= ~2u;
			return result;
		}
	}
	if (v12)
		*(_DWORD*)(v11 + 200) &= ~2u;
	return (unsigned int)v2;
}

