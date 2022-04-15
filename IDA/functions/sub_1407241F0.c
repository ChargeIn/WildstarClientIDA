//----- (00000001407241F0) ----------------------------------------------------
__int64 __fastcall sub_1407241F0(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	__int64 result; // rax
	_QWORD* v6; // rbx
	__int64* v7; // rbx
	__int64 v8; // rbx
	unsigned int v9; // eax
	int v10; // [rsp+30h] [rbp+8h] BYREF
	int v11; // [rsp+34h] [rbp+Ch]

	v11 = HIDWORD(a1);
	v2 = qword_140C665D8;
	v10 = 1;
	v4 = (*(__int64(__fastcall**)(int*))(qword_140C665D8 + 32))(&v10);
	result = v4 / *(_QWORD*)(v2 + 16);
	v6 = *(_QWORD**)(*(_QWORD*)(v2 + 24) + 8 * (v4 % *(_QWORD*)(v2 + 16)));
	if (v6)
	{
		while (1)
		{
			if (v4 == *v6)
			{
				result = (*(__int64(__fastcall**)(int*, _QWORD*))(v2 + 40))(&v10, v6 + 2);
				if ((_DWORD)result)
					break;
			}
			v6 = (_QWORD*)v6[1];
			if (!v6)
				return result;
		}
		v7 = v6 + 3;
		if (v7)
		{
			v8 = *v7;
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			sub_1405532D0(a2, v9, -1, 0i64);
			return sub_140787BD0(v8, 0i64, a2);
		}
	}
	return result;
}
// 140C665D8: using guessed type __int64 qword_140C665D8;

