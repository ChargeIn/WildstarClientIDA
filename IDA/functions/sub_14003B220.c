#include "../winhttp.h"

//----- (000000014003B220) ----------------------------------------------------
__int64 __fastcall sub_14003B220(int* a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rax
	unsigned int v7; // r14d
	char* v8; // rax
	int* v9; // rbx
	__int64 v10; // r8
	int* v11; // rdi
	unsigned int v12; // edi
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rdi
	int* v16; // rax
	int* v17; // rsi
	unsigned __int64 v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // r8
	unsigned int v21; // eax
	__int64 v22; // rdi
	int* v23; // rax
	int* v24; // rsi
	unsigned __int64 v25; // rdi
	int v26; // [rsp+20h] [rbp-E0h]
	char v27[656]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v28; // [rsp+2D0h] [rbp+1D0h] BYREF

	v28 = (__int64)a1;
	if (!a2)
	{
		v5 = 0x141CF0978i64;
	LABEL_3:
		v28 = v5;
		sub_1401A3130(22, 0, &v28);
		return 2147500037i64;
	}
	if (!a3)
	{
		v5 = 0x141CF09F8i64;
		goto LABEL_3;
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	if (v7)
	{
		v26 = *(_DWORD*)(a3 + 32);
		v28 = 0x141CF09A0i64;
		sub_1401A3130(22, 0, &v28, v7, v26);
	}
	v8 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 88i64))(a2);
	if (v8)
	{
		sub_14018D320((int**)&v28, v8);
		v9 = (int*)v28;
	}
	else
	{
		v9 = 0i64;
	}
	sub_1401A72E0((__int64)v27);
	if ((int)sub_1401A7A60((__int64)v27, v9, -1i64) < 0 && *((_QWORD*)v9 - 1) > 4ui64)
	{
		sub_14018D540(&v28, (__int64)L"RequestVerifiedIPList -- Error parsing [%s]", v9);
		v11 = (int*)v28;
		v28 += 19899968i64;
		sub_1401A3130(22, 0, &v28);
		if (v11)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
		v12 = -2147467259;
		goto LABEL_33;
	}
	v13 = (unsigned int)(*(_DWORD*)(a3 + 32) - 20021);
	if (*(_DWORD*)(a3 + 32) == 20021)
	{
		if (v9)
		{
			v22 = *((_QWORD*)v9 - 1);
			v23 = sub_14018B280(2 * v22 + 18, 0);
			if (v23)
			{
				*((_QWORD*)v23 + 1) = v22;
				*(_QWORD*)v23 = off_140B55060;
			}
			else
			{
				v23 = 0i64;
			}
			v24 = v23 + 4;
			v25 = 2 * v22;
			sub_1407DB590(v23 + 4, v9, v25);
			*(_WORD*)((char*)v24 + v25) = 0;
			v28 = (__int64)v24;
		}
		else
		{
			v28 = 0i64;
		}
		v21 = sub_14003B7B0(v13, v7, (__int64)v27, &v28);
		goto LABEL_32;
	}
	v14 = (unsigned int)(*(_DWORD*)(a3 + 32) - 20022);
	if (*(_DWORD*)(a3 + 32) == 20022)
	{
		if (v9)
		{
			v15 = *((_QWORD*)v9 - 1);
			v16 = sub_14018B280(2 * v15 + 18, 0);
			if (v16)
			{
				*((_QWORD*)v16 + 1) = v15;
				*(_QWORD*)v16 = off_140B55060;
			}
			else
			{
				v16 = 0i64;
			}
			v17 = v16 + 4;
			v18 = 2 * v15;
			sub_1407DB590(v16 + 4, v9, v18);
			*(_WORD*)((char*)v17 + v18) = 0;
			v28 = (__int64)v17;
			v21 = sub_14003CA20(v19, v7, v20, &v28);
		}
		else
		{
			v28 = 0i64;
			v21 = sub_14003CA20(v14, v7, v10, &v28);
		}
	LABEL_32:
		v12 = v21;
		goto LABEL_33;
	}
	v28 = 0x141CF0A40i64;
	sub_1401A3130(22, 0, &v28);
	v12 = -2147467259;
LABEL_33:
	sub_1401A76A0((__int64)v27);
	if (v9)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
	return v12;
}
// 14003B413: variable 'v19' is possibly undefined
// 14003B413: variable 'v20' is possibly undefined
// 14003B42E: variable 'v10' is possibly undefined
// 14003B49E: variable 'v13' is possibly undefined
// 1409F6470: using guessed type wchar_t aRequestverifie[44];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

