#include "../winhttp.h"

//----- (00000001401A5420) ----------------------------------------------------
wchar_t* __fastcall sub_1401A5420(_QWORD* a1, wchar_t* a2, __int64* a3)
{
	wchar_t* v4; // rsi
	wchar_t* i; // rdi
	wchar_t* result; // rax
	const wchar_t* v8; // rdx
	int v9; // ecx
	bool v10; // zf
	const wchar_t* v11; // rdx
	wchar_t* v12; // rax
	int v13; // ecx
	bool v14; // zf
	const wchar_t* v15; // rdx
	wchar_t* v16; // rax
	int v17; // ecx
	bool v18; // zf
	const wchar_t* v19; // rdx
	wchar_t* v20; // rax
	int v21; // ecx
	bool v22; // zf
	_WORD* v23; // rdx
	wchar_t* v24; // rax
	int v25; // ecx
	bool v26; // zf
	__int64 v27; // rax
	_QWORD* v28; // rsi

	v4 = a2;
	for (i = a2; *i == 32 || (unsigned __int16)(*i - 9) <= 4u; ++i)
		;
	result = i;
	if (!*i)
	{
		*a3 = 0i64;
		return result;
	}
	v8 = L"<?";
	if (i == L"<?")
		goto LABEL_73;
	v9 = 0;
	do
	{
		if (!*v8 || *result != *v8)
			break;
		v10 = v9 == 2;
		if (v9 >= 2)
			goto LABEL_14;
		++result;
		++v8;
		++v9;
	} while (*result);
	v10 = v9 == 2;
LABEL_14:
	if (v10 || !*result && !*v8)
	{
	LABEL_73:
		v28 = a1 + 64;
		v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[64] + 16i64))(a1 + 64);
		if (v27)
		{
			*(_QWORD*)(v27 + 8) = a1;
			*(_QWORD*)(v27 + 16) = 0i64;
			*(_DWORD*)(v27 + 24) = 0;
			*(_QWORD*)(v27 + 32) = 0i64;
			*(_QWORD*)(v27 + 40) = 0i64;
			*(_QWORD*)(v27 + 48) = 0i64;
			*(_QWORD*)(v27 + 56) = 0i64;
			*(_QWORD*)(v27 + 64) = 0i64;
			*(_QWORD*)v27 = off_140B5ED50;
			*(_QWORD*)(v27 + 72) = 0i64;
			*(_QWORD*)(v27 + 80) = 0i64;
			goto LABEL_76;
		}
	LABEL_75:
		v27 = 0i64;
		goto LABEL_76;
	}
	v11 = L"<!--";
	v12 = i;
	if (i == L"<!--")
		goto LABEL_69;
	v13 = 0;
	do
	{
		if (!*v11 || *v12 != *v11)
			break;
		v14 = v13 == 4;
		if (v13 >= 4)
			goto LABEL_24;
		++v12;
		++v11;
		++v13;
	} while (*v12);
	v14 = v13 == 4;
LABEL_24:
	if (v14 || !*v12 && !*v11)
	{
	LABEL_69:
		v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[64] + 16i64))(a1 + 64);
		if (v27)
		{
			*(_QWORD*)(v27 + 8) = a1;
			*(_QWORD*)(v27 + 16) = 0i64;
			*(_DWORD*)(v27 + 24) = 0;
			*(_QWORD*)(v27 + 32) = 0i64;
			*(_QWORD*)(v27 + 40) = 0i64;
			*(_QWORD*)(v27 + 48) = 0i64;
			*(_QWORD*)(v27 + 56) = 0i64;
			*(_QWORD*)(v27 + 64) = 0i64;
			*(_QWORD*)v27 = off_140B5EC30;
			*(_QWORD*)(v27 + 72) = 0i64;
			*(_QWORD*)(v27 + 80) = 0i64;
			*(_QWORD*)(v27 + 80) = a1 + 64;
		}
		else
		{
			MEMORY[0x50] = a1 + 64;
			v27 = 0i64;
		}
		v4 = i + 4;
		goto LABEL_77;
	}
	v15 = L"<![CDATA[";
	v16 = i;
	if (i == L"<![CDATA[")
		goto LABEL_66;
	v17 = 0;
	do
	{
		if (!*v15 || *v16 != *v15)
			break;
		v18 = v17 == 9;
		if (v17 >= 9)
			goto LABEL_34;
		++v16;
		++v15;
		++v17;
	} while (*v16);
	v18 = v17 == 9;
