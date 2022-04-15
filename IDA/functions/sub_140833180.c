//----- (0000000140833180) ----------------------------------------------------
__int64 sub_140833180()
{
	__int64 v0; // rbx
	__int64 v1; // r14
	__int64 v2; // rdi
	int v3; // esi
	__int64 v4; // rdx
	__int64 result; // rax
	unsigned __int64 v6; // rdi

	v0 = (unsigned int)((qword_140C61CD0 - qword_140C61CC8) >> 3) - 1;
	if ((int)v0 >= 0)
	{
		v1 = 8i64 * (int)v0;
		do
		{
			v2 = *(_QWORD*)(v1 + qword_140C61CC8);
			if (*(_DWORD*)(v2 + 1096) == 1 || *(_DWORD*)(v2 + 1100) || (*(_BYTE*)(v2 + 1124) & 1) != 0)
			{
				*(_BYTE*)(v2 + 1124) &= ~1u;
			}
			else
			{
				v3 = dword_140C10F28;
				sub_1408317B0(*(_QWORD*)(v1 + qword_140C61CC8));
				sub_140881720(v3, v2);
				v4 = qword_140C61CD0;
				result = qword_140C61CC8;
				v6 = qword_140C61CC8 + 8 * v0;
				if (v6 < qword_140C61CD0 - 8)
				{
					qmemcpy((void*)v6, (const void*)(v6 + 8), 8 * (((qword_140C61CD0 - 8 - v6 - 1) >> 3) + 1));
					v4 = qword_140C61CD0;
				}
				qword_140C61CD0 = v4 - 8;
			}
			v1 -= 8i64;
			v0 = (unsigned int)(v0 - 1);
		} while ((int)v0 >= 0);
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

