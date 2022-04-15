#include "../winhttp.h"

//----- (0000000140068C50) ----------------------------------------------------
void __fastcall sub_140068C50(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	int v6; // r12d
	__int64 v9; // rbp
	_DWORD* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rbp
	_DWORD* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rbp
	_DWORD* v16; // rax
	int v17; // eax
	char* v18; // rdx
	bool v19; // zf
	__int64 v20; // rax
	int v21; // eax
	char* v22; // rdx
	__int64 v23; // rax
	__int64 v24; // rax
	int v25; // eax
	int v26; // ecx
	const char* v27; // rax
	const char* v28; // rax
	const char* v29; // rax
	const char* v30; // rax
	__int64 v31; // [rsp+30h] [rbp-28h] BYREF
	int v32; // [rsp+38h] [rbp-20h]

	v3 = *(_QWORD*)(a1 + 48);
	v4 = *(_QWORD*)(a1 + 56);
	v6 = *(_DWORD*)(v3 + 60);
	v9 = sub_140062650(v4, (unsigned __int64*)aForIndex, 0xBui64);
	v10 = sub_14005C630(v4, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v9);
	if (!v10[2])
	{
		*v10 = 1;
		v10[2] = 1;
	}
	sub_140065950(a1, v9, 0);
	v11 = *(_QWORD*)(a1 + 56);
	v12 = sub_140062650(v11, (unsigned __int64*)aForLimit, 0xBui64);
	v13 = sub_14005C630(v11, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v12);
	if (!v13[2])
	{
		*v13 = 1;
		v13[2] = 1;
	}
	sub_140065950(a1, v12, 1);
	v14 = *(_QWORD*)(a1 + 56);
	v15 = sub_140062650(v14, (unsigned __int64*)aForStep, 0xAui64);
	v16 = sub_14005C630(v14, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v15);
	if (!v16[2])
	{
		*v16 = 1;
		v16[2] = 1;
	}
	sub_140065950(a1, v15, 2);
	sub_140065950(a1, a2, 3);
	if (*(_DWORD*)(a1 + 16) != 61)
	{
		v17 = sub_1407DE7F8(61);
		v18 = aCharD;
		if (!v17)
			v18 = aC_16;
		v27 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v18, 61i64);
		v28 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v27);
		sub_140062CF0(a1, v28, *(_DWORD*)(a1 + 16));
	}
	v19 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v19)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v20 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v20;
	}
	sub_1400688C0(a1);
	if (*(_DWORD*)(a1 + 16) != 44)
	{
		v21 = sub_1407DE7F8(44);
		v22 = aCharD;
		if (!v21)
			v22 = aC_16;
		v29 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v22, 44i64);
		v30 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v29);
		sub_140062CF0(a1, v30, *(_DWORD*)(a1 + 16));
	}
	v19 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v19)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v23 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v23;
	}
	sub_1400688C0(a1);
	if (*(_DWORD*)(a1 + 16) == 44)
	{
		v19 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v19)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v24 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v24;
		}
		sub_1400688C0(a1);
	}
	else
	{
		v32 = 3;
		v31 = 0x3FF0000000000000i64;
		v25 = sub_14006A4A0((unsigned int*)v3, (int*)&v31, (__int64)&v31);
		sub_14006BBF0(v3, ((*(_DWORD*)(v3 + 60) | (v25 << 8)) << 6) | 1, *(_DWORD*)(*(_QWORD*)(v3 + 24) + 8i64));
		v26 = *(_DWORD*)(v3 + 60) + 1;
		if (v26 > *(unsigned __int8*)(*(_QWORD*)v3 + 115i64))
		{
			if (v26 >= 250)
				sub_140062CF0(*(_QWORD*)(v3 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v3 + 24) + 16i64));
			*(_BYTE*)(*(_QWORD*)v3 + 115i64) = v26;
		}
		++* (_DWORD*)(v3 + 60);
	}
	sub_140068980(a1, v6, a3, 1, 1);
}

