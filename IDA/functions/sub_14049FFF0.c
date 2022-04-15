//----- (000000014049FFF0) ----------------------------------------------------
__int64 __fastcall sub_14049FFF0(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
	int v5; // eax
	__int64 v7; // rsi
	int v8; // eax
	unsigned int v9; // ebx
	__int64 result; // rax
	__int64 v11; // rax
	int v12; // esi
	int v13; // edi

	v5 = *(_DWORD*)(a2 + 128);
	v7 = a2;
	if (v5 == 20 || v5 == 23)
	{
		v7 = a5;
		if (!a5)
			return a3 == 2;
		v8 = *(_DWORD*)(a5 + 128);
		if (v8 == 20 || v8 == 23)
			return a3 == 2;
	}
	v9 = 0;
	result = 0i64;
	if (qword_140C65970)
	{
		v11 = sub_1403D7BC0(qword_140C65970, a4);
		if (v11)
		{
			v12 = *(_DWORD*)(v7 + 13816);
			if (v12 == -1)
				result = 0i64;
			else
				result = (1 << v12) & (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11);
		}
		else
		{
			result = 0i64;
		}
	}
	v13 = a3 - 1;
	if (v13)
	{
		if (v13 == 1)
		{
			LOBYTE(v9) = (_DWORD)result == 0;
			return v9;
		}
		return 0i64;
	}
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;

