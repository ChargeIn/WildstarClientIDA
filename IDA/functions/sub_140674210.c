#include "../winhttp.h"

//----- (0000000140674210) ----------------------------------------------------
void __fastcall sub_140674210(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rbp
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	int v9; // r14d
	__int64 v10; // rbx
	__int64 v11; // rax
	unsigned int i; // ebx
	__int64 v13; // rdx
	__int64 v14; // rbp
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	unsigned int v19; // r9d
	unsigned int v20; // r8d
	int v21; // ebx
	__int64 v22; // rdx
	__int64(__fastcall * *v23)(); // [rsp+30h] [rbp-58h] BYREF
	int v24; // [rsp+38h] [rbp-50h]
	__int64 v25; // [rsp+40h] [rbp-48h]
	int v26; // [rsp+48h] [rbp-40h]
	__int64(__fastcall * *v27)(); // [rsp+50h] [rbp-38h] BYREF
	int v28; // [rsp+58h] [rbp-30h]
	__int64 v29; // [rsp+60h] [rbp-28h]
	int v30; // [rsp+68h] [rbp-20h]

	if (*(_DWORD*)(a1 + 1336))
		v4 = (_DWORD*)(a1 + 192);
	else
		v4 = 0i64;
	if (*(_DWORD*)(a1 + 1344))
	{
		v5 = *(_QWORD*)(a1 + 168);
		if (v5)
		{
			if (v4 && *(_DWORD*)(v5 + 320) == 33)
			{
				v6 = *(_QWORD*)a1;
				v7 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
				v23 = off_140B569F0;
				v8 = *(_QWORD*)(v7 + 112);
				v9 = 0;
				v25 = v6;
				v26 = 1;
				if (*(_QWORD*)(v7 + 120) >= v8)
					sub_14005E2C0(v6);
				v10 = *(_QWORD*)(v6 + 16);
				v11 = sub_14005C1B0(v6, 0, 0);
				*(_DWORD*)(v10 + 8) = 5;
				*(_QWORD*)v10 = v11;
				*(_QWORD*)(v6 + 16) += 16i64;
				v24 = sub_1400578C0(v6);
				for (i = 1; i <= 6; ++i)
				{
					if (((unsigned int)sub_14040F2B0(i) & v4[67]) != 0)
					{
						v9 = 1;
						sub_140514660(i);
						sub_1400FA9E0((__int64)&v23);
					}
				}
				if (v9)
					sub_1400FB2A0(a2, (__int64)L"arRuneTypes", v24);
				if (v4[71] && v4[72])
				{
					v14 = *(_QWORD*)a1;
					v30 = 1;
					v15 = *(_QWORD*)(v14 + 32);
					v27 = off_140B569F0;
					v29 = v14;
					if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
						sub_14005E2C0(v14);
					v16 = *(_QWORD*)(v14 + 16);
					v17 = sub_14005C1B0(v14, 0, 0);
					*(_DWORD*)(v16 + 8) = 5;
					*(_QWORD*)v16 = v17;
					*(_QWORD*)(v14 + 16) += 16i64;
					v18 = sub_1400578C0(v14);
					v19 = v4[72];
					v20 = v4[71];
					v21 = v18;
					v28 = v18;
					if ((unsigned int)sub_140677330(a1, (__int64)&v27, v20, v19, 0, 0i64))
						sub_1400FB2A0(a2, (__int64)L"tRuneSet", v21);
					sub_1400579E0(v14, v22, v21);
				}
				if (v25)
					sub_1400579E0(v25, v13, v24);
			}
		}
	}
}
// 1406743F8: variable 'v22' is possibly undefined
// 14067441C: variable 'v13' is possibly undefined
// 140B2FC10: using guessed type wchar_t aTruneset[9];
// 140B2FC60: using guessed type wchar_t aArrunetypes[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

