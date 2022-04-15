#include "../winhttp.h"

//----- (0000000140147540) ----------------------------------------------------
__int64 __fastcall sub_140147540(_QWORD* a1)
{
	float* v2; // rsi
	char* v3; // r10
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	char v8; // r9
	const char* v9; // rdx
	__int64 v10; // r10
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	_DWORD* v16; // rcx
	__int64 v17; // rbx
	_DWORD* v18; // rax
	__int64 v19; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // [rsp+20h] [rbp-18h] BYREF
	int v25; // [rsp+28h] [rbp-10h]

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 120)
	{
		v5 = "x";
		v6 = 120;
		while (v6)
		{
			v6 = (v5++)[v3 - "x" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		v21 = a1[2];
		*(double*)v21 = *v2;
		*(_DWORD*)(v21 + 8) = 3;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_5:
		if (v4 == 121)
		{
			v7 = "y";
			v8 = 121;
			while (v8)
			{
				v8 = (v7++)[v3 - "y" + 1];
				if (v8 != *v7)
					goto LABEL_9;
			}
			v22 = a1[2];
			*(double*)v22 = v2[1];
			*(_DWORD*)(v22 + 8) = 3;
			a1[2] += 16i64;
		}
		else
		{
		LABEL_9:
			if (v4 == 122)
			{
				v9 = "z";
				v10 = v3 - "z";
				while ((_BYTE)v4)
				{
					LOBYTE(v4) = (v9++)[v10 + 1];
					if ((_BYTE)v4 != *v9)
						goto LABEL_13;
				}
				v23 = a1[2];
				*(double*)v23 = v2[2];
				*(_DWORD*)(v23 + 8) = 3;
				a1[2] += 16i64;
			}
			else
			{
			LABEL_13:
				v11 = a1[4];
				v12 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
				v13 = a1[2];
				v24 = v12;
				v25 = 4;
				sub_14005E8E0((__int64)a1, v11 + 160, (int*)&v24, v13);
				a1[2] += 16i64;
				v14 = a1[2];
				v15 = a1[3];
				v16 = dword_140A12138;
				v17 = v14 - v15;
				v18 = (_DWORD*)(v15 + 16);
				v19 = v17 >> 4;
				if ((unsigned __int64)v18 < v14)
					v16 = v18;
				*(_QWORD*)v14 = *(_QWORD*)v16;
				*(_DWORD*)(v14 + 8) = v16[2];
				a1[2] += 16i64;
				sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
				sub_140058350((__int64)a1, v19);
				a1[2] -= 16i64;
			}
		}
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

