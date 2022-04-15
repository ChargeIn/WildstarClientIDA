//----- (00000001403773F0) ----------------------------------------------------
__int64 __fastcall sub_1403773F0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	unsigned __int64 v5; // rdi
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // ecx
	unsigned __int64 v13; // rbp
	__int64 v14; // [rsp+30h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 320);
	v5 = 0i64;
	v14 = 0i64;
	result = sub_1402D9CC0(a2, v3, &v14);
	v7 = *(_QWORD*)(a1 + 312);
	if (!v7)
		v7 = *(_QWORD*)(qword_140C657F8 + 656);
	v8 = v14;
	if (v14)
		v9 = v14;
	else
		v9 = *(_QWORD*)(qword_140C657F8 + 656);
	if (v7 != v9)
	{
		v10 = *(_QWORD*)(v7 + 16);
		if (v10 != *(_QWORD*)(v9 + 16)
			|| (result = sub_1407E6AF0(*(unsigned __int64**)(v7 + 24), *(_QWORD*)(v9 + 24), 12 * v10), (_DWORD)result))
		{
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 192i64))(*(_QWORD*)(a1 + 48), v8);
			if (*(_QWORD*)(a1 + 312) != v8)
			{
				if (v8)
					(**(void(__fastcall***)(__int64))v8)(v8);
				v11 = *(_QWORD*)(a1 + 312);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				*(_QWORD*)(a1 + 312) = v8;
			}
			if (!(*(unsigned int(__fastcall**)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD**)(a1 + 312) + 32i64))(
				*(_QWORD*)(a1 + 312),
				5i64,
				0i64,
				a1 + 364)
				|| (v12 = *(_DWORD*)(a1 + 364)) == 0
				|| !sub_14021A740(v12))
			{
				*(_DWORD*)(a1 + 364) = 1118;
			}
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
			v13 = result;
			if (result)
			{
				do
				{
					result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
						*(_QWORD*)(a1 + 48),
						v5);
					if (result)
						result = sub_1403773F0(result, *(_QWORD*)(a1 + 312));
					++v5;
				} while (v5 < v13);
			}
		}
	}
	if (v8)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	return result;
}
// 140C657F8: using guessed type __int64 qword_140C657F8;

