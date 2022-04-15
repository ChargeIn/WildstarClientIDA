//----- (0000000140671B70) ----------------------------------------------------
void __fastcall sub_140671B70(__int64 a1, __int64 a2)
{
	unsigned int* v4; // rdx
	int v5; // esi
	unsigned int* v6; // r8
	int v7; // r15d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rbp
	unsigned __int64 v12; // rbx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	_DWORD* v15; // rcx
	__int64* v16; // rax
	unsigned int* v17; // r8
	unsigned int* v18; // rdx
	int v19; // ebp
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	__int64 v23; // rdi
	unsigned __int64* v24; // rdx
	_DWORD* v25; // rax
	__int64* v26; // rax
	__int64 v27; // [rsp+20h] [rbp-38h] BYREF
	__int64 v28; // [rsp+28h] [rbp-30h]

	if (*(_DWORD*)(a1 + 1344))
	{
		v4 = *(unsigned int**)(a1 + 168);
		if (v4)
		{
			v5 = 0;
			v6 = (unsigned int*)(a1 + 192);
			if (!*(_DWORD*)(a1 + 1336))
				v6 = 0i64;
			v7 = sub_1403D67D0(qword_140C65898, v4, v6);
			v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v10 = *(_QWORD*)(v9 + 16);
			*(_QWORD*)v10 = *v8;
			*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
			*(_QWORD*)(v9 + 16) += 16i64;
			v11 = *(_QWORD*)(a2 + 16);
			v12 = -1i64;
			v13 = (unsigned __int64*)sub_14018F0E0(&v27, L"bSalvagable")[1];
			if (v13)
			{
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v13 + v14));
				sub_140058710(v11, v13, v14);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v11 + 16) + 8i64) = 0;
				*(_QWORD*)(v11 + 16) += 16i64;
			}
			if (v28)
				sub_14018B900(v28, 0);
			v15 = *(_DWORD**)(v11 + 16);
			v15[2] = 1;
			*v15 = v7 == 0;
			*(_QWORD*)(v11 + 16) += 16i64;
			v16 = (__int64*)sub_1400580E0(v11, -3);
			sub_14005EA50(v11, v16, (int*)(*(_QWORD*)(v11 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v11 + 16) - 16i64));
			*(_QWORD*)(v11 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			v17 = (unsigned int*)(a1 + 192);
			if (!*(_DWORD*)(a1 + 1336))
				v17 = 0i64;
			if (*(_DWORD*)(a1 + 1344))
				v18 = *(unsigned int**)(a1 + 168);
			else
				v18 = 0i64;
			v19 = sub_1403AD020(qword_140C65898, v18, v17);
			v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v22 = *(_QWORD*)(v21 + 16);
			*(_QWORD*)v22 = *v20;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
			*(_QWORD*)(v21 + 16) += 16i64;
			v23 = *(_QWORD*)(a2 + 16);
			v24 = (unsigned __int64*)sub_14018F0E0(&v27, L"bAutoSalvage")[1];
			if (v24)
			{
				do
					++v12;
				while (*((_BYTE*)v24 + v12));
				sub_140058710(v23, v24, v12);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
				*(_QWORD*)(v23 + 16) += 16i64;
			}
			if (v28)
				sub_14018B900(v28, 0);
			v25 = *(_DWORD**)(v23 + 16);
			LOBYTE(v5) = v19 == 0;
			v25[2] = 1;
			*v25 = v5;
			*(_QWORD*)(v23 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v23, -3);
			sub_14005EA50(v23, v26, (int*)(*(_QWORD*)(v23 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
			*(_QWORD*)(v23 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
}
// 140671BEA: variable 'v9' is possibly undefined
// 140671CF1: variable 'v21' is possibly undefined
// 140B2F8F0: using guessed type wchar_t aBautosalvage[13];
// 140B2F988: using guessed type wchar_t aBsalvagable[12];
// 140C65898: using guessed type __int64 qword_140C65898;

