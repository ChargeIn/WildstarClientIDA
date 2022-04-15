#include "../winhttp.h"

//----- (00000001401782D0) ----------------------------------------------------
__int64 __fastcall sub_1401782D0(_QWORD* a1)
{
	char* v2; // rdi
	char* v3; // rax
	_DWORD* v4; // rax
	int v5; // ebp
	int v6; // ecx
	unsigned int v7; // esi
	int v8; // r15d
	__int64 v9; // r14
	unsigned int v10; // r12d
	int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int16* v16; // rax
	_DWORD* v18; // rax
	__int64 v19; // [rsp+20h] [rbp-78h]
	__int64 v20; // [rsp+28h] [rbp-70h]
	_QWORD v21[11]; // [rsp+40h] [rbp-58h] BYREF
	int v22; // [rsp+A8h] [rbp+10h] BYREF
	BOOL v23; // [rsp+B0h] [rbp+18h]

	v2 = (char*)sub_140177AC0(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(v21, v3);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 32i64);
	v5 = 0;
	v6 = v4[2];
	v7 = 1;
	v23 = v6 && (v6 != 1 || *v4);
	v8 = *(_DWORD*)(*((_QWORD*)v2 + 130) + 1032i64);
	(*(void(__fastcall**)(char*))(*(_QWORD*)v2 + 432i64))(v2);
	v9 = v21[1];
	v10 = *(_DWORD*)(*((_QWORD*)v2 + 130) + 1160i64);
	v11 = 0;
	if (v10)
	{
		while (1)
		{
			v12 = *((_QWORD*)v2 + 130);
			if (*(int*)(v12 + 1144) > 0 && v11 >= 0 && v11 < *(_DWORD*)(v12 + 1160))
			{
				v13 = *(_QWORD*)(*(_QWORD*)(v12 + 1152) + 8i64 * v11);
				v14 = *(int*)(v13 + 24) <= 0 ? 0i64 : **(_QWORD**)(v13 + 16);
				if (v14)
				{
					v15 = *(_QWORD*)(v14 + 192);
					v16 = v15
						? (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 64i64))(v15)
						: (unsigned __int16*)&unk_1409DC2EC;
					if (!(unsigned int)sub_14018E2C0(v9, v16))
					{
						LODWORD(v20) = v8;
						LODWORD(v19) = v11;
						v22 = 1;
						sub_1400D4070((__int64)v2, 0x30u, v2, "ii>b", v19, v20, &v22);
						if (v22)
							break;
					}
				}
			}
			if (++v11 >= v10)
				goto LABEL_22;
		}
		sub_1401773E0((__int64*)v2, v11);
		if (v23 && v11 != v8)
		{
			LODWORD(v20) = v8;
			LODWORD(v19) = v11;
			sub_1400D4070((__int64)v2, 0x31u, v2, byte_1409DDFFC, v19, v20);
		}
		v18 = (_DWORD*)a1[2];
		LOBYTE(v5) = v11 != 0;
		v18[2] = 1;
		*v18 = v5;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_22:
		v7 = 0;
	}
	if (v9)
		sub_14018B900(v9, 0);
	return v7;
}
// 140178424: variable 'v19' is possibly undefined
// 140178424: variable 'v20' is possibly undefined
// 1409DDFFC: using guessed type _BYTE byte_1409DDFFC[112];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

