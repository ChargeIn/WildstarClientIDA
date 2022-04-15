//----- (000000014082AF80) ----------------------------------------------------
_QWORD* __fastcall sub_14082AF80(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	_QWORD* result; // rax
	__int64 v5; // rsi
	int v6; // ebp
	__int64 v7; // rdx
	__int64 v8; // [rsp+20h] [rbp-28h]
	_QWORD* v9; // [rsp+28h] [rbp-20h]

	v2 = *a2;
	result = 0i64;
	if (*a2)
	{
		while (1)
		{
			v5 = *(_QWORD*)v2;
			v9 = result;
			v8 = *(_QWORD*)v2;
			if (v2 == *a2)
				*a2 = v5;
			else
				*result = v5;
			if (v2 == a2[1])
				a2[1] = (__int64)result;
			v6 = dword_140C10F20;
			*(_QWORD*)(v2 + 40) = 0i64;
			*(_QWORD*)(v2 + 48) = 0i64;
			v7 = *(_QWORD*)(v2 + 8);
			if (v7)
			{
				*(_QWORD*)(v2 + 16) = v7;
				sub_140881720(dword_140C10F20, v7);
				*(_QWORD*)(v2 + 8) = 0i64;
				*(_QWORD*)(v2 + 16) = 0i64;
				*(_DWORD*)(v2 + 24) = 0;
			}
			result = (_QWORD*)sub_140881720(v6, v2);
			if (!v5)
				break;
			result = v9;
			v2 = v8;
		}
		*a2 = 0i64;
		a2[1] = 0i64;
	}
	else
	{
		*a2 = 0i64;
		a2[1] = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

