//----- (0000000140853A40) ----------------------------------------------------
__int64 __fastcall sub_140853A40(__int64 a1, char a2)
{
	__int64 i; // rbx
	unsigned __int8* v4; // rcx
	unsigned __int8* v5; // rdx
	unsigned __int8* v6; // rdi
	__int64 result; // rax
	unsigned __int8* v8; // rsi
	__int64* v9; // rdi
	signed __int64 v10; // rsi
	__int64 v11; // rdx

	for (i = *(_QWORD*)(a1 + 32); i; i = *(_QWORD*)(i + 16))
	{
		v4 = *(unsigned __int8**)(i + 32);
		if (v4)
		{
			v5 = v4 + 1;
			v6 = &v4[(*v4 + 4) & 0xFFFFFFFC];
		}
		else
		{
			v5 = 0i64;
			v6 = 0i64;
		}
		if (v4)
		{
			result = *v4;
			v8 = &v4[result + 1];
		}
		else
		{
			v8 = 0i64;
		}
		if (v5 != v8)
		{
			v9 = (__int64*)(v6 + 8);
			v10 = v8 - v5;
			do
			{
				v11 = *v9;
				if (*v9)
				{
					if (a2)
						result = sub_14083AED0(qword_140C61B70, v11);
					else
						result = sub_14083B0C0(qword_140C61B70, v11);
				}
				v9 += 2;
				--v10;
			} while (v10);
		}
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

