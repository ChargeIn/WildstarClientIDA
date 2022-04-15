#include "../winhttp.h"

//----- (00000001400440C0) ----------------------------------------------------
__int64 __fastcall sub_1400440C0(__int64 a1)
{
	int* v2; // rax
	bool v3; // zf
	int v4; // r13d
	int* v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int* v9; // rax
	int* v10; // r12
	int* v11; // r14
	int* v12; // rax
	__int64 v13; // rbx
	int i; // esi
	char* v15; // rax
	__int64 v16; // rcx
	char* v17; // rax
	int* v18; // rax
	__int64 v19; // rax
	int* v20; // rdi
	unsigned __int64 v21; // rbx
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rbx
	__int64 v24; // r8
	int* v25; // rbx
	__int64 v26; // rbx
	__int64 v27; // r8
	__int64 v28; // rbx
	int v29; // r15d
	unsigned int v30; // esi
	__int64 v31; // r14
	__int64 v32; // rdi
	__int64 v33; // rbx
	__int64 v34; // rcx
	_DWORD* v35; // rax
	__int64 v36; // [rsp+20h] [rbp-E0h]
	__int64 v37; // [rsp+28h] [rbp-D8h]
	__int64 v38; // [rsp+30h] [rbp-D0h]
	const WCHAR* lpExistingFileName; // [rsp+40h] [rbp-C0h]
	__int64 v40; // [rsp+48h] [rbp-B8h] BYREF
	int* v41; // [rsp+50h] [rbp-B0h]
	int* v42; // [rsp+58h] [rbp-A8h]
	int* v43; // [rsp+60h] [rbp-A0h]
	char v44[8]; // [rsp+68h] [rbp-98h] BYREF
	int* v45; // [rsp+70h] [rbp-90h]
	int* v46; // [rsp+78h] [rbp-88h]
	int* v47; // [rsp+80h] [rbp-80h]
	__int64 v48; // [rsp+88h] [rbp-78h]
	_QWORD v49[4]; // [rsp+90h] [rbp-70h] BYREF
	_QWORD v50[4]; // [rsp+B0h] [rbp-50h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+D0h] [rbp-30h] BYREF
	int v52[132]; // [rsp+E0h] [rbp-20h] BYREF

	v48 = a1;
	if (!qword_140C65898)
		return 0i64;
	sub_1407E4830(v52, 0i64, 0x20Aui64);
	if ((int)sub_14001B370(
		v52,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"Addons") >= 0
		&& LOWORD(v52[0]))
	{
		v2 = v52;
		do
		{
			v3 = *((_WORD*)v2 + 1) == 0;
			v2 = (int*)((char*)v2 + 2);
		} while (!v3);
	}
	v4 = 0;
	v5 = 0i64;
	lpExistingFileName = 0i64;
	v6 = 0i64;
	if (LOWORD(v52[0]))
	{
		do
			++v6;
		while (*((_WORD*)v52 + v6));
	}
	v7 = (2 * v6) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v7 + 1), 0);
		lpExistingFileName = (const WCHAR*)v5;
	}
	v8 = 2 * v7;
	sub_1407DB590(v5, v52, v8);
	if ((int*)((char*)v5 + v8))
		*(_WORD*)((char*)v5 + v8) = 0;
	v9 = sub_14018B280(16i64, 0);
	v10 = v9;
	v41 = v9;
	v11 = v9;
	v42 = v9;
	v43 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	v12 = sub_14018B280(16i64, 0);
	v13 = (__int64)v12;
	v45 = v12;
	v46 = v12;
	v47 = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	GetLocalTime(&SystemTime);
	for (i = 0; i < 10000; ++i)
	{
		if (i)
		{
			LODWORD(v38) = i;
			LODWORD(v37) = SystemTime.wDay;
			LODWORD(v36) = SystemTime.wMonth;
			v17 = (char*)sub_14018EFA0(
				v50,
				(__int64)L"%s.disabled.%4d_%02d_%2d_%04d",
				L"Addons",
				SystemTime.wYear,
				v36,
				v37,
				v38);
			if (v17 != v44)
			{
				sub_14001C480((__int64)v44, *((int**)v17 + 1), *((int**)v17 + 2));
				v13 = (__int64)v45;
			}
			v16 = v50[1];
		}
		else
		{
			LODWORD(v37) = SystemTime.wDay;
			LODWORD(v36) = SystemTime.wMonth;
			v15 = (char*)sub_14018EFA0(v49, (__int64)L"%s.disabled.%4d_%02d_%2d", L"Addons", SystemTime.wYear, v36, v37);
			if (v15 != v44)
			{
				sub_14001C480((__int64)v44, *((int**)v15 + 1), *((int**)v15 + 2));
				v13 = (__int64)v45;
			}
			v16 = v49[1];
		}
		if (v16)
			sub_14018B900(v16, 0);
		if ((int)sub_14001B370(
			v52,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			v13) >= 0
			&& LOWORD(v52[0]))
		{
			v18 = v52;
			do
			{
				v3 = *((_WORD*)v18 + 1) == 0;
				v18 = (int*)((char*)v18 + 2);
			} while (!v3);
		}
		v19 = 0i64;
		if (LOWORD(v52[0]))
		{
			do
				++v19;
			while (*((_WORD*)v52 + v19));
		}
		v20 = (int*)((char*)v52 + 2 * v19);
		v21 = (2 * v19) >> 1;
		v22 = ((char*)v11 - (char*)v10) >> 1;
		if (v21 > v22)
		{
			v26 = 2 * v22;
			sub_1407DB590(v10, v52, 2 * v22);
			sub_14001C310(&v40, (int*)((char*)v52 + v26), v20);
			v11 = v42;
			v10 = v41;
		}
		else
		{
			v23 = 2 * v21;
			sub_1407DB590(v10, v52, v23);
			v25 = (int*)((char*)v10 + v23);
			if (v25 != v11)
			{
				sub_1407DB590(v25, v11, 2ui64);
				v11 = (int*)((char*)v11 - 2 * (((char*)v11 - (char*)v25) >> 1));
				v42 = v11;
			}
		}
		if (!(unsigned int)sub_1401B5AB0(*(__int64*)&qword_140C63788, (const WCHAR*)v10, v24))
			break;
		v13 = (__int64)v45;
	}
	v28 = (__int64)lpExistingFileName;
	v29 = 1;
	if ((unsigned int)sub_1401B5AB0(*(__int64*)&qword_140C63788, lpExistingFileName, v27)
		&& !MoveFileExW(lpExistingFileName, (LPCWSTR)v10, 9u))
	{
		GetLastError();
		v29 = 0;
	}
	v30 = 0;
	v31 = *(_QWORD*)(qword_140C65898 + 29504);
	if (*(_DWORD*)(v31 + 2520))
	{
		v32 = 0i64;
		do
		{
			v33 = *(_QWORD*)(v32 + *(_QWORD*)(v31 + 2512));
			if (*(_BYTE*)(v33 + 264))
			{
				sub_1404326C0((__int64)&v40, 4);
				*sub_140044B90(v33 + 280, (__int64)&v40) = 2;
			}
			else
			{
				sub_1404326C0((__int64)&v40, 4);
				*sub_140044B90(v33 + 280, (__int64)&v40) = 0;
				*(_BYTE*)(v33 + 272) = 0;
			}
			if (v41)
				sub_14018B900((__int64)v41, 0);
			++v30;
			v32 += 8i64;
		} while (v30 < *(_DWORD*)(v31 + 2520));
		v28 = (__int64)lpExistingFileName;
	}
	sub_1400446D0();
	sub_1400437C0();
	v34 = v48;
	v35 = *(_DWORD**)(v48 + 16);
	LOBYTE(v4) = v29 != 0;
	v35[2] = 1;
	*v35 = v4;
	*(_QWORD*)(v34 + 16) += 16i64;
	if (v45)
		sub_14018B900((__int64)v45, 0);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	if (v28)
		sub_14018B900(v28, 0);
	return 1i64;
}
// 1400442B7: variable 'v36' is possibly undefined
// 1400442B7: variable 'v37' is possibly undefined
// 1400442FA: variable 'v38' is possibly undefined
// 140044438: variable 'v24' is possibly undefined
// 140044469: variable 'v27' is possibly undefined
// 1409FEB08: using guessed type wchar_t aSDisabled4d02d_0[30];
// 1409FEB48: using guessed type wchar_t aSDisabled4d02d[25];
// 1409FEBE0: using guessed type wchar_t aAddons[7];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1400440C0: using guessed type char var_2B8[8];

