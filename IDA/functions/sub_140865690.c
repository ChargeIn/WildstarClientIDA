//----- (0000000140865690) ----------------------------------------------------
__int64 __fastcall sub_140865690(__int64 a1, int a2, int* a3, unsigned int a4)
{
	_DWORD* v4; // r10
	_DWORD* v5; // r11
	__int64 v6; // r14
	_DWORD* i; // rax
	__int64 v12; // rbx
	unsigned int v13; // esi
	_DWORD* v14; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx

	v4 = *(_DWORD**)(a1 + 32);
	v5 = *(_DWORD**)(a1 + 40);
	v6 = a1 + 32;
	for (i = v4; i != v5; i += 10)
	{
		if (*i == a2)
			break;
	}
	if (i != *(_DWORD**)(a1 + 40))
	{
		v12 = (__int64)(i + 2);
		v13 = 1;
		goto LABEL_6;
	}
	if (v4 == v5)
		goto LABEL_14;
	do
	{
		if (*v4 == a2)
			break;
		v4 += 10;
	} while (v4 != v5);
	if (v4 == v5)
	{
	LABEL_14:
		v12 = 0i64;
	}
	else
	{
		v12 = (__int64)(v4 + 2);
		if (v4 != (_DWORD*)-8i64)
			goto LABEL_18;
	}
	v14 = (_DWORD*)sub_140864F40(a1 + 32);
	if (v14)
	{
		*v14 = a2;
		v12 = (__int64)(v14 + 2);
	}
	if (v12)
	{
	LABEL_18:
		*(_DWORD*)v12 = a2;
		v13 = sub_140865CE0(v12, a1);
		if (v13 != 1)
		{
			sub_140865B50(v6, a2);
			return v13;
		}
	LABEL_6:
		if (a4)
		{
			v13 = sub_140837E30(v12 + 16, a3, a4, 0);
		}
		else
		{
			v16 = *(_QWORD*)(v12 + 16);
			if (v16)
			{
				sub_140881720(dword_140C10F20, v16);
				*(_QWORD*)(v12 + 16) = 0i64;
			}
			*(_QWORD*)(v12 + 24) = 0i64;
		}
		v17 = *(_QWORD*)(v12 + 8);
		if (v17)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 408i64))(v17);
			return v13;
		}
		return v13;
	}
	return 52i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

