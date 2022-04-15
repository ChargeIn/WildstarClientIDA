//----- (00000001405B3A80) ----------------------------------------------------
__int64 sub_1405B3A80()
{
	__int64* v0; // rdi
	__int64 v1; // rsi
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rcx

	v0 = qword_140C89D80;
	v1 = 36i64;
	do
	{
		v2 = *v0;
		if (*v0)
		{
			v3 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 176i64))(*v0);
			v4 = 0i64;
			if (*(_WORD*)v3)
			{
				do
					++v4;
				while (*((_WORD*)v3 + v4));
			}
			sub_14001C480(v2 + 16, v3, (int*)((char*)v3 + 2 * v4));
		}
		++v0;
		--v1;
	} while (v1);
	return 0i64;
}
// 140C89D80: using guessed type __int64 qword_140C89D80[];

