//----- (00000001405FA730) ----------------------------------------------------
_DWORD* __fastcall sub_1405FA730(__int64 a1, unsigned int a2)
{
	_QWORD* v2; // rdi
	unsigned int v3; // ebx
	_DWORD* result; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF
	__int64 v10; // [rsp+40h] [rbp+18h] BYREF

	v9 = a1;
	v2 = (_QWORD*)qword_140C65BA8;
	v3 = a2;
	result = sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 96, a2);
	if (v3)
	{
		while (1)
		{
			v5 = v2[17];
			v6 = v5;
			v7 = *(_QWORD*)(v5 + 8);
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < v3)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v6 == v5 || v3 < *(_DWORD*)(v6 + 32))
			{
				v10 = v2[17];
				v8 = &v10;
			}
			else
			{
				v9 = v6;
				v8 = &v9;
			}
			if (*v8 != v2[17])
				sub_1405F9E30(v2, (__int64)(v2 + 16), v3);
			result = qword_140C63840;
			if (qword_140C63840)
			{
				result = (_DWORD*)qword_140C63840(off_140A6E3E8, v3, qword_140C63858);
			}
			else
			{
				if (dword_140C64634)
					return result;
				result = (_DWORD*)sub_14024D920();
				if ((int)result < 0)
					return result;
				result = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
					qword_140C64270,
					v3);
			}
			if (result)
			{
				v3 = result[2];
				if (v3)
					continue;
			}
			return result;
		}
	}
	return result;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