LABEL_34:
	if (v18 || !*v16 && !*v15)
	{
	LABEL_66:
		v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[48] + 16i64))(a1 + 48);
		if (v27)
		{
			*(_QWORD*)(v27 + 8) = a1;
			*(_QWORD*)(v27 + 16) = 0i64;
			*(_DWORD*)(v27 + 24) = 0;
			*(_QWORD*)(v27 + 32) = 0i64;
			*(_QWORD*)(v27 + 40) = 0i64;
			*(_QWORD*)(v27 + 48) = 0i64;
			*(_QWORD*)(v27 + 56) = 0i64;
			*(_QWORD*)(v27 + 64) = 0i64;
			*(_QWORD*)(v27 + 72) = 0i64;
			*(_QWORD*)(v27 + 80) = 0i64;
			*(_BYTE*)(v27 + 88) = 0;
			*(_QWORD*)v27 = off_140B5EE70;
			*(_QWORD*)(v27 + 80) = a1 + 48;
			v4 = i + 9;
			*(_BYTE*)(v27 + 88) = 1;
		}
		else
		{
			MEMORY[0x50] = a1 + 48;
			v27 = 0i64;
			MEMORY[0x58] = 1;
			v4 = i + 9;
		}
		goto LABEL_77;
	}
	v19 = L"<!";
	v20 = i;
	if (i != L"<!")
	{
		v21 = 0;
		do
		{
			if (!*v19 || *v20 != *v19)
				break;
			v22 = v21 == 2;
			if (v21 >= 2)
				goto LABEL_44;
			++v20;
			++v19;
			++v21;
		} while (*v20);
		v22 = v21 == 2;
	LABEL_44:
		if (!v22 && (*v20 || *v19))
		{
			v23 = &unk_1409E23FC;
			v24 = i;
			if (i == (wchar_t*)&unk_1409E23FC)
				goto LABEL_60;
			v25 = 0;
			do
			{
				if (!*v23 || *v24 != *v23)
					break;
				v26 = v25 == 1;
				if (v25 >= 1)
					goto LABEL_54;
				++v24;
				++v23;
				++v25;
			} while (*v24);
			v26 = v25 == 1;
		LABEL_54:
			if (v26 || !*v24 && !*v23)
			{
			LABEL_60:
				v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[16] + 16i64))(a1 + 16);
				if (v27)
				{
					*(_QWORD*)(v27 + 8) = a1;
					*(_QWORD*)(v27 + 16) = 0i64;
					*(_DWORD*)(v27 + 24) = 0;
					*(_QWORD*)(v27 + 32) = 0i64;
					*(_QWORD*)(v27 + 40) = 0i64;
					*(_QWORD*)(v27 + 48) = 0i64;
					*(_QWORD*)(v27 + 56) = 0i64;
					*(_QWORD*)(v27 + 64) = 0i64;
					*(_QWORD*)v27 = off_140B5EBA0;
					*(_QWORD*)(v27 + 72) = 0i64;
					*(_QWORD*)(v27 + 80) = 0i64;
					*(_DWORD*)(v27 + 88) = 0;
					*(_QWORD*)(v27 + 96) = 0i64;
					*(_QWORD*)(v27 + 80) = a1 + 16;
				}
				else
				{
					MEMORY[0x50] = a1 + 16;
					v27 = 0i64;
				}
				v4 = i + 1;
			}
			else
			{
				v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[48] + 16i64))(a1 + 48);
				if (v27)
				{
					*(_QWORD*)(v27 + 8) = a1;
					*(_QWORD*)(v27 + 16) = 0i64;
					*(_DWORD*)(v27 + 24) = 0;
					*(_QWORD*)(v27 + 32) = 0i64;
					*(_QWORD*)(v27 + 40) = 0i64;
					*(_QWORD*)(v27 + 48) = 0i64;
					*(_QWORD*)(v27 + 56) = 0i64;
					*(_QWORD*)(v27 + 64) = 0i64;
					*(_QWORD*)v27 = off_140B5EE70;
					*(_QWORD*)(v27 + 72) = 0i64;
					*(_QWORD*)(v27 + 80) = 0i64;
					*(_BYTE*)(v27 + 88) = 0;
					*(_QWORD*)(v27 + 80) = a1 + 48;
				}
				else
				{
					v27 = 0i64;
					MEMORY[0x50] = a1 + 48;
				}
			}
			goto LABEL_77;
		}
	}
	v28 = a1 + 64;
	v27 = (*(__int64(__fastcall**)(_QWORD*))(a1[64] + 16i64))(a1 + 64);
	if (!v27)
		goto LABEL_75;
	*(_QWORD*)(v27 + 8) = a1;
	*(_QWORD*)(v27 + 16) = 0i64;
	*(_DWORD*)(v27 + 24) = 0;
	*(_QWORD*)(v27 + 32) = 0i64;
	*(_QWORD*)(v27 + 40) = 0i64;
	*(_QWORD*)(v27 + 48) = 0i64;
	*(_QWORD*)(v27 + 56) = 0i64;
	*(_QWORD*)(v27 + 64) = 0i64;
	*(_QWORD*)v27 = off_140B5ECC0;
	*(_QWORD*)(v27 + 72) = 0i64;
	*(_QWORD*)(v27 + 80) = 0i64;
LABEL_76:
	*(_QWORD*)(v27 + 80) = v28;
	v4 = i + 2;
LABEL_77:
	*a3 = v27;
	return v4;
}
// 1409E43AC: using guessed type wchar_t asc_1409E43AC[3];
// 1409E444C: using guessed type wchar_t asc_1409E444C[3];
// 140A45290: using guessed type wchar_t aCdata[10];
// 140A452A8: using guessed type wchar_t asc_140A452A8[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5EC30: using guessed type __int64 (__fastcall *off_140B5EC30[17])();
// 140B5ECC0: using guessed type __int64 (__fastcall *off_140B5ECC0[17])();
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();
// 140B5EE70: using guessed type __int64 (__fastcall *off_140B5EE70[17])();

