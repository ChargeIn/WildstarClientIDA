//----- (00000001403EB690) ----------------------------------------------------
_QWORD* __fastcall sub_1403EB690(__int64 a1, int a2, int a3, int a4)
{
	_QWORD* result; // rax
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+2Ch] [rbp-1Ch]
	__int64 v11; // [rsp+34h] [rbp-14h]
	int v12; // [rsp+3Ch] [rbp-Ch]

	result = (_QWORD*)qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 29632);
	if (v5)
	{
		while (*(_DWORD*)v5 != a2 || *(_DWORD*)(v5 + 16) != a3 || *(_DWORD*)(v5 + 20) != a4)
		{
			v5 = *(_QWORD*)(v5 + 112);
			if (!v5)
				return result;
		}
		if (*(int*)(v5 + 72) >= 2
			&& (v6 = *(_QWORD*)(v5 + 56)) != 0
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 408i64))(v6, 165i64))
		{
			v7 = *(_QWORD*)(v5 + 56);
			v8 = 165i64;
			v9 = 1065353216;
			v10 = 0i64;
			v11 = 0i64;
			v12 = 0;
			result = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v8);
			*(_DWORD*)(v5 + 72) = 3;
		}
		else
		{
			return sub_1403E59A0((_QWORD*)v5);
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

