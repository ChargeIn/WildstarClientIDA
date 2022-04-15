//----- (000000014086A3D0) ----------------------------------------------------
__int64 __fastcall sub_14086A3D0(__int64 a1)
{
	__int64* i; // rbx
	__int64 v3; // rdx
	__int64 result; // rax
	__int64* v5; // rcx

	if (*(_DWORD*)(a1 + 292))
	{
		for (i = *(__int64**)(a1 + 264); i; i = (__int64*)*i)
		{
			v3 = i[2];
			if (v3)
			{
				i[3] = v3;
				result = sub_140881720(dword_140C10F20, v3);
				i[2] = 0i64;
				i[3] = 0i64;
				*((_DWORD*)i + 8) = 0;
			}
		}
		while (1)
		{
			v5 = *(__int64**)(a1 + 264);
			if (!v5)
				break;
			*(_QWORD*)(a1 + 264) = *v5;
			if (v5 == *(__int64**)(a1 + 272))
				*(_QWORD*)(a1 + 272) = 0i64;
			result = *(_QWORD*)(a1 + 280);
			*v5 = result;
			--* (_DWORD*)(a1 + 296);
			*(_QWORD*)(a1 + 280) = v5;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

