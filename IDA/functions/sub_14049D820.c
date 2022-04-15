//----- (000000014049D820) ----------------------------------------------------
__int64 __fastcall sub_14049D820(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 result; // rax
	__int64 v7; // rbp
	__int64 v8; // r9
	unsigned int v9; // ebx
	_DWORD* v10; // rax
	unsigned __int64 v11; // rcx
	__int64 v12; // r9
	__int64 v13; // r11
	bool v14; // cf
	unsigned int v15; // eax
	__int64 v16; // rax
	int v17; // edi

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	result = sub_1403ACD90(qword_140C65B70, a4, a2);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)(result + 112);
		v9 = 0;
		v10 = (_DWORD*)(v8 + 408);
		v11 = 0i64;
		while (*v10 != 6)
		{
			++v11;
			++v10;
			if (v11 >= 5)
			{
				v13 = sub_1403BACC0(qword_140C65898, *(_DWORD*)(v8 + 4), *(_BYTE*)(qword_140C65898 + 28140));
				if (v13)
				{
					v14 = *(_BYTE*)(v13 + 8) < *(_BYTE*)(v12 + 8);
					goto LABEL_13;
				}
				return 0i64;
			}
		}
		v15 = sub_1403BAD30(qword_140C65898, *(_DWORD*)(v8 + 4), *(_BYTE*)(qword_140C65898 + 28140));
		v16 = sub_1403ACD90(qword_140C65B70, v15, a2);
		if (!v16)
			return 0i64;
		v14 = *(_BYTE*)(*(_QWORD*)(v16 + 112) + 8i64) < *(_BYTE*)(*(_QWORD*)(v7 + 112) + 8i64);
	LABEL_13:
		v17 = a3 - 1;
		if (v17)
		{
			if (v17 == 1)
				LOBYTE(v9) = v14;
		}
		else
		{
			return !v14;
		}
		return v9;
	}
	return result;
}
// 14049D8C4: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

