#include "../winhttp.h"

//----- (0000000140185B10) ----------------------------------------------------
void __fastcall sub_140185B10(__int64 a1)
{
	__int64 v2; // rdi
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	int* v5; // rdi
	__int64 v6; // rax
	__int64 v8; // r14
	int* v9; // rdx
	__int64 v10; // rax
	unsigned int i; // r14d
	__int64 v12; // r8
	const __m128i* v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // r8
	const __m128i* v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rdx
	const __m128i* v19; // rbx
	signed __int32 v20; // ecx
	signed __int32 v21; // ecx
	__int64 v22; // rdi
	int v23; // ebx
	__int64 v24; // rdx
	__int64 v25; // [rsp+30h] [rbp-D8h]
	__int64 v26; // [rsp+38h] [rbp-D0h]
	__int64 v27; // [rsp+48h] [rbp-C0h] BYREF
	const __m128i* v28; // [rsp+50h] [rbp-B8h]
	__int64 v29; // [rsp+58h] [rbp-B0h]
	__int64 v30; // [rsp+60h] [rbp-A8h]
	__int64 v31; // [rsp+68h] [rbp-A0h] BYREF
	int* v32; // [rsp+70h] [rbp-98h]
	__int64 v34; // [rsp+80h] [rbp-88h]
	int v35[4]; // [rsp+88h] [rbp-80h] BYREF
	char v36[8]; // [rsp+98h] [rbp-70h] BYREF
	__int64 v37; // [rsp+A0h] [rbp-68h]
	char v38[16]; // [rsp+B8h] [rbp-50h] BYREF
	char v39[744]; // [rsp+C8h] [rbp-40h] BYREF
	signed __int32 v40; // [rsp+3B0h] [rbp+2A8h] BYREF
	__int64 v41; // [rsp+3B8h] [rbp+2B0h]

	if (!*(_QWORD*)(a1 + 8))
		return;
	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		if (*(_BYTE*)(v2 + 312))
		{
			if (*(int*)(v2 + 536) >= 6)
			{
				if (*(_QWORD*)(v2 + 8))
				{
					if (((*(_DWORD*)(v2 + 536) - 3) & 0xFFFFFFFD) != 0)
					{
						v3 = *(_QWORD**)(v2 + 456);
						v4 = (_QWORD*)*v3;
						if ((_QWORD*)*v3 != v3)
						{
							do
							{
								sub_140134E60((LARGE_INTEGER*)v4[2]);
								v4 = (_QWORD*)*v4;
							} while (v4 != *(_QWORD**)(v2 + 456));
						}
					}
				}
			}
		}
		return;
	}
	if (*(_QWORD*)(a1 + 104) != *(_QWORD*)(a1 + 112) || !*(_BYTE*)(a1 + 224))
		return;
	v5 = 0i64;
	v32 = 0i64;
	v34 = 0i64;
	v6 = 0i64;
	while (aPkg[++v6] != 0)
		;
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v8 + 1), 0);
		v32 = v5;
		v34 = (__int64)v5 + 2 * v8 + 2;
	}
	sub_1407DB590(v5, (int*)L"Pkg_", 2 * v8);
	if ((int*)((char*)v5 + 2 * v8))
		*((_WORD*)v5 + v8) = 0;
	v9 = *(int**)(a1 + 24);
	v10 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	sub_14001C310(&v31, v9, (int*)((char*)v9 + 2 * v10));
	for (i = 0; (int)i < (*(int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8)); ++i)
	{
		(*(void(__fastcall**)(_QWORD, __int64*, _QWORD, int*, _DWORD))(**(_QWORD**)(a1 + 8) + 24i64))(
			*(_QWORD*)(a1 + 8),
			&v27,
			i,
			v32,
			0);
		v13 = v28;
		if (((v29 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			if ((unsigned int)sub_1401B58D0((__int64)v28, v28, v12))
				goto LABEL_27;
			v14 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, char*, _QWORD, int*, int))(**(_QWORD**)(a1 + 8) + 24i64))(
				*(_QWORD*)(a1 + 8),
				v36,
				i,
				v32,
				1);
			v16 = v28;
			v28 = (const __m128i*)v14[1];
			v14[1] = v16;
			v17 = v29;
			v29 = v14[2];
			v14[2] = v17;
			v18 = v30;
			v30 = v14[3];
			v14[3] = v18;
			if (v37)
				sub_14018B900(v37, 0);
			v13 = v28;
			if (((v29 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFFEui64) == 0)
				goto LABEL_44;
			if ((unsigned int)sub_1401B58D0((__int64)v28, v28, v15))
			{
			LABEL_27:
				sub_140129AF0((__int64)v38, 0i64);
				v19 = v28;
				v35[0] = -1;
				if (v41)
				{
					v20 = v40;
					if (v40)
					{
						while (v20 != _InterlockedCompareExchange(&v40, v20 + 1, v20))
						{
							v20 = v40;
							if (!v40)
								goto LABEL_40;
						}
						if (v41)
						{
							(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v41 + 32i64))(v41, v35);
							v21 = v40;
							if (v40)
							{
								while (v21 != _InterlockedCompareExchange(&v40, v21 - 1, v21))
								{
									v21 = v40;
									if (!v40)
										goto LABEL_40;
								}
								if (v21 == 1 && v41)
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
									v41 = 0i64;
								}
							}
						}
					}
				}
			LABEL_40:
				if ((int)sub_1401A7BD0((__int64)v39, v19) >= 0)
				{
					v22 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 400i64);
					sub_14012EFE0((__int64)v38, v22);
					LODWORD(v26) = sub_1400578C0(v22);
					LODWORD(v25) = i + 1;
					v23 = v26;
					sub_1400F3010(*(_QWORD*)(a1 + 8) + 384i64, 0i64, *(_DWORD*)(a1 + 64), (__int64)"OnRestore", "iT", v25, v26);
					sub_1400579E0(v22, v24, v23);
				}
				sub_140129C40((__int64)v38);
			}
			v13 = v28;
		}
	LABEL_44:
		if (v13)
			sub_14018B900((__int64)v13, 0);
	}
	if (v32)
		sub_14018B900((__int64)v32, 0);
}
// 140185CF8: variable 'v12' is possibly undefined
// 140185D85: variable 'v15' is possibly undefined
// 140185EA4: variable 'v25' is possibly undefined
// 140185EA4: variable 'v26' is possibly undefined
// 140185EAF: variable 'v24' is possibly undefined
// 140A3F460: using guessed type wchar_t aPkg[5];
// 140185B10: using guessed type char var_3A0[8];
// 140185B10: using guessed type int var_3B0[4];
// 140185B10: using guessed type char var_370[744];

