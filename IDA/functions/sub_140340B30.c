//----- (0000000140340B30) ----------------------------------------------------
__int64 __fastcall sub_140340B30(__int64 a1, __int64(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 result; // rax
	__int64* v6; // rdi
	__int64 v7; // r14
	__int64 i; // rbx

	result = 0i64;
	v6 = (__int64*)&unk_140C7A230;
	v7 = 256i64;
	do
	{
		for (i = *v6; i; i = *(_QWORD*)(i + 168))
		{
			result = a2(i, a3);
			if ((int)result < 0)
				break;
		}
		++v6;
		--v7;
	} while (v7);
	return result;
}

