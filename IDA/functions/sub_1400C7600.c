#include "../winhttp.h"

//----- (00000001400C7600) ----------------------------------------------------
char __fastcall sub_1400C7600(__int64 a1)
{
	_QWORD* v1; // rax
	__int64 v3; // rcx
	_QWORD* v4; // rax
	int v5; // r8d
	int v6; // edx
	_QWORD* v7; // rbx
	unsigned int v8; // esi
	unsigned int v9; // ebp
	__int64 v10; // rcx
	int* v11; // rax
	int v12; // eax
	int v13; // r14d
	int v14; // ebx
	int v15; // ebp
	int v16; // esi
	int v17; // r9d
	int v18; // r8d
	int v19; // edx
	int v20; // r9d
	int v21; // r8d
	int v22; // edx
	int v24; // [rsp+20h] [rbp-38h]
	int v25; // [rsp+24h] [rbp-34h]
	unsigned __int64 v26; // [rsp+28h] [rbp-30h]
	int v27[4]; // [rsp+30h] [rbp-28h] BYREF

	v1 = *(_QWORD**)(a1 + 576);
	if ((_QWORD*)*v1 != v1)
	{
		v3 = *(_QWORD*)(a1 + 656);
		LOBYTE(v1) = (unsigned __int8)v3 >> 1;
		if ((v3 & 2) != 0 || (v3 & 4) != 0)
		{
			v4 = *(_QWORD**)(a1 + 576);
			v5 = 0;
			v6 = 0;
			v24 = 0;
			v26 = 0i64;
			v25 = 0;
			v7 = (_QWORD*)*v4;
			v8 = 0;
			v9 = 0;
			if ((_QWORD*)*v4 != v4)
			{
				do
				{
					v10 = v7[2];
					if ((*(_BYTE*)(v10 + 28) & 1) != 0 && *(float*)(v10 + 648) > 0.0)
					{
						v11 = sub_1400CB3D0(v10, v27);
						v8 = v26;
						v9 = HIDWORD(v26);
						v5 = v24;
						v6 = v25;
						if ((int)v26 < v11[2])
							v8 = v11[2];
						if (SHIDWORD(v26) < v11[3])
							v9 = v11[3];
						if (*v11 < v24)
							v5 = *v11;
						v12 = v11[1];
						v26 = __PAIR64__(v9, v8);
						v24 = v5;
						if (v12 < v25)
							v6 = v12;
						v25 = v6;
					}
					v7 = (_QWORD*)*v7;
				} while (v7 != *(_QWORD**)(a1 + 576));
			}
			v13 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
			v14 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			v15 = v9 - v6;
			v16 = v8 - v5;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
			if (v15 <= v13)
			{
				v17 = 0;
				v18 = 0;
				v19 = 0;
			}
			else
			{
				v17 = 30;
				v18 = v13;
				v19 = v15 - v13;
			}
			sub_1400CAD80(a1, v19, v18, v17);
			if (v16 <= v14)
			{
				v20 = 0;
				v21 = 0;
				v22 = 0;
			}
			else
			{
				v20 = 30;
				v21 = v14;
				v22 = v16 - v14;
			}
			LOBYTE(v1) = sub_1400CAF40(a1, v22, v21, v20);
		}
	}
	return (char)v1;
}
// 1400C7600: using guessed type int var_28[4];

