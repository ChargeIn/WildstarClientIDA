#include "../winhttp.h"

//----- (00000001400F4CB0) ----------------------------------------------------
__int64 __fastcall sub_1400F4CB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 i; // rbp
	__int64 v6; // rdi
	const wchar_t* v7; // rbx
	wchar_t* v8; // rax
	int v9; // ecx
	bool v10; // zf
	int* v11; // rsi
	__int64 v12; // rdi
	const wchar_t* v13; // rbx
	wchar_t* v14; // rax
	int v15; // ecx
	bool v16; // zf
	_WORD* v17; // rax
	__int64 v18; // rdi
	const wchar_t* v19; // rbx
	wchar_t* v20; // rax
	int v21; // ecx
	bool v22; // zf
	_WORD* v23; // rax
	__int64 v24; // rdi
	const wchar_t* v25; // rbx
	wchar_t* v26; // rax
	int v27; // ecx
	bool v28; // zf
	_WORD* v29; // rax
	float v30[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v31; // [rsp+88h] [rbp+10h] BYREF
	int v32; // [rsp+98h] [rbp+20h] BYREF

	v31 = a2;
	result = sub_1401A5AE0(a3, L"Anchor");
	for (i = result; result; i = result)
	{
		v6 = *(_QWORD*)(i + 96);
		if (v6)
		{
			while (1)
			{
				v7 = L"Name";
				v8 = (wchar_t*)sub_1401A4F40(v6 + 8);
				if (v8 == L"Name")
					break;
				v9 = 0;
				if (*v8)
				{
					do
					{
						if (!*v7 || *v8 != *v7)
							break;
						v10 = v9 == 0x7FFFFFFF;
						if (v9 == 0x7FFFFFFF)
							goto LABEL_10;
						++v8;
						++v7;
						++v9;
					} while (*v8);
					v10 = v9 == 0x7FFFFFFF;
				LABEL_10:
					if (v10)
						break;
				}
				if (!*v8 && !*v7)
					break;
				v6 = *(_QWORD*)(v6 + 56);
				if (!v6)
					goto LABEL_59;
			}
			v11 = (int*)sub_1401A4F40(v6 + 32);
			if (v11)
			{
				v12 = *(_QWORD*)(i + 96);
				v30[0] = 0.0;
				if (v12)
				{
					while (1)
					{
						v13 = L"Point";
						v14 = (wchar_t*)sub_1401A4F40(v12 + 8);
						if (v14 == L"Point")
							break;
						v15 = 0;
						if (*v14)
						{
							do
							{
								if (!*v13 || *v14 != *v13)
									break;
								v16 = v15 == 0x7FFFFFFF;
								if (v15 == 0x7FFFFFFF)
									goto LABEL_24;
								++v14;
								++v13;
								++v15;
							} while (*v14);
							v16 = v15 == 0x7FFFFFFF;
						LABEL_24:
							if (v16)
								break;
						}
						if (!*v14 && !*v13)
							break;
						v12 = *(_QWORD*)(v12 + 56);
						if (!v12)
							goto LABEL_30;
					}
					v17 = (_WORD*)sub_1401A4F40(v12 + 32);
					sub_1407DF428(v17, (__int64)L"%f", v30);
				}
			LABEL_30:
				v18 = *(_QWORD*)(i + 96);
				v32 = 0;
				if (v18)
				{
					while (1)
					{
						v19 = L"Offset";
						v20 = (wchar_t*)sub_1401A4F40(v18 + 8);
						if (v20 == L"Offset")
							break;
						v21 = 0;
						if (*v20)
						{
							do
							{
								if (!*v19 || *v20 != *v19)
									break;
								v22 = v21 == 0x7FFFFFFF;
								if (v21 == 0x7FFFFFFF)
									goto LABEL_38;
								++v20;
								++v19;
								++v21;
							} while (*v20);
							v22 = v21 == 0x7FFFFFFF;
						LABEL_38:
							if (v22)
								break;
						}
						if (!*v20 && !*v19)
							break;
						v18 = *(_QWORD*)(v18 + 56);
						if (!v18)
							goto LABEL_44;
					}
					v23 = (_WORD*)sub_1401A4F40(v18 + 32);
					sub_1407DF428(v23, (__int64)L"%d", &v32);
				}
			LABEL_44:
				v24 = *(_QWORD*)(i + 96);
				LODWORD(v31) = 0;
				if (v24)
				{
					while (1)
					{
						v25 = L"Overwrite";
						v26 = (wchar_t*)sub_1401A4F40(v24 + 8);
						if (v26 == L"Overwrite")
							break;
						v27 = 0;
						if (*v26)
						{
							do
							{
								if (!*v25 || *v26 != *v25)
									break;
								v28 = v27 == 0x7FFFFFFF;
								if (v27 == 0x7FFFFFFF)
									goto LABEL_52;
								++v26;
								++v25;
								++v27;
							} while (*v26);
							v28 = v27 == 0x7FFFFFFF;
						LABEL_52:
							if (v28)
								break;
						}
						if (!*v26 && !*v25)
							break;
						v24 = *(_QWORD*)(v24 + 56);
						if (!v24)
							goto LABEL_58;
					}
					v29 = (_WORD*)sub_1401A4F40(v24 + 32);
					sub_1407DF428(v29, (__int64)L"%d", &v31);
				}
			LABEL_58:
				sub_14014E400(*(_QWORD*)(a1 + 8) + 2648i64, v11, v30[0], v32, (_DWORD)v31 != 0);
			}
		}
	LABEL_59:
		result = sub_1401A5BC0(i, L"Anchor");
	}
	return result;
}
// 1400F4D8A: conditional instruction was optimized away because rdi.8!=0
// 1400F4E2B: conditional instruction was optimized away because rdi.8!=0
// 1400F4ECB: conditional instruction was optimized away because rdi.8!=0
// 1400F4F67: conditional instruction was optimized away because rdi.8!=0
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A18F18: using guessed type wchar_t aAnchor[7];
// 140A19008: using guessed type wchar_t aPoint[6];
// 140A19018: using guessed type wchar_t aOffset[7];
// 140A19028: using guessed type wchar_t aOverwrite[10];
// 140A31790: using guessed type wchar_t aName_6[5];
// 1400F4CB0: using guessed type float var_48[4];

