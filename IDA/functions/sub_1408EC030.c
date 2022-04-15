//----- (00000001408EC030) ----------------------------------------------------
__int64 __fastcall sub_1408EC030(__int64 a1, __int64 a2)
{
	unsigned int v2; // r9d
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v6; // rcx
	__int64* v7; // r10
	__int64 v8; // rbx
	__int64 v9; // r9
	__int64 v10; // rdx

	v2 = *(_DWORD*)(a2 + 232);
	v4 = 0i64;
	result = 31 * (v2 / 0x1F);
	v6 = v2 % 0x1F;
	v7 = (__int64*)(a1 + 8 * v6);
	v8 = *v7;
	if (*v7)
	{
		while (*(_DWORD*)v8 != v2)
		{
			v4 = v8;
			v8 = *(_QWORD*)(v8 + 8);
			if (!v8)
				return result;
		}
		if ((int)-- * (_DWORD*)(v8 + 40) <= 0)
		{
			v9 = *(_QWORD*)(v8 + 8);
			if (!v9)
			{
				do
					v6 = (unsigned int)(v6 + 1);
				while ((unsigned int)v6 < 0x1F && !*(_QWORD*)(a1 + 8 * v6));
			}
			if (v4)
				*(_QWORD*)(v4 + 8) = v9;
			else
				*v7 = v9;
			--* (_DWORD*)(a1 + 248);
			v10 = *(_QWORD*)(v8 + 16);
			if (v10)
			{
				sub_140881720(dword_140C10F28, v10);
				*(_QWORD*)(v8 + 24) = 0i64;
				*(_QWORD*)(v8 + 32) = 0i64;
				*(_QWORD*)(v8 + 16) = 0i64;
			}
			return sub_140881720(dword_140C10F28, v8);
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

