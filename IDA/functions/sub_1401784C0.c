#include "../winhttp.h"

//----- (00000001401784C0) ----------------------------------------------------
__int64 __fastcall sub_1401784C0(_QWORD* a1)
{
	char* v2; // rsi
	_DWORD* v3; // rax
	int v4; // ecx
	BOOL v5; // r15d
	int v6; // ebp
	int v7; // ebx
	unsigned int v8; // r14d
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	_DWORD* v15; // rdx
	_DWORD* v16; // r8
	BOOL v17; // eax
	__int64 v19; // [rsp+20h] [rbp-48h]
	__int64 v20; // [rsp+28h] [rbp-40h]
	int v21; // [rsp+78h] [rbp+10h] BYREF

	v2 = (char*)sub_140177AC0(a1);
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 32i64);
	v4 = v3[2];
	v5 = v4 && (v4 != 1 || *v3);
	v6 = *(_DWORD*)(*((_QWORD*)v2 + 130) + 1032i64);
	(*(void(__fastcall**)(char*))(*(_QWORD*)v2 + 432i64))(v2);
	v7 = 0;
	v8 = *(_DWORD*)(*((_QWORD*)v2 + 130) + 1160i64);
	if (v8)
	{
		while (1)
		{
			v9 = *((_QWORD*)v2 + 130);
			if (*(int*)(v9 + 1144) > 0 && v7 >= 0 && v7 < *(_DWORD*)(v9 + 1160))
			{
				v10 = *(_QWORD*)(*(_QWORD*)(v9 + 1152) + 8i64 * v7);
				v11 = *(int*)(v10 + 24) <= 0 ? 0i64 : **(_QWORD**)(v10 + 16);
				if (v11)
				{
					v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v11 + 176));
					v13 = a1[2];
					*(_QWORD*)v13 = *v12;
					*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
					a1[2] += 16i64;
					v14 = a1[2];
					v15 = dword_140A12138;
					v16 = (_DWORD*)(v14 - 16);
					if (a1[3] + 16i64 < v14)
						v15 = (_DWORD*)(a1[3] + 16i64);
					v17 = v15 != dword_140A12138
						&& v16 != dword_140A12138
						&& v15[2] == v16[2]
						&& (unsigned int)sub_14005F0D0((__int64)a1, v15, v16);
					a1[2] -= 16i64;
					if (v17)
					{
						LODWORD(v20) = v6;
						LODWORD(v19) = v7;
						v21 = 1;
						sub_1400D4070((__int64)v2, 0x30u, v2, "ii>b", v19, v20, &v21);
						if (v21)
							break;
					}
				}
			}
			if (++v7 >= v8)
				return 0i64;
		}
		sub_1401773E0((__int64*)v2, v7);
		if (v5 && v7 != v6)
		{
			LODWORD(v20) = v6;
			LODWORD(v19) = v7;
			sub_1400D4070((__int64)v2, 0x31u, v2, byte_1409DE09C, v19, v20);
		}
	}
	return 0i64;
}
// 140178642: variable 'v19' is possibly undefined
// 140178642: variable 'v20' is possibly undefined
// 1409DE09C: using guessed type _BYTE byte_1409DE09C[56];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

