#include "../winhttp.h"

//----- (00000001400674E0) ----------------------------------------------------
__int64 __fastcall sub_1400674E0(__int64 a1, __int64 a2)
{
	int v2; // r8d
	__int64 v3; // rdi
	int v4; // esi
	__int64 v7; // rax
	int v8; // eax
	int v9; // ebx
	int v10; // edx
	int v11; // eax
	__int64 result; // rax
	__int64 v13; // [rsp+20h] [rbp-48h] BYREF
	int v14; // [rsp+28h] [rbp-40h]
	int v15[4]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v16; // [rsp+40h] [rbp-28h]

	v2 = *(_DWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 48);
	v4 = *(_DWORD*)(a1 + 4);
	switch (v2)
	{
	case 40:
		if (v4 != *(_DWORD*)(a1 + 8))
			sub_140062CF0(a1, aAmbiguousSynta, 40);
		sub_140064640(a1);
		if (*(_DWORD*)(a1 + 16) == 41)
		{
			v15[0] = 0;
		}
		else
		{
			sub_1400673D0(a1, v15);
			sub_14006A5E0(v3, (unsigned int*)v15, -1);
		}
		sub_1400656B0(a1, 41, 40, v4);
		break;
	case 123:
		sub_140066B10(a1, (__int64)v15);
		break;
	case 286:
		v7 = *(_QWORD*)(a1 + 24);
		v14 = 4;
		v13 = v7;
		v8 = sub_14006A4A0((unsigned int*)v3, (int*)&v13, (__int64)&v13);
		v16 = -1i64;
		v15[2] = v8;
		v15[0] = 4;
		sub_140064640(a1);
		break;
	default:
		sub_140062CF0(a1, aFunctionArgume, v2);
	}
	v9 = *(_DWORD*)(a2 + 8);
	if ((unsigned int)(v15[0] - 13) <= 1)
	{
		v10 = -1;
	}
	else
	{
		if (v15[0])
			sub_14006AAE0(v3, v15);
		v10 = *(_DWORD*)(v3 + 60) - v9 - 1;
	}
	v11 = sub_14006BBF0(v3, (v9 << 6) | ((v10 + 1) << 23) | 0x801Cu, *(_DWORD*)(*(_QWORD*)(v3 + 24) + 8i64));
	*(_QWORD*)(a2 + 16) = -1i64;
	*(_DWORD*)a2 = 13;
	*(_DWORD*)(a2 + 8) = v11;
	result = (unsigned int)(v9 + 1);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 40i64) + 4i64 * *(int*)(v3 + 48) - 4) = v4;
	*(_DWORD*)(v3 + 60) = result;
	return result;
}

