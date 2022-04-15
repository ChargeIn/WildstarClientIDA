//----- (000000014056E520) ----------------------------------------------------
_QWORD* __fastcall sub_14056E520(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rbx
	_QWORD* result; // rax
	__int64 v5; // rbp
	__int64 v6; // r9
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // r8
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	int* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // [rsp+30h] [rbp+8h]

	v2 = qword_140C65970;
	result = (_QWORD*)sub_140491BD0(qword_140C65968, *a2);
	v5 = (__int64)result;
	if (result)
	{
		v6 = *(_QWORD*)(v2 + 64);
		v7 = v2 + 56;
		v8 = *(_QWORD*)(v6 + 8);
		v9 = v6;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < *a2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v9 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v9 == v6 || (v13 = v9, *a2 < *(_DWORD*)(v9 + 32)))
			v13 = *(_QWORD*)(v2 + 64);
		if (v13 != *(_QWORD*)(v2 + 64))
		{
			v10 = *(void(__fastcall****)(_QWORD, __int64))(v13 + 40);
			if (v10)
				(**v10)(v10, 1i64);
		}
		v11 = sub_14018B280(88i64, 0);
		if (v11)
			v12 = sub_14056DA50(v11, v5, (__int64)a2);
		else
			v12 = 0i64;
		result = sub_140055BE0(v7, a2);
		*result = v12;
	}
	return result;
}
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

