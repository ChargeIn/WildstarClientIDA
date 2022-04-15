#include "../winhttp.h"

//----- (0000000140069B30) ----------------------------------------------------
__int64 __fastcall sub_140069B30(__int64 a1)
{
	bool v1; // zf
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // eax
	int v6; // edx
	int v7; // eax
	int v8; // edi
	int v9; // r8d
	int v10; // ecx
	int v11; // ecx
	int v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	int v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+34h] [rbp-14h]

	v1 = *(_DWORD*)(a1 + 32) == 287;
	v2 = *(_QWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v1)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v4 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v4;
	}
	v5 = *(_DWORD*)(a1 + 16);
	if ((unsigned int)(v5 - 260) <= 0x1B && (v6 = 134283271, _bittest(&v6, v5 - 260)) || v5 == 59)
	{
		v8 = 0;
		v11 = 0;
		return sub_14006BBF0(v2, (v11 << 6) | ((v8 + 1) << 23) | 0x1Eu, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
	}
	v7 = sub_1400673D0(a1, &v13);
	v8 = v7;
	if ((unsigned int)(v13 - 13) > 1)
	{
		if (v7 != 1)
		{
			sub_14006AAE0(v2, &v13);
			v11 = *(unsigned __int8*)(v2 + 74);
			return sub_14006BBF0(v2, (v11 << 6) | ((v8 + 1) << 23) | 0x1Eu, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
		}
		sub_14006A700(v2, &v13);
		if (v13 != 12)
			goto LABEL_12;
		if (v15 == v16)
		{
		LABEL_21:
			v11 = v14;
			return sub_14006BBF0(v2, (v11 << 6) | ((v8 + 1) << 23) | 0x1Eu, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
		}
		v9 = v14;
		if (v14 < *(unsigned __int8*)(v2 + 74))
		{
		LABEL_12:
			sub_14006A700(v2, &v13);
			if (v13 == 12 && (v14 & 0x100) == 0 && v14 >= *(unsigned __int8*)(v2 + 74))
				--* (_DWORD*)(v2 + 60);
			v10 = *(_DWORD*)(v2 + 60) + 1;
			if (v10 > *(unsigned __int8*)(*(_QWORD*)v2 + 115i64))
			{
				if (v10 >= 250)
					sub_140062CF0(*(_QWORD*)(v2 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
				*(_BYTE*)(*(_QWORD*)v2 + 115i64) = v10;
			}
			v9 = (*(_DWORD*)(v2 + 60))++;
		}
		sub_14006A980(v2, &v13, v9);
		goto LABEL_21;
	}
	sub_14006A5E0(v2, (unsigned int*)&v13, -1);
	if (v13 == 13 && v8 == 1)
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 24i64) + 4i64 * v14) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 24i64)
			+ 4i64 * v14) & 0xFFFFFFC0 | 0x1D;
	v11 = *(unsigned __int8*)(v2 + 74);
	v8 = -1;
	return sub_14006BBF0(v2, (v11 << 6) | ((v8 + 1) << 23) | 0x1Eu, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
}

