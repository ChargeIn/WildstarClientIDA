#include "../winhttp.h"

//----- (0000000140018EE0) ----------------------------------------------------
void** __fastcall sub_140018EE0(char* a1)
{
	void** result; // rax
	int* v2; // rbx
	__int64 v3; // rax
	int* v4; // r14
	__int64 v5; // rsi
	unsigned __int64 v6; // rdx
	int* v7; // rsi
	__int64 v8; // rax
	WCHAR* v9; // rbp
	__int64 v10; // r15
	WCHAR* v11; // rax
	int* v12; // rsi
	__int64 v13; // rax
	__int64 v15; // r15
	__int64 v16; // [rsp+20h] [rbp-88h] BYREF
	LPCWSTR lpFile; // [rsp+28h] [rbp-80h]
	WCHAR* v18; // [rsp+30h] [rbp-78h]
	WCHAR* v19; // [rsp+38h] [rbp-70h]
	char v20[8]; // [rsp+40h] [rbp-68h] BYREF
	int* v21; // [rsp+48h] [rbp-60h]
	__int64 v23; // [rsp+58h] [rbp-50h]
	char v24[8]; // [rsp+60h] [rbp-48h] BYREF
	int* v25; // [rsp+68h] [rbp-40h]
	__int64 v27; // [rsp+78h] [rbp-30h]
	void* retaddr; // [rsp+A8h] [rbp+0h] BYREF
	int* v29; // [rsp+B0h] [rbp+8h] BYREF

	result = &retaddr;
	if (a1)
	{
		sub_14018D320(&v29, a1);
		v2 = v29;
		v3 = 0i64;
		v4 = 0i64;
		v21 = 0i64;
		v23 = 0i64;
		if (*(_WORD*)v29)
		{
			do
				++v3;
			while (*((_WORD*)v29 + v3));
		}
		v5 = (2 * v3) >> 1;
		if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v4 = sub_14018B280(2 * (v5 + 1), 0);
			v21 = v4;
			v23 = (__int64)v4 + 2 * v5 + 2;
		}
		sub_1407DB590(v4, v2, 2 * v5);
		if ((int*)((char*)v4 + 2 * v5))
			*((_WORD*)v4 + v5) = 0;
		v6 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 48i64);
		if (v6)
		{
			if (v6 <= qword_140C3FE70)
				v7 = (int*)(v6 + qword_140C3FE68);
			else
				v7 = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = 0i64;
		v9 = 0i64;
		lpFile = 0i64;
		v19 = 0i64;
		if (*(_WORD*)v7)
		{
			do
				++v8;
			while (*((_WORD*)v7 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v9 = (WCHAR*)sub_14018B280(2 * (v10 + 1), 0);
			lpFile = v9;
			v19 = &v9[v10 + 1];
		}
		sub_1407DB590((int*)v9, v7, 2 * v10);
		v11 = &v9[v10];
		v18 = v11;
		if (v11)
			*v11 = 0;
		if (v9 != v11)
		{
			v12 = 0i64;
			v25 = 0i64;
			v27 = 0i64;
			v13 = 0i64;
			while (aAuthntoken_0[++v13] != 0)
				;
			v15 = (2 * v13) >> 1;
			if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v12 = sub_14018B280(2 * (v15 + 1), 0);
				v25 = v12;
				v27 = (__int64)v12 + 2 * v15 + 2;
			}
			sub_1407DB590(v12, (int*)L"{AUTHNTOKEN}", 2 * v15);
			if ((int*)((char*)v12 + 2 * v15))
				*((_WORD*)v12 + v15) = 0;
			sub_14018FFE0(&v16, (__int64)v24, (__int64)v20, 0);
			v9 = (WCHAR*)lpFile;
			sub_140195100(lpFile);
			if (v12)
				sub_14018B900((__int64)v12, 0);
		}
		if (v9)
			sub_14018B900((__int64)v9, 0);
		if (v4)
			sub_14018B900((__int64)v4, 0);
		return (void**)(*(__int64(__fastcall**)(int*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 4);
	}
	return result;
}
// 1409E0AE8: using guessed type wchar_t aAuthntoken_0[13];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140018EE0: using guessed type char var_68[8];
// 140018EE0: using guessed type char var_48[8];

