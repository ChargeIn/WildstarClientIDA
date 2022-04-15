//----- (0000000140117E60) ----------------------------------------------------
__int64 __fastcall sub_140117E60(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	int v4; // esi
	char v5; // al
	__int64 v6; // rbx
	__int64 v7; // rcx
	_DWORD* v8; // rcx
	bool v9; // zf
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	result = sub_140117A50(a1);
	v3 = result;
	if (result)
	{
		v4 = 0;
		v10[0] = 0;
		if (*(_BYTE*)(result + 1848))
		{
			v5 = 1;
		}
		else
		{
			v6 = 0i64;
			if (*(_QWORD*)(result + 1840))
			{
				while (1)
				{
					v7 = *(_QWORD*)(*(_QWORD*)(v3 + 1832) + 8 * v6);
					if (!(*(unsigned __int8(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 72i64))(v7, v10))
						break;
					if ((unsigned __int64)++v6 >= *(_QWORD*)(v3 + 1840))
						goto LABEL_7;
				}
				v5 = 0;
			}
			else
			{
			LABEL_7:
				*(_BYTE*)(v3 + 1848) = 1;
				v5 = 1;
			}
		}
		v8 = (_DWORD*)a1[2];
		v9 = v5 == 0;
		result = 1i64;
		LOBYTE(v4) = !v9;
		v8[2] = 1;
		*v8 = v4;
		a1[2] += 16i64;
	}
	return result;
}
// 140117E60: using guessed type int var_18[6];

