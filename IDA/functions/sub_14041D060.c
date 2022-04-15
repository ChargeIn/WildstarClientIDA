//----- (000000014041D060) ----------------------------------------------------
__int64 __fastcall sub_14041D060(_QWORD* a1)
{
	__int64** v2; // rax
	__int64* v3; // rcx
	__int64 v4; // rax
	unsigned __int64* v5; // rbx
	__int64 result; // rax
	unsigned __int64 v7; // r8
	__int64* v8; // rax
	__int64 v9; // rax
	unsigned int* v10; // rax
	__int64 v11; // r8
	unsigned __int64* v12; // rbx
	unsigned __int64 v13; // r8
	unsigned __int64* v14; // [rsp+38h] [rbp+10h] BYREF

	v2 = (__int64**)sub_140417660((__int64)a1, 1);
	if (!v2)
		goto LABEL_10;
	v3 = *v2;
	if (*v2)
		v3 = (__int64*)*v3;
	if (!v3)
	{
	LABEL_10:
		v8 = (__int64*)sub_140417660((__int64)a1, 1);
		if (v8
			&& (v9 = *v8) != 0
			&& *(_DWORD*)(v9 + 1200)
			&& (v10 = (unsigned int*)(v9 + 1048), v11 = *v10, (_DWORD)v11)
			&& v10)
		{
			sub_14018DED0(&v14, (__int64)"<l%x>", v11);
			v12 = v14;
			if (!v14)
				goto LABEL_6;
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v14 + v13));
		}
		else
		{
			result = (__int64)sub_140417BF0(a1, 1u);
			if (!result)
				return result;
			sub_14018DED0(&v14, (__int64)"<i%x>", *(unsigned int*)result);
			v12 = v14;
			if (!v14)
				goto LABEL_6;
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v14 + v13));
		}
		sub_140058710((__int64)a1, v12, v13);
		(*(void(__fastcall**)(unsigned __int64*))(*(v12 - 2) + 8))(v12 - 2);
		return 1i64;
	}
	v4 = (*(__int64(__fastcall**)(__int64*))(*v3 + 48))(v3);
	sub_14018DED0(&v14, (__int64)"<I%I64x>", v4);
	v5 = v14;
	if (!v14)
	{
	LABEL_6:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v14 + v7));
	sub_140058710((__int64)a1, v14, v7);
	(*(void(__fastcall**)(unsigned __int64*))(*(v5 - 2) + 8))(v5 - 2);
	return 1i64;
}

