//----- (0000000140549AB0) ----------------------------------------------------
__int64 sub_140549AB0()
{
	__int64* v0; // rsi
	__int64 v1; // rbp
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx

	v0 = &qword_140C65B50;
	v1 = 2i64;
	do
	{
		v2 = *(v0 - 1);
		if (v2)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			*(v0 - 1) = 0i64;
		}
		*(v0 - 1) = 0i64;
		if (*v0)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v0 + 8i64))(*v0);
			*v0 = 0i64;
		}
		*v0 = 0i64;
		v4 = 0i64;
		v5 = 3i64;
		do
		{
			v6 = qword_140C65B18[v4];
			if (v6)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				qword_140C65B18[v4] = 0i64;
			}
			v7 = qword_140C65B30[v4];
			qword_140C65B18[v4] = 0i64;
			if (v7)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				qword_140C65B30[v4] = 0i64;
			}
			qword_140C65B30[v4++] = 0i64;
			--v5;
		} while (v5);
		v0 += 2;
		--v1;
	} while (v1);
	return result;
}
// 140C65B18: using guessed type __int64 qword_140C65B18[];
// 140C65B30: using guessed type __int64 qword_140C65B30[];
// 140C65B50: using guessed type __int64 qword_140C65B50;

