#include "../winhttp.h"

//----- (00000001404E1D10) ----------------------------------------------------
void __fastcall sub_1404E1D10(__int64 a1, __int64 a2)
{
	unsigned int v3; // edx
	int v4; // r15d
	unsigned __int64 v5; // rbp
	int v7; // r14d
	int v8; // esi
	int* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rdi
	unsigned int v12; // ebx
	__int64 v13; // rdx
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	__int64 v17; // rbx
	unsigned __int64* v18; // rdx
	__int64 v19; // rax
	unsigned int v20; // eax
	unsigned __int64 v21; // r8
	_DWORD* v22; // rcx
	__int64* v23; // rax
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	__int64 v27; // rbx
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	_DWORD* v30; // rcx
	__int64* v31; // rax
	unsigned int v32; // ecx
	__int64 v33; // rax
	unsigned int* v34; // rbx
	__int64(__fastcall * v35)(wchar_t**, _QWORD, __int64); // rax
	int v36; // r14d
	unsigned int v37; // edi
	unsigned int v38; // esi
	__int64 v39; // rax
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	__int64 v43; // rbx
	unsigned __int64* v44; // rdx
	_DWORD* v45; // rax
	__int64* v46; // rax
	__int64 v47; // [rsp+20h] [rbp-48h] BYREF
	__int64 v48; // [rsp+28h] [rbp-40h]

	v3 = *(_DWORD*)(a2 + 8);
	v4 = 0;
	v5 = -1i64;
	if (v3)
	{
		v7 = 0;
		v8 = 0;
		if (qword_140C658F0)
		{
			v9 = sub_1400B5DF0(qword_140C658F0, v3, 0i64);
			if (v9)
			{
				if (v9[111])
				{
					if (qword_140C65B70)
					{
						if (qword_140C65898)
						{
							v10 = sub_1403ACD90(qword_140C65B70, v9[71], *(_QWORD*)(qword_140C65898 + 120));
							v11 = v10;
							if (v10)
							{
								v12 = 0;
								if (*(_DWORD*)(v10 + 40))
								{
									do
									{
										v13 = *(_QWORD*)(v11 + 48) + 168i64 * v12;
										switch (*(_DWORD*)(v13 + 16))
										{
										case 0x7B:
											v19 = sub_140224D00(*(_DWORD*)(v13 + 64));
											if (!v19)
												break;
											v20 = *(_DWORD*)(v19 + 12);
											if (v20 <= 1)
											{
											LABEL_12:
												v8 = 1;
												break;
											}
											if (v20 <= 7)
												LABEL_19:
											v7 = 1;
											break;
										case 0x7D:
											goto LABEL_19;
										case 0x88:
											goto LABEL_12;
										}
										++v12;
									} while (v12 < *(_DWORD*)(v11 + 40));
								}
							}
						}
					}
				}
			}
		}
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v16 = *(_QWORD*)(v15 + 16);
		*(_QWORD*)v16 = *v14;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(v15 + 16) += 16i64;
		v17 = *(_QWORD*)(a1 + 16);
		v18 = (unsigned __int64*)sub_14018F0E0(&v47, L"bIsPetUnlock")[1];
		if (v18)
		{
			v21 = -1i64;
			do
				++v21;
			while (*((_BYTE*)v18 + v21));
			sub_140058710(v17, v18, v21);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v17 + 16) + 8i64) = 0;
			*(_QWORD*)(v17 + 16) += 16i64;
		}
		if (v48)
			sub_14018B900(v48, 0);
		v22 = *(_DWORD**)(v17 + 16);
		v22[2] = 1;
		*v22 = v8 != 0;
		*(_QWORD*)(v17 + 16) += 16i64;
		v23 = (__int64*)sub_1400580E0(v17, -3);
		sub_14005EA50(v17, v23, (int*)(*(_QWORD*)(v17 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v17 + 16) - 16i64));
		*(_QWORD*)(v17 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v26 = *(_QWORD*)(v25 + 16);
		*(_QWORD*)v26 = *v24;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v25 + 16) += 16i64;
		v27 = *(_QWORD*)(a1 + 16);
		v28 = (unsigned __int64*)sub_14018F0E0(&v47, L"bIsMountUnlock")[1];
		if (v28)
		{
			v29 = -1i64;
			do
				++v29;
			while (*((_BYTE*)v28 + v29));
			sub_140058710(v27, v28, v29);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v27 + 16) + 8i64) = 0;
			*(_QWORD*)(v27 + 16) += 16i64;
		}
		if (v48)
			sub_14018B900(v48, 0);
		v30 = *(_DWORD**)(v27 + 16);
		v30[2] = 1;
		*v30 = v7 != 0;
		*(_QWORD*)(v27 + 16) += 16i64;
		v31 = (__int64*)sub_1400580E0(v27, -3);
		sub_14005EA50(v27, v31, (int*)(*(_QWORD*)(v27 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v27 + 16) - 16i64));
		*(_QWORD*)(v27 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v32 = *(_DWORD*)(a2 + 80);
	if (!v32)
		return;
	v33 = sub_140201760(v32);
	if (!v33)
		return;
	v34 = (unsigned int*)(v33 + 8);
	v35 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	v36 = 0;
	v37 = 0;
	while (1)
	{
		v38 = *v34;
		if (v35)
			break;
		if (!dword_140C64C20)
		{
			if ((int)sub_1402010C0() >= 0)
			{
				v39 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E50 + 24i64))(qword_140C64E50, v38);
				goto LABEL_41;
			}
		LABEL_43:
			v35 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
		++v37;
		++v34;
		if (v37 >= 6)
			goto LABEL_47;
	}
	v39 = v35(off_140A6A4E8, v38, qword_140C63858);
LABEL_41:
	if (!v39 || *(_DWORD*)(v39 + 24) != 1)
		goto LABEL_43;
	v36 = 1;
LABEL_47:
	v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v42 = *(_QWORD*)(v41 + 16);
	*(_QWORD*)v42 = *v40;
	*(_DWORD*)(v42 + 8) = *((_DWORD*)v40 + 2);
	*(_QWORD*)(v41 + 16) += 16i64;
	v43 = *(_QWORD*)(a1 + 16);
	v44 = (unsigned __int64*)sub_14018F0E0(&v47, L"bIsDyeUnlock")[1];
	if (v44)
	{
		do
			++v5;
		while (*((_BYTE*)v44 + v5));
		sub_140058710(v43, v44, v5);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v43 + 16) + 8i64) = 0;
		*(_QWORD*)(v43 + 16) += 16i64;
	}
	if (v48)
		sub_14018B900(v48, 0);
	v45 = *(_DWORD**)(v43 + 16);
	LOBYTE(v4) = v36 != 0;
	v45[2] = 1;
	*v45 = v4;
	*(_QWORD*)(v43 + 16) += 16i64;
	v46 = (__int64*)sub_1400580E0(v43, -3);
	sub_14005EA50(v43, v46, (int*)(*(_QWORD*)(v43 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v43 + 16) - 16i64));
	*(_QWORD*)(v43 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
}
// 1404E1DF7: variable 'v15' is possibly undefined
// 1404E1EE7: variable 'v25' is possibly undefined
// 1404E2049: variable 'v41' is possibly undefined
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140B0B620: using guessed type wchar_t aBispetunlock[13];
// 140B0B640: using guessed type wchar_t aBismountunlock[15];
// 140B0B750: using guessed type wchar_t aBisdyeunlock[13];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

