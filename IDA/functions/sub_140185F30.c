#include "../winhttp.h"

//----- (0000000140185F30) ----------------------------------------------------
void __fastcall sub_140185F30(__int64 a1)
{
	__int64 v2; // rdi
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	int* v5; // rdi
	__int64 v6; // rax
	__int64 v8; // r14
	int* v9; // rdx
	__int64 v10; // rax
	int v11; // ebp
	int v12; // eax
	__int64 v13; // r15
	__int64 v14; // rcx
	__int64 v15; // rax
	int v16; // r8d
	__int64 v17; // rdi
	char v18; // al
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rbx
	const __m128i* v24; // r14
	__int64 v25; // rax
	__int64 v26; // [rsp+28h] [rbp-60h]
	__int64 v27; // [rsp+40h] [rbp-48h] BYREF
	const __m128i* v28; // [rsp+48h] [rbp-40h]
	__int64 v29; // [rsp+50h] [rbp-38h]
	__int64 v30; // [rsp+58h] [rbp-30h]
	int v31; // [rsp+90h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 8))
	{
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
									sub_140135120((int*)v4[2]);
									v4 = (_QWORD*)*v4;
								} while (v4 != *(_QWORD**)(v2 + 456));
							}
						}
					}
				}
			}
		}
		else if (*(_QWORD*)(a1 + 104) == *(_QWORD*)(a1 + 112) && *(_BYTE*)(a1 + 224))
		{
			v5 = 0i64;
			v28 = 0i64;
			v30 = 0i64;
			v6 = 0i64;
			while (aPkg_0[++v6] != 0)
				;
			v8 = (2 * v6) >> 1;
			if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v5 = sub_14018B280(2 * (v8 + 1), 0);
				v28 = (const __m128i*)v5;
				v30 = (__int64)v5 + 2 * v8 + 2;
			}
			sub_1407DB590(v5, (int*)L"Pkg_", 2 * v8);
			v29 = (__int64)v5 + 2 * v8;
			if (v29)
				*((_WORD*)v5 + v8) = 0;
			v9 = *(int**)(a1 + 24);
			v10 = 0i64;
			if (*(_WORD*)v9)
			{
				do
					++v10;
				while (*((_WORD*)v9 + v10));
			}
			sub_14001C310(&v27, v9, (int*)((char*)v9 + 2 * v10));
			v11 = 0;
			v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
			v13 = (__int64)v28;
			if (v12 > 0)
			{
				do
				{
					(*(void(__fastcall**)(_QWORD, __int64*, _QWORD, __int64, _DWORD))(**(_QWORD**)(a1 + 8) + 24i64))(
						*(_QWORD*)(a1 + 8),
						&v27,
						(unsigned int)v11,
						v13,
						0);
					v14 = (__int64)v28;
					if (((v29 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFFEui64) != 0)
					{
						v15 = *(_QWORD*)(a1 + 8);
						v16 = *(_DWORD*)(a1 + 64);
						v17 = *(_QWORD*)(v15 + 400);
						LODWORD(v26) = v11 + 1;
						v31 = -2;
						v18 = sub_1400F3010(v15 + 384, 0i64, v16, (__int64)"OnSave", "i>T", v26, &v31);
						if (v31 != -2 && v18 && v31 >= 0)
						{
							v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v31);
							v20 = *(_QWORD*)(v17 + 16);
							*(_QWORD*)v20 = *v19;
							*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
							*(_QWORD*)(v17 + 16) += 16i64;
							v21 = sub_14012E780(v17);
							*(_QWORD*)(v17 + 16) -= 16i64;
							v23 = v21;
							if (v21)
							{
								v24 = v28;
								v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
								if (!*(_DWORD*)(v25 + 92))
									sub_1401A7F50(v25, v24);
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
							}
							sub_1400579E0(v17, v22, v31);
						}
						v14 = (__int64)v28;
					}
					if (v14)
						sub_14018B900(v14, 0);
					++v11;
				} while (v11 < (*(int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8)));
			}
			if (v13)
				sub_14018B900(v13, 0);
		}
	}
}
// 140186146: variable 'v26' is possibly undefined
// 1401861CD: variable 'v22' is possibly undefined
// 140A3F4F8: using guessed type wchar_t aPkg_0[5];

