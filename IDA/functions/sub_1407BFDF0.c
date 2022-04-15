#include "../winhttp.h"

//----- (00000001407BFDF0) ----------------------------------------------------
__int64 __fastcall sub_1407BFDF0(__int64 a1)
{
	void(__fastcall * **v2)(_QWORD); // rcx
	__int64 v3; // rax
	__int64 v4; // r8
	int v5; // ebx
	unsigned int i; // esi
	unsigned int* v7; // rbx
	unsigned int v8; // ebx
	unsigned int v9; // r9d
	unsigned int v10; // r10d
	__int64 v11; // r8
	unsigned int v12; // ecx
	unsigned __int64 v13; // rbx
	unsigned int v14; // r9d
	unsigned int v15; // r10d
	__int64 v16; // rax
	unsigned __int64 v17; // rdx
	int v19[4]; // [rsp+28h] [rbp-29h] BYREF
	int v20[4]; // [rsp+38h] [rbp-19h] BYREF
	__int64(__fastcall * *v21)(); // [rsp+48h] [rbp-9h] BYREF
	int v22; // [rsp+50h] [rbp-1h]
	void(__fastcall * **v23)(_QWORD); // [rsp+58h] [rbp+7h]
	__int64 v24; // [rsp+60h] [rbp+Fh]
	int v25; // [rsp+68h] [rbp+17h]
	__int64 v26; // [rsp+70h] [rbp+1Fh]
	int v27; // [rsp+78h] [rbp+27h]
	__int64 v28; // [rsp+80h] [rbp+2Fh]
	__int64 v29; // [rsp+88h] [rbp+37h]
	unsigned int v30; // [rsp+90h] [rbp+3Fh]

	v2 = *(void(__fastcall****)(_QWORD))(a1 + 16);
	v22 = 1;
	v3 = *(_QWORD*)(a1 + 24);
	v25 = 0;
	v26 = 0i64;
	v23 = v2;
	v27 = 0;
	v28 = 0i64;
	v24 = v3;
	v29 = 0i64;
	v30 = 0;
	v21 = off_140B79650;
	(**v2)(v2);
	v5 = sub_1407BEFC0((__int64)&v21, 0i64, v4);
	if (v5 >= 0)
	{
		for (i = 0; i < *(_DWORD*)(a1 + 72); ++i)
		{
			v7 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 32i64))(a1, i);
			if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 8i64) == 3)
			{
				v8 = *v7;
				v19[0] = -1;
				if (((unsigned int(__fastcall*)(__int64(__fastcall***)(), int*))v21[8])(&v21, v19))
				{
					v9 = v30;
					v10 = 0;
					while (v10 < v9)
					{
						v11 = (v9 + v10) >> 1;
						v12 = *(_DWORD*)((unsigned int)(*(_DWORD*)(v24 + 8) * *(_DWORD*)(v29 + 4 * v11)) + v28);
						if (v8 >= v12)
						{
							if (v8 <= v12)
								break;
							v10 = v11 + 1;
						}
						else
						{
							v9 = (v9 + v10) >> 1;
						}
					}
				}
			}
			else
			{
				v13 = *(_QWORD*)v7;
				v20[0] = -1;
				if (((unsigned int(__fastcall*)(__int64(__fastcall***)(), int*))v21[8])(&v21, v20))
				{
					v14 = v30;
					v15 = 0;
					while (v15 < v14)
					{
						v16 = (v14 + v15) >> 1;
						v17 = *(_QWORD*)((unsigned int)(*(_DWORD*)(v24 + 8) * *(_DWORD*)(v29 + 4 * v16)) + v28);
						if (v13 >= v17)
						{
							if (v13 <= v17)
								break;
							v15 = v16 + 1;
						}
						else
						{
							v14 = (v14 + v15) >> 1;
						}
					}
				}
			}
		}
		v5 = 0;
	}
	v21 = off_140B79650;
	if (v23)
	{
		(*v23)[1](v23);
		v23 = 0i64;
	}
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		v26 = 0i64;
	}
	sub_14018B900(v28, 0);
	sub_14018B900(v29, 0);
	return (unsigned int)v5;
}
// 1407BFE55: variable 'v4' is possibly undefined
// 140B79650: using guessed type __int64 (__fastcall *off_140B79650[12])();
// 1407BFDF0: using guessed type int var_80[4];
// 1407BFDF0: using guessed type int var_70[4];

