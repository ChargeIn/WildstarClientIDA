#include "../winhttp.h"

//----- (00000001405043E0) ----------------------------------------------------
_QWORD* __fastcall sub_1405043E0(__int64 a1, _QWORD* a2, unsigned __int64 a3, char a4)
{
	int* v8; // rcx
	__int64 v9; // rbp
	__int64 v10; // r14
	int* v11; // rsi
	int* v12; // rbx
	__int64 v13; // rax
	bool v14; // zf
	__int64 i; // rax
	__int64 v16; // rax
	int* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 j; // rax
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 k; // rax
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v29; // [rsp+20h] [rbp-A8h] BYREF
	int* v30; // [rsp+28h] [rbp-A0h]
	int* v31; // [rsp+30h] [rbp-98h]
	__int64 v32; // [rsp+40h] [rbp-88h] BYREF
	__int64 v33; // [rsp+48h] [rbp-80h]
	unsigned __int64 v34[4]; // [rsp+60h] [rbp-68h] BYREF

	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	v8 = sub_14018B280(16i64, 0);
	a2[1] = v8;
	a2[2] = v8;
	a2[3] = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	sub_140503CA0(a1, a3, v34);
	v9 = 3i64;
	v10 = a1 + 320;
	do
	{
		if (*(_BYTE*)(v10 - 16) && (!a4 || v34[v9]))
		{
			sub_14018EFA0(&v29, (__int64)L"%llu", v34[v9]);
			v11 = v31;
			v12 = v30;
			sub_14001C310(a2, v30, v31);
			if (*(_QWORD*)v10 != *(_QWORD*)(v10 + 8))
			{
				v13 = 0i64;
				do
					v14 = aImg_1[++v13] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"<IMG ", (int*)&aImg_1[v13]);
				for (i = 0i64; aImage_0[i]; ++i)
					;
				sub_14001C310(a2, (int*)L"Image", (int*)&aImage_0[i]);
				v16 = 0i64;
				do
					v14 = asc_140B100B0[++v16] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"=\"", (int*)&asc_140B100B0[v16]);
				v17 = *(int**)v10;
				v18 = 0i64;
				if (**(_WORD**)v10)
				{
					do
						++v18;
					while (*((_WORD*)v17 + v18));
				}
				sub_14001C310(a2, v17, (int*)((char*)v17 + 2 * v18));
				v19 = 0i64;
				do
					v14 = asc_140B10080[++v19] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"\" ", (int*)&asc_140B10080[v19]);
				for (j = 0i64; aWidth[j]; ++j)
					;
				sub_14001C310(a2, (int*)L"Width", (int*)&aWidth[j]);
				v21 = 0i64;
				do
					v14 = asc_140B10078[++v21] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"=\"", (int*)&asc_140B10078[v21]);
				v22 = sub_14018EFA0(&v32, (__int64)L"%d", *(unsigned int*)(a1 + 32));
				if (v22 != &v29)
				{
					sub_14001C480((__int64)&v29, (int*)v22[1], (int*)v22[2]);
					v11 = v31;
					v12 = v30;
				}
				if (v33)
					sub_14018B900(v33, 0);
				sub_14001C310(a2, v12, v11);
				v23 = 0i64;
				do
					v14 = asc_140B10088[++v23] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"\" ", (int*)&asc_140B10088[v23]);
				for (k = 0i64; aHeight[k]; ++k)
					;
				sub_14001C310(a2, (int*)L"Height", (int*)&aHeight[k]);
				v25 = 0i64;
				do
					v14 = asc_140B10054[++v25] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"=\"", (int*)&asc_140B10054[v25]);
				v26 = sub_14018EFA0(&v32, (__int64)L"%d", *(unsigned int*)(a1 + 36));
				if (v26 != &v29)
				{
					sub_14001C480((__int64)&v29, (int*)v26[1], (int*)v26[2]);
					v11 = v31;
					v12 = v30;
				}
				if (v33)
					sub_14018B900(v33, 0);
				sub_14001C310(a2, v12, v11);
				v27 = 0i64;
				do
					v14 = asc_140B10070[++v27] == 0;
				while (!v14);
				sub_14001C310(a2, (int*)L"\"/>", (int*)&asc_140B10070[v27]);
			}
			if (v12)
				sub_14018B900((__int64)v12, 0);
		}
		v10 -= 88i64;
		--v9;
	} while (v9 >= 0);
	return a2;
}
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31AD0: using guessed type wchar_t aImage_0[6];
// 140B1004C: using guessed type wchar_t aD_52[3];
// 140B10054: using guessed type wchar_t asc_140B10054[3];
// 140B10070: using guessed type wchar_t asc_140B10070[4];
// 140B10078: using guessed type wchar_t asc_140B10078[3];
// 140B10080: using guessed type wchar_t asc_140B10080[3];
// 140B10088: using guessed type wchar_t asc_140B10088[3];
// 140B10090: using guessed type wchar_t aD_51[3];
// 140B10098: using guessed type wchar_t aLlu_2[5];
// 140B100B0: using guessed type wchar_t asc_140B100B0[3];
// 140B100B8: using guessed type wchar_t aImg_1[6];
// 1405043E0: using guessed type unsigned __int64 var_68[4];

