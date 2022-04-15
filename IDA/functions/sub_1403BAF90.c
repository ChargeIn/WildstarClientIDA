//----- (00000001403BAF90) ----------------------------------------------------
__int64 __fastcall sub_1403BAF90(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned __int8 v6; // cl
	bool v7; // zf
	unsigned __int64 v8; // rcx
	_DWORD* v9; // rax
	_DWORD* v10; // rdx
	unsigned __int64 v11; // r8

	if (!(unsigned int)sub_1403BB040(a1, a2))
		return 0i64;
	v4 = sub_1403ACD90(qword_140C65B70, a2, *(_QWORD*)(a1 + 120));
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v4 + 112);
	v6 = *(_BYTE*)(v5 + 8);
	if (v6 == 1)
	{
		v7 = *(_DWORD*)(v5 + 400) == 0;
		goto LABEL_7;
	}
	if (v6 > 1u)
	{
		v7 = *(_DWORD*)(v5 + 396) == 0;
	LABEL_7:
		if (!v7)
			return 0i64;
	}
	v8 = 0i64;
	v9 = (_DWORD*)(v5 + 408);
	v10 = v9;
	v11 = 0i64;
	while (*v10 != 5)
	{
		++v11;
		++v10;
		if (v11 >= 5)
		{
			while (*v9 != 8)
			{
				++v8;
				++v9;
				if (v8 >= 5)
					return 1i64;
			}
			return 0i64;
		}
	}
	return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

