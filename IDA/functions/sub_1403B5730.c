#include "../winhttp.h"

//----- (00000001403B5730) ----------------------------------------------------
void __fastcall sub_1403B5730(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v5; // r13
	__int16* v6; // rax
	__int64 v7; // rcx
	int* v8; // rdi
	int* v9; // rsi
	__int64 v10; // r15
	__int64 v11; // rbx
	__int64 v12; // rcx
	int* v13; // r15
	__int16* v14; // rax
	int* v15; // rsi
	__int64 v16; // rax
	int* v17; // r12
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rbx
	unsigned __int64 v20; // rbx
	__int64 v21; // rbx
	int v22; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-19h] BYREF
	int* v24; // [rsp+38h] [rbp-11h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-9h]
	__int64(__fastcall * *v26)(); // [rsp+50h] [rbp+7h] BYREF
	int* v27; // [rsp+58h] [rbp+Fh]
	char* v28; // [rsp+60h] [rbp+17h]
	__int64 v29; // [rsp+68h] [rbp+1Fh]
	__int64 v31; // [rsp+C8h] [rbp+7Fh] BYREF

	if (a2 - 1 > 0xD)
	{
		TlsValue = &off_140B5E648;
		v24 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = TlsValue;
		v31 = 0x141DF01A0i64;
		v27 = v24;
		v28 = (char*)lpTlsValue;
		v22 = sub_1401971E0(&dword_140C8A6E4, 5, &v31, a2, &v26);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v22)
			DebugBreak();
	}
	else
	{
		*(_QWORD*)(a1 + 8i64 * (int)a2 + 5616) = a3;
		if (a3 >= sub_1403B59F0(a1, a2))
		{
			v5 = sub_1401FA4A0(a2);
			if (v5)
			{
				v6 = sub_14034BDD0(v4, 433843);
				v7 = 0i64;
				v8 = 0i64;
				v27 = 0i64;
				v9 = (int*)v6;
				v29 = 0i64;
				if (*v6)
				{
					do
						++v7;
					while (v6[v7]);
				}
				v10 = (2 * v7) >> 1;
				if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v8 = sub_14018B280(2 * (v10 + 1), 0);
					v27 = v8;
					v29 = (__int64)v8 + 2 * v10 + 2;
				}
				v11 = 2 * v10;
				sub_1407DB590(v8, v9, 2 * v10);
				v13 = (int*)((char*)v8 + v11);
				v28 = (char*)v8 + v11;
				if ((int*)((char*)v8 + v11))
					*(_WORD*)v13 = 0;
				v14 = sub_14034BDD0(v12, *(_DWORD*)(v5 + 16));
				v15 = (int*)*sub_14034C700(&v31, (__int64)v8, v14);
				v16 = 0i64;
				if (*(_WORD*)v15)
				{
					do
						++v16;
					while (*((_WORD*)v15 + v16));
				}
				v17 = (int*)((char*)v15 + 2 * v16);
				v18 = v11 >> 1;
				v19 = ((char*)v17 - (char*)v15) >> 1;
				if (v19 > v18)
				{
					v21 = 2 * v18;
					sub_1407DB590(v8, v15, 2 * v18);
					sub_14001C310(&v26, (int*)((char*)v15 + v21), v17);
					v8 = v27;
				}
				else
				{
					v20 = 2 * v19;
					sub_1407DB590(v8, v15, v20);
					if ((int*)((char*)v8 + v20) != v13)
						sub_1407DB590((int*)((char*)v8 + v20), v13, 2ui64);
				}
				if (v31)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
				sub_140003890((__int64*)qword_140C658A0, 0x1Au, 0i64, v8, 0, 0i64);
				if (v8)
					sub_14018B900((__int64)v8, 0);
			}
		}
		sub_1400A8020(*(_QWORD*)(a1 + 29504) + 4128i64);
	}
}
// 1403B57A2: variable 'v4' is possibly undefined
// 1403B5829: variable 'v12' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C8A6E4: using guessed type _DWORD dword_140C8A6E4;

