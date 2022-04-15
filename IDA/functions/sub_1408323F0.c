//----- (00000001408323F0) ----------------------------------------------------
__int64 sub_1408323F0()
{
	__int64 v0; // rdx
	__int64 result; // rax
	__int64 i; // rbx
	__int64 v3; // rdi
	int v4; // esi

	v0 = qword_140C61CC8;
	result = (unsigned int)((qword_140C61CD0 - qword_140C61CC8) >> 3) - 1;
	for (i = (int)result; i >= 0; --i)
	{
		v3 = *(_QWORD*)(v0 + 8 * i);
		v4 = dword_140C10F28;
		if (v3)
		{
			sub_1408317B0(v3);
			result = sub_140881720(v4, v3);
			v0 = qword_140C61CC8;
		}
	}
	qword_140C61CD0 = v0;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

