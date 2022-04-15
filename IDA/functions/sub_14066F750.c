#include "../winhttp.h"

//----- (000000014066F750) ----------------------------------------------------
void __fastcall sub_14066F750(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // ebp
	unsigned __int64 v8; // rdi
	int v9; // r15d
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // rdx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	_QWORD* v15; // rax
	__int64 v16; // rdx
	_DWORD* v17; // rax
	__int64* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	int v21; // esi
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	_DWORD* v26; // rcx
	__int64* v27; // rax
	int v28; // esi
	_QWORD* v29; // rax
	__int64 v30; // r10
	unsigned __int64* v31; // rdx
	_DWORD* v32; // rax
	__int64* v33; // rax
	__int64 v34; // rdx
	__int64 v35; // [rsp+20h] [rbp-38h] BYREF
	__int64 v36; // [rsp+28h] [rbp-30h]

	v2 = *(_QWORD*)a1;
	if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64) + 120i64) >= *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64)
		+ 112i64))
		sub_14005E2C0(*(_QWORD*)a1);
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	v7 = 0;
	v8 = -1i64;
	v9 = sub_1400578C0(v2);
	if (*(_DWORD*)(a1 + 1344))
	{
		v10 = *(_QWORD*)(a1 + 168);
		if (v10)
		{
			if ((*(_BYTE*)(v10 + 336) & 8) != 0
				|| (*(_BYTE*)(v10 + 332) & 0xC0) != 0
				|| *(_DWORD*)(v10 + 424)
				|| (*(_DWORD*)(v10 + 340) & 0x80) == 0
				|| *(_DWORD*)(a1 + 184))
			{
				v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v9);
				v16 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v16 = *v15;
				*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				v13 = (unsigned __int64*)sub_14018F0E0(&v35, L"bOnPickup")[1];
				if (!v13)
				{
					*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
					*(_QWORD*)(v2 + 16) += 16i64;
					goto LABEL_21;
				}
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v13 + v14));
			}
			else
			{
				if ((*(_BYTE*)(v10 + 336) & 0x10) == 0)
					goto LABEL_24;
				v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v9);
				v12 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v12 = *v11;
				*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				v13 = (unsigned __int64*)sub_14018F0E0(&v35, L"bOnEquip")[1];
				if (!v13)
				{
					*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
					*(_QWORD*)(v2 + 16) += 16i64;
				LABEL_21:
					if (v36)
						sub_14018B900(v36, 0);
					v17 = *(_DWORD**)(v2 + 16);
					*v17 = 1;
					v17[2] = 1;
					*(_QWORD*)(v2 + 16) += 16i64;
					v18 = (__int64*)sub_1400580E0(v2, -3);
					sub_14005EA50(v2, v18, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
					*(_QWORD*)(v2 + 16) -= 48i64;
					goto LABEL_24;
				}
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v13 + v14));
			}
			sub_140058710(v2, v13, v14);
			goto LABEL_21;
		}
	}
LABEL_24:
	v19 = *(_QWORD*)(a1 + 160);
	if (v19)
	{
		v20 = *(_QWORD*)(v19 + 64);
		if ((*(_BYTE*)(v20 + 336) & 8) != 0
			|| (*(_BYTE*)(v20 + 332) & 0xC0) != 0
			|| *(_DWORD*)(v20 + 424)
			|| (*(_DWORD*)(v20 + 340) & 0x80) == 0)
		{
			v21 = 1;
		}
		else
		{
			v21 = *(_DWORD*)(v19 + 128) & 1;
		}
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v9);
		v23 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v24 = (unsigned __int64*)sub_14018F0E0(&v35, L"bSoulbound")[1];
		if (v24)
		{
			v25 = -1i64;
			do
				++v25;
			while (*((_BYTE*)v24 + v25));
			sub_140058710(v2, v24, v25);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v36)
			sub_14018B900(v36, 0);
		v26 = *(_DWORD**)(v2 + 16);
		v26[2] = 1;
		*v26 = v21 != 0;
		*(_QWORD*)(v2 + 16) += 16i64;
		v27 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v27, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
		v28 = *(_DWORD*)(*(_QWORD*)(a1 + 160) + 128i64) & 0x80;
		v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v9);
		*(_QWORD*)v30 = *v29;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v31 = (unsigned __int64*)sub_14018F0E0(&v35, L"bNoTrade")[1];
		if (v31)
		{
			do
				++v8;
			while (*((_BYTE*)v31 + v8));
			sub_140058710(v2, v31, v8);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v36)
			sub_14018B900(v36, 0);
		v32 = *(_DWORD**)(v2 + 16);
		LOBYTE(v7) = v28 != 0;
		v32[2] = 1;
		*v32 = v7;
		*(_QWORD*)(v2 + 16) += 16i64;
		v33 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v33, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
	}
	sub_1400FB2A0(a2, (__int64)L"tBind", v9);
	sub_1400579E0(v2, v34, v9);
}
// 14066FA6C: variable 'v30' is possibly undefined
// 14066FB3C: variable 'v34' is possibly undefined
// 140B2F398: using guessed type wchar_t aTbind[6];
// 140B2F3C0: using guessed type wchar_t aBsoulbound[11];
// 140B2F3D8: using guessed type wchar_t aBnotrade[9];
// 140B2F3F0: using guessed type wchar_t aBonpickup[10];
// 140B2F408: using guessed type wchar_t aBonequip[9];

