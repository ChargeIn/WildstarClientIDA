//----- (00000001408424D0) ----------------------------------------------------
__int64 __fastcall sub_1408424D0(int* a1)
{
	__int64* v2; // rsi
	__int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rdx
	__int64 v6; // rdi
	__int64 result; // rax

	v2 = (__int64*)(a1 + 2);
	v3 = 193i64;
	do
	{
		v4 = *v2;
		if (*v2)
		{
			do
			{
				v5 = *(_QWORD*)(v4 + 32);
				v6 = *(_QWORD*)v4;
				if (v5)
				{
					*(_QWORD*)(v4 + 40) = v5;
					sub_140881720(dword_140C10F20, v5);
					*(_QWORD*)(v4 + 32) = 0i64;
					*(_QWORD*)(v4 + 40) = 0i64;
					*(_DWORD*)(v4 + 48) = 0;
				}
				result = sub_140881720(*a1, v4);
				v4 = v6;
			} while (v6);
		}
		*v2++ = 0i64;
		--v3;
	} while (v3);
	a1[388] = 0;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

