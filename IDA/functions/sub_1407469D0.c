#include "../winhttp.h"

//----- (00000001407469D0) ----------------------------------------------------
void __fastcall sub_1407469D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rdx
	_DWORD* v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned __int64 v14; // r14
	__int64 v15; // r13
	unsigned int v16; // r15d
	__int64 v17; // rcx
	__int64 v18; // rax
	unsigned __int64* v19; // rbp
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64* v24; // rbx
	__int64 v25; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v26; // [rsp+28h] [rbp-40h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v4) = *(_DWORD*)a2;
	sub_140058710(a1, (unsigned __int64*)"nId", 3ui64);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)(int)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v7, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_1400F0090(a1, v8, (unsigned __int64*)"strName", *(unsigned __int16**)(a2 + 16));
	sub_1400F0090(a1, v9, (unsigned __int64*)"strSprite", *(unsigned __int16**)(a2 + 48));
	LOBYTE(v4) = *(_BYTE*)(a2 + 4);
	sub_140058710(a1, (unsigned __int64*)"bIsGlobal", 9ui64);
	v10 = *(_DWORD**)(a1 + 16);
	v10[2] = 1;
	*v10 = (_BYTE)v4 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v11, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"arCommands", 0xAui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v26 = 0i64;
	v25 = 0i64;
	sub_1407477A0(&v25, (_QWORD*)(a2 + 104));
	v14 = v26;
	v15 = v25;
	v16 = 0;
	if (v26)
	{
		v17 = 0i64;
		do
		{
			v18 = *(_QWORD*)(a1 + 16);
			++v16;
			*(_DWORD*)(v18 + 8) = 3;
			*(double*)v18 = (double)(int)v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			v19 = (unsigned __int64*)sub_14018F0E0(&v25, *(unsigned __int16**)(32 * v17 + v15 + 8))[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v21 = *(_QWORD*)(a1 + 16);
				v22 = sub_140062650(a1, v19, v20);
				*(_DWORD*)(v21 + 8) = 4;
				*(_QWORD*)v21 = v22;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v23 = v26;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v23)
				sub_14018B900(v23, 0);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v17 = v16;
		} while (v16 < v14);
	}
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	if (v14)
	{
		v24 = (__int64*)(v15 + 8);
		do
		{
			if (*v24)
				sub_14018B900(*v24, 0);
			v24 += 4;
			--v14;
		} while (v14);
	}
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
}
// 140746A94: variable 'v8' is possibly undefined
// 140746AA7: variable 'v9' is possibly undefined

